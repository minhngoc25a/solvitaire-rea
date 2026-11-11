/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.g;
import com.solvitaire.app.pL;
import com.solvitaire.app.qb_0;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

final class rj
extends WindowAdapter {
    private /* synthetic */ qb_0 a;

    rj(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void windowClosing(WindowEvent windowEvent) {
        if (this.a.d.d <= 5) {
            this.a.d.g("Status window being closed");
        }
        this.a.d.l();
        this.a.d.a(100L, "Shutdown1");
        this.a.d.ai = true;
        this.a.d.a(250L, "Shutdown2");
        System.exit(0);
    }

    @Override
    public final void windowStateChanged(WindowEvent object) {
        if (this.a.d.d <= 5) {
            this.a.d.g("Window state changed");
        }
        if (this.a.d.u && this.a.d.ar != null) {
            object = this.a.d.ar;
            if (((g)object).k.d <= 5) {
                ((g)object).k.g("Into moveAndLayout");
            }
            ((pL)object).ad.revalidate();
            ((pL)object).ad.repaint();
        }
        if (this.a.e != null) {
            this.a.e.b();
        }
    }
}

