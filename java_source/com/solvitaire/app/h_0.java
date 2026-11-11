/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.g_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.H
 */
final class h_0
implements ActionListener {
    private /* synthetic */ g_0 a;

    h_0(g_0 g_02) {
        this.a = g_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.f();
        this.a.a.br.c();
        this.a.b.setText("" + this.a.a.bo);
    }
}

