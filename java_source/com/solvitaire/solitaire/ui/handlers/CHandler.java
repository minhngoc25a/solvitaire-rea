/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.panels.FPanel;
import com.solvitaire.solitaire.ui.panels.uPanel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public final class CHandler
implements ActionListener {
    private /* synthetic */ uPanel AboutDialog;

    CHandler(uPanel u2) {
        this.AboutDialog = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent serializable) {
        serializable = this.AboutDialog.d;
        ((FPanel)serializable).k.AboutDialog(false, true);
        ((FPanel)serializable).AboutDialog();
        this.AboutDialog.b();
        this.AboutDialog.d.repaint();
    }
}

