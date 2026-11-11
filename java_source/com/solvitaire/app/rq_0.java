/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.rQ
 */
final class rq_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    rq_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        if (this.a.d.ar.ah) {
            this.a.d.ar.ah = false;
            this.a.J.setIcon(this.a.N);
        } else {
            this.a.d.ar.ah = true;
            this.a.J.setIcon(this.a.O);
        }
        this.a.A.repaint();
    }
}

