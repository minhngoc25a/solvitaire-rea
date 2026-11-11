/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.ModeSelector;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.H
 */
final class h_0Handler
implements ActionListener {
    private /* synthetic */ ModeSelector AboutDialog;

    h_0Handler(ModeSelector g_02) {
        this.AboutDialog = g_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.f();
        this.AboutDialog.AboutDialog.br.c();
        this.AboutDialog.b.setText("" + this.AboutDialog.AboutDialog.bo);
    }
}

