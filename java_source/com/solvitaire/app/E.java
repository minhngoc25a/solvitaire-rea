/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.F;
import com.solvitaire.app.u;
import com.solvitaire.app.u_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class E
implements ActionListener {
    private /* synthetic */ u a;

    E(u u2) {
        this.a = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent serializable) {
        if (this.a.a("", "Are you sure")) {
            this.a.c.p = new byte[52][][];
            serializable = this.a.d;
            this.a.d.i = -1;
            ((F)serializable).e = new u_0();
            ((F)serializable).h = new u_0();
            ((F)serializable).f = new u_0();
            ((F)serializable).g = new u_0();
            ((F)serializable).a();
        }
        this.a.b();
    }
}

