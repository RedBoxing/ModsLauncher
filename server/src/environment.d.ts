declare global {
    namespace NodeJS {
        interface ProcessEnv {
            SERVER_PORT: number;
            CRYPTO_KEY: string;
            CRYPTO_IV: string;
        }
    }
}

export {}