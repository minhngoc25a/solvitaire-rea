/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.util.t;
import com.solvitaire.solitaire.ui.w_0Frame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.ad
 */
public final class ad_0Handler
implements ActionListener {
    private /* synthetic */ w_0Frame AboutDialog;

    ad_0Handler(w_0Frame w_02) {
        this.AboutDialog = w_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.AboutDialog.b.l.b = false;
        this.AboutDialog.b.l.l = 0;
        this.AboutDialog.b.l.n = 0;
        this.AboutDialog.b.l.o = 0;
        this.AboutDialog.b.l.m = w_0Frame.AboutDialog(this.AboutDialog.e.getText());
        int n2 = w_0Frame.AboutDialog(this.AboutDialog.f.getText());
        if (n2 == 0) {
            this.AboutDialog.s.setText("Max moves of zero is not permitted");
            return;
        }
        int n3 = n2;
        t t2 = this.AboutDialog.b.l;
        this.AboutDialog.b.l.k = n3;
        if (this.AboutDialog.c) {
            int n4 = this.AboutDialog.i.getSelectedIndex() + 1;
            n3 = this.AboutDialog.j.getSelectedIndex();
            this.AboutDialog.b.l.AboutDialog(n4 * 100 + n3, false);
            n4 = 0;
            while (n4 < 10) {
                String string = this.AboutDialog.b.l.f();
                if (string == null) break;
                SolitaireGameEngine cfr_ignored_0 = this.AboutDialog.b;
                SolitaireGameEngine.h(this.AboutDialog.b.l.p + string);
                ++n4;
            }
        }
        switch (this.AboutDialog.b.l.c) {
            case 1: {
                this.AboutDialog.b.l.f = 1;
                break;
            }
            case 2: {
                this.AboutDialog.b.l.f = this.AboutDialog.m.getSelectedIndex() + 1;
                break;
            }
            case 3: {
                this.AboutDialog.b.l.d = this.AboutDialog.n.getSelectedIndex() + 1;
                this.AboutDialog.b.l.e = 0;
                this.AboutDialog.b.l.i = this.AboutDialog.k.getSelectedIndex() + 1;
                break;
            }
            case 4: {
                int n5 = this.AboutDialog.o.getSelectedIndex() + 1;
                n3 = this.AboutDialog.p.getSelectedIndex() + 1;
                this.AboutDialog.b.l.AboutDialog(n5, n3);
                break;
            }
            case 5: {
                this.AboutDialog.b.l.j = this.AboutDialog.l.getSelectedIndex() + 1;
                break;
            }
            case 6: {
                this.AboutDialog.b.l.h = w_0Frame.AboutDialog(this.AboutDialog.d.getText());
                if (this.AboutDialog.b.l.h < 0) {
                    this.AboutDialog.s.setText("Invalid target score");
                    return;
                }
                this.AboutDialog.b.l.g = w_0Frame.AboutDialog(this.AboutDialog.e.getText());
            }
        }
        this.AboutDialog.b.g("Game " + this.AboutDialog.b.l.g() + " is of type '" + this.AboutDialog.b.l.c + "' card: " + this.AboutDialog.b.l.d + " suit: " + this.AboutDialog.b.l.e + " boardCount: " + this.AboutDialog.b.l.f + " cardCount: " + this.AboutDialog.b.l.i + " stackCount: " + this.AboutDialog.b.l.j + " score: " + this.AboutDialog.b.l.h + " max moves: " + this.AboutDialog.b.l.k);
        this.AboutDialog.AboutDialog.dispose();
        this.AboutDialog.b.AboutDialog(500L, "Allow dialog to close");
        MainWindow qb_02 = this.AboutDialog.b.aq;
        qb_02.c(true);
    }
}

