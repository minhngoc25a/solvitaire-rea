/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.qU
 */
final class qu_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    qu_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.d.aD.a();
        this.a.d.a(500L);
        this.a.d.aD.a("tabRect", false);
    }
}

