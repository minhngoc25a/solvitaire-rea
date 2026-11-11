/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import com.solvitaire.app.w_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.rS
 */
final class rs_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    rs_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.d.m = 3;
        if (this.a.d.u) {
            int n2 = 0;
            if (!this.a.d.ao.f()) {
                n2 = 4;
            }
            if (this.a.d.ao.a(this.a.d.aY, true, 0, 0) != 0) {
                n2 |= 8;
                n2 |= 0x10;
            }
            if (this.a.d.ao.b(this.a.d.aY, true) != 0) {
                n2 |= 0x20;
            }
            if (this.a.d.ao.a(this.a.d.aY, true) != 0) {
                n2 |= 0x40;
            }
            new w_0(this.a.d, false, n2);
            return;
        }
        this.a.d.l.r = false;
        this.a.d.l.a();
        new w_0(this.a.d, true, 0);
    }
}

