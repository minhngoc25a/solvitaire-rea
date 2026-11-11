/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.K;
import com.solvitaire.app.L;
import com.solvitaire.app.M;
import com.solvitaire.app.N;
import com.solvitaire.app.O;
import com.solvitaire.app.P;
import com.solvitaire.app.S;
import com.solvitaire.app.h_0;
import com.solvitaire.app.i_0;
import com.solvitaire.app.j_0;
import com.solvitaire.app.q_0;
import com.solvitaire.app.qb_0;
import com.solvitaire.app.qj;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qr;
import com.solvitaire.app.qz;
import com.solvitaire.app.r_0;
import java.awt.Color;
import java.awt.Component;
import java.awt.Container;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.GridLayout;
import java.io.File;
import java.io.Serializable;
import java.util.Enumeration;
import javax.swing.AbstractButton;
import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.ButtonGroup;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JComponent;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;
import javax.swing.JTextField;
import javax.swing.border.Border;
import javax.swing.border.EmptyBorder;
import javax.swing.border.TitledBorder;

/*
 * Renamed from com.solvitaire.app.G
 */
public final class g_0 {
    qo_0 a;
    JTextField b = new JTextField();
    ButtonGroup c;
    ButtonGroup d;
    Font e;
    private Font w;
    private Color x = new Color(220, 165, 0);
    Color f;
    private static String[] y = new String[]{"", "Easy", "Moderate", "Hard", "Specific"};
    r_0 g;
    r_0 h;
    r_0 i;
    r_0 j;
    S k;
    S l;
    S m;
    S n;
    S o;
    private String[] z = new String[]{"1 card deal", "3 card deal"};
    private String[] A = new String[]{"1 suit", "2 suits", "4 suits"};
    JComboBox p;
    JComboBox q;
    private JPanel B;
    private JButton C;
    private JButton D;
    JCheckBox r;
    private ImageIcon E;
    h_0 s = new h_0(this);
    i_0 t = new i_0(this);
    j_0 u = new j_0(this);
    K v = new K(this);

    g_0(qo_0 qo_02) {
        this.a = qo_02;
    }

    private void a(JPanel jPanel) {
        this.a(jPanel, "Solvitaire", "");
    }

    private void a(JPanel jPanel, String object, String string) {
        this.f = this.a.b(0);
        Serializable serializable = new JLabel(" ").getFont();
        this.e = new Font(((Font)serializable).getName(), 0, ((Font)serializable).getSize() * 12 / 10);
        this.w = string.length() == 0 ? new Font("Gabriola", 1, ((Font)serializable).getSize() * 50 / 10) : new Font("Gabriola", 1, ((Font)serializable).getSize() * 30 / 10);
        this.E = this.a.aq.a("cards.gif");
        this.a.aq.A.setLayout(new BoxLayout(this.a.aq.A, 0));
        this.a.aq.A.setBorder(BorderFactory.createEmptyBorder(0, 10, 0, 10));
        this.B = new JPanel();
        this.B.setOpaque(false);
        this.B.setLayout(new BoxLayout(this.B, 1));
        this.B.setPreferredSize(new Dimension(500, 500));
        serializable = new JPanel();
        ((JComponent)serializable).setOpaque(false);
        ((Container)serializable).setLayout(new BoxLayout((Container)serializable, 1));
        ((Container)serializable).add(Box.createHorizontalGlue());
        ((Container)serializable).add(this.B);
        ((Container)serializable).add(Box.createHorizontalGlue());
        this.a.aq.A.add((Component)serializable);
        serializable = new JPanel();
        ((Container)serializable).setLayout(new BoxLayout((Container)serializable, 0));
        ((JComponent)serializable).setBackground(this.a.b(1));
        object = new JLabel((String)object + string);
        ((JComponent)object).setBorder(new EmptyBorder(20, 0, 0, 0));
        ((JComponent)object).setFont(this.w);
        ((JComponent)object).setForeground(this.x);
        ((JComponent)serializable).setAlignmentY(0.5f);
        ((Container)serializable).add(Box.createHorizontalGlue());
        ((Container)serializable).add((Component)object);
        object = new JLabel();
        ((JLabel)object).setIcon(this.E);
        ((Container)serializable).add(Box.createHorizontalStrut(70));
        ((Container)serializable).add((Component)object);
        ((Container)serializable).add(Box.createHorizontalGlue());
        jPanel.setOpaque(false);
        this.B.add((Component)serializable);
        this.B.add(Box.createVerticalGlue());
        this.B.add(jPanel);
        this.B.add(Box.createVerticalStrut(10));
    }

