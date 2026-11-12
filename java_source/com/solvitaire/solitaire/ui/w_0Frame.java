/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui;

import com.solvitaire.solitaire.ui.handlers.aa_0Handler;
import com.solvitaire.solitaire.ui.handlers.ab_0Handler;
import com.solvitaire.solitaire.ui.handlers.ac_0Handler;
import com.solvitaire.solitaire.ui.handlers.ad_0Handler;
import com.solvitaire.solitaire.ui.handlers.ae_0Handler;
import com.solvitaire.solitaire.ui.handlers.af_0Handler;
import com.solvitaire.solitaire.ui.panels.ag_0Panel;
import com.solvitaire.solitaire.ui.panels.ah_0Panel;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.util.t;
import com.solvitaire.solitaire.ui.handlers.x_0Handler;
import com.solvitaire.solitaire.util.y_0;
import com.solvitaire.solitaire.ui.handlers.z_0Handler;
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
public final class w_0Frame {
    public JDialog AboutDialog;
    public SolitaireGameEngine b;
    boolean c;
    private int v;
    public JTextField d = new JTextField(5);
    public JTextField e = new JTextField(5);
    private JTextField wHandler = new JTextField(5);
    public JTextField f = new JTextField(5);
    public ButtonGroup g = new ButtonGroup();
    public Font h;
    private JButton xHandler = new JButton("  OK  ");
    private JButton yHandler = new JButton("Cancel");
    private String[] z = new String[]{" Ace ", " 2 ", " 3 ", " 4 ", " 5 ", " 6 ", " 7 ", " 8 ", " 9 ", " 10 ", " Jack ", " Queen ", " King "};
    private String[] A = new String[]{"Aces", "Twos", "Threes", "Fours", "Fives", "Sixes", "Sevens", "Eights", "Nines", "Tens", "Jacks", "Queens", "Kings"};
    private String[] B = new String[]{"Spades", "Hearts", "Diamonds", "Clubs"};
    private String[] CHandler = new String[]{" 1 ", " 2 ", " 3 ", " 4 ", " 5 ", " 6 ", " 7 ", " 8 ", " 9 ", " 10 ", " 11 ", " 12 ", " 13 ", " 14 ", " 15 ", " 16 ", " 17 ", " 18 ", " 19 ", " 20 "};
    private String[] DHandler = new String[]{" 1 ", " 2 ", " 3 ", " 4 ", " 5 ", " 6 ", " 7 ", " 8 "};
    private String[] EHandler = new String[]{" 1 ", " 2 ", " 3 ", " 4 ", " 5 ", " 6 ", " 7 ", " 8 ", " 9 ", " 10 ", " 11 ", " 12 ", " 13 ", " 14 ", " 15 ", " 16 ", " 17 ", " 18 ", " 19 ", " 20 ", " 21 ", " 22 ", " 23 ", " 24 ", " 25 ", " 26 ", " 27 ", " 28 ", " 29 ", " 30 ", " 31 ", " 32 ", " 33 ", " 34 ", " 35 ", " 36 ", " 37 ", " 38 ", " 39 ", " 40 ", " 41 ", " 42 ", " 43 ", " 44 ", " 45 ", " 46 ", " 47 ", " 48 ", " 49 ", " 50 ", " 51 ", " 52 ", " 53 ", " 54 ", " 55 ", " 56 ", " 57 ", " 58 ", " 59 ", " 60 ", " 61 ", " 62 ", " 63 ", " 64 ", " 65 ", " 66 ", " 67 ", " 68 ", " 69 ", " 70 ", " 71 ", " 72 ", " 73 ", " 74 ", " 75 ", " 76 ", " 77 ", " 78 ", " 79 ", " 80 ", " 81 ", " 82 ", " 83 ", " 84 ", " 85 ", " 86 ", " 87 ", " 88 ", " 89 ", " 90 ", " 91 ", " 92 ", " 93 ", " 94 ", " 95 ", " 96 ", " 97 ", " 98 ", " 99 "};
    public JComboBox i = new JComboBox<String>(this.EHandler);
    public JComboBox j = new JComboBox<String>(this.CHandler);
    public JComboBox k = new JComboBox<String>(this.CHandler);
    public JComboBox l = new JComboBox<String>(this.DHandler);
    public JComboBox m = new JComboBox<String>(this.DHandler);
    public JComboBox n = new JComboBox<String>(this.A);
    public JComboBox o = new JComboBox<String>(this.z);
    public JComboBox p = new JComboBox<String>(this.B);
    public JPanel q;
    public JLabel rPanel = new JLabel("");
    public JLabel s = new JLabel("");
    public Color t;
    private int[] FPanel = new int[100];
    public x_0Handler uPanel = new x_0Handler(this);

    final void AboutDialog() {
        this.m.setEnabled(false);
        this.k.setEnabled(false);
        this.n.setEnabled(false);
        this.o.setEnabled(false);
        this.p.setEnabled(false);
        this.e.setEnabled(false);
        this.d.setEnabled(false);
        this.l.setEnabled(false);
    }

