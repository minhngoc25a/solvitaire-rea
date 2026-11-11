/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.g_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class N
implements ActionListener {
    private /* synthetic */ g_0 a;

    N(g_0 g_02) {
        this.a = g_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.a.bg = this.a.a.bi ? this.a.a.aq.c("modeChoice", 0) : 0;
        this.a.a.b(true);
    }
}

