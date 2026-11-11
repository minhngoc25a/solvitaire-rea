/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class qX
implements ActionListener {
    private /* synthetic */ qb_0 a;

    qX(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.d.a();
        this.a.d.F.e();
        this.a.d.b(2, "IdentifyClose");
        if (this.a.d.F.j() != null) {
            this.a.c("Test Dialog", "Found close button");
        } else {
            this.a.c("Test Dialog", "Did not find close button");
        }
        this.a.d.n();
    }
}

