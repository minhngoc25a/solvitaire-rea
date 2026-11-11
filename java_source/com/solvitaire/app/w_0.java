/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.aa_0;
import com.solvitaire.app.ab_0;
import com.solvitaire.app.ac_0;
import com.solvitaire.app.ad_0;
import com.solvitaire.app.ae_0;
import com.solvitaire.app.af_0;
import com.solvitaire.app.ag_0;
import com.solvitaire.app.ah_0;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.t;
import com.solvitaire.app.x_0;
import com.solvitaire.app.y_0;
import com.solvitaire.app.z_0;
import java.awt.Color;
import java.awt.Component;
import java.awt.Container;
import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.Frame;
import java.awt.GridLayout;
import java.awt.event.ActionListener;
import java.io.File;
import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JComponent;
import javax.swing.JDialog;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.KeyStroke;
import javax.swing.border.Border;
import javax.swing.border.EmptyBorder;

/*
 * Renamed from com.solvitaire.app.W
 */
public final class w_0 {
    JDialog a;
    qo_0 b;
    boolean c;
    private int v;
    JTextField d = new JTextField(5);
    JTextField e = new JTextField(5);
    private JTextField w = new JTextField(5);
    JTextField f = new JTextField(5);
    ButtonGroup g = new ButtonGroup();
    Font h;
    private JButton x = new JButton("  OK  ");
    private JButton y = new JButton("Cancel");
    private String[] z = new String[]{" Ace ", " 2 ", " 3 ", " 4 ", " 5 ", " 6 ", " 7 ", " 8 ", " 9 ", " 10 ", " Jack ", " Queen ", " King "};
    private String[] A = new String[]{"Aces", "Twos", "Threes", "Fours", "Fives", "Sixes", "Sevens", "Eights", "Nines", "Tens", "Jacks", "Queens", "Kings"};
    private String[] B = new String[]{"Spades", "Hearts", "Diamonds", "Clubs"};
    private String[] C = new String[]{" 1 ", " 2 ", " 3 ", " 4 ", " 5 ", " 6 ", " 7 ", " 8 ", " 9 ", " 10 ", " 11 ", " 12 ", " 13 ", " 14 ", " 15 ", " 16 ", " 17 ", " 18 ", " 19 ", " 20 "};
    private String[] D = new String[]{" 1 ", " 2 ", " 3 ", " 4 ", " 5 ", " 6 ", " 7 ", " 8 "};
    private String[] E = new String[]{" 1 ", " 2 ", " 3 ", " 4 ", " 5 ", " 6 ", " 7 ", " 8 ", " 9 ", " 10 ", " 11 ", " 12 ", " 13 ", " 14 ", " 15 ", " 16 ", " 17 ", " 18 ", " 19 ", " 20 ", " 21 ", " 22 ", " 23 ", " 24 ", " 25 ", " 26 ", " 27 ", " 28 ", " 29 ", " 30 ", " 31 ", " 32 ", " 33 ", " 34 ", " 35 ", " 36 ", " 37 ", " 38 ", " 39 ", " 40 ", " 41 ", " 42 ", " 43 ", " 44 ", " 45 ", " 46 ", " 47 ", " 48 ", " 49 ", " 50 ", " 51 ", " 52 ", " 53 ", " 54 ", " 55 ", " 56 ", " 57 ", " 58 ", " 59 ", " 60 ", " 61 ", " 62 ", " 63 ", " 64 ", " 65 ", " 66 ", " 67 ", " 68 ", " 69 ", " 70 ", " 71 ", " 72 ", " 73 ", " 74 ", " 75 ", " 76 ", " 77 ", " 78 ", " 79 ", " 80 ", " 81 ", " 82 ", " 83 ", " 84 ", " 85 ", " 86 ", " 87 ", " 88 ", " 89 ", " 90 ", " 91 ", " 92 ", " 93 ", " 94 ", " 95 ", " 96 ", " 97 ", " 98 ", " 99 "};
    JComboBox i = new JComboBox<String>(this.E);
    JComboBox j = new JComboBox<String>(this.C);
    JComboBox k = new JComboBox<String>(this.C);
    JComboBox l = new JComboBox<String>(this.D);
    JComboBox m = new JComboBox<String>(this.D);
    JComboBox n = new JComboBox<String>(this.A);
    JComboBox o = new JComboBox<String>(this.z);
    JComboBox p = new JComboBox<String>(this.B);
    JPanel q;
    JLabel r = new JLabel("");
    JLabel s = new JLabel("");
    Color t;
    private int[] F = new int[100];
    x_0 u = new x_0(this);

