/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.MainWindow;

/*
 * Renamed from com.solvitaire.app.rX
 */
final class rx_0
implements Runnable {
    private /* synthetic */ MainWindow AboutDialog;

    rx_0(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void run() {
        this.AboutDialog.g.toFront();
        this.AboutDialog.g.requestFocus();
    }
}

