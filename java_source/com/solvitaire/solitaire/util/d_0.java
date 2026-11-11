/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.ApiErrorCodes;

/*
 * Renamed from com.solvitaire.app.d
 */
final class d_0 {
    private String[] b;
    String[] AboutDialog;
    private /* synthetic */ ApiErrorCodes c;

    static String AboutDialog(String string) {
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

    d_0(ApiErrorCodes stringArray, String string) {
        this.c = stringArray;
        stringArray = string.strip();
        stringArray = stringArray.substring(1, stringArray.length() - 1);
        stringArray = stringArray.split(",");
        this.b = new String[stringArray.length];
        this.AboutDialog = new String[stringArray.length];
        int n2 = 0;
        while (n2 < stringArray.length) {
            String[] stringArray2 = stringArray[n2].split(":");
            this.b[n2] = d_0.AboutDialog(stringArray2[0]);
            this.AboutDialog[n2] = stringArray2[1];
            ++n2;
        }
    }

    final String c(String string) {
        int n2 = this.b(string);
        String string2 = d_0.AboutDialog(this.AboutDialog[n2]);
        return string2;
    }
}

