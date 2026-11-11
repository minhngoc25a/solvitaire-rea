/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui;

import com.solvitaire.solitaire.ui.handlers.KHandler;
import com.solvitaire.solitaire.ui.handlers.LHandler;
import com.solvitaire.solitaire.ui.handlers.MHandler;
import com.solvitaire.solitaire.ui.handlers.NHandler;
import com.solvitaire.solitaire.ui.handlers.OHandler;
import com.solvitaire.solitaire.ui.panels.PPanel;
import com.solvitaire.solitaire.ui.panels.SPanel;
import com.solvitaire.solitaire.ui.handlers.h_0Handler;
import com.solvitaire.solitaire.ui.handlers.i_0Handler;
import com.solvitaire.solitaire.ui.handlers.j_0Handler;
import com.solvitaire.solitaire.ui.panels.q_0Panel;
import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.util.qj;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.solver.SolitaireSolver;
import com.solvitaire.solitaire.ui.panels.qzPanel;
import com.solvitaire.solitaire.ui.panels.r_0Panel;
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
public final class ModeSelector {
    SolitaireGameEngine AboutDialog;
    JTextField b = new JTextField();
    ButtonGroup c;
    ButtonGroup d;
    Font e;
    private Font wHandler;
    private Color xHandler = new Color(220, 165, 0);
    Color f;
    private static String[] yHandler = new String[]{"", "Easy", "Moderate", "Hard", "Specific"};
    r_0Panel g;
    r_0Panel h;
    r_0Panel i;
    r_0Panel j;
    SPanel k;
    SPanel l;
    SPanel m;
    SPanel n;
    SPanel o;
    private String[] z = new String[]{"1 card deal", "3 card deal"};
    private String[] A = new String[]{"1 suit", "2 suits", "4 suits"};
    JComboBox p;
    JComboBox q;
    private JPanel B;
    private JButton CHandler;
    private JButton DHandler;
    JCheckBox rPanel;
    private ImageIcon EHandler;
    h_0Handler s = new h_0Handler(this);
    i_0Handler t = new i_0Handler(this);
    j_0Handler uPanel = new j_0Handler(this);
    KHandler v = new KHandler(this);

    ModeSelector(SolitaireGameEngine qo_02) {
        this.AboutDialog = qo_02;
    }

    private void AboutDialog(JPanel jPanel) {
        this.AboutDialog(jPanel, "Solvitaire", "");
    }

    private void AboutDialog(JPanel jPanel, String object, String string) {
        this.f = this.AboutDialog.b(0);
        Serializable serializable = new JLabel(" ").getFont();
        this.e = new Font(((Font)serializable).getName(), 0, ((Font)serializable).getSize() * 12 / 10);
        this.wHandler = string.length() == 0 ? new Font("Gabriola", 1, ((Font)serializable).getSize() * 50 / 10) : new Font("Gabriola", 1, ((Font)serializable).getSize() * 30 / 10);
        this.EHandler = this.AboutDialog.aq.AboutDialog("cards.gif");
        this.AboutDialog.aq.A.setLayout(new BoxLayout(this.AboutDialog.aq.A, 0));
        this.AboutDialog.aq.A.setBorder(BorderFactory.createEmptyBorder(0, 10, 0, 10));
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
        this.AboutDialog.aq.A.add((Component)serializable);
        serializable = new JPanel();
        ((Container)serializable).setLayout(new BoxLayout((Container)serializable, 0));
        ((JComponent)serializable).setBackground(this.AboutDialog.b(1));
        object = new JLabel((String)object + string);
        ((JComponent)object).setBorder(new EmptyBorder(20, 0, 0, 0));
        ((JComponent)object).setFont(this.wHandler);
        ((JComponent)object).setForeground(this.xHandler);
        ((JComponent)serializable).setAlignmentY(0.5f);
        ((Container)serializable).add(Box.createHorizontalGlue());
        ((Container)serializable).add((Component)object);
        object = new JLabel();
        ((JLabel)object).setIcon(this.EHandler);
        ((Container)serializable).add(Box.createHorizontalStrut(70));
        ((Container)serializable).add((Component)object);
        ((Container)serializable).add(Box.createHorizontalGlue());
        jPanel.setOpaque(false);
        this.B.add((Component)serializable);
        this.B.add(Box.createVerticalGlue());
        this.B.add(jPanel);
        this.B.add(Box.createVerticalStrut(10));
    }

