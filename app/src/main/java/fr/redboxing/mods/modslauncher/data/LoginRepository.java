package fr.redboxing.mods.modslauncher.data;

import android.content.SharedPreferences;
import fr.redboxing.mods.modslauncher.App;
import fr.redboxing.mods.modslauncher.utils.AES;

import static android.content.Context.MODE_PRIVATE;

/**
 * Class that requests authentication and user information from the remote data source and
 * maintains an in-memory cache of login status and user credentials information.
 */
public class LoginRepository {

    private static volatile LoginRepository instance;
    private LoginDataSource dataSource;
    private String token = null;

    private LoginRepository(LoginDataSource dataSource) {
        this.dataSource = dataSource;
    }

    public static LoginRepository getInstance(LoginDataSource dataSource) {
        if (instance == null) {
            instance = new LoginRepository(dataSource);
        }
        return instance;
    }

    public boolean isLoggedIn() {
        return token != null && !token.isEmpty();
    }

    public void logout() {
        token = null;
        dataSource.logout();
    }

    public void setLoggedInUser(String token) {
        this.token = token;
        SharedPreferences.Editor editor = App.CONTEXT.getSharedPreferences("auth", MODE_PRIVATE).edit();
        try {
            editor.putString(AES.encrypt("token"), AES.encrypt(token));
        } catch (Exception e) {
            e.printStackTrace();
        }
        editor.apply();
    }

    public void login(String username, String password, LoginCallback callback) {
        dataSource.login(username, password, result -> {
            if (result instanceof Result.Success) {
                setLoggedInUser(((Result.Success<String>) result).getData());
            }

            callback.onLogin(result);
        });
    }

    public void register(String email, String password, String inviteCode, LoginCallback callback) {
        dataSource.register(email, password, inviteCode, result -> {
            if (result instanceof Result.Success) {
                setLoggedInUser(((Result.Success<String>) result).getData());
            }

            callback.onLogin(result);
        });
    }

    public String getToken() {
        return token;
    }
}