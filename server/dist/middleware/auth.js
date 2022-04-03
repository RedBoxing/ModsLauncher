"use strict";
var __awaiter = (this && this.__awaiter) || function (thisArg, _arguments, P, generator) {
    function adopt(value) { return value instanceof P ? value : new P(function (resolve) { resolve(value); }); }
    return new (P || (P = Promise))(function (resolve, reject) {
        function fulfilled(value) { try { step(generator.next(value)); } catch (e) { reject(e); } }
        function rejected(value) { try { step(generator["throw"](value)); } catch (e) { reject(e); } }
        function step(result) { result.done ? resolve(result.value) : adopt(result.value).then(fulfilled, rejected); }
        step((generator = generator.apply(thisArg, _arguments || [])).next());
    });
};
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
exports.verifyToken = void 0;
const jsonwebtoken_1 = __importDefault(require("jsonwebtoken"));
const crypto_1 = require("../utils/crypto");
const database_1 = __importDefault(require("../database"));
function verifyToken(req, res, next) {
    return __awaiter(this, void 0, void 0, function* () {
        let token = req.body.token;
        if (!token) {
            return res.send((0, crypto_1.encrypt)(JSON.stringify({
                success: false,
                error: 'Missing token'
            })));
        }
        token = (0, crypto_1.decrypt)(token);
        try {
            const decoded = jsonwebtoken_1.default.verify(token, process.env.JWT_SECRET);
            const user = yield database_1.default.user.findFirst({
                where: {
                    // @ts-expect-error
                    id: decoded.id
                }
            });
            if (!user) {
                return res.send((0, crypto_1.encrypt)(JSON.stringify({
                    success: false,
                    error: 'Invalid token'
                })));
            }
            req.user = user;
        }
        catch (err) {
            return res.send((0, crypto_1.encrypt)(JSON.stringify({
                success: false,
                error: 'Invalid token'
            })));
        }
        return next();
    });
}
exports.verifyToken = verifyToken;
