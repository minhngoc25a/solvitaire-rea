/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.ModeSelector;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public final class NHandler
implements ActionListener {
    private /* synthetic */ ModeSelector AboutDialog;

    NHandler(ModeSelector g_02) {
        this.AboutDialog = g_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.AboutDialog.bg = this.AboutDialog.AboutDialog.bi ? this.AboutDialog.AboutDialog.aq.c("modeChoice", 0) : 0;
        this.AboutDialog.AboutDialog.b(true);
    }
}

