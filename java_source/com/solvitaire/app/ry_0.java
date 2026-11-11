/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.rY
 */
final class ry_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    ry_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        if (this.a.d.u) {
            this.a.d.ar.i();
            return;
        }
        this.a.d.F.l();
    }
}

