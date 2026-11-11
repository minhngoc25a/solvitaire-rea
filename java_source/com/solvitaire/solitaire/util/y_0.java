/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.w_0Frame;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

/*
 * Renamed from com.solvitaire.app.Y
 */
public final class y_0
extends WindowAdapter {
    private /* synthetic */ w_0Frame AboutDialog;

    y_0(w_0Frame w_02) {
        this.AboutDialog = w_02;
    }

    @Override
    public final void windowClosing(WindowEvent windowEvent) {
        this.AboutDialog.b();
    }
}

