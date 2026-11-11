/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.si;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

final class sj
extends WindowAdapter {
    private /* synthetic */ si a;

    sj(si si2) {
        this.a = si2;
    }

    @Override
    public final void windowClosing(WindowEvent windowEvent) {
        this.a.b.g("Step dialog window being closed");
        this.a.b.aq.e = null;
        super.windowClosing(windowEvent);
    }
}