    final void a() {
        this.a.g("Setting up mode choice pane, modeRemembered " + this.a.bi);
        this.a.aq.h();
        JPanel jPanel = new JPanel();
        this.a(jPanel);
        jPanel.setLayout(new GridLayout(1, 3));
        jPanel.setBorder(BorderFactory.createTitledBorder("Choose the mode of operation"));
        ((TitledBorder)jPanel.getBorder()).setTitleFont(this.e);
        ImageIcon imageIcon = this.a.aq.a("microsoftsolitaire.gif");
        ImageIcon imageIcon2 = this.a.aq.a("fromfile.gif");
        new q_0(this, jPanel, "<html>Solve games from<br>Microsoft Solitaire Collection</html>", imageIcon, "<html>This mode will solve Microsoft Solitaire Collection games.<br>You should have Solitaire Collection started and showing the game<br>that you want Solvitaire to solve</html>");
        new q_0(this, jPanel, "<html>Read games in<br>from file</html>", imageIcon2, "<html>This mode reads the cards (or solution) from file and lets you<br>play it or have Solvitaire solve it for you.  There are example card files<br>in the Games directory</html>");
        new q_0(this, jPanel, "<html>Play<br>Solitaire</html>", this.E, "<html>Use this mode to just play a game.  You can choose the type of game<br>and the level of difficulty</html>");
        this.r = new JCheckBox("Remember my selection");
        this.r.setOpaque(false);
        this.a.aq.B.add(Box.createHorizontalGlue());
        this.r.setBorder(BorderFactory.createEmptyBorder(0, 0, 20, 0));
        this.a.aq.B.add(this.r);
        this.r.setFont(this.e);
        this.r.setMaximumSize(new Dimension(200, 40));
        this.r.setSelected(this.a.bi);
        this.a.aq.B.add(Box.createHorizontalGlue());
        this.a.aq.B.validate();
        this.r.addActionListener(new L(this));
    }

    final void b() {
        JLabel jLabel = this.a.aq.h();
        Object object = new JPanel();
        this.a((JPanel)object);
        this.a.bj = this.a.aq.b("gameSelection", "Klondike");
        this.a.bk = this.a.aq.b("gameDifficulty", "Easy");
        this.a.bm = this.a.aq.c("gameParmSpider", 1);
        this.a.bn = this.a.aq.c("gameParmKlondike", 1);
        this.e();
        this.a.br.c();
        ((Container)object).setLayout(new GridLayout(0, 2));
        ((JComponent)object).setBorder(BorderFactory.createTitledBorder("Choose the version of Solitaire"));
        ((TitledBorder)((JComponent)object).getBorder()).setTitleFont(this.e);
        this.c = new ButtonGroup();
        this.d = new ButtonGroup();
        this.p = new JComboBox<String>(this.z);
        this.q = new JComboBox<String>(this.A);
        this.k = new S(this, (JPanel)object, "Klondike", this.p);
        this.p.setMaximumRowCount(2);
        this.l = new S(this, (JPanel)object, "Spider", this.q);
        this.q.setMaximumRowCount(3);
        this.m = new S(this, (JPanel)object, "FreeCell", null);
        this.n = new S(this, (JPanel)object, "Pyramid", null);
        this.o = new S(this, (JPanel)object, "TriPeaks", null);
        object = new JPanel();
        ((JComponent)object).setOpaque(false);
        this.B.add((Component)object);
        this.B.add(Box.createVerticalGlue());
        ((Container)object).setLayout(new GridLayout(0, 2));
        ((JComponent)object).setBorder(BorderFactory.createTitledBorder("Choose the level of difficulty"));
        ((TitledBorder)((JComponent)object).getBorder()).setTitleFont(this.e);
        this.g = new r_0(this, (JPanel)object, "Easy", null);
        this.h = new r_0(this, (JPanel)object, "Moderate", null);
        this.i = new r_0(this, (JPanel)object, "Hard", null);
        this.j = new r_0(this, (JPanel)object, "Specific game # (seed)", this.b);
        this.j.a.setToolTipText("<html>The seed determines the deal.<br>Specify the seed if you want to replay a particular deal<br>The algorithm matches the one used by Microsoft FreeCell");
        this.b.setText("" + this.a.bo);
        object = BorderFactory.createEmptyBorder(5, 10, 5, 10);
        Border border = BorderFactory.createEtchedBorder(0);
        this.a.aq.B.setBorder(BorderFactory.createCompoundBorder(border, (Border)object));
        this.a.aq.B.add(Box.createHorizontalStrut(10));
        object = new JPanel();
        ((JComponent)object).setOpaque(false);
        jLabel.setPreferredSize(new Dimension(400, 30));
        jLabel.setFont(this.e);
        ((Container)object).add(jLabel);
        this.a.aq.B.add((Component)object);
        this.a.aq.B.add(Box.createHorizontalStrut(10));
        this.C = new JButton("  OK  ");
        this.a.aq.B.add(this.C);
        this.C.setFont(this.e);
        this.a.aq.B.add(Box.createHorizontalGlue());
        this.a.aq.B.revalidate();
        this.C.addActionListener(new M(this));
    }

