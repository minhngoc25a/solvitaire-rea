/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.engine.SolitaireGameEngine;

public final class pI
implements Runnable {
    private final /* synthetic */ SolitaireGameEngine AboutDialog;

    pI(SolitaireGameEngine qo_02) {
        this.AboutDialog = qo_02;
    }

    @Override
    public final void run() {
        this.AboutDialog.aq.g.toFront();
    }
}

