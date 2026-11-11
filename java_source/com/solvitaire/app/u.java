/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.C;
import com.solvitaire.app.D;
import com.solvitaire.app.E;
import com.solvitaire.app.F;
import com.solvitaire.app.a_0;
import com.solvitaire.app.b_0;
import com.solvitaire.app.k_0;
import com.solvitaire.app.pF;
import com.solvitaire.app.pX;
import com.solvitaire.app.pY;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qv;
import com.solvitaire.app.s_0;
import com.solvitaire.app.v_0;
import com.solvitaire.app.w;
import com.solvitaire.app.x;
import com.solvitaire.app.y;
import com.solvitaire.app.z;
import java.awt.Color;
import java.awt.Component;
import java.awt.Container;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.Frame;
import java.awt.Point;
import java.io.File;
import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JComponent;
import javax.swing.JDialog;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JToggleButton;

public final class u {
    private JDialog j;
    private JPanel k;
    qo_0 a;
    pF b;
    pX c;
    F d;
    private JToggleButton l = new JToggleButton("Show mask");
    private JToggleButton m = new JToggleButton("Show match");
    private JButton n = new JButton("Generate mask");
    private JButton o = new JButton("OK");
    private JButton p = new JButton("Cancel");
    private JButton q = new JButton("<");
    private JButton r = new JButton(">");
    private JButton s = new JButton("^");
    private JButton t = new JButton("v");
    int e;
    int f;
    private JButton u = new JButton("<");
    private JButton v = new JButton(">");
    private JButton w = new JButton("^");
    private JButton x = new JButton("v");
    private JButton y = new JButton("-<");
    private JButton z = new JButton("+>");
    private JButton A = new JButton("-^");
    private JButton B = new JButton("+v");
    private JButton[] C = new JButton[]{new JButton("A"), new JButton("2"), new JButton("3"), new JButton("4"), new JButton("5"), new JButton("6"), new JButton("7"), new JButton("8"), new JButton("9"), new JButton("T"), new JButton("J"), new JButton("Q"), new JButton("K"), new JButton("A"), new JButton("2"), new JButton("3"), new JButton("4"), new JButton("5"), new JButton("6"), new JButton("7"), new JButton("8"), new JButton("9"), new JButton("T"), new JButton("J"), new JButton("Q"), new JButton("K"), new JButton("A"), new JButton("2"), new JButton("3"), new JButton("4"), new JButton("5"), new JButton("6"), new JButton("7"), new JButton("8"), new JButton("9"), new JButton("T"), new JButton("J"), new JButton("Q"), new JButton("K"), new JButton("A"), new JButton("2"), new JButton("3"), new JButton("4"), new JButton("5"), new JButton("6"), new JButton("7"), new JButton("8"), new JButton("9"), new JButton("T"), new JButton("J"), new JButton("Q"), new JButton("K")};
    private JButton D = new JButton("Clear the font");
    private JButton E = new JButton("Write template to file");
    private JTextArea F = new JTextArea(" No score yet ");
    private JLabel G;
    private boolean H = true;
    pY g = null;
    s_0 h = null;
    int i = 10;
    private boolean I;
    private v_0 J = new v_0(this);
    private x K = new x(this);
    private y L = new y(this);
    private z M = new z(this);
    private static Object[] N = new Object[]{"  OK  "};
    private static Object[] O = new Object[]{"  Yes  ", "  No  "};

    static {
        Object[] objectArray = new Object[]{"  OK  ", "Cancel"};
    }

