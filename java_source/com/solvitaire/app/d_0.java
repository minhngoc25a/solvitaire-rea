/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.c_0;

/*
 * Renamed from com.solvitaire.app.d
 */
final class d_0 {
    private String[] b;
    String[] a;
    private /* synthetic */ c_0 c;

    static String a(String string) {
        string = string.strip();
        return string.replaceAll("\"", "");
    }

    final int b(String string) {
        int n2 = 0;
        while (n2 < this.b.length) {
            if (this.b[n2].equals(string)) break;
            ++n2;
        }
        if (n2 == this.b.length) {
            throw new NullPointerException("Could not find JSON parameter:" + string);
        }
        return n2;
    }

    d_0(c_0 stringArray, String string) {
        this.c = stringArray;
        stringArray = string.strip();
        stringArray = stringArray.substring(1, stringArray.length() - 1);
        stringArray = stringArray.split(",");
        this.b = new String[stringArray.length];
        this.a = new String[stringArray.length];
        int n2 = 0;
        while (n2 < stringArray.length) {
            String[] stringArray2 = stringArray[n2].split(":");
            this.b[n2] = d_0.a(stringArray2[0]);
            this.a[n2] = stringArray2[1];
            ++n2;
        }
    }

    final String c(String string) {
        int n2 = this.b(string);
        String string2 = d_0.a(this.a[n2]);
        return string2;
    }
}

