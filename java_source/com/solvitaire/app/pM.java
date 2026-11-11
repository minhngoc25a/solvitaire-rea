/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pL;
import java.awt.event.FocusAdapter;
import java.awt.event.FocusEvent;

final class pM
extends FocusAdapter {
    private /* synthetic */ pL a;

    pM(pL pL2) {
        this.a = pL2;
    }

    @Override
    public final void focusGained(FocusEvent focusEvent) {
        if (this.a.k.d <= 5) {
            this.a.k.g("mainPanel gained focus");
        }
        this.a.ae.a(true);
    }

    @Override
    public final void focusLost(FocusEvent focusEvent) {
        if (this.a.k.d <= 5) {
            this.a.k.g("mainPanel lost focus");
        }
        this.a.ae.a(false);
    }
}

