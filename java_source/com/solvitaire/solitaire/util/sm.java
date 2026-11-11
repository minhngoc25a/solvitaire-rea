/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.si;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

public final class sm
extends KeyAdapter {
    private /* synthetic */ si AboutDialog;

    sm(si si2) {
        this.AboutDialog = si2;
    }

    @Override
    public final void keyPressed(KeyEvent keyEvent) {
        switch (keyEvent.getKeyCode()) {
            case 10: {
                this.AboutDialog.b.g("Enter key pressed on scrollpane");
                this.AboutDialog.b.aq.G.AboutDialog();
                return;
            }
            case 82: {
                if (!keyEvent.isAltDown()) break;
                this.AboutDialog.b.g("Alt-R pressed on scrollpane");
                this.AboutDialog.b.aq.G.AboutDialog();
            }
        }
    }
}

