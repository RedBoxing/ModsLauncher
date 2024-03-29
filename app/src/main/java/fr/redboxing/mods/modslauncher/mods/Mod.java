package fr.redboxing.mods.modslauncher.mods;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.gson.annotations.SerializedName;

public class Mod implements Parcelable {
    private final String name;
    private final String description;
    @SerializedName("package")
    private final String _package;
    private final String modPackage;
    private final String version;
    private final String modVersion;
    private final String icon;

    public Mod(String name, String description, String _package, String modPackage, String version, String modVersion, String icon) {
        this.name = name;
        this.description = description;
        this._package = _package;
        this.modPackage = modPackage;
        this.version = version;
        this.modVersion = modVersion;
        this.icon = icon;
    }

    protected Mod(Parcel in) {
        name = in.readString();
        description = in.readString();
        _package = in.readString();
        modPackage = in.readString();
        version = in.readString();
        modVersion = in.readString();
        icon = in.readString();
    }

    public String getName() {
        return name;
    }

    public String getDescription() {
        return description;
    }

    public String getPackage() {
        return _package;
    }

    public String getModPackage() {
        return modPackage;
    }

    public String getVersion() {
        return version;
    }

    public String getModVersion() {
        return modVersion;
    }

    public String getIcon() {
        return icon;
    }

    public static final Creator<Mod> CREATOR = new Creator<Mod>() {
        @Override
        public Mod createFromParcel(Parcel in) {
            return new Mod(in);
        }

        @Override
        public Mod[] newArray(int size) {
            return new Mod[size];
        }
    };

    @Override
    public int describeContents() {
        return 0;
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(name);
        parcel.writeString(description);
        parcel.writeString(_package);
        parcel.writeString(modPackage);
        parcel.writeString(version);
        parcel.writeString(modVersion);
        parcel.writeString(icon);
    }
}
