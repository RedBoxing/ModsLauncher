import { User } from '@prisma/client'

declare global {
    namespace NodeJS {
        interface ProcessEnv {
            SERVER_PORT: number;
            CRYPTO_KEY: string;
            CRYPTO_IV: string;
            JWT_SECRET: string;
        }
    }
}

declare module "express" {
    interface Request {
        user: User;
    }
}

export {}