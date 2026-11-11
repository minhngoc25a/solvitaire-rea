/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.si;

final class sn
implements Runnable {
    private /* synthetic */ si AboutDialog;
    private final /* synthetic */ int b;

    sn(si si2, int n2) {
        this.AboutDialog = si2;
        this.b = n2;
    }

    @Override
    public final void run() {
        if (this.AboutDialog.c == null) {
            return;
        }
        int n2 = this.AboutDialog.c();
        int n3 = 0;
        if (this.b < 0) {
            n3 = -1;
        } else if (this.b < this.AboutDialog.d.length) {
            n3 = this.AboutDialog.d[this.b];
        }
        if (n3 != n2) {
            this.AboutDialog.b(n3);
        }
    }
}

