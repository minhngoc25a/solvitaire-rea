/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.al_0;
import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.qV
 */
final class qv_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    qv_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        if (this.a.d.F == null || this.a.d.F.A == null) {
            this.a.d.g("No previous capture has set last dialog rect");
            return;
        }
        this.a.d.a(500L);
        object = this.a.d.a(this.a.d.F.A, "FindDialog");
        ((al_0)object).a("dialogImg", false);
    }
}

