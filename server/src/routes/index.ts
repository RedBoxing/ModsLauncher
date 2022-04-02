import { Router } from 'express';
import prisma from '../database';
import { encrypt, decrypt, hashPassword, validatePassword, encryptBinary } from '../utils/crypto';
import fs from 'fs';

export default function init() : Router {
    const router = Router();

    router.post('/mods', async (req, res) => {
        const { token } = req.body;
        if(!token) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                message: 'Missing token'
            })));
        }

        const user = await prisma.user.findFirst({
            where: {
                token: decrypt(token)
            }
        });

        if(!user) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                message: 'Invalid token'
            })));
        }

        const mods = await prisma.mod.findMany();
        res.send(encrypt(JSON.stringify(mods)));
    });

    router.post('/mods/:package/get', async (req, res) => {
        const { token } = req.body;
        if(!token) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                message: 'Missing token'
            })));
        }

        const user = await prisma.user.findFirst({
            where: {
                token: decrypt(token)
            }
        });

        if(!user) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                message: 'Invalid token'
            })));
        }
        
        //@ts-expect-error
        const { pkg } = req.params;
        if(!pkg) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                message: 'Missing package'
            })));
        }

        const mod = await prisma.mod.findFirst({
            where: {
                package: pkg
            }
        });

        if(!mod) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                message: 'Mod not found'
            })));
        }

        const path = `${__dirname}/files/${mod.package}/${mod.version}/${mod.package}-${mod.version}.apk`;
        if(!fs.existsSync(path)) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                message: 'Mod not found'
            })));
        }

        res.send(encryptBinary(fs.readFileSync(path, 'binary')));
    });

    router.post('/login', async (req, res) => {
        const { encUser, encPass } = req.body;

        const email = decrypt(encUser);
        const pass = decrypt(encPass);

        const user = await prisma.user.findFirst({
            where: {
                email: email
            }
        })

        if(user) {
            if(await validatePassword(pass, user.password)) {
                res.send(encrypt(JSON.stringify({
                        id: user.id,
                        email: user.email,
                        name: user.name,
                        token: user.token
                    }
                )));
            } else {
                res.status(401).send(encrypt(JSON.stringify(({
                    error: 'Invalid credentials'
                }))));
            }
        } else {
            res.status(401).send(encrypt(JSON.stringify(({
                error: 'Invalid credentials'
            }))));
        }
    });

    return router;
}