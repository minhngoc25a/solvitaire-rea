/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.qbFrame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class qeHandler
implements ActionListener {
    private /* synthetic */ qbFrame AboutDialog;

    qeHandler(qbFrame qb2) {
        this.AboutDialog = qb2;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        int n2 = this.AboutDialog.c.getSelectedIndex();
        if (n2 >= 0) {
            this.AboutDialog.f = this.AboutDialog.h[this.AboutDialog.c.getSelectedIndex()];
            n2 = this.AboutDialog.d.getSelectedIndex();
            this.AboutDialog.AboutDialog.l = this.AboutDialog.g[this.AboutDialog.f];
            n2 = this.AboutDialog.AboutDialog.l.g() * 100 + n2;
            this.AboutDialog.AboutDialog.l.AboutDialog(n2, false);
            this.AboutDialog.AboutDialog.m = 4;
            this.AboutDialog.AboutDialog.aq.AboutDialog(2);
            if (this.AboutDialog.AboutDialog.d <= 5) {
                this.AboutDialog.AboutDialog.g("Choosefile playback requesting restart");
            }
            this.AboutDialog.b.setVisible(false);
            this.AboutDialog.b.dispose();
            this.AboutDialog.AboutDialog.c(3);
        }
    }
}

