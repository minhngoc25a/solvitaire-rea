/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class rk
implements ActionListener {
    private /* synthetic */ qb_0 a;

    rk(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.a(11, "klondike", "3");
    }
}