    final void a() {
        this.m.setEnabled(false);
        this.k.setEnabled(false);
        this.n.setEnabled(false);
        this.o.setEnabled(false);
        this.p.setEnabled(false);
        this.e.setEnabled(false);
        this.d.setEnabled(false);
        this.l.setEnabled(false);
    }

    w_0(qo_0 object, boolean bl2, int n2) {
        Object object2;
        JComponent jComponent;
        this.b = object;
        this.v = n2;
        this.t = this.b.b(0);
        object = new JLabel(" ").getFont();
        this.h = new Font(((Font)object).getName(), 0, ((Font)object).getSize() * 11 / 10);
        this.c = bl2;
        this.b.l.l();
        this.b.l.c = 1;
        object = this.b.aq.g;
        this.a = new JDialog((Frame)object, "Challenge Solve and Save");
        this.a.addWindowListener(new y_0(this));
        Container container = this.a.getContentPane();
        this.a.setDefaultCloseOperation(2);
        Object object3 = new JPanel();
        ((JComponent)object3).setBackground(this.t);
        ((JComponent)object3).setBorder(new EmptyBorder(10, 30, 10, 30));
        ((Container)object3).setLayout(new BoxLayout((Container)object3, 1));
        container.add((Component)object3, "North");
        JPanel jPanel = new JPanel();
        jPanel.setBackground(this.t);
        jPanel.setLayout(new BoxLayout(jPanel, 0));
        JButton jButton = new JButton("Change directory");
        JButton jButton2 = new JButton("Clear directory");
        if (bl2) {
            ((Container)object3).add(Box.createVerticalStrut(10));
            JPanel jPanel2 = new JPanel();
            jPanel2.setBackground(this.t);
            jPanel2.setLayout(new BoxLayout(jPanel2, 0));
            ((Container)object3).add(jPanel2);
            jComponent = new JLabel("Challenge number  ");
            jComponent.setFont(this.h);
            jPanel2.add(jComponent);
            jPanel2.add(this.i);
            this.i.setFont(this.h);
            this.i.setPrototypeDisplayValue("XXXXX");
            jPanel2.add(Box.createHorizontalStrut(10));
            this.i.setPreferredSize(new Dimension(80, 20));
            this.i.setMaximumRowCount(30);
            this.d();
            this.c();
            object2 = new JLabel("Board number  ");
            ((JComponent)object2).setFont(this.h);
            jPanel2.add((Component)object2);
            jPanel2.add(this.j);
            jPanel2.add(Box.createHorizontalStrut(500));
            this.j.setFont(this.h);
            this.j.setPreferredSize(new Dimension(80, 20));
            this.j.setMaximumRowCount(20);
            this.j.setPrototypeDisplayValue("XXXXX");
            ((Container)object3).add(Box.createVerticalStrut(10));
            this.r = new JLabel(this.b.l.p);
            jPanel.add(this.r);
            jPanel.add(Box.createHorizontalGlue());
            jPanel.add(jButton);
            jPanel.add(Box.createHorizontalStrut(10));
            jPanel.add(jButton2);
            jPanel.add(Box.createHorizontalStrut(10));
        } else if (!this.b.aq.k()) {
            return;
        }
        ((Container)object3).add(jPanel);
        Object object4 = new JPanel();
        ((JComponent)object4).setBackground(this.t);
        ((Container)object4).setLayout(new BoxLayout((Container)object4, 1));
        container.add((Component)object4, "Center");
        jComponent = new JPanel(new FlowLayout(0));
        jComponent.setBackground(this.t);
        jComponent.setLayout(new BoxLayout(jComponent, 0));
        jComponent.add(this.s);
        this.s.setFont(new Font("Arial", 1, 15));
        this.q = new JPanel();
        this.q.setBackground(this.t);
        object2 = BorderFactory.createBevelBorder(1);
        object3 = BorderFactory.createEmptyBorder(0, 30, 5, 30);
        this.q.setBorder(BorderFactory.createCompoundBorder((Border)object3, (Border)object2));
        this.q.setLayout(new GridLayout(0, 3));
        ((Container)object4).add(this.q);
        ((Container)object4).add(jComponent);
        ((Container)object4).add(Box.createVerticalStrut(5));
        object4 = new ag_0(this, "Clear a board", 1, null, null, null, null);
        object3 = new ag_0(this, "Clear a number of boards", 2, this.m, null, null, " boards");
        this.m.setMaximumRowCount(8);
        if ((n2 & 4) != 0) {
            ((ag_0)object3).a.setEnabled(false);
        }
        object3 = new ag_0(this, "Clear a number of cards", 3, this.k, null, this.n, null);
        this.k.setMaximumRowCount(20);
        this.n.setMaximumRowCount(13);
        if ((n2 & 8) != 0) {
            ((ag_0)object3).a.setEnabled(false);
        }
        object3 = new ag_0(this, "Clear a specific card", 4, this.o, " of ", this.p, null);
        this.o.setMaximumRowCount(13);
        this.p.setMaximumRowCount(4);
        if ((n2 & 0x10) != 0) {
            ((ag_0)object3).a.setEnabled(false);
        }
        object3 = new ag_0(this, "Clear a number of stacks", 5, this.l, null, null, " stacks");
        this.l.setMaximumRowCount(20);
        if ((n2 & 0x20) != 0) {
            ((ag_0)object3).a.setEnabled(false);
        }
        object3 = new ag_0(this, "Target score", 6, this.e, " / ", this.d, null);
        this.e.setText("0");
        if ((n2 & 0x40) != 0) {
            ((ag_0)object3).a.setEnabled(false);
        }
        new ah_0(this, "Maximum moves");
        JPanel jPanel3 = new JPanel();
        jPanel3.setBackground(this.t);
        jPanel3.setBorder(BorderFactory.createEmptyBorder(0, 10, 5, 10));
        this.x.setFont(this.h);
        jPanel3.add(this.x);
        jPanel3.add(new JLabel("    "));
        this.y.setFont(this.h);
        jPanel3.add(this.y);
        container.add((Component)jPanel3, "South");
        this.a.getRootPane().setDefaultButton(this.x);
        jButton.addActionListener(new z_0(this, (JFrame)object));
        jButton2.addActionListener(new aa_0(this));
        this.i.addActionListener(new ab_0(this));
        this.j.addActionListener(new ac_0(this));
        this.x.addActionListener(new ad_0(this));
        this.y.addActionListener(new ae_0(this));
        object = new af_0(this);
        this.a.getRootPane().registerKeyboardAction((ActionListener)object, KeyStroke.getKeyStroke(27, 0), 2);
        this.a();
        ((ag_0)object4).a.setSelected(true);
        int n3 = this.b.a((double)(this.b.C.x + this.b.C.width / 2)) - 820 / 2;
        int n4 = this.b.b((double)(this.b.C.y + this.b.C.height / 2)) - 450 / 2;
        this.a.setLocation(n3, n4);
        this.a.setSize(820, 450);
        this.a.setVisible(true);
    }

