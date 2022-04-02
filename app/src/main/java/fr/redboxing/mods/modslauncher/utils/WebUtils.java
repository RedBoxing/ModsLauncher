package fr.redboxing.mods.modslauncher.utils;

import android.content.Context;
import com.android.volley.*;
import com.android.volley.toolbox.JsonObjectRequest;
import com.android.volley.toolbox.StringRequest;
import com.android.volley.toolbox.Volley;
import org.json.JSONObject;

import java.io.UnsupportedEncodingException;
import java.nio.charset.StandardCharsets;
import java.util.Arrays;
import java.util.HashMap;

public class WebUtils {
    private static RequestQueue requestQueue;

    public static void initialize(Context context) {
        requestQueue = Volley.newRequestQueue(context);
    }

    public static void post(String url, JSONObject body, Response.Listener<JSONObject> callback, Response.ErrorListener errorCallback) {
        JsonObjectRequest request = new JsonObjectRequest(Request.Method.POST, url, body, callback, errorCallback);
        requestQueue.add(request);
    }

    public static void postString(String url, JSONObject body, Response.Listener<String> callback, Response.ErrorListener errorCallback) {
        StringRequest request = new StringRequest(Request.Method.POST, url, callback, errorCallback) {
            @Override
            public String getBodyContentType() {
                return "application/json; charset=utf-8";
            }

            @Override
            public byte[] getBody() throws AuthFailureError {
                return body == null ? null : body.toString().getBytes(StandardCharsets.UTF_8);
            }
        };

        requestQueue.add(request);
    }

    public static void downloadFile(String url, JSONObject body, Response.Listener<byte[]> callback, Response.ErrorListener errorCallback) {
        InputStreamVolleyRequest request = new InputStreamVolleyRequest(Request.Method.POST, url, callback, errorCallback, new HashMap<>()) {
            @Override
            public String getBodyContentType() {
                return "application/json; charset=utf-8";
            }

            @Override
            public byte[] getBody() throws AuthFailureError {
                return body == null ? null : body.toString().getBytes(StandardCharsets.UTF_8);
            }
        };

        requestQueue.add(request);
    }

    public static RequestQueue getRequestQueue() {
        return requestQueue;
    }
}
