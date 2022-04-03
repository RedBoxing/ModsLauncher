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
const express_1 = require("express");
const database_1 = __importDefault(require("../database"));
const crypto_1 = require("../utils/crypto");
const fs_1 = __importDefault(require("fs"));
const jsonwebtoken_1 = __importDefault(require("jsonwebtoken"));
const auth_1 = require("../middleware/auth");
function init() {
    const router = (0, express_1.Router)();
    router.post('/mods', auth_1.verifyToken, (req, res) => __awaiter(this, void 0, void 0, function* () {
        const mods = yield database_1.default.mod.findMany();
        res.send((0, crypto_1.encrypt)(JSON.stringify({
            success: true,
            mods
        })));
    }));
    router.post('/mods/:pkg/get', auth_1.verifyToken, (req, res) => __awaiter(this, void 0, void 0, function* () {
        const { pkg } = req.params;
        if (!pkg) {
            return res.send((0, crypto_1.encrypt)(JSON.stringify({
                success: false,
                error: 'Missing package'
            })));
        }
        const mod = yield database_1.default.mod.findFirst({
            where: {
                package: pkg
            }
        });
        if (!mod) {
            return res.send((0, crypto_1.encrypt)(JSON.stringify({
                success: false,
                error: 'Mod not found'
            })));
        }
        const path = `files/${mod.package}/${mod.version}/${mod.package}-${mod.version}.apk`;
        if (!fs_1.default.existsSync(path)) {
            return res.send((0, crypto_1.encrypt)(JSON.stringify({
                success: false,
                error: 'Mod not found'
            })));
        }
        res.send((0, crypto_1.encryptBuffer)(fs_1.default.readFileSync(path)));
    }));
    router.post('/login', (req, res) => __awaiter(this, void 0, void 0, function* () {
        const { encUser, encPass } = req.body;
        if (!encUser || !encPass) {
            return res.send((0, crypto_1.encrypt)(JSON.stringify({
                success: false,
                error: 'Missing user or password'
            })));
        }
        const email = (0, crypto_1.decrypt)(encUser);
        const pass = (0, crypto_1.decrypt)(encPass);
        const user = yield database_1.default.user.findFirst({
            where: {
                email: email
            }
        });
        if (user) {
            if (yield (0, crypto_1.validatePassword)(pass, user.password)) {
                res.send((0, crypto_1.encrypt)(JSON.stringify({
                    success: true,
                    token: jsonwebtoken_1.default.sign({
                        id: user.id,
                        email: user.email
                    }, process.env.JWT_SECRET)
                })));
            }
            else {
                res.send((0, crypto_1.encrypt)(JSON.stringify(({
                    success: false,
                    error: 'Invalid credentials'
                }))));
            }
        }
        else {
            res.send((0, crypto_1.encrypt)(JSON.stringify(({
                success: false,
                error: 'Invalid credentials'
            }))));
        }
    }));
    router.post('/validateToken', auth_1.verifyToken, (req, res) => __awaiter(this, void 0, void 0, function* () {
        res.send((0, crypto_1.encrypt)(JSON.stringify({
            success: true
        })));
    }));
    return router;
}
exports.default = init;
