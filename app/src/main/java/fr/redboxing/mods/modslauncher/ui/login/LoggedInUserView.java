package fr.redboxing.mods.modslauncher.ui.login;

/**
 * Class exposing authenticated user details to the UI.
 */
class LoggedInUserView {
    private String name;
    //... other data fields that may be accessible to the UI

    LoggedInUserView(String name) {
        this.name = name;
    }

    String getName() {
        return name;
    }
}