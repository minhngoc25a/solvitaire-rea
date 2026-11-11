/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pL;
import com.solvitaire.app.qo_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class pO
implements ActionListener {
    private /* synthetic */ pL a;
    private final /* synthetic */ qo_0 b;

    pO(pL pL2, qo_0 qo_02) {
        this.a = pL2;
        this.b = qo_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.b.m = 0;
        this.b.aq.b(2, null);
    }
}