    final void AboutDialog() {
        this.AboutDialog.g("Setting up mode choice pane, modeRemembered " + this.AboutDialog.bi);
        this.AboutDialog.aq.h();
        JPanel jPanel = new JPanel();
        this.AboutDialog(jPanel);
        jPanel.setLayout(new GridLayout(1, 3));
        jPanel.setBorder(BorderFactory.createTitledBorder("Choose the mode of operation"));
        ((TitledBorder)jPanel.getBorder()).setTitleFont(this.e);
        ImageIcon imageIcon = this.AboutDialog.aq.AboutDialog("microsoftsolitaire.gif");
        ImageIcon imageIcon2 = this.AboutDialog.aq.AboutDialog("fromfile.gif");
        new q_0Panel(this, jPanel, "<html>Solve games from<br>Microsoft Solitaire Collection</html>", imageIcon, "<html>This mode will solve Microsoft Solitaire Collection games.<br>You should have Solitaire Collection started and showing the game<br>that you want Solvitaire to solve</html>");
        new q_0Panel(this, jPanel, "<html>Read games in<br>from file</html>", imageIcon2, "<html>This mode reads the cards (or solution) from file and lets you<br>play it or have Solvitaire solve it for you.  There are example card files<br>in the Games directory</html>");
        new q_0Panel(this, jPanel, "<html>Play<br>Solitaire</html>", this.EHandler, "<html>Use this mode to just play AboutDialog game.  You can choose the type of game<br>and the level of difficulty</html>");
        this.rPanel = new JCheckBox("Remember my selection");
        this.rPanel.setOpaque(false);
        this.AboutDialog.aq.B.add(Box.createHorizontalGlue());
        this.rPanel.setBorder(BorderFactory.createEmptyBorder(0, 0, 20, 0));
        this.AboutDialog.aq.B.add(this.rPanel);
        this.rPanel.setFont(this.e);
        this.rPanel.setMaximumSize(new Dimension(200, 40));
        this.rPanel.setSelected(this.AboutDialog.bi);
        this.AboutDialog.aq.B.add(Box.createHorizontalGlue());
        this.AboutDialog.aq.B.validate();
        this.rPanel.addActionListener(new LHandler(this));
    }

    final void b() {
        JLabel jLabel = this.AboutDialog.aq.h();
        Object object = new JPanel();
        this.AboutDialog((JPanel)object);
        this.AboutDialog.bj = this.AboutDialog.aq.b("gameSelection", "Klondike");
        this.AboutDialog.bk = this.AboutDialog.aq.b("gameDifficulty", "Easy");
        this.AboutDialog.bm = this.AboutDialog.aq.c("gameParmSpider", 1);
        this.AboutDialog.bn = this.AboutDialog.aq.c("gameParmKlondike", 1);
        this.e();
        this.AboutDialog.br.c();
        ((Container)object).setLayout(new GridLayout(0, 2));
        ((JComponent)object).setBorder(BorderFactory.createTitledBorder("Choose the version of Solitaire"));
        ((TitledBorder)((JComponent)object).getBorder()).setTitleFont(this.e);
        this.c = new ButtonGroup();
        this.d = new ButtonGroup();
        this.p = new JComboBox<String>(this.z);
        this.q = new JComboBox<String>(this.A);
        this.k = new SPanel(this, (JPanel)object, "Klondike", this.p);
        this.p.setMaximumRowCount(2);
        this.l = new SPanel(this, (JPanel)object, "Spider", this.q);
        this.q.setMaximumRowCount(3);
        this.m = new SPanel(this, (JPanel)object, "FreeCell", null);
        this.n = new SPanel(this, (JPanel)object, "Pyramid", null);
        this.o = new SPanel(this, (JPanel)object, "TriPeaks", null);
        object = new JPanel();
        ((JComponent)object).setOpaque(false);
        this.B.add((Component)object);
        this.B.add(Box.createVerticalGlue());
        ((Container)object).setLayout(new GridLayout(0, 2));
        ((JComponent)object).setBorder(BorderFactory.createTitledBorder("Choose the level of difficulty"));
        ((TitledBorder)((JComponent)object).getBorder()).setTitleFont(this.e);
        this.g = new r_0Panel(this, (JPanel)object, "Easy", null);
        this.h = new r_0Panel(this, (JPanel)object, "Moderate", null);
        this.i = new r_0Panel(this, (JPanel)object, "Hard", null);
        this.j = new r_0Panel(this, (JPanel)object, "Specific game # (seed)", this.b);
        this.j.AboutDialog.setToolTipText("<html>The seed determines the deal.<br>Specify the seed if you want to replay AboutDialog particular deal<br>The algorithm matches the one used by Microsoft FreeCell");
        this.b.setText("" + this.AboutDialog.bo);
        object = BorderFactory.createEmptyBorder(5, 10, 5, 10);
        Border border = BorderFactory.createEtchedBorder(0);
        this.AboutDialog.aq.B.setBorder(BorderFactory.createCompoundBorder(border, (Border)object));
        this.AboutDialog.aq.B.add(Box.createHorizontalStrut(10));
        object = new JPanel();
        ((JComponent)object).setOpaque(false);
        jLabel.setPreferredSize(new Dimension(400, 30));
        jLabel.setFont(this.e);
        ((Container)object).add(jLabel);
        this.AboutDialog.aq.B.add((Component)object);
        this.AboutDialog.aq.B.add(Box.createHorizontalStrut(10));
        this.CHandler = new JButton("  OK  ");
        this.AboutDialog.aq.B.add(this.CHandler);
        this.CHandler.setFont(this.e);
        this.AboutDialog.aq.B.add(Box.createHorizontalGlue());
        this.AboutDialog.aq.B.revalidate();
        this.CHandler.addActionListener(new MHandler(this));
    }

