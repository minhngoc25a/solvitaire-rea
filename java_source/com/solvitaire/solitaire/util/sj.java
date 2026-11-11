/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.si;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public final class sj
extends WindowAdapter {
    private /* synthetic */ si AboutDialog;

    sj(si si2) {
        this.AboutDialog = si2;
    }

    @Override
    public final void windowClosing(WindowEvent windowEvent) {
        this.AboutDialog.b.g("Step dialog window being closed");
        this.AboutDialog.b.aq.e = null;
        super.windowClosing(windowEvent);
    }
}

