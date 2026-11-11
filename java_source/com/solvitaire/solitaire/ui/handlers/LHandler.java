/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.ModeSelector;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public final class LHandler
implements ActionListener {
    private /* synthetic */ ModeSelector AboutDialog;

    LHandler(ModeSelector g_02) {
        this.AboutDialog = g_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.AboutDialog.bi = this.AboutDialog.rPanel.isSelected();
        this.AboutDialog.AboutDialog.g("modeRemembered now set to " + this.AboutDialog.AboutDialog.bi);
        this.AboutDialog.AboutDialog.aq.AboutDialog("modeRemembered", this.AboutDialog.AboutDialog.bi);
        this.AboutDialog.AboutDialog.aq.t();
    }
}

