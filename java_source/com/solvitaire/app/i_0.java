/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.g_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.I
 */
final class i_0
implements ActionListener {
    private /* synthetic */ g_0 a;

    i_0(g_0 g_02) {
        this.a = g_02;
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
                int n3 = this.a.p.getSelectedIndex();
                this.a.a.bn = n3 == 1 ? 3 : 1;
                break;
            }
            case 2: {
                int n4 = this.a.q.getSelectedIndex();
                this.a.a.bm = n4 == 1 ? 2 : (n4 == 2 ? 4 : 1);
            }
        }
        this.a.e();
        this.a.a.br.c();
        this.a.b.setText("" + this.a.a.bo);
    }
}