    final void c() {
        this.a.aq.h();
        JPanel jPanel = new JPanel();
        this.a(jPanel);
        jPanel.setOpaque(false);
        jPanel.setLayout(new GridLayout(0, 2));
        jPanel.setBorder(BorderFactory.createTitledBorder("Do you want to solve cards or run through a solution?"));
        ((TitledBorder)jPanel.getBorder()).setTitleFont(this.e);
        new P(this, jPanel, "Solve existing cards...", "<html>Use this button if you have a file that contains the card layout<br>There are sample card files in the Games directory</html>");
        new P(this, jPanel, "Play existing solution...", "<html>Use this button if you have already saved a solution<br>(a solution_cards*.txt file) and you want to inspect it</html>");
        this.a.m = 0;
    }

    /*
     * Unable to fully structure code
     */
    final void d() {
        block15: {
            block14: {
                block13: {
                    this.a.aq.h();
                    var1_1 = new qz(this.a);
                    this.a.br.a();
                    var2_2 = this.a.br;
                    var3_3 = null;
                    var4_4 = var2_2.c;
                    switch (var4_4.hashCode()) {
                        case -1537898034: {
                            if (!var4_4.equals("freecell")) {
                                ** break;
                            }
                            break block13;
                        }
                        case -895953179: {
                            if (var4_4.equals("spider")) break;
                            ** break;
                        }
                        case -106396336: {
                            if (!var4_4.equals("pyramid")) {
                                ** break;
                            }
                            break block14;
                        }
                        case 1511341225: {
                            if (!var4_4.equals("tripeaks")) {
                                ** break;
                            }
                            break block15;
                        }
                        case 2145768351: {
                            if (!var4_4.equals("klondike")) ** break;
                            if (var2_2.d == 1) {
                                var3_3 = "Klondike 1 card deal";
                                ** break;
                            }
                            var3_3 = "Klondike 3 card deal";
                            ** break;
                        }
                    }
                    if (var2_2.d == 1) {
                        var3_3 = "Spider 1 suit";
                        ** break;
                    }
                    if (var2_2.d == 2) {
                        var3_3 = "Spider 2 suits";
                        ** break;
                    }
                    var3_3 = "Spider 4 suits";
                    ** break;
                }
                var3_3 = "FreeCell";
                ** break;
            }
            var3_3 = "Pyramid";
            ** break;
        }
        var3_3 = "TriPeaks";
lbl47:
        // 14 sources

        this.a(var1_1, "Statistics for ", var3_3);
        var1_1.a(this.a.aq.j, this.a.aq.k);
        var1_1.revalidate();
        var1_1.repaint();
        this.a.aq.B.setBorder(BorderFactory.createEmptyBorder(0, 0, 10, 0));
        this.a.aq.B.add(Box.createHorizontalGlue());
        this.C = new JButton("  OK  ");
        this.a.aq.B.add(this.C);
        this.C.setFont(this.e);
        this.a.aq.B.add(Box.createHorizontalStrut(20));
        this.D = new JButton("Reset...");
        this.a.aq.B.add(this.D);
        this.D.setFont(this.e);
        this.a.aq.B.add(Box.createHorizontalGlue());
        this.a.aq.B.revalidate();
        this.C.addActionListener(new N(this));
        this.D.addActionListener(new O(this));
    }

