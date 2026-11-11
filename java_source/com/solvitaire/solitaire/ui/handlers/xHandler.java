/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.util.pX;
import com.solvitaire.solitaire.util.pY;
import com.solvitaire.solitaire.util.s_0;
import com.solvitaire.solitaire.ui.panels.uPanel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class xHandler
implements ActionListener {
    private /* synthetic */ uPanel AboutDialog;

    xHandler(uPanel u2) {
        this.AboutDialog = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        String string = ((ActionEvent)object).getActionCommand();
        object = string;
        object = string;
        int n2 = -1;
        switch (string.hashCode()) {
            case 60: {
                if (((String)object).equals("<")) {
                    n2 = 1;
                }
                break;
            }
            case 62: {
                if (((String)object).equals(">")) {
                    n2 = 2;
                }
                break;
            }
            case 94: {
                if (((String)object).equals("^")) {
                    n2 = 3;
                }
                break;
            }
            case 118: {
                if (((String)object).equals("v")) {
                    n2 = 4;
                }
                break;
            }
        }
        switch (n2) {
            case 3: {
                --this.AboutDialog.f;
                break;
            }
            case 4: {
                ++this.AboutDialog.f;
                break;
            }
            case 1: {
                --this.AboutDialog.e;
                break;
            }
            case 2: {
                ++this.AboutDialog.e;
            }
        }
        int n3 = this.AboutDialog.d.i;
        if (n3 < 0) {
            n3 = 0;
        }
        pX pX2 = this.AboutDialog.c;
        pX2.getClass();
        this.AboutDialog.g = new pY(pX2);
        this.AboutDialog.g.e = this.AboutDialog.d.j;
        s_0 s_02 = this.AboutDialog.AboutDialog.bu.b.b[n3];
        this.AboutDialog.c.AboutDialog(this.AboutDialog.g, this.AboutDialog.d.AboutDialog.AboutDialog(), 0, 0, n3, this.AboutDialog.c.yHandler.height, s_02.l + this.AboutDialog.e, s_02.m + this.AboutDialog.f);
        this.AboutDialog.h = this.AboutDialog.g.b[n3];
        this.AboutDialog.b();
        this.AboutDialog.d.repaint();
    }
}

