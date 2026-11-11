/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui;

import com.solvitaire.solitaire.ui.handlers.qcHandler;
import com.solvitaire.solitaire.ui.handlers.qdHandler;
import com.solvitaire.solitaire.ui.handlers.qeHandler;
import com.solvitaire.solitaire.ui.handlers.qfHandler;
import com.solvitaire.solitaire.ui.handlers.qgHandler;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.util.t;
import java.awt.Color;
import java.awt.Component;
import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.Frame;
import java.awt.event.ActionListener;
import java.io.File;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JDialog;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.KeyStroke;
import javax.swing.border.BevelBorder;
import javax.swing.border.EmptyBorder;

final class qbFrame {
    SolitaireGameEngine AboutDialog;
    JDialog b;
    private JPanel i;
    JComboBox c;
    JComboBox d = new JComboBox();
    private JButton j = new JButton("  OK  ");
    private JButton k = new JButton("Cancel");
    JLabel e;
    int f;
    t[] g;
    int[] h;
    private Font l;
    private Color m;

    qbFrame(SolitaireGameEngine object) {
        this.AboutDialog = object;
        this.m = this.AboutDialog.b(0);
        object = new JLabel(" ").getFont();
        this.l = new Font(((Font)object).getName(), 0, ((Font)object).getSize() * 11 / 10);
        object = this.AboutDialog.aq.g;
        this.b = new JDialog((Frame)object, "Challenge PlayBack", true);
        Container container = this.b.getContentPane();
        this.b.setDefaultCloseOperation(2);
        if (!this.AboutDialog.uPanel) {
            this.AboutDialog.l.AboutDialog();
        }
        JPanel jPanel = new JPanel(new FlowLayout(0));
        jPanel.setBackground(this.m);
        jPanel.setBorder(new EmptyBorder(20, 20, 20, 20));
        this.e = new JLabel(this.AboutDialog.l.p + "        ");
        jPanel.add(this.e);
        JButton jButton = new JButton("Change directory");
        jPanel.add(jButton);
        container.add((Component)jPanel, "North");
        this.i = new JPanel();
        this.i.setBackground(this.m);
        jPanel = new JPanel();
        jPanel.setBackground(this.m);
        jPanel.setBorder(new BevelBorder(1));
        container.add((Component)jPanel, "Center");
        jPanel.setLayout(new BoxLayout(jPanel, 1));
        jPanel.add(Box.createVerticalGlue());
        jPanel.add(this.i);
        jPanel.add(Box.createVerticalGlue());
        this.b();
        this.c();
        jPanel = new JPanel();
        jPanel.setBackground(this.m);
        jPanel.setBorder(new EmptyBorder(10, 10, 10, 10));
        jPanel.add(this.j);
        this.j.setFont(this.l);
        jPanel.add(new JLabel("    "));
        jPanel.add(this.k);
        this.k.setFont(this.l);
        container.add((Component)jPanel, "South");
        this.b.getRootPane().setDefaultButton(this.j);
        jButton.addActionListener(new qcHandler(this, (JFrame)object));
        this.c.addActionListener(new qdHandler(this));
        this.j.addActionListener(new qeHandler(this));
        this.k.addActionListener(new qfHandler(this));
        object = new qgHandler(this);
        this.b.getRootPane().registerKeyboardAction((ActionListener)object, KeyStroke.getKeyStroke(27, 0), 2);
        int n2 = this.AboutDialog.AboutDialog((double)(this.AboutDialog.CHandler.xHandler + this.AboutDialog.CHandler.width / 2)) - 700 / 2;
        int n3 = this.AboutDialog.b((double)(this.AboutDialog.CHandler.yHandler + this.AboutDialog.CHandler.height / 2)) - 400 / 2;
        this.b.setLocation(n2, n3);
        this.b.setSize(700, 400);
        this.b.setVisible(true);
    }

    final void AboutDialog() {
        this.b.setVisible(false);
        this.b.dispose();
    }

    final void b() {
        this.i.removeAll();
        JLabel jLabel = new JLabel("Playback challenge ");
        jLabel.setFont(this.l);
        this.i.add(jLabel);
        this.g = new t[100];
        this.h = new int[100];
        this.c = new JComboBox<String>(qbFrame.AboutDialog(this.AboutDialog, this.g, this.h));
        this.i.add(this.c);
        this.c.setFont(this.l);
        this.c.setMaximumRowCount(100);
        jLabel = new JLabel(" board ");
        jLabel.setFont(this.l);
        this.i.add(new JLabel(" board "));
        this.i.add(this.d);
        this.d.setMaximumRowCount(20);
        this.d.setFont(this.l);
    }

    final void c() {
        if (this.c.getItemCount() > 0) {
            this.c.setSelectedIndex(0);
            this.d();
        }
    }

    final void d() {
        this.d.removeAllItems();
        if (this.c.getItemCount() > 0) {
            this.f = this.h[this.c.getSelectedIndex()];
            int n2 = this.g[this.f].h();
            int n3 = 0;
            while (n3 <= n2) {
                this.d.addItem("" + (n3 + 1));
                ++n3;
            }
            if (this.d.getItemCount() > 0) {
                this.d.setSelectedIndex(0);
            }
        }
    }

    static String[] AboutDialog(SolitaireGameEngine qo_02, t[] tArray, int[] nArray) {
        SolitaireGameEngine qo_03;
        Object object;
        if (tArray.length != 100) {
            object = "Info must be 100 entries";
            qo_03 = qo_02;
            qo_03.AboutDialog((String)object, false);
        }
        String[] stringArray = new File(qo_02.l.p);
        if ((stringArray = stringArray.list()) == null) {
            SolitaireGameEngine qo_04 = qo_02;
            object = "Could not choose game from directory:" + qo_04.l.p;
            qo_03 = qo_04;
            qo_04.AboutDialog((String)object, false);
        }
        int n2 = 0;
        String[] stringArray2 = stringArray;
        int n3 = stringArray.length;
        int n4 = 0;
        while (n4 < n3) {
            int n5;
            String string = stringArray2[n4];
            if (string.startsWith("solution_cards") && (n5 = string.length()) >= 12) {
                t t2 = new t(qo_02, 4);
                t2.AboutDialog(qo_02.l.p, true);
                t2.b(string);
                if (t2.rPanel) {
                    int n6 = t2.g();
                    int n7 = t2.h();
                    if (n6 < 100) {
                        if (tArray[n6] == null) {
                            tArray[n6] = t2;
                            ++n2;
                        } else if (n7 > tArray[n6].h()) {
                            tArray[n6] = t2;
                        }
                    }
                }
            }
            ++n4;
        }
        String[] stringArray3 = new String[n2];
        n4 = 0;
        n3 = 0;
        while (n3 < 100) {
            if (tArray[n3] != null) {
                nArray[n4] = n3;
                stringArray3[n4] = tArray[n3].k();
                ++n4;
            }
            ++n3;
        }
        return stringArray3;
    }
}

