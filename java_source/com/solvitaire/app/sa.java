/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.Color;
import java.awt.Dimension;
import javax.swing.BorderFactory;
import javax.swing.JPanel;

final class sa
extends JPanel {
    private int a;
    private /* synthetic */ qb_0 b;

    sa(qb_0 qb_02, int n2, int n3) {
        this.b = qb_02;
        this.setMaximumSize(new Dimension(n2, n3));
        this.setPreferredSize(new Dimension(n2, n3));
        this.setOpaque(false);
    }

    final void a(int n2, boolean bl2) {
        if (bl2) {
            n2 = 0;
        }
        if (n2 == this.a) {
            return;
        }
        switch (n2) {
            case 0: {
                this.setBorder(BorderFactory.createEmptyBorder());
                this.setOpaque(false);
                break;
            }
            case 2: {
                this.setOpaque(true);
                this.setBackground(qb_0.b);
                this.setBorder(BorderFactory.createBevelBorder(1));
                break;
            }
            case 3: {
                this.setOpaque(true);
                this.setBackground(qb_0.a);
                this.setBorder(BorderFactory.createBevelBorder(1));
                break;
            }
            case 4: {
                this.setOpaque(true);
                this.setBackground(qb_0.c);
                this.setBorder(BorderFactory.createBevelBorder(1));
                break;
            }
            case 1: {
                this.setOpaque(true);
                this.setBackground(Color.LIGHT_GRAY);
                this.setBorder(BorderFactory.createBevelBorder(1));
            }
        }
        this.a = n2;
    }
}

