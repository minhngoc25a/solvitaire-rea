/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class ryHandler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    ryHandler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        if (this.AboutDialog.d.ar == null || !this.AboutDialog.d.ar.d()) {
            this.AboutDialog.G.AboutDialog();
        }
    }
}

