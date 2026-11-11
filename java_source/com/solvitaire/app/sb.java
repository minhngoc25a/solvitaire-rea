/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import com.solvitaire.app.sf;
import java.awt.Component;
import java.awt.Container;
import java.awt.Dimension;
import java.awt.Insets;
import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JComponent;
import javax.swing.JPanel;
import javax.swing.border.Border;
import javax.swing.border.TitledBorder;

final class sb {
    private int a;
    private JPanel b;
    private sf c;
    private double d;
    private String e;
    private String f;
    private JPanel g;
    private TitledBorder h;
    private String[] i = new String[]{"5 minutes", "10 minutes", "20 minutes", "30 minutes", "1 hour", "2 hours", "24 hours", "1 week"};
    private long[] j = new long[]{300L, 600L, 1200L, 1800L, 3600L, 7200L, 86400L, 604800L};
    private String[] k = new String[]{"100", "1000", "10K", "100K", "1Meg", "10Meg", "100Meg", "1Gig", "10 Gig", "100 Gig"};
    private long[] l = new long[]{100L, 1000L, 10000L, 100000L, 1000000L, 10000000L, 100000000L, 1000000000L, 10000000000L, 1000000000000L};
    private String[] m = new String[]{"20", "30", "40", "50", "75", "100", "125", "150", "175", "200", "225"};
    private long[] n = new long[]{20L, 30L, 40L, 50L, 75L, 100L, 125L, 150L, 175L, 200L, 225L};
    private String[] o = new String[]{"150", "200", "250", "300", "350"};
    private long[] p = new long[]{150L, 200L, 250L, 300L, 350L};
    private /* synthetic */ qb_0 q;

    sb(qb_0 qb_02, int n2, JPanel serializable, int n3, String object) {
        this.q = qb_02;
        this.g = serializable;
        this.a = n2;
        this.e = object;
        sb sb2 = this;
        object = new JPanel();
        ((JComponent)object).setOpaque(false);
        ((Container)object).setLayout(new BoxLayout((Container)object, 1));
        Object object2 = BorderFactory.createEmptyBorder();
        sb2.h = BorderFactory.createTitledBorder((Border)object2, sb2.e, 4, 2, sb2.q.f);
        ((JComponent)object).setBorder(sb2.h);
        object2 = new Dimension(n3, 30);
        ((JComponent)object).setPreferredSize((Dimension)object2);
        ((JComponent)object).setMaximumSize((Dimension)object2);
        ((JComponent)object).setMinimumSize((Dimension)object2);
        serializable.add((Component)object);
        sb2.b = new JPanel();
        sb2.b.setLayout(new BoxLayout(sb2.b, 0));
        serializable = new Dimension(n3, 9);
        sb2.b.setPreferredSize((Dimension)serializable);
        sb2.b.setMinimumSize((Dimension)serializable);
        sb2.b.setMaximumSize((Dimension)serializable);
        sb2.b.setBorder(BorderFactory.createBevelBorder(1));
        ((Container)object).add(Box.createVerticalGlue());
        ((Container)object).add(sb2.b);
        ((Container)object).add(Box.createVerticalGlue());
        this.c = new sf(qb_02, this.b, this.a);
        this.b.add(this.c);
    }

    final void a() {
        this.d = 0.0;
        this.a(0.0, 0.0, 0.0);
    }

    private void a(double d2, long[] lArray, String[] stringArray) {
        int n2 = 0;
        while (n2 < lArray.length) {
            if (d2 < (double)lArray[n2]) {
                this.d = lArray[n2];
                this.f = this.e + " / " + stringArray[n2];
                break;
            }
            ++n2;
        }
        this.h.setTitle(this.f);
        this.g.invalidate();
        this.g.repaint();
    }

    private int a(double d2, int n2) {
        int n3 = (int)(d2 * (double)n2 / this.d);
        if (n3 > n2) {
            n3 = n2;
        }
        return n3;
    }

    final void a(double d2, double d3, double d4) {
        Dimension dimension = this.b.getSize();
        Insets insets = this.b.getInsets();
        int n2 = dimension.width - insets.left - insets.right;
        int n3 = dimension.height - insets.top - insets.bottom;
        if (n2 != this.c.a || n3 != this.c.b) {
            this.c.setSize(new Dimension(n2, n3));
            this.c.a = n2;
            this.c.b = n3;
            this.g.invalidate();
            this.g.repaint();
        }
        switch (this.a) {
            case 1: {
                if (d2 / 1000.0 >= this.d) {
                    this.a(d2 / 1000.0, this.j, this.i);
                }
                int n4 = this.a(d2 / 1000.0, n2);
                this.c.a(n4, 0, 0);
                break;
            }
            case 2: {
                if (d2 >= this.d) {
                    this.a(d2, this.l, this.k);
                }
                int n5 = this.a(d2, n2);
                this.c.a(n5, 0, 0);
                break;
            }
            case 4: {
                if (d2 >= this.d) {
                    this.a(d2, this.p, this.o);
                }
                if (d3 >= this.d) {
                    this.a(d3, this.p, this.o);
                }
                int n6 = this.a(d2, n2);
                int n7 = this.a(d3, n2);
                this.c.a(n6, n7, 0);
                break;
            }
            case 3: {
                if (d2 >= this.d) {
                    this.a(d2, this.n, this.m);
                }
                if (d3 >= this.d) {
                    this.a(d3, this.n, this.m);
                }
                int n8 = this.a(d2, n2);
                int n9 = this.a(d3, n2);
                int n10 = this.a(d4, n2);
                this.c.a(n8, n9, n10);
            }
        }
        this.c.repaint();
    }
}

