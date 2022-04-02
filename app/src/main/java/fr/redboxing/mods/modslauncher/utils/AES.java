package fr.redboxing.mods.modslauncher.utils;

import android.util.Base64;

import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class AES {
    private static native byte[] getEncryptionKey();
    private static native byte[] getEncryptionInitVector();

    public static String encrypt(String in) throws Exception {
        SecretKeySpec key = new SecretKeySpec(getEncryptionKey(), "AES");
        IvParameterSpec iv = new IvParameterSpec(getEncryptionInitVector());

        Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
        cipher.init(Cipher.ENCRYPT_MODE, key, iv);

        byte[] bytesToEncrypt = in.getBytes();
        byte[] encryptedBytes = Base64.encode(cipher.doFinal(bytesToEncrypt), Base64.NO_WRAP);

        return new String(encryptedBytes);
    }

    public static String decrypt(String in) throws NoSuchPaddingException, NoSuchAlgorithmException, InvalidAlgorithmParameterException, InvalidKeyException, BadPaddingException, IllegalBlockSizeException {
        SecretKeySpec key = new SecretKeySpec(getEncryptionKey(), "AES");
        IvParameterSpec iv = new IvParameterSpec(getEncryptionInitVector());

        Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
        cipher.init(Cipher.DECRYPT_MODE, key, iv);

        byte[] encryptedBytes = in.getBytes();
        byte[] decryptedBytes = cipher.doFinal(Base64.decode(encryptedBytes, Base64.DEFAULT));

        return new String(decryptedBytes);
    }

    public static byte[] decrypt(byte[] encryptedBytes) throws NoSuchPaddingException, NoSuchAlgorithmException, InvalidAlgorithmParameterException, InvalidKeyException, BadPaddingException, IllegalBlockSizeException {
        SecretKeySpec key = new SecretKeySpec(getEncryptionKey(), "AES");
        IvParameterSpec iv = new IvParameterSpec(getEncryptionInitVector());

        Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
        cipher.init(Cipher.DECRYPT_MODE, key, iv);

        return cipher.doFinal(Base64.decode(encryptedBytes, Base64.DEFAULT));
    }

    public static String SHA256(String in) throws NoSuchAlgorithmException {
        MessageDigest digest = MessageDigest.getInstance("SHA-256");
        byte[] encoded = digest.digest(in.getBytes());
        return new String(encoded);
    }
}
