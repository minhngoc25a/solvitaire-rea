/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.u;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.v
 */
final class v_0
implements ActionListener {
    private /* synthetic */ u a;

    v_0(u u2) {
        this.a = u2;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        int n2 = Integer.parseInt((String)(object = ((ActionEvent)object).getActionCommand()));
        if (this.a.a(this.a.c.p, n2)) {
            this.a.a();
        }
    }
}

