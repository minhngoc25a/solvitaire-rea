/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.e_0;
import com.solvitaire.app.pJ;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.sj;
import com.solvitaire.app.sk;
import com.solvitaire.app.sl;
import com.solvitaire.app.sm;
import com.solvitaire.app.sn;
import java.awt.Component;
import java.awt.Container;
import java.awt.Dimension;
import java.awt.EventQueue;
import java.awt.Frame;
import java.awt.Point;
import java.awt.event.KeyListener;
import javax.swing.JDialog;
import javax.swing.JLabel;
import javax.swing.JList;
import javax.swing.JMenuItem;
import javax.swing.JPopupMenu;
import javax.swing.JScrollPane;
import javax.swing.border.EmptyBorder;

public final class si {
    private JDialog f;
    Container a;
    qo_0 b;
    JList c;
    int[] d;
    private int g;
    int e = 0;
    private Point h = new Point();

    si(qo_0 qo_02) {
        this.b = qo_02;
    }

    final void a() {
        if (this.f != null) {
            if (this.b.d <= 4) {
                this.b.g("Expunging step dialog");
            }
            this.f.setVisible(false);
            this.f.dispose();
            this.f = null;
            this.a = null;
            return;
        }
        if (this.b.d <= 4) {
            this.b.g("Emptying step dialog");
        }
        si si2 = this;
        si2.a(si2.b, new int[0], 0, 0, false);
    }

    final void a(String object, int[] object2, int n2, int n3, int n4, boolean bl2) {
        Container container;
        if (this.a == null) {
            if (this.b.u) {
                return;
            }
            container = this.b.aq.g;
            container.setFocusable(true);
            this.f = new JDialog((Frame)container, (String)object);
            this.f.setDefaultCloseOperation(2);
            this.f.addWindowListener(new sj(this));
            this.a = this.f.getContentPane();
        }
        this.a.removeAll();
        container = new JLabel((String)object);
        container.setBorder(new EmptyBorder(2, 10, 2, 0));
        this.a.add((Component)container, "First");
        si si2 = this;
        si2.a(si2.b, (int[])object2, n2, n3, bl2);
        this.c.setSelectedIndex(n4);
        this.c.ensureIndexIsVisible(n4);
        object = new JPopupMenu();
        JMenuItem jMenuItem = new JMenuItem("Select all");
        object2 = jMenuItem;
        jMenuItem.addActionListener(new sk(this));
        JMenuItem jMenuItem2 = new JMenuItem("Copy");
        jMenuItem2.addActionListener(new sl(this));
        ((JPopupMenu)object).add((JMenuItem)object2);
        ((JPopupMenu)object).add(jMenuItem2);
        this.c.setComponentPopupMenu((JPopupMenu)object);
        object = new JScrollPane(this.c);
        ((JScrollPane)object).getViewport().getView().setBackground(this.b.b(0));
        this.a.add((Component)object, "Center");
        object2 = new sm(this);
        ((Component)object).addKeyListener((KeyListener)object2);
        this.c.addKeyListener((KeyListener)object2);
        this.b();
    }

    private void a(qo_0 object, int[] nArray, int n2, int n3, boolean bl2) {
        String[] stringArray = pJ.a(((qo_0)object).ap, nArray, n2, n3, bl2);
        e_0 cfr_ignored_0 = ((qo_0)object).ap;
        this.d = pJ.a(nArray, n2, n3, bl2);
        this.g = stringArray.length;
        object = this;
        synchronized (object) {
            if (this.c == null) {
                this.c = new JList<String>(stringArray);
            } else {
                this.c.setListData(stringArray);
            }
            return;
        }
    }

    final void b() {
        if (this.b.u) {
            if (this.b.ar != null && this.a != null) {
                Dimension dimension = new Dimension(230, 4000);
                this.a.setPreferredSize(dimension);
                this.a.setMaximumSize(dimension);
                this.b.ar.ad.revalidate();
                this.b.ar.ad.repaint();
                return;
            }
        } else if (this.f != null) {
            int n2 = this.b.aq.j;
            int n3 = this.b.b((double)this.b.C.height) - this.b.aq.k;
            int n4 = this.b.aq.h;
            int n5 = this.b.aq.i + this.b.aq.k - this.b.b((double)this.b.J);
            this.f.setLocation(n4, n5);
            this.f.setSize(n2, n3);
            this.f.setVisible(true);
        }
    }

    final void a(int n2) {
        EventQueue.invokeLater(new sn(this, n2));
    }

    final int c() {
        int[] nArray = this.c.getSelectedIndices();
        if (nArray.length == 1) {
            if (this.b.d <= 1) {
                this.b.g("Selected is currently " + nArray[0]);
            }
            return nArray[0];
        }
        if (this.b.d <= 5) {
            this.b.g("Selected indices length is " + nArray.length + " so returning -1");
        }
        return -1;
    }

    final void b(int n2) {
        if (n2 < 0) {
            if (this.b.d <= 4) {
                this.b.g("Clearing step dialog selection");
            }
            this.c.clearSelection();
        } else {
            if (this.b.d <= 4) {
                this.b.g("Setting selected in list to " + n2);
            }
            int n3 = n2;
            this.c.setSelectionInterval(n3, n3);
        }
        int n4 = this.c.getLastVisibleIndex();
        n4 = (int)((double)(n4 - this.c.getFirstVisibleIndex()) * 0.8);
        int n5 = this.c.getLastVisibleIndex() - n2;
        if (n5 < n4 && (n2 = n2 + n4 - 1) > this.g - 1) {
            n2 = this.g - 1;
        }
        this.c.ensureIndexIsVisible(n2);
    }
}

