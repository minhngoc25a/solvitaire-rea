/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.panels.uPanel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.v
 */
final class v_0Handler
implements ActionListener {
    private /* synthetic */ uPanel AboutDialog;

    v_0Handler(uPanel u2) {
        this.AboutDialog = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        int n2 = Integer.parseInt((String)(object = ((ActionEvent)object).getActionCommand()));
        if (this.AboutDialog.AboutDialog(this.AboutDialog.c.p, n2)) {
            this.AboutDialog.AboutDialog();
        }
    }
}