    final void e() {
        this.a.bl = 0;
        switch (this.a.bj) {
            case "Klondike": {
                this.a.bl = this.a.bn;
                break;
            }
            case "Spider": {
                this.a.bl = this.a.bm;
            }
        }
        this.a.g("Select gameParm " + this.a.bl + " for " + this.a.bj);
    }

    final void a(qb_0 object) {
        if (this.a.d <= 5) {
            this.a.g("Game selection " + this.a.bj);
        }
        switch (this.a.bj) {
            case "Klondike": {
                int n2 = this.p.getSelectedIndex();
                this.a.bn = n2 == 1 ? 3 : 1;
                this.a.l.q = "klondike";
                ((qb_0)object).a("gameParmKlondike", "" + this.a.bl);
                break;
            }
            case "Spider": {
                int n3 = this.q.getSelectedIndex();
                this.a.bm = n3 == 1 ? 2 : (n3 == 2 ? 4 : 1);
                this.a.l.q = "spider";
                ((qb_0)object).a("gameParmSpider", "" + this.a.bl);
                break;
            }
            case "FreeCell": {
                this.a.l.q = "freecell";
                break;
            }
            case "Pyramid": {
                this.a.l.q = "pyramid";
                break;
            }
            case "TriPeaks": {
                this.a.l.q = "tripeaks";
            }
        }
        this.e();
        String string = this.b.getText();
        if (string.equals("0") && !this.a.bk.equals("Specific")) {
            this.a.bo = this.a.bq.a(this.a.bj, this.a.bl, this.a.bk, 0);
        } else {
            try {
                this.a.bo = Integer.parseInt(string);
            }
            catch (Exception exception) {
                if (!this.a.bk.equals("Specific")) {
                    this.a.bo = this.a.bq.a(this.a.bj, this.a.bl, this.a.bk, this.a.bo);
                }
                string = "Exception reading seed.  It must be an integer.";
                object = this.a;
                ((qo_0)object).a(string, false);
                return;
            }
        }
        string = g_0.a(this.a.l.q, this.a.bl, this.a.bo);
        String string2 = this.a.as + qo_0.o + this.a.l.q + String.valueOf(this.a.bl > 0 ? Integer.valueOf(this.a.bl) : "") + File.separator;
        this.a.l.a(string2, false);
        int n4 = this.a.l.b();
        this.a.l.a(n4 + 1);
        this.a.a(this.a.l.p + this.a.l.d(), string, true);
        ((qb_0)object).a("gameDifficulty", this.a.bk);
        ((qb_0)object).a("gameSelection", this.a.bj);
        ((qb_0)object).t();
        this.a.aq.c();
        this.a.m = 2;
        this.a.c(2);
    }

