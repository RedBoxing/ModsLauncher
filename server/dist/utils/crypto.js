"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
exports.validatePassword = exports.hashPassword = exports.encryptBuffer = exports.encrypt = exports.decrypt = void 0;
const crypto_1 = __importDefault(require("crypto"));
const bcrypt_1 = __importDefault(require("bcrypt"));
// aes 256 decrypt with iv
function decrypt(encrypted) {
    const decipher = crypto_1.default.createDecipheriv('aes-256-cbc', Buffer.from(process.env.CRYPTO_KEY, 'hex'), Buffer.from(process.env.CRYPTO_IV, 'hex'));
    return Buffer.concat([decipher.update(Buffer.from(encrypted, 'base64')), decipher.final()]).toString('utf8');
}
exports.decrypt = decrypt;
function encrypt(raw) {
    const cipher = crypto_1.default.createCipheriv('aes-256-cbc', Buffer.from(process.env.CRYPTO_KEY, 'hex'), Buffer.from(process.env.CRYPTO_IV, 'hex'));
    return Buffer.concat([cipher.update(Buffer.from(raw, "utf8")), cipher.final()]).toString('base64');
}
exports.encrypt = encrypt;
function encryptBuffer(buffer) {
    const cipher = crypto_1.default.createCipheriv('aes-256-cbc', Buffer.from(process.env.CRYPTO_KEY, 'hex'), Buffer.from(process.env.CRYPTO_IV, 'hex'));
    return Buffer.concat([cipher.update(buffer), cipher.final()]).toString('base64');
}
exports.encryptBuffer = encryptBuffer;
function hashPassword(password) {
    return bcrypt_1.default.hash(password, 10);
}
exports.hashPassword = hashPassword;
function validatePassword(password, hash) {
    return bcrypt_1.default.compare(password, hash);
}
exports.validatePassword = validatePassword;
