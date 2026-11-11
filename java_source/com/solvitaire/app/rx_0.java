/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;

/*
 * Renamed from com.solvitaire.app.rX
 */
final class rx_0
implements Runnable {
    private /* synthetic */ qb_0 a;

    rx_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void run() {
        this.a.g.toFront();
        this.a.g.requestFocus();
    }
}

