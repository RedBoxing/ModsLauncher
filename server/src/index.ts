import { config } from 'dotenv'
config();

import express from 'express'
import routes from './routes'
import { decrypt, encrypt } from './utils/crypto';

const app = express();
app.use(express.json());

app.use('/api', routes());

app.listen(process.env.SERVER_PORT, () => {
  console.log(`Server is running on port ${process.env.SERVER_PORT}`);
});