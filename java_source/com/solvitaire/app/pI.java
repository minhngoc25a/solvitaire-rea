/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qo_0;

final class pI
implements Runnable {
    private final /* synthetic */ qo_0 a;

    pI(qo_0 qo_02) {
        this.a = qo_02;
    }

    @Override
    public final void run() {
        this.a.aq.g.toFront();
    }
}

