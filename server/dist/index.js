"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const dotenv_1 = require("dotenv");
(0, dotenv_1.config)();
const express_1 = __importDefault(require("express"));
const routes_1 = __importDefault(require("./routes"));
const app = (0, express_1.default)();
app.use(express_1.default.json());
app.use('/api', (0, routes_1.default)());
app.listen(process.env.SERVER_PORT, () => {
    console.log(`Server is running on port ${process.env.SERVER_PORT}`);
});
