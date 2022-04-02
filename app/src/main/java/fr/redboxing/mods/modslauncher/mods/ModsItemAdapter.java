package fr.redboxing.mods.modslauncher.mods;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.ImageView;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import com.squareup.picasso.Picasso;
import fr.redboxing.mods.modslauncher.R;

import java.util.ArrayList;

public class ModsItemAdapter extends ArrayAdapter<Mod> {
    public Context ctx;

    public ModsItemAdapter(Context context, ArrayList<Mod> modList) {
        super(context, R.layout.mods_item, modList);

        this.ctx = context;
    }

    @NonNull
    @Override
    public View getView(int position, @Nullable View convertView, @NonNull ViewGroup parent) {
        LayoutInflater layoutInflater = (LayoutInflater)ctx.getApplicationContext().getSystemService(Context.LAYOUT_INFLATER_SERVICE);
        View row = layoutInflater.inflate(R.layout.mods_item, parent, false);
        ImageView image = row.findViewById(R.id.modIcon);
        TextView title = row.findViewById(R.id.modTitle);
        TextView desc = row.findViewById(R.id.modDesc);
        TextView version = row.findViewById(R.id.modVersion);

        Picasso.get().load(getItem(position).getIcon()).into(image);

        title.setText(getItem(position).getName());
        desc.setText(getItem(position).getDescription());
        version.setText(getItem(position).getVersion());

        return row;
    }
}
