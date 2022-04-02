package fr.redboxing.mods.modslauncher.data;

import com.android.volley.VolleyError;
import fr.redboxing.mods.modslauncher.data.model.LoggedInUser;

public interface LoginCallback {
    void onLogin(Result<LoggedInUser> result);
}
