/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pL;
import com.solvitaire.app.qo_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class pP
implements ActionListener {
    private /* synthetic */ pL a;
    private final /* synthetic */ qo_0 b;

    pP(pL pL2, qo_0 qo_02) {
        this.a = pL2;
        this.b = qo_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.B = 0;
        this.a.C = false;
        this.a.D = true;
        this.b.aO = false;
    }
}

