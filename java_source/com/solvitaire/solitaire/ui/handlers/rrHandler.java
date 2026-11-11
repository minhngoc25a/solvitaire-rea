/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class rrHandler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    rrHandler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        int n2 = 0;
        while (n2 < 8) {
            this.AboutDialog.d.g("=== Game mode " + n2 + " Easy");
            this.AboutDialog.d.bq.AboutDialog(this.AboutDialog.d, n2, "Easy");
            this.AboutDialog.d.g("=== Game mode " + n2 + " Moderate");
            this.AboutDialog.d.bq.AboutDialog(this.AboutDialog.d, n2, "Moderate");
            this.AboutDialog.d.g("=== Game mode " + n2 + " Hard");
            this.AboutDialog.d.bq.AboutDialog(this.AboutDialog.d, n2, "Hard");
            this.AboutDialog.d.g("=== Game mode " + n2 + " Unknown");
            this.AboutDialog.d.bq.AboutDialog(this.AboutDialog.d, n2, "Unknown");
            ++n2;
        }
    }
}

