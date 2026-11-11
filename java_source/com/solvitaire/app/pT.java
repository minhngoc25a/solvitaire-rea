/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pL;
import com.solvitaire.app.pV;
import com.solvitaire.app.qo_0;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

final class pT
extends KeyAdapter {
    private /* synthetic */ pL a;
    private final /* synthetic */ qo_0 b;

    pT(pL pL2, qo_0 qo_02) {
        this.a = pL2;
        this.b = qo_02;
    }

    @Override
    public final void keyPressed(KeyEvent keyEvent) {
        int n2 = keyEvent.getKeyCode();
        if (this.b.d <= 5) {
            this.b.g("Mainpanel keypress: " + n2);
        }
        int n3 = n2;
        pL pL2 = this.a;
        if (pL2.ag && (n3 == 32 || n3 == 27)) {
            n3 = pL2.p - 1;
            while (n3 >= 0) {
                pV pV2 = pL2.o[n3];
                if (pV2.l && pL2.B == pV2.g) {
                    pL2.a(pV2);
                    return;
                }
                --n3;
            }
        }
    }
}

