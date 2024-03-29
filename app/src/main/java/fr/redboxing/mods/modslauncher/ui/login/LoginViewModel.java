package fr.redboxing.mods.modslauncher.ui.login;

import android.util.Log;
import androidx.lifecycle.LiveData;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModel;
import android.util.Patterns;

import fr.redboxing.mods.modslauncher.data.LoginRepository;
import fr.redboxing.mods.modslauncher.data.Result;
import fr.redboxing.mods.modslauncher.R;

public class LoginViewModel extends ViewModel {

    private MutableLiveData<LoginFormState> loginFormState = new MutableLiveData<>();
    private MutableLiveData<LoginResult> loginResult = new MutableLiveData<>();
    private LoginRepository loginRepository;

    LoginViewModel(LoginRepository loginRepository) {
        this.loginRepository = loginRepository;
    }

    LiveData<LoginFormState> getLoginFormState() {
        return loginFormState;
    }

    LiveData<LoginResult> getLoginResult() {
        return loginResult;
    }

    public LoginRepository getLoginRepository() {
        return loginRepository;
    }

    public void login(String username, String password) {
        loginRepository.login(username, password, result -> {
            if (result instanceof Result.Success) {
                loginResult.setValue(new LoginResult(true));
            } else {
                loginResult.setValue(new LoginResult(R.string.login_failed));
                Log.e("LoginViewModel", "Login failed : " + result);
            }
        });
    }

    public void register(String email, String password, String inviteCode) {
        loginRepository.register(email, password, inviteCode, result -> {
            if (result instanceof Result.Success) {
                loginResult.setValue(new LoginResult(true));
            } else {
                loginResult.setValue(new LoginResult(R.string.register_failed));
                Log.e("LoginViewModel", "Register failed : " + result);
            }
        });
    }

    public void loginDataChanged(String username, String password) {
        if (!isUserNameValid(username)) {
            loginFormState.setValue(new LoginFormState(R.string.invalid_username, null));
        } else if (!isPasswordValid(password)) {
            loginFormState.setValue(new LoginFormState(null, R.string.invalid_password));
        } else {
            loginFormState.setValue(new LoginFormState(true));
        }
    }

    // A placeholder username validation check
    private boolean isUserNameValid(String username) {
        if (username == null) {
            return false;
        }
        if (username.contains("@")) {
            return Patterns.EMAIL_ADDRESS.matcher(username).matches();
        } else {
            return !username.trim().isEmpty();
        }
    }

    // A placeholder password validation check
    private boolean isPasswordValid(String password) {
        return password != null && password.trim().length() > 5;
    }
}