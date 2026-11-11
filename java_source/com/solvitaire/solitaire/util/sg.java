/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.MainWindow;
import javax.swing.JButton;

final class sg
extends JButton {
    private /* synthetic */ MainWindow AboutDialog;

    sg(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    final void AboutDialog() {
        if (this.AboutDialog.d.yHandler) {
            if (this.AboutDialog.d.z) {
                this.AboutDialog.d.g("Terminate set so start button triggering system exit");
                System.exit(0);
                return;
            }
            this.AboutDialog.d.g("Error trace has triggered full reset after start button");
            this.AboutDialog.d.c(14);
            return;
        }
        boolean bl2 = true;
        if (this.AboutDialog.d.ar != null) {
            bl2 = this.AboutDialog.d.ar.g();
        }
        if (bl2) {
            this.AboutDialog.d.aR = false;
            MainWindow qb_02 = this.AboutDialog;
            qb_02.c(true);
        }
        this.AboutDialog.G.setEnabled(false);
        this.AboutDialog.FPanel.setEnabled(false);
        this.AboutDialog.H.setEnabled(true);
        this.AboutDialog.H.setFocusable(true);
        this.AboutDialog.I.setEnabled(false);
    }
}