    static String a(String object, int n2, int n3) {
        StringBuffer stringBuffer;
        block33: {
            block32: {
                block31: {
                    block30: {
                        stringBuffer = new StringBuffer();
                        String string = object;
                        switch (string.hashCode()) {
                            case -1537898034: {
                                if (!string.equals("freecell")) {
                                    break;
                                }
                                break block30;
                            }
                            case -895953179: {
                                if (string.equals("spider")) break;
                                break;
                            }
                            case -106396336: {
                                if (!string.equals("pyramid")) {
                                    break;
                                }
                                break block31;
                            }
                            case 1511341225: {
                                if (!string.equals("tripeaks")) {
                                    break;
                                }
                                break block32;
                            }
                            case 2145768351: {
                                if (!string.equals("klondike")) break;
                                stringBuffer.append((String)object + "," + n2 + "\n");
                                object = qj.a(n3);
                                n2 = 0;
                                int n4 = 0;
                                while (n4 < 7) {
                                    n3 = 0;
                                    while (n3 < 7) {
                                        if (n3 < n4) {
                                            stringBuffer.append("   ");
                                        } else {
                                            stringBuffer.append(qr.i((int)object[n2++]));
                                            stringBuffer.append(",");
                                        }
                                        ++n3;
                                    }
                                    stringBuffer.append("\n");
                                    ++n4;
                                }
                                n4 = 0;
                                while (n4 < 24) {
                                    stringBuffer.append(qr.i((int)object[n2++]));
                                    stringBuffer.append(",");
                                    ++n4;
                                }
                                break;
                            }
                        }
                        stringBuffer.append((String)object + "\n");
                        int n5 = n2;
                        object = qj.a(n3, n5);
                        n2 = 0;
                        n3 = 0;
                        while (n3 < 5) {
                            n5 = 0;
                            while (n5 < 10) {
                                stringBuffer.append(qr.i((int)object[n2++]));
                                stringBuffer.append(",");
                                ++n5;
                            }
                            stringBuffer.append("\n");
                            ++n3;
                        }
                        n3 = 0;
                        while (n3 < 4) {
                            stringBuffer.append(qr.i((int)object[n2++]));
                            stringBuffer.append(",");
                            ++n3;
                        }
                        stringBuffer.append("\n");
                        n3 = 0;
                        while (n3 < 50) {
                            stringBuffer.append(qr.i((int)object[n2++]));
                            stringBuffer.append(",");
                            ++n3;
                        }
                        break block33;
                    }
                    stringBuffer.append((String)object + "\n");
                    object = qj.a(n3);
                    n2 = 0;
                    n3 = 0;
                    while (n3 < 6) {
                        int n6 = 0;
                        while (n6 < 8) {
                            stringBuffer.append(qr.i((int)object[n2++]));
                            stringBuffer.append(",");
                            ++n6;
                        }
                        stringBuffer.append("\n");
                        ++n3;
                    }
                    n3 = 0;
                    while (n3 < 4) {
                        stringBuffer.append(qr.i((int)object[n2++]));
                        stringBuffer.append(",");
                        ++n3;
                    }
                    break block33;
                }
                stringBuffer.append((String)object + "\n");
                object = qj.a(n3);
                n2 = 0;
                n3 = 0;
                while (n3 < 7) {
                    int n7 = 0;
                    while (n7 < 7) {
                        stringBuffer.append(qr.i((int)object[n2++]));
                        stringBuffer.append(",");
                        if (n7 == n3) break;
                        ++n7;
                    }
                    stringBuffer.append("\n");
                    ++n3;
                }
                n3 = 0;
                while (n3 < 24) {
                    stringBuffer.append(qr.i((int)object[n2++]));
                    stringBuffer.append(",");
                    ++n3;
                }
                break block33;
            }
            stringBuffer.append((String)object + "\n");
            object = qj.a(n3);
            n2 = 0;
            n3 = 0;
            while (n3 < 3) {
                stringBuffer.append("         ");
                stringBuffer.append(qr.i((int)object[n2++]));
                stringBuffer.append(",");
                ++n3;
            }
            stringBuffer.append("\n");
            n3 = 0;
            while (n3 < 3) {
                stringBuffer.append("     ");
                stringBuffer.append(qr.i((int)object[n2++]));
                stringBuffer.append(",");
                stringBuffer.append(qr.i((int)object[n2++]));
                stringBuffer.append(",");
                ++n3;
            }
            stringBuffer.append("\n   ");
            n3 = 0;
            while (n3 < 9) {
                stringBuffer.append(qr.i((int)object[n2++]));
                stringBuffer.append(",");
                ++n3;
            }
            stringBuffer.append("\n");
            n3 = 0;
            while (n3 < 10) {
                stringBuffer.append(qr.i((int)object[n2++]));
                stringBuffer.append(",");
                ++n3;
            }
            stringBuffer.append("\n");
            n3 = 0;
            while (n3 < 24) {
                stringBuffer.append(qr.i((int)object[n2++]));
                stringBuffer.append(",");
                ++n3;
            }
            {
                break;
            }
        }
        return stringBuffer.toString();
    }

