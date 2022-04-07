import { Router } from 'express';
import prisma from '../database';
import { encrypt, decrypt, validatePassword, encryptBuffer, hashPassword } from '../utils/crypto';
import fs from 'fs';
import jwt from 'jsonwebtoken';
import { verifyToken } from '../middleware/auth';

export default function init() : Router {
    const router = Router();

    router.post('/mods', verifyToken, async (req, res) => {
        const mods = await prisma.mod.findMany();
        res.send(encrypt(JSON.stringify({
            success: true,
            mods
        })));
    });

    router.post('/mods/:pkg/get', verifyToken, async (req, res) => {        
        const { pkg } = req.params;
        if(!pkg) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                error: 'Missing package'
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
                error: 'Mod not found'
            })));
        }

        const path = `files/${mod.package}/${mod.version}/${mod.package}-${mod.version}.apk`;
        if(!fs.existsSync(path)) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                error: 'Mod not found'
            })));
        }

        res.send(encryptBuffer(fs.readFileSync(path)));
    });

    router.post('/login', async (req, res) => {
        const { encUser, encPass } = req.body;

        if(!encUser || !encPass) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                error: 'Missing user or password'
            })));
        }

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
                        success: true,
                        token: jwt.sign({
                            id: user.id,
                            email: user.email
                        }, process.env.JWT_SECRET)
                    }
                )));
            } else {
                res.send(encrypt(JSON.stringify(({
                    success: false,
                    error: 'Invalid credentials'
                }))));
            }
        } else {
            res.send(encrypt(JSON.stringify(({
                success: false,
                error: 'Invalid credentials'
            }))));
        }
    });

    router.post('/validateToken', verifyToken, async (req, res) => {
        res.send(encrypt(JSON.stringify({
            success: true
        })));
    });

    router.post('/register', async (req, res) => {
        const { encEmail, encPass, encInvite } = req.body;

        if(!encEmail || !encPass || !encInvite) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                error: 'Missing fields'
            })));
        }
        
        const email = decrypt(encEmail);
        const password = decrypt(encPass);
        const inviteCode = decrypt(encInvite);

        const user = await prisma.user.findFirst({
            where: {
                email: email
            }
        });

        if(user) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                error: 'User already exists'
            })));
        }
        
        const invite = await prisma.invite.findFirst({
            where: {
                code: inviteCode
            }
        });

        if(!invite) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                error: 'Invalid invite code'
            })));
        }

        const newUser = await prisma.user.create({
            data: {
                email: email,
                password: await hashPassword(password),
                
            }
        });

        await prisma.invite.deleteMany({
            where: {
                code: inviteCode,
            },
        });

        res.send(encrypt(JSON.stringify({
            success: true,
            token: jwt.sign({
                id: newUser.id,
                email: newUser.email
            }, process.env.JWT_SECRET)
        })));
    });


    return router;
}