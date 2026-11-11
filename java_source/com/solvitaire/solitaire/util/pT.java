/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.panels.pLPanel;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

public final class pT
extends KeyAdapter {
    private /* synthetic */ pLPanel AboutDialog;
    private final /* synthetic */ SolitaireGameEngine b;

    pT(pLPanel pL2, SolitaireGameEngine qo_02) {
        this.AboutDialog = pL2;
        this.b = qo_02;
    }

    @Override
    public final void keyPressed(KeyEvent keyEvent) {
        int n2 = keyEvent.getKeyCode();
        if (this.b.d <= 5) {
            this.b.g("Mainpanel keypress: " + n2);
        }
        int n3 = n2;
        pLPanel pL2 = this.AboutDialog;
        if (pL2.ag && (n3 == 32 || n3 == 27)) {
            n3 = pL2.p - 1;
            while (n3 >= 0) {
                CardImage pV2 = pL2.o[n3];
                if (pV2.l && pL2.B == pV2.g) {
                    pL2.AboutDialog(pV2);
                    return;
                }
                --n3;
            }
        }
    }
}

