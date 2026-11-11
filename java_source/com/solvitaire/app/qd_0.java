/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.qD
 */
final class qd_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    qd_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        if (this.a.d.d <= 5) {
            this.a.d.g("Got start action event");
        }
        if (this.a.d.ar == null || !this.a.d.ar.d()) {
            this.a.G.a();
        }
    }
}

