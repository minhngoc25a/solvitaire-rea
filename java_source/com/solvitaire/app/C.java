/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.F;
import com.solvitaire.app.u;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

final class C
implements ActionListener {
    private /* synthetic */ u a;

    C(u u2) {
        this.a = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent serializable) {
        serializable = this.a.d;
        ((F)serializable).k.a(false, true);
        ((F)serializable).a();
        this.a.b();
        this.a.d.repaint();
    }
}

