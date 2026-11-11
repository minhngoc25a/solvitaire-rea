/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.k_0;
import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.qT
 */
final class qt_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    qt_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        if (this.a.d.F.r == null) {
            return;
        }
        this.a.d.aD.a();
        this.a.d.F.f();
        new k_0(this.a.d, this.a.d.F.q, "Board snapshot");
    }
}