    u(qo_0 object, qv object2, int n2, Point serializable, boolean bl2) {
        this.a = object;
        this.b = this.a.F;
        this.I = bl2;
        if (this.a.bu.c == null) {
            this.a("Font has not been identified");
            return;
        }
        this.c = this.a.bu.c;
        object = this.a.aq.g;
        this.j = new JDialog((Frame)object, "Capture Character");
        object = this.j.getContentPane();
        this.k = new JPanel();
        this.k.setLayout(new BoxLayout(this.k, 0));
        object.add(this.k);
        u u2 = this;
        this.d = new F(u2, u2.c, (qv)object2, n2, (Point)serializable, bl2);
        this.d.a();
        this.d.addMouseListener(this.M);
        this.k.add(Box.createHorizontalStrut(10));
        this.k.add(this.d);
        object = new JPanel();
        object.setLayout(new BoxLayout((Container)object, 1));
        this.k.add(Box.createHorizontalStrut(10));
        this.k.add((Component)object);
        object2 = new JPanel();
        ((Container)object2).setLayout(new BoxLayout((Container)object2, 1));
        ((JComponent)object2).setPreferredSize(new Dimension(700, 600));
        ((JComponent)object2).setMaximumSize(new Dimension(700, 600));
        ((JComponent)object2).setBorder(BorderFactory.createEtchedBorder());
        object.add((Component)object2);
        object = new JPanel();
        ((Container)object2).add(Box.createVerticalStrut(5));
        ((Container)object2).add(Box.createVerticalGlue());
        this.G = new JLabel("");
        this.G.setEnabled(false);
        this.G.setFont(new Font("Arial", 1, 16));
        object.add(this.G);
        ((Container)object2).add((Component)object);
        ((Container)object2).add(Box.createVerticalStrut(10));
        object = new JPanel();
        ((Container)object2).add((Component)object);
        object.add(this.l);
        object.add(this.m);
        object.add(this.n);
        this.a(false, false);
        object = new JPanel();
        object.add(this.q);
        this.q.addActionListener(this.K);
        object.add(this.r);
        this.r.addActionListener(this.K);
        object.add(this.s);
        this.s.addActionListener(this.K);
        object.add(this.t);
        this.t.addActionListener(this.K);
        ((Container)object2).add((Component)object);
        object = new JPanel();
        object.add(this.u);
        this.u.addActionListener(this.L);
        object.add(this.v);
        this.v.addActionListener(this.L);
        object.add(this.w);
        this.w.addActionListener(this.L);
        object.add(this.x);
        this.x.addActionListener(this.L);
        object.add(this.y);
        this.y.addActionListener(this.L);
        object.add(this.z);
        this.z.addActionListener(this.L);
        object.add(this.A);
        this.A.addActionListener(this.L);
        object.add(this.B);
        this.B.addActionListener(this.L);
        ((Container)object2).add((Component)object);
        JPanel[] jPanelArray = new JPanel[4];
        object = jPanelArray;
        jPanelArray[0] = new JPanel();
        ((Container)object2).add(new JLabel("Spades"));
        ((Container)object2).add(object[0]);
        object[1] = new JPanel();
        ((Container)object2).add(new JLabel("Hearts"));
        ((Container)object2).add(object[1]);
        object[2] = new JPanel();
        ((Container)object2).add(new JLabel("Diamonds"));
        ((Container)object2).add(object[2]);
        object[3] = new JPanel();
        ((Container)object2).add(new JLabel("Clubs"));
        ((Container)object2).add(object[3]);
        n2 = 0;
        while (n2 < 52) {
            int n3 = n2 / 13;
            this.C[n2].setActionCommand("" + n2);
            this.C[n2].setBorderPainted(false);
            this.C[n2].addActionListener(this.J);
            if (n2 < 13 || n2 > 38) {
                this.C[n2].setBackground(new Color(0xA0A0A0));
            } else {
                this.C[n2].setBackground(new Color(0xFFA0A0));
            }
            object[n3].add(this.C[n2]);
            ++n2;
        }
        JPanel jPanel = new JPanel();
        jPanel.add(this.D);
        jPanel.add(this.E);
        ((Container)object2).add(jPanel);
        serializable = new JPanel();
        ((Container)serializable).add(this.F);
        ((JComponent)serializable).setPreferredSize(new Dimension(700, 120));
        ((Container)object2).add((Component)serializable);
        object = new JPanel();
        object.add(this.o);
        ((Container)object2).add((Component)object);
        ((Container)object2).add(Box.createVerticalStrut(5));
        this.l.addActionListener(new a_0(this));
        this.m.addActionListener(new b_0(this));
        this.n.addActionListener(new C(this));
        this.o.addActionListener(new D(this));
        this.D.addActionListener(new E(this));
        this.E.addActionListener(new w(this));
        this.b();
        this.j.setLocation(-8, 0);
        this.j.setSize(1550, 850);
        this.j.setModal(true);
        if (this.a.d <= 5) {
            this.a.g("About to set dialog visible");
        }
        this.j.setVisible(true);
    }

