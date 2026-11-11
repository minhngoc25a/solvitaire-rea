/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.qU
 */
final class qu_0Handler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    qu_0Handler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.d.aD.AboutDialog();
        this.AboutDialog.d.AboutDialog(500L);
        this.AboutDialog.d.aD.AboutDialog("tabRect", false);
    }
}

