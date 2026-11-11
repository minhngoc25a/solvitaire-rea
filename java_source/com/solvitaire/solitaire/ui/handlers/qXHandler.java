/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public final class qXHandler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    qXHandler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.d.AboutDialog();
        this.AboutDialog.d.FPanel.e();
        this.AboutDialog.d.b(2, "IdentifyClose");
        if (this.AboutDialog.d.FPanel.j() != null) {
            this.AboutDialog.c("Test Dialog", "Found close button");
        } else {
            this.AboutDialog.c("Test Dialog", "Did not find close button");
        }
        this.AboutDialog.d.n();
    }
}

