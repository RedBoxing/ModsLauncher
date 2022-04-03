package fr.redboxing.mods.modslauncher.ui.login;

import androidx.annotation.Nullable;

/**
 * Authentication result : success (user details) or error message.
 */
class LoginResult {
    private boolean success;
    @Nullable
    private Integer error;

    LoginResult(@Nullable Integer error) {
        this.error = error;
    }

    LoginResult(boolean success) {
        this.success = success;
    }

    boolean getSuccess() {
        return success;
    }

    @Nullable
    Integer getError() {
        return error;
    }
}