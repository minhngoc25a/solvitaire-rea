/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.MainWindow;

final class qY
extends Thread {
    private /* synthetic */ MainWindow AboutDialog;

    qY(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void run() {
        while (!this.AboutDialog.d.aS && !this.AboutDialog.d.ai) {
            this.AboutDialog.d.AboutDialog(500L);
            if (this.AboutDialog.T == 0 || this.AboutDialog.d.aO) continue;
            this.AboutDialog.p();
        }
        this.AboutDialog.d.g("Status thread exited");
    }
}

