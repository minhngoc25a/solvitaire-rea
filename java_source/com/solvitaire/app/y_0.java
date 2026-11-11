/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.w_0;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

/*
 * Renamed from com.solvitaire.app.Y
 */
final class y_0
extends WindowAdapter {
    private /* synthetic */ w_0 a;

    y_0(w_0 w_02) {
        this.a = w_02;
    }

    @Override
    public final void windowClosing(WindowEvent windowEvent) {
        this.a.b();
    }
}