    final void a() {
        this.a.g("CharacterDialog got input event");
        this.j.dispose();
        this.a.a(500L);
        this.a.aD.a();
        this.a.F.f();
        this.a.bu.c.a();
        new k_0(this.a, this.a.F.q, "Board snapshot");
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    final boolean a(byte[][][] var1_1, int var2_2) {
        var3_3 = false;
        var4_4 /* !! */  = null;
        if (var1_1 /* !! */  != null) {
            var4_4 /* !! */  = var1_1 /* !! */ [var2_2];
        }
        if (var4_4 /* !! */  == null) ** GOTO lbl-1000
        this.d.i = var2_2;
        v0 = this.c;
        v0.getClass();
        this.g = new pY(v0);
        this.g.e = this.d.j;
        var1_1 /* !! */  = (byte[][][])this.a.bu.b.b[this.d.i];
        this.c.a(this.g, this.d.a.a(), 0, 0, this.d.i, this.c.y.height, var1_1 /* !! */ .l + this.e, var1_1 /* !! */ .m + this.f);
        this.h = this.g.b[this.d.i];
        var4_4 /* !! */  = (byte[][])"Match exists, do you want to overwrite?";
        if (this.h.e != 9) {
            var4_4 /* !! */  = (byte[][])"Number/suit exists but matching did not match.  Overwrite?";
            var1_1 /* !! */ .l = 0;
            var1_1 /* !! */ .m = 0;
            this.h.l = 0;
            this.h.m = 0;
            this.e = 0;
            this.f = 0;
        }
        if (!this.a("Already Exists", (String)var4_4 /* !! */ )) {
            this.d.a(var2_2);
        } else lbl-1000:
        // 2 sources

        {
            var3_3 = this.d.b(var2_2);
        }
        this.b();
        this.d.repaint();
        return var3_3;
    }

    final void b() {
        this.G.setText("Font: " + this.a.bu.c.b);
        int n2 = 0;
        while (n2 < 52) {
            if (this.c.p != null && this.c.p[n2] != null) {
                this.C[n2].setBorderPainted(false);
                this.C[n2].setOpaque(true);
                this.C[n2].setBackground(Color.CYAN);
            } else if (n2 < 13 || n2 > 38) {
                this.C[n2].setBackground(new Color(0xA0A0A0));
            } else {
                this.C[n2].setBackground(new Color(0xFFA0A0));
            }
            ++n2;
        }
        if (this.h == null) {
            this.F.setText(" No match ");
            return;
        }
        String string = "?";
        switch (this.h.e) {
            case 0: {
                string = "No status";
                break;
            }
            case 2: {
                string = "Suit ID Failed";
                break;
            }
            case 5: {
                string = "Suit Match Failed";
                break;
            }
            case 4: {
                string = "Num Failed";
                break;
            }
            case 6: {
                string = "Partial Success";
                break;
            }
            case 9: {
                string = "Success!";
            }
        }
        String string2 = "%s\nNum score: %d (Leeway %d)\nSuit score: %d\nShift:%d,%d (Yoff %d)\nForce:%d,%d\nCharacter: %d (index %d)";
        int n3 = this.c.s[this.h.a] - this.h.g;
        this.a.g("Setting result to card index " + this.h.a + " value " + this.h.d + " xd " + this.h.l + " yd " + this.h.m);
        this.F.setText(String.format(string2, string, this.h.g, n3, this.h.f, this.h.l, this.h.m, -this.d.d, this.e, this.f, this.h.d, this.d.i));
    }

    final void a(String string) {
        JOptionPane.showOptionDialog(this.j, "\n\n" + string + "\n\n", "Alert Message", 0, 2, null, N, N[0]);
    }

    final boolean a(String string, String string2) {
        int n2 = JOptionPane.showOptionDialog(this.j, "\n\n" + string2 + "\n\n", string, 0, 2, null, O, O[0]);
        return n2 == 0;
    }

    final void c() {
        if (this.c == null || this.c.b == null) {
            this.a("Font not defined");
        }
        StringBuffer stringBuffer = new StringBuffer();
        String string = File.separator;
        String string2 = this.a.as + string + "Fonts" + string;
        qo_0.e(string2);
        string2 = string2 + "Font" + this.c.b + ".txt";
        stringBuffer.append(String.format("package com.solvitaire.app;\r\nimport java.awt.Rectangle;\r\nimport com.solvitaire.app.ColorMatch.RGB;\r\npublic class Font%s\r\n{\r\n", this.c.b));
        stringBuffer.append(String.format("       static final String name = \"%s\";\r\n       static final double matchRatio = %4.3f;\r\n       static final int matchBase = %d;\r\n       static final double suitMatchRatio = %4.3f;\r\n       static final Rectangle rect = new Rectangle(%d, %d, %d, %d);\r\n       static final int suitWidth = %d;\r\n       static final int suitHeight = %d;\r\n       static final int blackMode = %d;\r\n       static final int blackTop = %d;\r\n       static final int blackBot = %d;\r\n       static final double blackRatio = %4.3f;\r\n       static final int redSuitWidth = %d;\r\n       static final double grabRatioWidth = %4.3f;\r\n       static final double grabRatioHeight = %4.3f;\r\n       static final int testBoxXOffset = %d;\r\n       static final int testBoxYOffset = %d;\r\n       static final RGB redColorPure = new RGB(%s);\r\n       static final RGB redColorBlended = new RGB(%s);\r\n       static final RGB redColorDefinite = new RGB(%s);\r\n       static final RGB blackColorPure = new RGB(%s);\r\n       static final RGB blackColorBlended = new RGB(%s);\r\n       static final RGB blackColorDefinite = new RGB(%s);\r\n       static final RGB bgColorBlended = new RGB(%s);\r\n       static final RGB bgColorPure = new RGB(%s);\r\n       static final RGB blackColorSuitSelect = null;\r\n       static final RGB bgColorSelect = new RGB(%s);\r\n       static final int bgColorSelectVar = %d;\r\n", this.c.b, this.c.G, this.c.H, this.c.I, this.c.c.x, this.c.c.y, this.c.c.width, this.c.c.height, this.c.v, this.c.w, this.c.z, this.c.A, this.c.B, this.c.C, this.c.D, this.c.E, this.c.F, this.c.n, this.c.o, this.c.f, this.c.g, this.c.h, this.c.i, this.c.j, this.c.k, this.c.d, this.c.e, this.c.l, this.c.m));
        int n2 = 0;
        while (n2 < 52) {
            if (this.c.q[n2] == null) {
                stringBuffer.append(String.format("       static class raw%d {static final int data[][] = null;}\r\n", n2));
            } else {
                String string3 = "       static class raw%d {static final int data[][] = {\r\n%s\r\n};}\r\n";
                int n3 = n2;
                int[][] nArray = this.c.q[n2];
                StringBuffer stringBuffer2 = stringBuffer;
                StringBuffer stringBuffer3 = new StringBuffer();
                boolean bl2 = true;
                int n4 = 0;
                while (n4 < nArray.length) {
                    if (!bl2) {
                        stringBuffer3.append(",\r\n");
                    }
                    bl2 = false;
                    stringBuffer3.append("{");
                    boolean bl3 = true;
                    int n5 = 0;
                    while (n5 < nArray[0].length) {
                        if (!bl3) {
                            stringBuffer3.append(",");
                        }
                        bl3 = false;
                        stringBuffer3.append(nArray[n4][n5]);
                        ++n5;
                    }
                    stringBuffer3.append("}");
                    ++n4;
                }
                stringBuffer2.append(String.format(string3, n3, stringBuffer3.toString()));
            }
            ++n2;
        }
        stringBuffer.append("\r\n   static final int[][][] raws = \r\n       {\r\n                       raw0.data, raw1.data, raw2.data, raw3.data, raw4.data, raw5.data, raw6.data, raw7.data, raw8.data, raw9.data,\r\n                       raw10.data, raw11.data, raw12.data, raw13.data, raw14.data, raw15.data, raw16.data, raw17.data, raw18.data, raw19.data,\r\n                       raw20.data, raw21.data, raw22.data, raw23.data, raw24.data, raw25.data, raw26.data, raw27.data, raw28.data, raw29.data,\r\n                       raw30.data, raw31.data, raw32.data, raw33.data, raw34.data, raw35.data, raw36.data, raw37.data, raw38.data, raw39.data,\r\n                       raw40.data, raw41.data, raw42.data, raw43.data, raw44.data, raw45.data, raw46.data, raw47.data, raw48.data, raw49.data,\r\n                       raw50.data, raw51.data\r\n       };\r\n}");
        this.a.a(string2, stringBuffer.toString(), true);
    }

    final void a(boolean bl2, boolean bl3) {
        this.b.y = bl2;
        this.b.z = bl3;
        this.l.setSelected(bl2);
        this.m.setSelected(bl3);
        if (this.b.y) {
            this.l.setBorderPainted(false);
            this.l.setOpaque(true);
            this.l.setBackground(Color.YELLOW);
            this.m.setBorderPainted(false);
            this.m.setOpaque(true);
            this.m.setBackground(Color.LIGHT_GRAY);
            return;
        }
        if (this.b.z) {
            this.m.setBorderPainted(false);
            this.m.setOpaque(true);
            this.m.setBackground(Color.YELLOW);
            this.l.setBorderPainted(false);
            this.l.setOpaque(true);
            this.l.setBackground(Color.LIGHT_GRAY);
            return;
        }
        this.l.setBorderPainted(false);
        this.l.setOpaque(true);
        this.l.setBackground(Color.LIGHT_GRAY);
        this.m.setBorderPainted(false);
        this.m.setOpaque(true);
        this.m.setBackground(Color.LIGHT_GRAY);
    }
}

