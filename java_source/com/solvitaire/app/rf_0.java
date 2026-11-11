/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ComponentAdapter;
import java.awt.event.ComponentEvent;

/*
 * Renamed from com.solvitaire.app.rF
 */
final class rf_0
extends ComponentAdapter {
    private /* synthetic */ qb_0 a;

    rf_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void componentShown(ComponentEvent componentEvent) {
        if (this.a.d.d <= 5) {
            this.a.d.g("componentShown triggered for status window frame");
        }
        this.a.b();
    }

    @Override
    public final void componentMoved(ComponentEvent componentEvent) {
        if (this.a.d.d <= 5) {
            this.a.d.g("componentMoved triggered for status window frame");
        }
        this.a.b();
    }

    @Override
    public final void componentResized(ComponentEvent componentEvent) {
        if (this.a.d.d <= 5) {
            this.a.d.g("componentResized triggered for status window frame");
        }
        this.a.b();
    }
}