    final void a(S s2, String string) {
        if (string.equals("Klondike")) {
            int n2 = this.a.bn == 3 ? 1 : 0;
            this.p.setSelectedIndex(n2);
        } else if (string.equals("Spider")) {
            int n3 = this.a.bm == 4 ? 2 : (this.a.bm == 2 ? 1 : 0);
            this.q.setSelectedIndex(n3);
        }
        if (string.equals(this.a.bj)) {
            this.e();
            this.a.g("Clicking to activate gameChoice " + string);
            s2.a.doClick();
        }
    }

    final void a(r_0 r_02, String string) {
        if (this.a.bk == null && string.equals("Easy") || string.startsWith(this.a.bk)) {
            this.a.g("Clicking to activate gameDifficulty " + string);
            r_02.a.doClick();
        }
    }

    final void f() {
        Enumeration<AbstractButton> enumeration = this.c.getElements();
        int n2 = 1;
        while (enumeration.hasMoreElements()) {
            JRadioButton jRadioButton = (JRadioButton)enumeration.nextElement();
            if (jRadioButton.isSelected()) break;
            ++n2;
        }
        this.p.setEnabled(false);
        this.q.setEnabled(false);
        boolean bl2 = false;
        g_0 g_02 = this;
        if (g_02.j != null) {
            g_02.g.a.setEnabled(true);
            g_02.h.a.setEnabled(true);
            g_02.i.a.setEnabled(true);
            g_02.j.a.setEnabled(true);
        }
        switch (n2) {
            default: {
                if (this.a.d <= 5) {
                    this.a.g("Selected game Klondike");
                }
                this.p.setEnabled(true);
                this.a.bj = "Klondike";
                this.a.i = 1;
                break;
            }
            case 2: {
                if (this.a.d <= 5) {
                    this.a.g("Selected game Spider");
                }
                this.q.setEnabled(true);
                this.a.bj = "Spider";
                this.a.i = 2;
                break;
            }
            case 3: {
                if (this.a.d <= 5) {
                    this.a.g("Selected game Freecell");
                }
                this.a.bj = "FreeCell";
                this.a.i = 3;
                break;
            }
            case 4: {
                if (this.a.d <= 5) {
                    this.a.g("Selected game Pyramid");
                }
                this.a.bj = "Pyramid";
                this.a.i = 4;
                break;
            }
            case 5: {
                if (this.a.d <= 5) {
                    this.a.g("Selected game Tripeaks");
                }
                this.a.bj = "TriPeaks";
                this.a.i = 5;
            }
        }
        this.e();
    }

    final void g() {
        Enumeration<AbstractButton> enumeration = this.d.getElements();
        int n2 = 1;
        while (enumeration.hasMoreElements()) {
            JRadioButton jRadioButton = (JRadioButton)enumeration.nextElement();
            if (jRadioButton.isSelected()) break;
            ++n2;
        }
        this.a.g("Selected difficulty " + y[n2]);
        this.b.setEnabled(false);
        switch (n2) {
            case 1: {
                this.a.bk = "Easy";
                return;
            }
            case 2: {
                this.a.bk = "Moderate";
                return;
            }
            case 3: {
                this.a.bk = "Hard";
                return;
            }
            case 4: {
                this.a.bk = "Specific";
                this.b.setEnabled(true);
            }
        }
    }

    static void a(qo_0 qo_02, String string, String string2) {
        boolean bl2 = false;
        if (string.equals("play")) {
            qo_02.bg = 2;
        } else if (string.equals("msft")) {
            qo_02.bg = 3;
        } else if (string.equals("file")) {
            qo_02.bg = 4;
            qo_02.aq.e();
        } else if (string.equals("readcards")) {
            bl2 = qo_02.aq.b(string2);
        } else if (string.equals("readsolution")) {
            bl2 = qo_02.aq.c(string2);
        }
        if (bl2) {
            qo_02.aq.c();
            if (qo_02.m == 2) {
                qo_02.c(2);
                return;
            }
            qo_02.c(7);
            return;
        }
        qo_02.b(true);
        qo_0 qo_03 = qo_02;
        qo_03.g("Storing current mode choice " + qo_03.bg);
        qo_02.aq.a("modeChoice", "" + qo_02.bg);
        qo_02.aq.t();
    }
}

