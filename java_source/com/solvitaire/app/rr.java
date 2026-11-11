/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class rr
implements ActionListener {
    private /* synthetic */ qb_0 a;

    rr(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        int n2 = 0;
        while (n2 < 8) {
            this.a.d.g("=== Game mode " + n2 + " Easy");
            this.a.d.bq.a(this.a.d, n2, "Easy");
            this.a.d.g("=== Game mode " + n2 + " Moderate");
            this.a.d.bq.a(this.a.d, n2, "Moderate");
            this.a.d.g("=== Game mode " + n2 + " Hard");
            this.a.d.bq.a(this.a.d, n2, "Hard");
            this.a.d.g("=== Game mode " + n2 + " Unknown");
            this.a.d.bq.a(this.a.d, n2, "Unknown");
            ++n2;
        }
    }
}

