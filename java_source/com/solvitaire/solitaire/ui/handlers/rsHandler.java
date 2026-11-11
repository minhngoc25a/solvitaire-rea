/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class rsHandler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    rsHandler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent serializable) {
        serializable = this.AboutDialog.cn;
        synchronized (serializable) {
            this.AboutDialog.d.aq.cn.setProperty("modeChoice", "0");
            this.AboutDialog.d.bg = 0;
            this.AboutDialog.d.aq.t();
            this.AboutDialog.d.c(14);
            return;
        }
    }
}

