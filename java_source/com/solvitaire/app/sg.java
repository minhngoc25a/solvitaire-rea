/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import javax.swing.JButton;

final class sg
extends JButton {
    private /* synthetic */ qb_0 a;

    sg(qb_0 qb_02) {
        this.a = qb_02;
    }

    final void a() {
        if (this.a.d.y) {
            if (this.a.d.z) {
                this.a.d.g("Terminate set so start button triggering system exit");
                System.exit(0);
                return;
            }
            this.a.d.g("Error trace has triggered full reset after start button");
            this.a.d.c(14);
            return;
        }
        boolean bl2 = true;
        if (this.a.d.ar != null) {
            bl2 = this.a.d.ar.g();
        }
        if (bl2) {
            this.a.d.aR = false;
            qb_0 qb_02 = this.a;
            qb_02.c(true);
        }
        this.a.G.setEnabled(false);
        this.a.F.setEnabled(false);
        this.a.H.setEnabled(true);
        this.a.H.setFocusable(true);
        this.a.I.setEnabled(false);
    }
}

