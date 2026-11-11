/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.pX;
import com.solvitaire.solitaire.util.s_0;

public final class pY {
    s_0 AboutDialog;
    s_0[] b = new s_0[52];
    int c;
    double d;
    boolean e;
    int f;
    private /* synthetic */ pX g;

    pY(pX pX2) {
        this.g = pX2;
        int n2 = 0;
        while (n2 < 52) {
            this.b[n2] = new s_0(pX2.AboutDialog, pX2, n2);
            ++n2;
        }
        this.AboutDialog = this.b[0];
    }
}

