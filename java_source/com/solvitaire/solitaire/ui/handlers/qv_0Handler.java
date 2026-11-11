/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.util.ErrorDialog;
import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.qV
 */
final class qv_0Handler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    qv_0Handler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        if (this.AboutDialog.d.FPanel == null || this.AboutDialog.d.FPanel.A == null) {
            this.AboutDialog.d.g("No previous capture has set last dialog rect");
            return;
        }
        this.AboutDialog.d.AboutDialog(500L);
        object = this.AboutDialog.d.AboutDialog(this.AboutDialog.d.FPanel.A, "FindDialog");
        ((ErrorDialog)object).AboutDialog("dialogImg", false);
    }
}

