/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.d_0;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;

/*
 * Renamed from com.solvitaire.app.c
 */
public final class ApiErrorCodes {
    static final String[] AboutDialog = new String[]{"SUCCESS", "BADLY FORMATTED REQUEST", "NO ACCOUNT FOR THIS EMAIL ADDRESS", "MISSING OR INVALID PC ID", "MISSING OR INVALID REQUEST SIGNATURE", "INVALID PINCODE", "DATABASE LOOKUP ERROR'", "UNEXPECTED ERROR", "SOCKET TIMEOUT"};
    private SolitaireGameEngine e;
    int b;
    String c;
    private String f;
    boolean d;
    private String g;

    public ApiErrorCodes() {
        this.b = 7;
    }

    public ApiErrorCodes(SolitaireGameEngine object, String string) {
        this.e = object;
        try {
            int n2;
            object = new d_0(this, string);
            String string2 = "rcHandler";
            Object object2 = object;
            int n3 = ((d_0)object2).b(string2);
            this.b = n2 = Integer.parseInt(d_0.AboutDialog(((d_0)object2).AboutDialog[n3]));
            if (this.b == 0) {
                boolean bl2;
                this.f = ((d_0)object).c("pc");
                String string3 = "licensed";
                Object object3 = object;
                int n4 = ((d_0)object3).b(string3);
                this.d = bl2 = d_0.AboutDialog(((d_0)object3).AboutDialog[n4]).equals("true");
                this.c = ((d_0)object).c("date");
                this.g = ((d_0)object).c("signature");
                return;
            }
        }
        catch (Exception exception) {
            this.e.g("Exception parsing JSON object:" + SolitaireGameEngine.AboutDialog(exception));
            this.e.g("Response:" + string);
            this.e.AboutDialog(60000L, "Parsing error");
        }
    }

    public final void AboutDialog() {
        this.e.ay = this.c;
        this.e.az = this.f;
        this.e.ax = this.d;
        this.e.aA = this.g;
        this.e.aq.AboutDialog("installDate", this.c);
        this.e.aq.AboutDialog("pc", this.f);
        this.e.aq.AboutDialog("licensed", "" + this.d);
        this.e.aq.AboutDialog("signature", this.g);
        this.e.aq.t();
    }

    public final boolean b() {
        if (this.g == null) {
            return false;
        }
        return ApiErrorCodes.AboutDialog(this.e, this.f, this.c, this.d, this.g);
    }

    public static boolean AboutDialog(SolitaireGameEngine qo_02, String object, String string, boolean bl2, String string2) {
        object = (String)object + string + bl2;
        return qo_02.av.AboutDialog((String)object, string2);
    }
}

