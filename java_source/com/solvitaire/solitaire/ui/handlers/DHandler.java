/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.panels.uPanel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public final class DHandler
implements ActionListener {
    private /* synthetic */ uPanel AboutDialog;

    DHandler(uPanel u2) {
        this.AboutDialog = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.AboutDialog();
    }
}

