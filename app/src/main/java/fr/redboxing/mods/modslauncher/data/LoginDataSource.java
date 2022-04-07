package fr.redboxing.mods.modslauncher.data;

import com.google.gson.Gson;
import com.google.gson.JsonObject;
import fr.redboxing.mods.modslauncher.MainActivity;
import fr.redboxing.mods.modslauncher.utils.AES;
import fr.redboxing.mods.modslauncher.utils.WebUtils;
import org.json.JSONObject;

import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;
import java.io.IOException;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;

/**
 * Class that handles authentication w/ login credentials and retrieves user information.
 */
public class LoginDataSource {

    public void login(String username, String password, LoginCallback callback) {
        try {
            WebUtils.postString(MainActivity.SERVER_URL + "/api/login", new JSONObject().put("encUser", AES.encrypt(username)).put("encPass", AES.encrypt(password)),
                    encrypted -> {
                        try {
                            JsonObject jsonObject = new Gson().fromJson(AES.decrypt(encrypted), JsonObject.class);
                            if (jsonObject.get("success").getAsBoolean()) {
                                callback.onLogin(new Result.Success<>(jsonObject.get("token").getAsString()));
                            } else {
                                callback.onLogin(new Result.Error(new IOException("Login failed : " + jsonObject.get("error").getAsString())));
                            }
                        } catch (NoSuchPaddingException | NoSuchAlgorithmException | InvalidAlgorithmParameterException | InvalidKeyException | BadPaddingException | IllegalBlockSizeException e) {
                            e.printStackTrace();
                        }
                    },
                    error -> {
                        error.printStackTrace();
                        callback.onLogin(new Result.Error(new IOException(error.getMessage())));
                    });
        } catch (Exception e) {
            e.printStackTrace();
            callback.onLogin(new Result.Error(new IOException("Error logging in", e)));
        }
    }

    public void register(String username, String password, String inviteCode, LoginCallback callback) {
        try {
            WebUtils.postString(MainActivity.SERVER_URL + "/api/register", new JSONObject().put("encEmail", AES.encrypt(username)).put("encPass", AES.encrypt(password)).put("encInvite", AES.encrypt(inviteCode)),
                    encrypted -> {
                        try {
                            JsonObject jsonObject = new Gson().fromJson(AES.decrypt(encrypted), JsonObject.class);
                            if (jsonObject.get("success").getAsBoolean()) {
                                callback.onLogin(new Result.Success<>(jsonObject.get("token").getAsString()));
                            } else {
                                callback.onLogin(new Result.Error(new IOException("Login failed : " + jsonObject.get("error").getAsString())));
                            }
                        } catch (NoSuchPaddingException | NoSuchAlgorithmException | InvalidAlgorithmParameterException | InvalidKeyException | BadPaddingException | IllegalBlockSizeException e) {
                            e.printStackTrace();
                        }
                    },
                    error -> {
                        error.printStackTrace();
                        callback.onLogin(new Result.Error(new IOException(error.getMessage())));
                    });
        } catch (Exception e) {
            e.printStackTrace();
            callback.onLogin(new Result.Error(new IOException("Error logging in", e)));
        }
    }

    public void logout() {
        // TODO: revoke authentication
    }
}