    final void b() {
        this.b.m = 0;
        this.a.setVisible(false);
        this.a.dispose();
    }

    final void c() {
        int n2 = this.e();
        if (n2 > 0) {
            this.i.setSelectedIndex(n2 - 1);
            this.j.setSelectedIndex(0);
        }
    }

    final void d() {
        String[] stringArray = this.b.l.p;
        t t2 = new t(this.b, 3);
        stringArray = new File((String)stringArray);
        stringArray = stringArray.list();
        this.F = new int[100];
        if (stringArray == null) {
            return;
        }
        String[] stringArray2 = stringArray;
        int n2 = stringArray.length;
        int n3 = 0;
        while (n3 < n2) {
            String string = stringArray2[n3];
            if (string.startsWith("cards")) {
                int n4;
                t2.a(string);
                if (t2.r && (n4 = t2.g()) < 100) {
                    this.F[n4] = Math.max(this.F[n4], t2.h() + 1);
                }
            }
            ++n3;
        }
    }

    private int e() {
        int n2 = -1;
        int n3 = 1;
        while (n3 < this.F.length) {
            if (this.F[n3] == 0) {
                n2 = n3;
                break;
            }
            ++n3;
        }
        if (n2 < 0) {
            this.s.setText("No available slots for challenges.  Try clearing the directory");
            n2 = 0;
        }
        return n2;
    }

    final void a(int n2, boolean bl2) {
        int n3 = this.F[n2];
        int n4 = this.j.getSelectedIndex();
        if (n4 + 1 <= n3) {
            this.s.setText("Overwriting board " + (n4 + 1) + " for challenge " + n2);
            return;
        }
        this.j.setSelectedIndex(n4);
        this.s.setText("Solve challenge " + n2 + " board " + (n4 + 1));
    }

    static int a(String string) {
        int n2 = -1;
        try {
            n2 = Integer.parseInt(string);
        }
        catch (Exception exception) {}
        return n2;
    }
}

