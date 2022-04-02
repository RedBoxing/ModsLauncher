const crypto = require('crypto')

const buffer = crypto.randomBytes(32);
console.log(buffer.toString('hex'));
console.log(Int8Array.from(buffer).toString().replaceAll(",", ", "));

//5e571b5139a77625c394a85127581278