/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pL;
import com.solvitaire.app.qo_0;
import java.awt.event.FocusAdapter;
import java.awt.event.FocusEvent;

final class pS
extends FocusAdapter {
    private /* synthetic */ pL a;
    private final /* synthetic */ qo_0 b;

    pS(pL pL2, qo_0 qo_02) {
        this.a = pL2;
        this.b = qo_02;
    }

    @Override
    public final void focusGained(FocusEvent focusEvent) {
        if (this.b.d <= 5) {
            this.b.g("Cardpanel gained focus");
        }
        this.a.z.a(true);
    }

    @Override
    public final void focusLost(FocusEvent focusEvent) {
        if (this.b.d <= 5) {
            this.b.g("Cardpanel lost focus");
        }
        this.a.z.a(false);
    }
}

