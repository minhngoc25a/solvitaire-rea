/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;

final class qY
extends Thread {
    private /* synthetic */ qb_0 a;

    qY(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void run() {
        while (!this.a.d.aS && !this.a.d.ai) {
            this.a.d.a(500L);
            if (this.a.T == 0 || this.a.d.aO) continue;
            this.a.p();
        }
        this.a.d.g("Status thread exited");
    }
}

