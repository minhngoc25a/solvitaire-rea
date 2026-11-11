/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.rT
 */
final class rt_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    rt_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.d.m = 4;
        if (this.a.d.u) {
            this.a.b(7, null);
            return;
        }
        this.a.b(3, null);
    }
}

