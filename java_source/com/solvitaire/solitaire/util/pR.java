/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.panels.pLPanel;
import com.solvitaire.solitaire.ui.panels.rPanel;
import java.awt.Component;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

public final class pR
extends KeyAdapter {
    private /* synthetic */ pLPanel AboutDialog;

    pR(pLPanel pL2) {
        this.AboutDialog = pL2;
    }

    @Override
    public final void keyPressed(KeyEvent serializable) {
        int n2 = ((KeyEvent)serializable).getKeyCode();
        serializable = this.AboutDialog.z;
        switch (n2) {
            case 39: {
                ((rPanel)serializable).b.g("Move focus to right");
                ((rPanel)serializable).AboutDialog();
                ((Component)serializable).repaint();
                return;
            }
            case 37: {
                ((rPanel)serializable).b.g("Move focus to left");
                ((rPanel)serializable).b();
                ((Component)serializable).repaint();
                return;
            }
            case 32: {
                ((rPanel)serializable).b.g("Enter key in card pane");
                ((rPanel)serializable).b(false);
                return;
            }
            case 10: {
                ((rPanel)serializable).b.g("Enter key in card pane");
                if (((rPanel)serializable).b(true)) break;
                ((rPanel)serializable).AboutDialog.d();
            }
        }
    }
}

