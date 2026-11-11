/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class qe
implements ActionListener {
    private /* synthetic */ qb a;

    qe(qb qb2) {
        this.a = qb2;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        int n2 = this.a.c.getSelectedIndex();
        if (n2 >= 0) {
            this.a.f = this.a.h[this.a.c.getSelectedIndex()];
            n2 = this.a.d.getSelectedIndex();
            this.a.a.l = this.a.g[this.a.f];
            n2 = this.a.a.l.g() * 100 + n2;
            this.a.a.l.a(n2, false);
            this.a.a.m = 4;
            this.a.a.aq.a(2);
            if (this.a.a.d <= 5) {
                this.a.a.g("Choosefile playback requesting restart");
            }
            this.a.b.setVisible(false);
            this.a.b.dispose();
            this.a.a.c(3);
        }
    }
}

