/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.ModeSelector;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class MHandler
implements ActionListener {
    private /* synthetic */ ModeSelector AboutDialog;

    MHandler(ModeSelector g_02) {
        this.AboutDialog = g_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.AboutDialog(this.AboutDialog.AboutDialog.aq);
    }
}