    final void c() {
        this.AboutDialog.aq.h();
        JPanel jPanel = new JPanel();
        this.AboutDialog(jPanel);
        jPanel.setOpaque(false);
        jPanel.setLayout(new GridLayout(0, 2));
        jPanel.setBorder(BorderFactory.createTitledBorder("Do you want to solve cards or run through AboutDialog solution?"));
        ((TitledBorder)jPanel.getBorder()).setTitleFont(this.e);
        new PPanel(this, jPanel, "Solve existing cards...", "<html>Use this button if you have AboutDialog file that contains the card layout<br>There are sample card files in the Games directory</html>");
        new PPanel(this, jPanel, "Play existing solution...", "<html>Use this button if you have already saved AboutDialog solution<br>(AboutDialog solution_cards*.txt file) and you want to inspect it</html>");
        this.AboutDialog.m = 0;
    }

    /*
     * Unable to fully structure code
     */
    final void d() {
        block15: {
            block14: {
                block13: {
                    this.AboutDialog.aq.h();
                    var1_1 = new qzPanel(this.AboutDialog);
                    this.AboutDialog.br.AboutDialog();
                    var2_2 = this.AboutDialog.br;
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

        this.AboutDialog(var1_1, "Statistics for ", var3_3);
        var1_1.AboutDialog(this.AboutDialog.aq.j, this.AboutDialog.aq.k);
        var1_1.revalidate();
        var1_1.repaint();
        this.AboutDialog.aq.B.setBorder(BorderFactory.createEmptyBorder(0, 0, 10, 0));
        this.AboutDialog.aq.B.add(Box.createHorizontalGlue());
        this.CHandler = new JButton("  OK  ");
        this.AboutDialog.aq.B.add(this.CHandler);
        this.CHandler.setFont(this.e);
        this.AboutDialog.aq.B.add(Box.createHorizontalStrut(20));
        this.DHandler = new JButton("Reset...");
        this.AboutDialog.aq.B.add(this.DHandler);
        this.DHandler.setFont(this.e);
        this.AboutDialog.aq.B.add(Box.createHorizontalGlue());
        this.AboutDialog.aq.B.revalidate();
        this.CHandler.addActionListener(new NHandler(this));
        this.DHandler.addActionListener(new OHandler(this));
    }

    final void e() {
        this.AboutDialog.bl = 0;
        switch (this.AboutDialog.bj) {
            case "Klondike": {
                this.AboutDialog.bl = this.AboutDialog.bn;
                break;
            }
            case "Spider": {
                this.AboutDialog.bl = this.AboutDialog.bm;
            }
        }
        this.AboutDialog.g("Select gameParm " + this.AboutDialog.bl + " for " + this.AboutDialog.bj);
    }

    final void AboutDialog(MainWindow object) {
        if (this.AboutDialog.d <= 5) {
            this.AboutDialog.g("Game selection " + this.AboutDialog.bj);
        }
        switch (this.AboutDialog.bj) {
            case "Klondike": {
                int n2 = this.p.getSelectedIndex();
                this.AboutDialog.bn = n2 == 1 ? 3 : 1;
                this.AboutDialog.l.q = "klondike";
                ((MainWindow)object).AboutDialog("gameParmKlondike", "" + this.AboutDialog.bl);
                break;
            }
            case "Spider": {
                int n3 = this.q.getSelectedIndex();
                this.AboutDialog.bm = n3 == 1 ? 2 : (n3 == 2 ? 4 : 1);
                this.AboutDialog.l.q = "spider";
                ((MainWindow)object).AboutDialog("gameParmSpider", "" + this.AboutDialog.bl);
                break;
            }
            case "FreeCell": {
                this.AboutDialog.l.q = "freecell";
                break;
            }
            case "Pyramid": {
                this.AboutDialog.l.q = "pyramid";
                break;
            }
            case "TriPeaks": {
                this.AboutDialog.l.q = "tripeaks";
            }
        }
        this.e();
        String string = this.b.getText();
        if (string.equals("0") && !this.AboutDialog.bk.equals("Specific")) {
            this.AboutDialog.bo = this.AboutDialog.bq.AboutDialog(this.AboutDialog.bj, this.AboutDialog.bl, this.AboutDialog.bk, 0);
        } else {
            try {
                this.AboutDialog.bo = Integer.parseInt(string);
            }
            catch (Exception exception) {
                if (!this.AboutDialog.bk.equals("Specific")) {
                    this.AboutDialog.bo = this.AboutDialog.bq.AboutDialog(this.AboutDialog.bj, this.AboutDialog.bl, this.AboutDialog.bk, this.AboutDialog.bo);
                }
                string = "Exception reading seed.  It must be an integer.";
                object = this.AboutDialog;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
                return;
            }
        }
        string = ModeSelector.AboutDialog(this.AboutDialog.l.q, this.AboutDialog.bl, this.AboutDialog.bo);
        String string2 = this.AboutDialog.as + SolitaireGameEngine.o + this.AboutDialog.l.q + String.valueOf(this.AboutDialog.bl > 0 ? Integer.valueOf(this.AboutDialog.bl) : "") + File.separator;
        this.AboutDialog.l.AboutDialog(string2, false);
        int n4 = this.AboutDialog.l.b();
        this.AboutDialog.l.AboutDialog(n4 + 1);
        this.AboutDialog.AboutDialog(this.AboutDialog.l.p + this.AboutDialog.l.d(), string, true);
        ((MainWindow)object).AboutDialog("gameDifficulty", this.AboutDialog.bk);
        ((MainWindow)object).AboutDialog("gameSelection", this.AboutDialog.bj);
        ((MainWindow)object).t();
        this.AboutDialog.aq.c();
        this.AboutDialog.m = 2;
        this.AboutDialog.c(2);
    }

    static String AboutDialog(String object, int n2, int n3) {
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
                                object = qj.AboutDialog(n3);
                                n2 = 0;
                                int n4 = 0;
                                while (n4 < 7) {
                                    n3 = 0;
                                    while (n3 < 7) {
                                        if (n3 < n4) {
                                            stringBuffer.append("   ");
                                        } else {
                                            stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                                            stringBuffer.append(",");
                                        }
                                        ++n3;
                                    }
                                    stringBuffer.append("\n");
                                    ++n4;
                                }
                                n4 = 0;
                                while (n4 < 24) {
                                    stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                                    stringBuffer.append(",");
                                    ++n4;
                                }
                                break;
                            }
                        }
                        stringBuffer.append((String)object + "\n");
                        int n5 = n2;
                        object = qj.AboutDialog(n3, n5);
                        n2 = 0;
                        n3 = 0;
                        while (n3 < 5) {
                            n5 = 0;
                            while (n5 < 10) {
                                stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                                stringBuffer.append(",");
                                ++n5;
                            }
                            stringBuffer.append("\n");
                            ++n3;
                        }
                        n3 = 0;
                        while (n3 < 4) {
                            stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                            stringBuffer.append(",");
                            ++n3;
                        }
                        stringBuffer.append("\n");
                        n3 = 0;
                        while (n3 < 50) {
                            stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                            stringBuffer.append(",");
                            ++n3;
                        }
                        break block33;
                    }
                    stringBuffer.append((String)object + "\n");
                    object = qj.AboutDialog(n3);
                    n2 = 0;
                    n3 = 0;
                    while (n3 < 6) {
                        int n6 = 0;
                        while (n6 < 8) {
                            stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                            stringBuffer.append(",");
                            ++n6;
                        }
                        stringBuffer.append("\n");
                        ++n3;
                    }
                    n3 = 0;
                    while (n3 < 4) {
                        stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                        stringBuffer.append(",");
                        ++n3;
                    }
                    break block33;
                }
                stringBuffer.append((String)object + "\n");
                object = qj.AboutDialog(n3);
                n2 = 0;
                n3 = 0;
                while (n3 < 7) {
                    int n7 = 0;
                    while (n7 < 7) {
                        stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                        stringBuffer.append(",");
                        if (n7 == n3) break;
                        ++n7;
                    }
                    stringBuffer.append("\n");
                    ++n3;
                }
                n3 = 0;
                while (n3 < 24) {
                    stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                    stringBuffer.append(",");
                    ++n3;
                }
                break block33;
            }
            stringBuffer.append((String)object + "\n");
            object = qj.AboutDialog(n3);
            n2 = 0;
            n3 = 0;
            while (n3 < 3) {
                stringBuffer.append("         ");
                stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                stringBuffer.append(",");
                ++n3;
            }
            stringBuffer.append("\n");
            n3 = 0;
            while (n3 < 3) {
                stringBuffer.append("     ");
                stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                stringBuffer.append(",");
                stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                stringBuffer.append(",");
                ++n3;
            }
            stringBuffer.append("\n   ");
            n3 = 0;
            while (n3 < 9) {
                stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                stringBuffer.append(",");
                ++n3;
            }
            stringBuffer.append("\n");
            n3 = 0;
            while (n3 < 10) {
                stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                stringBuffer.append(",");
                ++n3;
            }
            stringBuffer.append("\n");
            n3 = 0;
            while (n3 < 24) {
                stringBuffer.append(SolitaireSolver.i((int)object[n2++]));
                stringBuffer.append(",");
                ++n3;
            }
            {
                break;
            }
        }
        return stringBuffer.toString();
    }

    final void AboutDialog(SPanel s2, String string) {
        if (string.equals("Klondike")) {
            int n2 = this.AboutDialog.bn == 3 ? 1 : 0;
            this.p.setSelectedIndex(n2);
        } else if (string.equals("Spider")) {
            int n3 = this.AboutDialog.bm == 4 ? 2 : (this.AboutDialog.bm == 2 ? 1 : 0);
            this.q.setSelectedIndex(n3);
        }
        if (string.equals(this.AboutDialog.bj)) {
            this.e();
            this.AboutDialog.g("Clicking to activate gameChoice " + string);
            s2.AboutDialog.doClick();
        }
    }

    final void AboutDialog(r_0Panel r_02, String string) {
        if (this.AboutDialog.bk == null && string.equals("Easy") || string.startsWith(this.AboutDialog.bk)) {
            this.AboutDialog.g("Clicking to activate gameDifficulty " + string);
            r_02.AboutDialog.doClick();
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
        ModeSelector g_02 = this;
        if (g_02.j != null) {
            g_02.g.AboutDialog.setEnabled(true);
            g_02.h.AboutDialog.setEnabled(true);
            g_02.i.AboutDialog.setEnabled(true);
            g_02.j.AboutDialog.setEnabled(true);
        }
        switch (n2) {
            default: {
                if (this.AboutDialog.d <= 5) {
                    this.AboutDialog.g("Selected game Klondike");
                }
                this.p.setEnabled(true);
                this.AboutDialog.bj = "Klondike";
                this.AboutDialog.i = 1;
                break;
            }
            case 2: {
                if (this.AboutDialog.d <= 5) {
                    this.AboutDialog.g("Selected game Spider");
                }
                this.q.setEnabled(true);
                this.AboutDialog.bj = "Spider";
                this.AboutDialog.i = 2;
                break;
            }
            case 3: {
                if (this.AboutDialog.d <= 5) {
                    this.AboutDialog.g("Selected game Freecell");
                }
                this.AboutDialog.bj = "FreeCell";
                this.AboutDialog.i = 3;
                break;
            }
            case 4: {
                if (this.AboutDialog.d <= 5) {
                    this.AboutDialog.g("Selected game Pyramid");
                }
                this.AboutDialog.bj = "Pyramid";
                this.AboutDialog.i = 4;
                break;
            }
            case 5: {
                if (this.AboutDialog.d <= 5) {
                    this.AboutDialog.g("Selected game Tripeaks");
                }
                this.AboutDialog.bj = "TriPeaks";
                this.AboutDialog.i = 5;
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
        this.AboutDialog.g("Selected difficulty " + yHandler[n2]);
        this.b.setEnabled(false);
        switch (n2) {
            case 1: {
                this.AboutDialog.bk = "Easy";
                return;
            }
            case 2: {
                this.AboutDialog.bk = "Moderate";
                return;
            }
            case 3: {
                this.AboutDialog.bk = "Hard";
                return;
            }
            case 4: {
                this.AboutDialog.bk = "Specific";
                this.b.setEnabled(true);
            }
        }
    }

    static void AboutDialog(SolitaireGameEngine qo_02, String string, String string2) {
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
        SolitaireGameEngine qo_03 = qo_02;
        qo_03.g("Storing current mode choice " + qo_03.bg);
        qo_02.aq.AboutDialog("modeChoice", "" + qo_02.bg);
        qo_02.aq.t();
    }
}

