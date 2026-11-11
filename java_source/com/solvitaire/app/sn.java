/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.si;

final class sn
implements Runnable {
    private /* synthetic */ si a;
    private final /* synthetic */ int b;

    sn(si si2, int n2) {
        this.a = si2;
        this.b = n2;
    }

    @Override
    public final void run() {
        if (this.a.c == null) {
            return;
        }
        int n2 = this.a.c();
        int n3 = 0;
        if (this.b < 0) {
            n3 = -1;
        } else if (this.b < this.a.d.length) {
            n3 = this.a.d[this.b];
        }
        if (n3 != n2) {
            this.a.b(n3);
        }
    }
}

