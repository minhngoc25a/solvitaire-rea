/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.ui.w_0Frame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.rS
 */
public final class rs_0Handler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    rs_0Handler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.d.m = 3;
        if (this.AboutDialog.d.uPanel) {
            int n2 = 0;
            if (!this.AboutDialog.d.ao.f()) {
                n2 = 4;
            }
            if (this.AboutDialog.d.ao.AboutDialog(this.AboutDialog.d.aY, true, 0, 0) != 0) {
                n2 |= 8;
                n2 |= 0x10;
            }
            if (this.AboutDialog.d.ao.b(this.AboutDialog.d.aY, true) != 0) {
                n2 |= 0x20;
            }
            if (this.AboutDialog.d.ao.AboutDialog(this.AboutDialog.d.aY, true) != 0) {
                n2 |= 0x40;
            }
            new w_0Frame(this.AboutDialog.d, false, n2);
            return;
        }
        this.AboutDialog.d.l.rPanel = false;
        this.AboutDialog.d.l.AboutDialog();
        new w_0Frame(this.AboutDialog.d, true, 0);
    }
}

