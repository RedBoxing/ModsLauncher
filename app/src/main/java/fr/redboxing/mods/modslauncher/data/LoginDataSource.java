package fr.redboxing.mods.modslauncher.data;

import android.util.Log;
import com.google.gson.Gson;
import fr.redboxing.mods.modslauncher.MainActivity;
import fr.redboxing.mods.modslauncher.data.model.LoggedInUser;
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
                            callback.onLogin(new Result.Success<>(new Gson().fromJson(AES.decrypt(encrypted), LoggedInUser.class)));
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