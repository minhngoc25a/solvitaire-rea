/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class rlHandler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    rlHandler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.AboutDialog(11, "spider", "1");
    }
}

