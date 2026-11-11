/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.si;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

final class sm
extends KeyAdapter {
    private /* synthetic */ si a;

    sm(si si2) {
        this.a = si2;
    }

    @Override
    public final void keyPressed(KeyEvent keyEvent) {
        switch (keyEvent.getKeyCode()) {
            case 10: {
                this.a.b.g("Enter key pressed on scrollpane");
                this.a.b.aq.G.a();
                return;
            }
            case 82: {
                if (!keyEvent.isAltDown()) break;
                this.a.b.g("Alt-R pressed on scrollpane");
                this.a.b.aq.G.a();
            }
        }
    }
}

