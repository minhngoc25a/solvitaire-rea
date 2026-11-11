/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pL;
import com.solvitaire.app.r;
import java.awt.Component;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

final class pR
extends KeyAdapter {
    private /* synthetic */ pL a;

    pR(pL pL2) {
        this.a = pL2;
    }

    @Override
    public final void keyPressed(KeyEvent serializable) {
        int n2 = ((KeyEvent)serializable).getKeyCode();
        serializable = this.a.z;
        switch (n2) {
            case 39: {
                ((r)serializable).b.g("Move focus to right");
                ((r)serializable).a();
                ((Component)serializable).repaint();
                return;
            }
            case 37: {
                ((r)serializable).b.g("Move focus to left");
                ((r)serializable).b();
                ((Component)serializable).repaint();
                return;
            }
            case 32: {
                ((r)serializable).b.g("Enter key in card pane");
                ((r)serializable).b(false);
                return;
            }
            case 10: {
                ((r)serializable).b.g("Enter key in card pane");
                if (((r)serializable).b(true)) break;
                ((r)serializable).a.d();
            }
        }
    }
}

