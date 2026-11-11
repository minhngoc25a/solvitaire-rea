/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

final class ru
extends WindowAdapter {
    private /* synthetic */ qb_0 a;

    ru(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void windowGainedFocus(WindowEvent windowEvent) {
        if (this.a.d.u && this.a.d.br != null && this.a.d.br.j != null) {
            this.a.d.br.j.a(this.a.d, true);
        }
    }

    @Override
    public final void windowLostFocus(WindowEvent windowEvent) {
        if (this.a.d.u && this.a.d.br != null && this.a.d.br.j != null) {
            this.a.d.br.j.a(this.a.d, false);
        }
    }
}

