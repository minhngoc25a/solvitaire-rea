/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.t;
import com.solvitaire.app.w_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.ad
 */
final class ad_0
implements ActionListener {
    private /* synthetic */ w_0 a;

    ad_0(w_0 w_02) {
        this.a = w_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.b.l.b = false;
        this.a.b.l.l = 0;
        this.a.b.l.n = 0;
        this.a.b.l.o = 0;
        this.a.b.l.m = w_0.a(this.a.e.getText());
        int n2 = w_0.a(this.a.f.getText());
        if (n2 == 0) {
            this.a.s.setText("Max moves of zero is not permitted");
            return;
        }
        int n3 = n2;
        t t2 = this.a.b.l;
        this.a.b.l.k = n3;
        if (this.a.c) {
            int n4 = this.a.i.getSelectedIndex() + 1;
            n3 = this.a.j.getSelectedIndex();
            this.a.b.l.a(n4 * 100 + n3, false);
            n4 = 0;
            while (n4 < 10) {
                String string = this.a.b.l.f();
                if (string == null) break;
                qo_0 cfr_ignored_0 = this.a.b;
                qo_0.h(this.a.b.l.p + string);
                ++n4;
            }
        }
        switch (this.a.b.l.c) {
            case 1: {
                this.a.b.l.f = 1;
                break;
            }
            case 2: {
                this.a.b.l.f = this.a.m.getSelectedIndex() + 1;
                break;
            }
            case 3: {
                this.a.b.l.d = this.a.n.getSelectedIndex() + 1;
                this.a.b.l.e = 0;
                this.a.b.l.i = this.a.k.getSelectedIndex() + 1;
                break;
            }
            case 4: {
                int n5 = this.a.o.getSelectedIndex() + 1;
                n3 = this.a.p.getSelectedIndex() + 1;
                this.a.b.l.a(n5, n3);
                break;
            }
            case 5: {
                this.a.b.l.j = this.a.l.getSelectedIndex() + 1;
                break;
            }
            case 6: {
                this.a.b.l.h = w_0.a(this.a.d.getText());
                if (this.a.b.l.h < 0) {
                    this.a.s.setText("Invalid target score");
                    return;
                }
                this.a.b.l.g = w_0.a(this.a.e.getText());
            }
        }
        this.a.b.g("Game " + this.a.b.l.g() + " is of type '" + this.a.b.l.c + "' card: " + this.a.b.l.d + " suit: " + this.a.b.l.e + " boardCount: " + this.a.b.l.f + " cardCount: " + this.a.b.l.i + " stackCount: " + this.a.b.l.j + " score: " + this.a.b.l.h + " max moves: " + this.a.b.l.k);
        this.a.a.dispose();
        this.a.b.a(500L, "Allow dialog to close");
        qb_0 qb_02 = this.a.b.aq;
        qb_02.c(true);
    }
}

