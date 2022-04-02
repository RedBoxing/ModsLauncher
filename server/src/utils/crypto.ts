import crypto from 'crypto';
import bcrypt from 'bcrypt';

// aes 256 decrypt with iv
export function decrypt(encrypted: string) {
    const decipher = crypto.createDecipheriv('aes-256-cbc', Buffer.from(process.env.CRYPTO_KEY, 'hex'), Buffer.from(process.env.CRYPTO_IV, 'hex'));
    return Buffer.concat([decipher.update(Buffer.from(encrypted, 'base64')), decipher.final()]).toString('utf8');
}

export function encrypt(raw: string) {
    const cipher = crypto.createCipheriv('aes-256-cbc', Buffer.from(process.env.CRYPTO_KEY, 'hex'), Buffer.from(process.env.CRYPTO_IV, 'hex'));
    return Buffer.concat([cipher.update(Buffer.from(raw, "utf8")), cipher.final()]).toString('base64');
}

export function encryptBinary(raw: string) {
    const cipher = crypto.createCipheriv('aes-256-cbc', Buffer.from(process.env.CRYPTO_KEY, 'hex'), Buffer.from(process.env.CRYPTO_IV, 'hex'));
    return Buffer.concat([cipher.update(Buffer.from(raw, "binary")), cipher.final()]).toString('base64');
}

export function hashPassword(password: string) {
    return bcrypt.hash(password, 10);
}

export function validatePassword(password: string, hash: string) {
    return bcrypt.compare(password, hash);
}