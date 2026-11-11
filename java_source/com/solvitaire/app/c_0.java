/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.d_0;
import com.solvitaire.app.qo_0;

/*
 * Renamed from com.solvitaire.app.c
 */
public final class c_0 {
    static final String[] a = new String[]{"SUCCESS", "BADLY FORMATTED REQUEST", "NO ACCOUNT FOR THIS EMAIL ADDRESS", "MISSING OR INVALID PC ID", "MISSING OR INVALID REQUEST SIGNATURE", "INVALID PINCODE", "DATABASE LOOKUP ERROR'", "UNEXPECTED ERROR", "SOCKET TIMEOUT"};
    private qo_0 e;
    int b;
    String c;
    private String f;
    boolean d;
    private String g;

    public c_0() {
        this.b = 7;
    }

    public c_0(qo_0 object, String string) {
        this.e = object;
        try {
            int n2;
            object = new d_0(this, string);
            String string2 = "rc";
            Object object2 = object;
            int n3 = ((d_0)object2).b(string2);
            this.b = n2 = Integer.parseInt(d_0.a(((d_0)object2).a[n3]));
            if (this.b == 0) {
                boolean bl2;
                this.f = ((d_0)object).c("pc");
                String string3 = "licensed";
                Object object3 = object;
                int n4 = ((d_0)object3).b(string3);
                this.d = bl2 = d_0.a(((d_0)object3).a[n4]).equals("true");
                this.c = ((d_0)object).c("date");
                this.g = ((d_0)object).c("signature");
                return;
            }
        }
        catch (Exception exception) {
            this.e.g("Exception parsing JSON object:" + qo_0.a(exception));
            this.e.g("Response:" + string);
            this.e.a(60000L, "Parsing error");
        }
    }

    public final void a() {
        this.e.ay = this.c;
        this.e.az = this.f;
        this.e.ax = this.d;
        this.e.aA = this.g;
        this.e.aq.a("installDate", this.c);
        this.e.aq.a("pc", this.f);
        this.e.aq.a("licensed", "" + this.d);
        this.e.aq.a("signature", this.g);
        this.e.aq.t();
    }

    public final boolean b() {
        if (this.g == null) {
            return false;
        }
        return c_0.a(this.e, this.f, this.c, this.d, this.g);
    }

    public static boolean a(qo_0 qo_02, String object, String string, boolean bl2, String string2) {
        object = (String)object + string + bl2;
        return qo_02.av.a((String)object, string2);
    }
}

