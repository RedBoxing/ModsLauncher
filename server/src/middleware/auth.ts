import jwt from 'jsonwebtoken';
import { decrypt, encrypt } from '../utils/crypto';
import { Request, Response, NextFunction } from 'express'
import prisma from '../database';

export async function verifyToken(req : Request, res : Response, next : NextFunction) {
    let token = req.body.token;

    if(!token) {
        return res.send(encrypt(JSON.stringify({
            success: false,
            error: 'Missing token'
        })));
    }

    token = decrypt(token);

    try {
        const decoded = jwt.verify(token, process.env.JWT_SECRET);
        const user = await prisma.user.findFirst({
            where: {
                // @ts-expect-error
                id: decoded.id
            }
        });

        if(!user) {
            return res.send(encrypt(JSON.stringify({
                success: false,
                error: 'Invalid token'
            })));
        }

        req.user = user;
    } catch(err) {
        return res.send(encrypt(JSON.stringify({
            success: false,
            error: 'Invalid token'
        })));
    }

    return next();
}