    w_0Frame(SolitaireGameEngine object, boolean bl2, int n2) {
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
        this.AboutDialog = new JDialog((Frame)object, "Challenge Solve and Save");
        this.AboutDialog.addWindowListener(new y_0(this));
        Container container = this.AboutDialog.getContentPane();
        this.AboutDialog.setDefaultCloseOperation(2);
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
            this.rPanel = new JLabel(this.b.l.p);
            jPanel.add(this.rPanel);
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
        object4 = new ag_0Panel(this, "Clear AboutDialog board", 1, null, null, null, null);
        object3 = new ag_0Panel(this, "Clear AboutDialog number of boards", 2, this.m, null, null, " boards");
        this.m.setMaximumRowCount(8);
        if ((n2 & 4) != 0) {
            ((ag_0Panel)object3).AboutDialog.setEnabled(false);
        }
        object3 = new ag_0Panel(this, "Clear AboutDialog number of cards", 3, this.k, null, this.n, null);
        this.k.setMaximumRowCount(20);
        this.n.setMaximumRowCount(13);
        if ((n2 & 8) != 0) {
            ((ag_0Panel)object3).AboutDialog.setEnabled(false);
        }
        object3 = new ag_0Panel(this, "Clear AboutDialog specific card", 4, this.o, " of ", this.p, null);
        this.o.setMaximumRowCount(13);
        this.p.setMaximumRowCount(4);
        if ((n2 & 0x10) != 0) {
            ((ag_0Panel)object3).AboutDialog.setEnabled(false);
        }
        object3 = new ag_0Panel(this, "Clear AboutDialog number of stacks", 5, this.l, null, null, " stacks");
        this.l.setMaximumRowCount(20);
        if ((n2 & 0x20) != 0) {
            ((ag_0Panel)object3).AboutDialog.setEnabled(false);
        }
        object3 = new ag_0Panel(this, "Target score", 6, this.e, " / ", this.d, null);
        this.e.setText("0");
        if ((n2 & 0x40) != 0) {
            ((ag_0Panel)object3).AboutDialog.setEnabled(false);
        }
        new ah_0Panel(this, "Maximum moves");
        JPanel jPanel3 = new JPanel();
        jPanel3.setBackground(this.t);
        jPanel3.setBorder(BorderFactory.createEmptyBorder(0, 10, 5, 10));
        this.xHandler.setFont(this.h);
        jPanel3.add(this.xHandler);
        jPanel3.add(new JLabel("    "));
        this.yHandler.setFont(this.h);
        jPanel3.add(this.yHandler);
        container.add((Component)jPanel3, "South");
        this.AboutDialog.getRootPane().setDefaultButton(this.xHandler);
        jButton.addActionListener(new z_0Handler(this, (JFrame)object));
        jButton2.addActionListener(new aa_0Handler(this));
        this.i.addActionListener(new ab_0Handler(this));
        this.j.addActionListener(new ac_0Handler(this));
        this.xHandler.addActionListener(new ad_0Handler(this));
        this.yHandler.addActionListener(new ae_0Handler(this));
        object = new af_0Handler(this);
        this.AboutDialog.getRootPane().registerKeyboardAction((ActionListener)object, KeyStroke.getKeyStroke(27, 0), 2);
        this.AboutDialog();
        ((ag_0Panel)object4).AboutDialog.setSelected(true);
        int n3 = this.b.AboutDialog((double)(this.b.CHandler.xHandler + this.b.CHandler.width / 2)) - 820 / 2;
        int n4 = this.b.b((double)(this.b.CHandler.yHandler + this.b.CHandler.height / 2)) - 450 / 2;
        this.AboutDialog.setLocation(n3, n4);
        this.AboutDialog.setSize(820, 450);
        this.AboutDialog.setVisible(true);
    }

    final void b() {
        this.b.m = 0;
        this.AboutDialog.setVisible(false);
        this.AboutDialog.dispose();
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
        this.FPanel = new int[100];
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
                t2.AboutDialog(string);
                if (t2.rPanel && (n4 = t2.g()) < 100) {
                    this.FPanel[n4] = Math.max(this.FPanel[n4], t2.h() + 1);
                }
            }
            ++n3;
        }
    }

    private int e() {
        int n2 = -1;
        int n3 = 1;
        while (n3 < this.FPanel.length) {
            if (this.FPanel[n3] == 0) {
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

    final void AboutDialog(int n2, boolean bl2) {
        int n3 = this.FPanel[n2];
        int n4 = this.j.getSelectedIndex();
        if (n4 + 1 <= n3) {
            this.s.setText("Overwriting board " + (n4 + 1) + " for challenge " + n2);
            return;
        }
        this.j.setSelectedIndex(n4);
        this.s.setText("Solve challenge " + n2 + " board " + (n4 + 1));
    }

    static int AboutDialog(String string) {
        int n2 = -1;
        try {
            n2 = Integer.parseInt(string);
        }
        catch (Exception exception) {}
        return n2;
    }
}

