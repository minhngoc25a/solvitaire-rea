/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.ModeSelector;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.I
 */
public final class i_0Handler
implements ActionListener {
    private /* synthetic */ ModeSelector AboutDialog;

    i_0Handler(ModeSelector g_02) {
        this.AboutDialog = g_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        String string = ((ActionEvent)object).getActionCommand();
        object = string;
        object = string;
        int n2 = -1;
        switch (string.hashCode()) {
            case -2084554817: {
                if (((String)object).equals("Klondike")) {
                    n2 = 1;
                }
                break;
            }
            case -1812086011: {
                if (((String)object).equals("Spider")) {
                    n2 = 2;
                }
                break;
            }
        }
        switch (n2) {
            case 1: {
                int n3 = this.AboutDialog.p.getSelectedIndex();
                this.AboutDialog.AboutDialog.bn = n3 == 1 ? 3 : 1;
                break;
            }
            case 2: {
                int n4 = this.AboutDialog.q.getSelectedIndex();
                this.AboutDialog.AboutDialog.bm = n4 == 1 ? 2 : (n4 == 2 ? 4 : 1);
            }
        }
        this.AboutDialog.e();
        this.AboutDialog.AboutDialog.br.c();
        this.AboutDialog.b.setText("" + this.AboutDialog.AboutDialog.bo);
    }
}

