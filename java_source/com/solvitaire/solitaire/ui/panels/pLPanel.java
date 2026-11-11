/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.reader.BoardReader;
import com.solvitaire.solitaire.util.g;
import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.util.pM;
import com.solvitaire.solitaire.ui.handlers.pNHandler;
import com.solvitaire.solitaire.ui.handlers.pOHandler;
import com.solvitaire.solitaire.ui.handlers.pPHandler;
import com.solvitaire.solitaire.ui.panels.pQPanel;
import com.solvitaire.solitaire.util.pR;
import com.solvitaire.solitaire.util.pS;
import com.solvitaire.solitaire.util.pT;
import com.solvitaire.solitaire.ui.panels.pUPanel;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.util.qa;
import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.ui.panels.rPanel;
import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Component;
import java.awt.Container;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.Point;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;
import java.io.Serializable;
import java.util.Iterator;
import javax.swing.Action;
import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JComponent;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.KeyStroke;
import javax.swing.border.BevelBorder;
import javax.swing.border.EmptyBorder;

public final class pLPanel
extends g {
    private static String[] ak = new String[]{"Unknown", "Klondike", "Spider", "Freecell", "Pyramid", "TriPeaks", "Choose your game"};
    CardImage[] o;
    volatile int p;
    private int al;
    private CardImage am = null;
    private boolean an;
    Point q = new Point();
    Point rPanel = new Point();
    private int ao = 0;
    private int ap = 40;
    private int aq;
    private Font ar;
    Font s;
    Font t;
    Font uPanel;
    Font v;
    Font wHandler;
    Font xHandler;
    Font yHandler;
    private Font as;
    private Font at;
    private Point au = new Point();
    private int av;
    private int aw;
    private int ax;
    private int ay;
    private int az;
    private int aA;
    rPanel z;
    Card A;
    transient int B;
    transient boolean CHandler;
    transient boolean DHandler;
    private boolean aB;
    int EHandler;
    private boolean aC;
    private JLabel aD;
    int FPanel;
    int G;
    int H;
    int I;
    int J;
    int KHandler;
    int LHandler;
    int MHandler;
    int NHandler;
    int OHandler;
    int PPanel;
    int Q;
    int R;
    int SPanel;
    int T;
    int U;
    int V;
    int W;
    int X;
    int Y;
    private int aE;
    int Z;
    int aa;
    int ab;
    private int aF;
    private int aG;
    int ac;
    private int aH;
    private int aI;
    JPanel ad;
    private JPanel aJ;
    pUPanel ae;
    private ImageIcon aK;
    private JLabel aL;
    private JLabel aM;
    private JLabel aN;
    JLabel af = new JLabel();
    private Color aO;
    private Color aP;
    private JButton aQ;
    private JButton aR;
    private double aS = 1.0;
    private int[] aT;
    boolean ag;
    boolean ah;
    private static Dimension aU = new Dimension(100, 0);
    int ai;
    int DesktopDuplication;
    private pM aV = new pM(this);

    pLPanel(SolitaireGameEngine qo_02, boolean bl2) {
        super(qo_02);
        this.aq = this.aw - 220;
        this.aK = qo_02.aq.AboutDialog("solvitaire64.gif");
        this.o = new CardImage[104];
        this.p = 0;
        this.aO = qo_02.b(2);
        this.aP = qo_02.b(1);
        qo_02.aq.yHandler.setBackground(this.aP);
        try {
            this.as = new Font("Helvetica", 1, 16);
            this.ar = new Font("Helvetica", 0, 12);
            this.at = new Font("Helvetica", 1, 12);
        }
        catch (Exception exception) {}
        JPanel jPanel = qo_02.aq.z;
        jPanel.removeAll();
        jPanel.setOpaque(true);
        jPanel.setBackground(this.aO);
        jPanel.setBorder(new EmptyBorder(2, 20, 3, 5));
        jPanel.setLayout(new BoxLayout(jPanel, 1));
        Serializable serializable = new JPanel();
        ((JComponent)serializable).setBackground(this.aO);
        ((Container)serializable).setLayout(new BoxLayout((Container)serializable, 0));
        Object object = new JPanel();
        ((JComponent)object).setBackground(this.aO);
        ((Container)object).setLayout(new BoxLayout((Container)object, 0));
        this.aQ = new JButton("Change file");
        this.aL = new JLabel("");
        this.aL.setForeground(Color.WHITE);
        this.aL.setFont(this.as);
        ((Container)serializable).add(this.aL);
        ((Container)serializable).add(Box.createHorizontalStrut(10));
        jPanel.add((Component)serializable);
        this.aM = new JLabel("");
        if (bl2) {
            this.aM.setForeground(Color.WHITE);
            this.aM.setFont(this.as);
            ((Container)serializable).add(Box.createHorizontalStrut(10));
            ((Container)serializable).add(this.aM);
        }
        this.aN = new JLabel("");
        this.aN.setForeground(Color.WHITE);
        this.aN.setFont(this.as);
        ((Container)serializable).add(this.aN);
        ((Container)serializable).add(Box.createHorizontalGlue());
        this.aD = new JLabel("");
        if (!bl2) {
            this.aD.setForeground(Color.WHITE);
            this.aD.setFont(this.as);
            ((Container)object).add(this.aD);
            ((Container)object).add(Box.createHorizontalStrut(20));
            ((Container)object).add(this.aQ);
            ((Container)object).add(Box.createHorizontalGlue());
            jPanel.add((Component)object);
        } else {
            ((Container)serializable).add(Box.createHorizontalGlue());
            this.af.setText("00:00:00");
            this.af.setForeground(Color.WHITE);
            this.af.setFont(this.as);
            ((Container)serializable).add(this.af);
            ((Container)serializable).add(Box.createHorizontalStrut(300));
        }
        serializable = new pNHandler(this);
        pLPanel pL2 = this;
        this.ae = new pUPanel(pL2, pL2);
        this.ae.setBackground(this.aP);
        this.ae.getInputMap(2).put(KeyStroke.getKeyStroke(90, 128), "UNDO");
        this.ae.getActionMap().put("UNDO", (Action)((Object)serializable));
        this.ae.AboutDialog = true;
        this.z = new rPanel(qo_02, this);
        this.z.setOpaque(false);
        this.z.setBorder(new BevelBorder(1));
        this.z.setPreferredSize(aU);
        this.z.setMaximumSize(aU);
        this.ad = qo_02.aq.A;
        this.ad.removeAll();
        this.ad.setLayout(new BoxLayout(this.ad, 0));
        this.ad.setBorder(BorderFactory.createEmptyBorder(0, 0, 0, 0));
        this.aJ = new JPanel();
        this.aJ.setLayout(new BoxLayout(this.aJ, 1));
        this.aJ.add(this.ae);
        this.aJ.add(this.z);
        this.ad.add(this.aJ);
        serializable = new JPanel();
        ((Container)serializable).setLayout(new BorderLayout());
        Serializable serializable2 = serializable;
        object = qo_02.aq.e;
        qo_02.aq.e.AboutDialog = serializable2;
        object = new Dimension(230, 10000);
        ((JComponent)serializable).setPreferredSize((Dimension)object);
        ((JComponent)serializable).setMaximumSize((Dimension)object);
        ((JComponent)serializable).setBackground(qo_02.b(0));
        this.ad.add((Component)serializable);
        serializable = qo_02.aq.B;
        ((Container)serializable).removeAll();
        ((JComponent)serializable).setBackground(this.aO);
        ((JComponent)serializable).setBorder(BorderFactory.createEtchedBorder());
        object = new JPanel();
        ((Container)object).setLayout(new BoxLayout((Container)object, 1));
        ((JComponent)object).setOpaque(false);
        serializable2 = new Dimension(350, 60);
        ((JComponent)object).setPreferredSize((Dimension)serializable2);
        ((JComponent)object).setMaximumSize((Dimension)serializable2);
        serializable2 = qo_02.aq.h();
        ((JComponent)serializable2).setBackground(qo_02.b(0));
        ((JComponent)serializable2).setOpaque(true);
        ((JComponent)serializable2).setFont(this.ar);
        ((Container)object).add(Box.createVerticalGlue());
        ((Container)object).add((Component)serializable2);
        ((Container)object).add(Box.createVerticalGlue());
        ((Container)serializable).add((Component)object);
        ((Container)serializable).add(Box.createHorizontalGlue());
        object = qo_02.aq.b(true);
        ((Container)serializable).add((Component)object);
        ((Container)serializable).add(Box.createHorizontalStrut(8));
        this.aR = new JButton();
        object = new Dimension(40, 40);
        this.aR.setPreferredSize((Dimension)object);
        this.aR.setMaximumSize((Dimension)object);
        this.aR.setIcon(qo_02.aq.PPanel);
        this.aR.setFocusable(true);
        this.aR.setEnabled(false);
        this.aR.setToolTipText("No more unknown cards are available");
        ((Container)serializable).add(this.aR);
        ((Container)serializable).add(Box.createHorizontalGlue());
        qo_02.aq.i();
        qo_02.aq.EHandler.setBackground(qo_02.b(0));
        qo_02.aq.EHandler.setOpaque(true);
        qo_02.aq.EHandler.setPreferredSize(new Dimension(230, 60));
        qo_02.aq.EHandler.setMaximumSize(new Dimension(230, 60));
        qo_02.aq.EHandler.setBorder(BorderFactory.createLoweredBevelBorder());
        ((Container)serializable).add(qo_02.aq.EHandler);
        this.aQ.addActionListener(new pOHandler(this, qo_02));
        this.aR.addActionListener(new pPHandler(this, qo_02));
        object = new pQPanel(this, qo_02);
        this.z.addMouseListener((MouseListener)object);
        this.ae.addMouseListener((MouseListener)object);
        this.ae.addMouseMotionListener((MouseMotionListener)object);
        this.z.addKeyListener(new pR(this));
        this.z.addFocusListener(new pS(this, qo_02));
        this.z.setFocusable(true);
        this.ae.addKeyListener(new pT(this, qo_02));
        this.ae.addFocusListener(this.aV);
        this.ae.setFocusable(true);
        ((Component)serializable).addFocusListener(this.aV);
        this.f();
        this.av = this.aJ.getWidth();
        this.aw = this.aJ.getHeight();
        if (qo_02.d <= 5) {
            qo_02.g("New board dimensions are " + this.av + "xHandler" + this.aw + " seeded:" + bl2);
        }
        this.k();
        jPanel.revalidate();
        jPanel.repaint();
        this.ad.revalidate();
        this.ad.repaint();
        ((JComponent)serializable).revalidate();
        ((Component)serializable).repaint();
    }

    private void j() {
        int n2;
        double d2 = this.aJ.getWidth();
        double d3 = this.aJ.getHeight();
        int n3 = switch (this.k.i) {
            case 1 -> {
                n2 = 130;
                yield 125;
            }
            default -> {
                n2 = 102;
                yield 130;
            }
            case 3 -> {
                n2 = 125;
                yield 130;
            }
            case 4 -> {
                n2 = 130;
                yield 134;
            }
            case 5 -> {
                n2 = 104;
                yield 134;
            }
        };
        this.aS = d2 * (double)n2 / 100000.0;
        if (d3 * (double)n3 < 70000.0 * this.aS) {
            this.aS = d3 * (double)n3 / 70000.0;
        }
    }

    private double AboutDialog(double d2) {
        return (int)(d2 * this.aS);
    }

    private void k() {
        pLPanel pL2;
        int n2;
        this.j();
        try {
            n2 = 15;
            pL2 = this;
            this.s = new Font("Yu Gothic UI Semibold", 0, (int)pL2.AboutDialog((double)n2));
            n2 = -15;
            pL2 = this;
            this.uPanel = new Font("Yu Gothic UI Semibold", 0, (int)pL2.AboutDialog((double)n2));
            n2 = 12;
            pL2 = this;
            this.t = new Font("Yu Gothic UI Semibold", 0, (int)pL2.AboutDialog((double)n2));
            n2 = -12;
            pL2 = this;
            this.v = new Font("Yu Gothic UI Semibold", 0, (int)pL2.AboutDialog((double)n2));
            n2 = 35;
            pL2 = this;
            this.wHandler = new Font("Yu Gothic UI Semibold", 0, (int)pL2.AboutDialog((double)n2));
            n2 = 17;
            pL2 = this;
            this.xHandler = new Font("Yu Gothic UI Semibold", 0, (int)pL2.AboutDialog((double)n2));
            n2 = -17;
            pL2 = this;
            this.yHandler = new Font("Yu Gothic UI Semibold", 0, (int)pL2.AboutDialog((double)n2));
        }
        catch (Exception exception) {}
        this.b = this.AboutDialog(80.0);
        n2 = 110;
        pL2 = this;
        pL2.c = (int)pL2.AboutDialog((double)n2);
        CardImage.b = (int)this.b;
        CardImage.c = this.c;
        this.ai = (int)this.AboutDialog(12.0);
        this.DesktopDuplication = (int)this.AboutDialog(18.0);
        n2 = 16;
        pL2 = this;
        pL2.ax = (int)pL2.AboutDialog((double)n2);
        n2 = 16;
        pL2 = this;
        pL2.ay = (int)pL2.AboutDialog((double)n2);
        n2 = 30;
        pL2 = this;
        pL2.az = (int)pL2.AboutDialog((double)n2);
        n2 = 20;
        pL2 = this;
        pL2.aA = (int)pL2.AboutDialog((double)n2);
        n2 = 4;
        pL2 = this;
        pL2.FPanel = (int)pL2.AboutDialog((double)n2);
        n2 = 15;
        pL2 = this;
        pL2.G = (int)pL2.AboutDialog((double)n2);
        n2 = 4;
        pL2 = this;
        pL2.H = (int)pL2.AboutDialog((double)n2);
        n2 = 27;
        pL2 = this;
        pL2.I = (int)pL2.AboutDialog((double)n2);
        double d2 = this.AboutDialog(25.0);
        double d3 = this.AboutDialog(8.5);
        double d4 = (this.b - d2 * 2.0) / 2.0;
        this.J = (int)(d2 - d3);
        this.KHandler = (int)(d2 + d4 - d3);
        this.LHandler = (int)(d2 + d4 * 2.0 - d3);
        this.MHandler = (int)(d2 + d3);
        this.NHandler = (int)(d2 + d4 + d3);
        this.OHandler = (int)(d2 + d4 * 2.0 + d3);
        double d5 = this.AboutDialog(20.0);
        double d6 = this.AboutDialog(8.0);
        double d7 = ((double)this.c - d5 * 2.0) / 6.0;
        double d8 = ((double)this.c - d5 * 2.0) / 4.0;
        this.PPanel = (int)(d5 + d6);
        this.Q = (int)(d5 + d7 + d6);
        this.R = (int)(d5 + d7 * 2.0 + d6);
        this.SPanel = (int)(d5 + d7 * 3.0 + d6);
        this.T = (int)(d5 + d7 * 4.0 - d6);
        this.U = (int)(d5 + d7 * 5.0 - d6);
        this.V = (int)(d5 + d7 * 6.0 - d6);
        this.W = (int)(d5 + d8 + d6);
        this.X = (int)(d5 + d8 * 2.0 + d6);
        this.aE = (int)(d5 + d8 * 3.0 + d6);
        this.Y = (int)(d5 + d8 * 3.0 - d6);
        this.Z = (int)(d5 + d8 * 4.0 - d6);
        n2 = 18;
        pLPanel pL3 = this;
        pL3.aa = (int)pL3.AboutDialog((double)n2);
        n2 = 12;
        pL3 = this;
        pL3.ab = (int)pL3.AboutDialog((double)n2);
        n2 = 13;
        pL3 = this;
        pL3.aF = (int)pL3.AboutDialog((double)n2);
        n2 = 7;
        pL3 = this;
        pL3.aG = (int)pL3.AboutDialog((double)n2);
        n2 = 6;
        pL3 = this;
        pL3.ac = (int)pL3.AboutDialog((double)n2);
        n2 = 70;
        pL3 = this;
        pL3.aH = (int)pL3.AboutDialog((double)n2);
        n2 = 40;
        pL3 = this;
        pL3.aI = (int)pL3.AboutDialog((double)n2);
    }

    final boolean d() {
        boolean bl2 = false;
        if (this.k.uPanel && this.ag && !this.k.W) {
            if (this.B != 0) {
                this.l();
                this.CHandler = false;
            }
            bl2 = true;
        }
        return bl2;
    }

    final void e() {
        if (this.k.aY == null || this.k.aY.AboutDialog[0] == null) {
            if (this.k.d <= 5) {
                this.k.g("Stacksets not allocated, cannot do layout");
            }
            return;
        }
        this.k.aq.g.revalidate();
        this.av = this.aJ.getWidth();
        this.aw = this.aJ.getHeight();
        if (this.k.d <= 5) {
            this.k.g("In layout() new board dimensions are " + this.av + "xHandler" + this.aw);
        }
        this.k();
        this.k.aq.J.setEnabled(true);
        if (this.aR != null) {
            this.aR.setVisible(true);
        }
        if (this.aQ != null) {
            this.aQ.setVisible(true);
        }
        switch (this.k.i) {
            case 1: {
                if (this.k.d <= 5) {
                    this.k.g("Laying out KLONDIKE");
                }
                int n2 = (this.av - (int)(this.b * 7.0) - this.ax * 6) / 2;
                this.k.aY.AboutDialog[1].AboutDialog(n2, 16.0);
                this.k.aY.AboutDialog[2].AboutDialog((double)n2 + this.b + (double)this.ax, 16.0);
                this.k.aY.AboutDialog[3].AboutDialog((double)n2 + (this.b + (double)this.ax) * 3.0, 16.0);
                int n3 = 0;
                while (n3 < 4) {
                    this.k.aY.AboutDialog[3].f[n3].m = (double)((int)((this.b + (double)this.ax) * (double)n3)) + this.k.aY.AboutDialog[3].g.xHandler;
                    ++n3;
                }
                this.k.aY.AboutDialog[0].AboutDialog(n2, (double)this.c * 1.4);
                n3 = 0;
                while (n3 < 7) {
                    this.k.aY.AboutDialog[0].f[n3].m = (double)((int)((this.b + (double)this.ax) * (double)n3)) + this.k.aY.AboutDialog[0].g.xHandler;
                    ++n3;
                }
                this.ap = (int)this.k.aY.AboutDialog[1].g.xHandler;
                this.aq = (int)this.k.aY.AboutDialog[1].g.yHandler;
                int[] nArray = new int[4];
                nArray[0] = 1;
                nArray[1] = 2;
                nArray[2] = 3;
                this.aT = nArray;
                return;
            }
            case 2: {
                if (this.k.d <= 5) {
                    this.k.g("Laying out SPIDER");
                }
                int n4 = (this.av - (int)(this.b * 10.0) - this.ax * 9) / 2;
                this.k.aY.AboutDialog[0].AboutDialog(n4, 10.0);
                int n5 = 0;
                while (n5 < 10) {
                    this.k.aY.AboutDialog[0].f[n5].m = (double)((int)((this.b + (double)this.ax) * (double)n5)) + this.k.aY.AboutDialog[0].g.xHandler;
                    ++n5;
                }
                this.k.aY.AboutDialog[1].AboutDialog((double)(this.av - n4) - this.b, this.aw - this.c - 10);
                this.k.aY.AboutDialog[2].AboutDialog(n4, this.aw - this.c - 10);
                n5 = 0;
                while (n5 < 8) {
                    this.k.aY.AboutDialog[2].f[n5].m = (double)((int)(this.b / 4.0 * (double)n5)) + this.k.aY.AboutDialog[2].g.xHandler;
                    ++n5;
                }
                this.ap = (int)this.k.aY.AboutDialog[1].g.xHandler;
                this.aq = (int)this.k.aY.AboutDialog[1].g.yHandler;
                int[] nArray = new int[3];
                nArray[0] = 1;
                nArray[1] = 2;
                this.aT = nArray;
                return;
            }
            case 3: {
                if (this.k.d <= 5) {
                    this.k.g("Laying out FREECELL");
                }
                this.k.aq.J.setEnabled(false);
                this.aR.setVisible(false);
                int n6 = (this.av - (int)(this.b * 8.0) - this.ax * 7) / 2;
                this.k.aY.AboutDialog[1].AboutDialog(n6 - this.ax, 10.0);
                int n7 = 0;
                while (n7 < 4) {
                    this.k.aY.AboutDialog[1].f[n7].m = (double)((int)((this.b + (double)this.ax) * (double)n7)) + this.k.aY.AboutDialog[1].g.xHandler;
                    ++n7;
                }
                this.k.aY.AboutDialog[2].AboutDialog((double)n6 + this.b * 4.0 + (double)(this.ax * 5), 10.0);
                n7 = 0;
                while (n7 < 4) {
                    this.k.aY.AboutDialog[2].f[n7].m = (double)((int)((this.b + (double)this.ax) * (double)n7)) + this.k.aY.AboutDialog[2].g.xHandler;
                    ++n7;
                }
                this.k.aY.AboutDialog[0].AboutDialog(n6, (double)this.c * 1.4);
                n7 = 0;
                while (n7 < 8) {
                    this.k.aY.AboutDialog[0].f[n7].m = (double)((int)((this.b + (double)this.ax) * (double)n7)) + this.k.aY.AboutDialog[0].g.xHandler;
                    ++n7;
                }
                int[] nArray = new int[3];
                nArray[0] = 1;
                nArray[1] = 2;
                this.aT = nArray;
                return;
            }
            case 4: {
                if (this.k.d <= 5) {
                    this.k.g("Laying out PYRAMID");
                }
                this.k.aq.J.setEnabled(false);
                this.aR.setVisible(false);
                int n8 = (int)(((double)this.av - this.b) / 2.0);
                int n9 = (int)((this.b + (double)this.ax) / 2.0);
                int n10 = (int)(this.b + (double)this.ax);
                int n11 = this.aI;
                this.k.aY.AboutDialog[7].AboutDialog(n8 - (n10 << 1) / 3, 10 + n11 * 7 + this.c);
                this.k.aY.AboutDialog[7].f[1].m = (double)(-this.av) + this.k.aY.AboutDialog[7].g.xHandler;
                this.k.aY.AboutDialog[8].AboutDialog(n8 + (n10 << 1) / 3, 10 + n11 * 7 + this.c);
                this.k.aY.AboutDialog[8].f[1].m = (double)this.av + this.k.aY.AboutDialog[8].g.xHandler;
                this.k.aY.AboutDialog[0].AboutDialog(((double)this.av - this.b) / 2.0, 10.0);
                int n12 = 1;
                while (n12 < 7) {
                    this.k.aY.AboutDialog[n12].AboutDialog(this.k.aY.AboutDialog[n12 - 1].g.xHandler - (double)n9, this.k.aY.AboutDialog[n12 - 1].g.yHandler + (double)n11);
                    n8 = 0;
                    while (n8 <= n12) {
                        this.k.aY.AboutDialog[n12].f[n8].m = (double)(n10 * n8) + this.k.aY.AboutDialog[n12].g.xHandler;
                        ++n8;
                    }
                    ++n12;
                }
                this.ap = (int)this.k.aY.AboutDialog[7].g.xHandler;
                this.aq = (int)this.k.aY.AboutDialog[7].g.yHandler;
                int[] nArray = new int[9];
                nArray[0] = 7;
                nArray[1] = 8;
                nArray[3] = 1;
                nArray[4] = 2;
                nArray[5] = 3;
                nArray[6] = 4;
                nArray[7] = 5;
                nArray[8] = 6;
                this.aT = nArray;
                return;
            }
            case 5: {
                if (this.k.d <= 5) {
                    this.k.g("Laying out TRIPEAKS");
                }
                int n13 = (int)(((double)this.av - this.b) / 2.0);
                int n14 = (int)((this.b + (double)this.ax) / 2.0);
                int n15 = (int)(this.b + (double)this.ax);
                int n16 = this.aH;
                this.k.aY.AboutDialog[7].AboutDialog(n13 - (n15 << 1) / 3, 10 + n16 * 3 + this.c + this.ax);
                this.k.aY.AboutDialog[8].AboutDialog(n13 + (n15 << 1) / 3, 10 + n16 * 3 + this.c + this.ax);
                this.k.aY.AboutDialog[0].AboutDialog(n13 - n15 * 3, 10.0);
                this.k.aY.AboutDialog[0].f[3].m = (double)(n15 * 3) + this.k.aY.AboutDialog[0].g.xHandler;
                this.k.aY.AboutDialog[0].f[6].m = (double)(n15 * 6) + this.k.aY.AboutDialog[0].g.xHandler;
                this.k.aY.AboutDialog[1].AboutDialog(n13 - n15 * 3 - n14, n16 + 10);
                int n17 = 1;
                while (n17 < 8) {
                    this.k.aY.AboutDialog[1].f[n17].m = (double)(n15 * n17) + this.k.aY.AboutDialog[1].g.xHandler;
                    ++n17;
                }
                this.k.aY.AboutDialog[2].AboutDialog(n13 - n15 * 3 - (n14 << 1), 10 + (n16 << 1));
                n17 = 1;
                while (n17 < 9) {
                    this.k.aY.AboutDialog[2].f[n17].m = (double)(n15 * n17) + this.k.aY.AboutDialog[2].g.xHandler;
                    ++n17;
                }
                this.k.aY.AboutDialog[3].AboutDialog(n13 - n15 * 3 - n14 * 3, 10 + n16 * 3);
                n17 = 1;
                while (n17 < 10) {
                    this.k.aY.AboutDialog[3].f[n17].m = (double)(n15 * n17) + this.k.aY.AboutDialog[3].g.xHandler;
                    ++n17;
                }
                this.ap = (int)this.k.aY.AboutDialog[7].g.xHandler;
                this.aq = (int)this.k.aY.AboutDialog[7].g.yHandler;
                int[] nArray = new int[6];
                nArray[0] = 7;
                nArray[1] = 8;
                nArray[3] = 1;
                nArray[4] = 2;
                nArray[5] = 3;
                this.aT = nArray;
                return;
            }
        }
        if (this.k.d <= 5) {
            this.k.g("MyBoard layout when no apptype defined");
        }
    }

    final void f() {
        this.aL.setText(ak[this.k.i]);
        this.aM.setText(" Seed # " + this.k.bo);
        this.aD.setText(this.k.l.p + this.k.l.d());
    }

    final void b(int n2) {
        this.aN.setText("Score " + n2);
    }

    final int AboutDialog(Card qu2, int[] object) {
        if (this.DHandler) {
            return 0;
        }
        int n2 = this.k.ao.q;
        int[] nArray = object;
        object = this.z;
        boolean bl2 = false;
        int n3 = 0;
        while (n3 < n2 * 13) {
            int n4 = n3 / 13 + 1;
            int n5 = n3 % 13 + 1;
            int n6 = 0;
            while (n6 < nArray[n3]) {
                CardImage pV2;
                int n7 = n6 * n2 + n4 - 1;
                ((rPanel)object).c[n7][n5 - 1] = pV2 = new CardImage(((rPanel)object).b);
                pV2.AboutDialog(n4 * 100 + n5);
                if (!bl2) {
                    bl2 = true;
                    ((rPanel)object).d = pV2;
                }
                ++n6;
            }
            ++n3;
        }
        BoardReader e_02 = this.k.ap;
        int n8 = qu2.c;
        object = e_02;
        this.A = e_02.f.aY.AboutDialog[n8 / 10].f[n8 % 10];
        this.CHandler = true;
        this.B = 0;
        String string = "Enter the card at " + String.valueOf(qu2) + " or choose No More Unknown Cards";
        object = this;
        Dimension dimension = new Dimension(((g)object).k.aq.j, (int)((pLPanel)object).AboutDialog(36.0));
        ((pLPanel)object).z.setPreferredSize(dimension);
        ((pLPanel)object).z.setMaximumSize(dimension);
        ((pLPanel)object).z.setRequestFocusEnabled(true);
        ((pLPanel)object).z.requestFocus();
        ((pLPanel)object).ag = true;
        ((pLPanel)object).aJ.revalidate();
        ((pLPanel)object).aJ.repaint();
        ((pLPanel)object).aR.setEnabled(true);
        ((g)object).k.aq.AboutDialog(5, string);
        while (this.CHandler) {
            this.k.k("WaitForCard");
        }
        return this.B;
    }

    private void l() {
        this.z.setPreferredSize(aU);
        this.z.setMaximumSize(aU);
        this.ag = false;
        this.aJ.revalidate();
        this.aJ.repaint();
        this.aR.setEnabled(false);
        if (this.k.am) {
            if (this.k.d <= 5) {
                this.k.g("Card identified during solve so abort the solve");
            }
            this.k.ao.G = 999;
            this.k.ac = true;
            BoardReader cfr_ignored_0 = this.k.ap;
            this.k.be.h = BoardReader.AboutDialog(this.k.aY.d, this.k.be.d, this.k.Z + 1);
        }
        this.k.aO = false;
    }

    final boolean g() {
        this.k.br.j.AboutDialog(this.k, true);
        boolean bl2 = true;
        if (this.ag) {
            bl2 = false;
            if (this.B != 0 || this.DHandler) {
                this.l();
                this.CHandler = false;
            }
        } else if (!(this.k.DesktopDuplication || this.k.ak || this.k.am)) {
            this.k.aZ = new qa(this.k.aY, true);
            BoardReader cfr_ignored_0 = this.k.ap;
            this.k.aZ.h = BoardReader.AboutDialog(this.k.aY.d, this.k.aZ.d, this.k.Y);
            this.k.bf = false;
            this.k.bd.AboutDialog();
            this.k.U = 0;
            this.k.ao.EHandler = false;
            if (this.k.m == 4) {
                this.k.m = 0;
            }
            if (this.k.d <= 5) {
                this.k.g("Need solve, cloned auto moves and set recursion depth to " + this.k.aZ.h);
            }
            this.k.aq.c(5, "Trying to solve...");
        }
        return bl2;
    }

    final void AboutDialog(CardImage pV2) {
        if (this.CHandler && this.B == pV2.g && pV2.l) {
            this.z.AboutDialog(pV2.g, this.k.ao.q);
            pV2.AboutDialog(0);
            this.B = 0;
            this.z.setRequestFocusEnabled(true);
            this.z.requestFocus();
            this.ad.repaint();
        }
    }

    private boolean AboutDialog(int n2, int n3, boolean bl2, boolean bl3) {
        Object object;
        pLPanel pL2;
        boolean bl4;
        block8: {
            bl4 = false;
            int n4 = n3;
            n3 = n2;
            pL2 = this;
            CardStack[] qvArray = pL2.k.aY.AboutDialog;
            int n5 = pL2.k.aY.AboutDialog.length;
            int n6 = 0;
            while (n6 < n5) {
                Object object2 = qvArray[n6];
                if (object2 != null) {
                    Card[] quArray = ((CardStack)object2).f;
                    int n7 = ((CardStack)object2).f.length;
                    int n8 = 0;
                    while (n8 < n7) {
                        object2 = quArray[n8];
                        if (((Card)object2).d == null && ((Card)object2).AboutDialog(new Point(n3, n4), (int)pL2.b, pL2.c)) {
                            if (pL2.k.d <= 5) {
                                pL2.k.g("Hit on empty stack " + ((Card)object2).c);
                            }
                            object = object2;
                            break block8;
                        }
                        ++n8;
                    }
                }
                ++n6;
            }
            object = pL2 = null;
        }
        if (object != null) {
            bl4 = this.AboutDialog((Card)((Object)pL2), null, bl2, bl3);
        } else {
            int n9 = this.k.ao.h();
            if (n9 > 0) {
                this.c(false);
                bl4 = true;
            }
        }
        return bl4;
    }

    final void AboutDialog(int n2, int n3) {
        this.k.br.j.AboutDialog(this.k, true);
        if (!this.ag) {
            this.aC = false;
            if (this.k.d <= 4) {
                this.k.g("*Mouse pressed at " + n2 + "," + n3 + " cardSelected:" + String.valueOf(this.am));
            }
            if (this.AboutDialog(n2, n3, false, false, false)) {
                this.aC = true;
                return;
            }
            int n4 = this.p - 1;
            while (n4 >= 0) {
                CardImage pV2 = this.o[n4];
                if (pV2.c(n2, n3)) {
                    if (this.am == null) {
                        int n5 = n3;
                        n4 = n2;
                        CardImage pV3 = pV2;
                        pLPanel pL2 = this;
                        this.am = pV3;
                        pL2.q.setLocation(n4, n5);
                        pL2.rPanel.setLocation(n4, n5);
                        pL2.ao = 0;
                        CardRun qm_02 = pV3.p;
                        n5 = pV3.q;
                        pL2.al = 0;
                        while (pV3 != null) {
                            pV3.AboutDialog(true);
                            pV3.b(true);
                            ++pL2.al;
                            pV3 = ++n5 < qm_02.AboutDialog ? qm_02.c[n5] : null;
                        }
                        pL2.an = true;
                    }
                    return;
                }
                --n4;
            }
        }
    }

    final void b(int n2, int n3) {
        if (this.k.d <= 4) {
            this.k.g("Main panel mouse moved to " + n2 + "," + n3 + " cardSelected:" + String.valueOf(this.am));
        }
        this.rPanel.setLocation(n2, n3);
        n2 = (int)this.rPanel.distance(this.q);
        if (n2 > this.ao) {
            this.ao = n2;
        }
        this.ae.repaint();
    }

    final void AboutDialog(int n2, int n3, MouseEvent mouseEvent) {
        if (this.k.d <= 4) {
            this.k.g("*Mouse released, cards selected " + (this.am != null));
        }
        if (!this.ag && this.am != null) {
            if (this.ao > this.k.AboutDialog(30.0)) {
                if (this.k.d <= 5) {
                    this.k.g("Long drag so try AboutDialog move");
                }
                this.AboutDialog(n2, n3, true, false, false);
            } else {
                if (this.k.d <= 5) {
                    this.k.g("Short drag converted to click");
                }
                Object object = mouseEvent;
                int n4 = n3;
                n3 = n2;
                pLPanel pL2 = this;
                if (pL2.k.br.j.f == 0L) {
                    pL2.k.br.j.f = System.currentTimeMillis();
                }
                if (!pL2.aC) {
                    boolean bl2 = pL2.an;
                    pL2.an = false;
                    if (pL2.ag) {
                        if (pL2.k.d <= 5) {
                            pL2.k.g("Edit mode click on mainpanel at " + n3 + "," + n4);
                        }
                        int n5 = pL2.p - 1;
                        while (n5 >= 0) {
                            object = pL2.o[n5];
                            if (((CardImage)object).c(n3, n4)) {
                                if (pL2.k.d <= 5) {
                                    pL2.k.g("Got AboutDialog hit on " + (((CardImage)object).e * 100 + ((CardImage)object).f));
                                }
                                pL2.AboutDialog((CardImage)object);
                            }
                            --n5;
                        }
                    } else {
                        boolean bl3;
                        boolean bl4 = bl3 = ((MouseEvent)object).getClickCount() > 1 || pL2.k.ao.rPanel && pL2.k.g;
                        if (pL2.k.d <= 5) {
                            pL2.k.g("*Mouse action at " + n3 + "," + n4 + " double?" + bl3);
                        }
                        pL2.AboutDialog(((MouseEvent)object).getX(), ((MouseEvent)object).getY(), false, bl2, bl3);
                    }
                    pL2.ae.repaint();
                }
            }
        }
        this.ae.repaint();
    }

    private boolean AboutDialog(int n2, int n3, boolean bl2, boolean bl3, boolean bl4) {
        boolean bl5 = false;
        boolean bl6 = false;
        Point point = bl2 ? this.am.b(n2, n3) : new Point(n2, n3);
        if (this.k.d <= 5) {
            this.k.g("Destination location " + n2 + "," + n3 + " adjusted hit position " + SolitaireGameEngine.AboutDialog(point));
        }
        n2 = this.p - 1;
        while (n2 >= 0) {
            CardImage pV2 = this.o[n2];
            if (pV2.AboutDialog(point)) {
                if (this.k.d <= 5) {
                    this.k.g("Got AboutDialog hit on " + (pV2.e * 100 + pV2.f));
                }
                bl5 = true;
                bl6 = this.AboutDialog(pV2.o, pV2, bl3, bl4);
                break;
            }
            if (this.k.d <= 2) {
                this.k.g("Mouse up missed card on stack " + pV2.o.c);
            }
            --n2;
        }
        if (!bl5 && this.AboutDialog(point.xHandler, point.yHandler, bl3, bl4)) {
            bl6 = true;
            bl5 = true;
        }
        if (!bl5) {
            if (this.k.d <= 5) {
                this.k.g("Mouse up missed all stacks");
            }
            this.h();
        } else if (bl6) {
            this.m();
        }
        return bl6;
    }

    private boolean AboutDialog(Card qu2, CardImage pV2, boolean bl2, boolean bl3) {
        if (this.k.be.h >= 349) {
            this.k.aq.c("Too many moves", "You must solve the problem in under 350 moves");
            return false;
        }
        boolean bl4 = false;
        int n2 = -1;
        boolean bl5 = false;
        if (!bl2 && this.am != null) {
            if (this.am == pV2) {
                if (this.k.d <= 4) {
                    this.k.g("Second click on selected card so leave to be released");
                }
            } else if (bl3 && pV2 != null) {
                if (this.k.d <= 4) {
                    this.k.g("Double click so try best move");
                }
                n2 = this.k.ao.AboutDialog(pV2);
            } else {
                if (this.k.d <= 5) {
                    this.k.g("Second click so try double stack move of " + this.al);
                }
                n2 = this.k.ao.AboutDialog(this.am.o, qu2, this.al);
            }
        } else {
            bl2 = true;
            if ((qu2.b.d & 1) != 0) {
                Object object = qu2.d;
                bl2 = false;
                if (object != null) {
                    CardImage[] pVArray = ((CardRun)object).c;
                    int n3 = ((CardRun)object).c.length;
                    int n4 = 0;
                    while (n4 < n3) {
                        object = pVArray[n4];
                        if (object == null) break;
                        if (pV2 == object) {
                            bl2 = true;
                            break;
                        }
                        ++n4;
                    }
                }
                if (!bl2) {
                    bl4 = true;
                }
            }
            if (bl2) {
                if (bl3 && pV2 != null) {
                    if (this.k.d <= 4) {
                        this.k.g("Double click so try best move");
                    }
                    n2 = this.k.ao.AboutDialog(pV2);
                } else {
                    if (this.k.d <= 4) {
                        this.k.g("Try single stack move");
                    }
                    if ((n2 = this.k.ao.b(qu2)) <= 0) {
                        bl5 = true;
                    }
                }
            }
        }
        if (n2 > 0) {
            this.m();
            this.c(false);
            bl4 = true;
        } else if (bl5) {
            if (pV2 != null) {
                this.n();
            }
        } else {
            if (this.k.d <= 4) {
                this.k.g("No move actioned so drop card(s)");
            }
            this.h();
        }
        return bl4;
    }

    private void c(boolean bl2) {
        if (this.k.bc && this.k.am) {
            this.k.aR = true;
            MainWindow qb_02 = this.k.aq;
            qb_02.c(true);
            return;
        }
        int n2 = bl2 ? 10 : 8;
        this.k.c(n2);
    }

    private void m() {
        if (this.k.d <= 5) {
            this.k.g("dropAllSelected");
        }
        int n2 = 0;
        while (n2 < this.p) {
            this.o[n2].AboutDialog(false);
            ++n2;
        }
        this.am = null;
    }

    final void h() {
        if (this.k.d <= 5) {
            this.k.g("dropAllSelectedAndDragging");
        }
        this.n();
        this.m();
    }

    private void n() {
        if (this.k.d <= 5) {
            this.k.g("dropAllDragging");
        }
        int n2 = 0;
        while (n2 < this.p) {
            this.o[n2].b(false);
            ++n2;
        }
    }

    final void i() {
        if (this.k.ao == null) {
            return;
        }
        if (this.k.am) {
            this.k.ao.G = 999;
            this.k.U = -this.k.ao.z;
            MainWindow qb_02 = this.k.aq;
            qb_02.c(true);
            return;
        }
        if (this.k.d <= 5) {
            this.k.g("Into handleUndo, drop selected and try undo");
        }
        this.h();
        int n2 = this.k.ao.m();
        if (this.k.d <= 5) {
            this.k.g(String.format("Undoing move %s", GameMove.AboutDialog(n2)));
            this.k.ao.AboutDialog(5, this.k.be, "User moves(after undo)");
        }
        this.c(true);
        this.k.aq.AboutDialog(1);
    }

    final boolean b(boolean bl2) {
        if (this.o == null) {
            return false;
        }
        CardImage[] pVArray = this.o;
        synchronized (this.o) {
            block34: {
                if (this.aT != null) break block34;
                // ** MonitorExit[var1_2] (shouldn't be in output)
                return false;
            }
            this.p = 0;
            this.aB = false;
            CardStack[] qvArray = this.k.aY.AboutDialog;
            int n2 = 0;
            while (n2 < this.aT.length) {
                CardStack qv2 = qvArray[this.aT[n2]];
                if (qv2 != null && qv2.g != null) {
                    Card[] quArray = qv2.f;
                    int n3 = qv2.f.length;
                    int n4 = 0;
                    while (n4 < n3) {
                        Card qu2 = quArray[n4];
                        int n5 = (int)qv2.g.yHandler;
                        int n6 = (int)qu2.m;
                        if ((qv2.d & 1) != 0) {
                            double d2;
                            double d3 = this.ay;
                            double d4 = this.az;
                            double d5 = 14.0;
                            if (this.k.i == 3) {
                                d5 = 12.0;
                            }
                            if (this.ag) {
                                d5 -= 2.0;
                            }
                            double d6 = qu2.p();
                            if (d2 > d5) {
                                d3 *= d5 / d6;
                                d4 *= d5 / d6;
                            }
                            for (CardRun qm_02 : qu2.e) {
                                int n7 = 0;
                                while (n7 < qm_02.AboutDialog) {
                                    CardImage pV2 = qm_02.c[n7];
                                    this.AboutDialog(pV2, qu2, qm_02, n7, n6, n5);
                                    if ((qv2.d & 1) != 0) {
                                        n5 = qm_02.b && !this.ah ? (n5 += (int)d3) : (n5 += (int)d4);
                                    }
                                    ++n7;
                                }
                            }
                        } else if ((qv2.d & 0x10) != 0) {
                            int n8 = 0;
                            Iterator iterator = null;
                            Iterator iterator2 = null;
                            var15_21 = null;
                            for (CardRun qm_03 : qu2.e) {
                                iterator = iterator2;
                                iterator2 = var15_21;
                                var15_21 = qm_03;
                                ++n8;
                            }
                            if (n8 > 3) {
                                n8 = 3;
                            }
                            switch (n8) {
                                case 3: {
                                    this.AboutDialog(((CardRun)((Object)iterator)).c[0], qu2, (CardRun)((Object)iterator), 0, n6, n5);
                                    this.AboutDialog(((CardRun)((Object)iterator2)).c[0], qu2, (CardRun)((Object)iterator2), 0, n6 + this.aA, n5);
                                    this.AboutDialog(((CardRun)var15_21).c[0], qu2, (CardRun)var15_21, 0, n6 + (this.aA << 1), n5);
                                    break;
                                }
                                case 2: {
                                    this.AboutDialog(((CardRun)((Object)iterator2)).c[0], qu2, (CardRun)((Object)iterator2), 0, n6, n5);
                                    this.AboutDialog(((CardRun)var15_21).c[0], qu2, (CardRun)var15_21, 0, n6 + this.aA, n5);
                                    break;
                                }
                                case 1: {
                                    this.AboutDialog(((CardRun)var15_21).c[0], qu2, (CardRun)var15_21, 0, n6, n5);
                                }
                            }
                        } else if ((qv2.d & 2) != 0 || (qv2.d & 0x40) != 0) {
                            double d7 = n6;
                            if ((qv2.d & 0x100) != 0) {
                                int n9 = qu2.e.size() - 1;
                                while (n9 >= 0) {
                                    var15_21 = (CardRun)qu2.e.get(n9);
                                    int n10 = ((CardRun)var15_21).AboutDialog - 1;
                                    while (n10 >= 0) {
                                        CardImage pV3 = ((CardRun)var15_21).c[n10];
                                        this.AboutDialog(pV3, qu2, (CardRun)var15_21, n10, (int)(d7 += 0.3), n5);
                                        --n10;
                                    }
                                    --n9;
                                }
                            } else {
                                for (CardRun qm_04 : qu2.e) {
                                    int n11 = 0;
                                    while (n11 < qm_04.AboutDialog) {
                                        CardImage pV4 = qm_04.c[n11];
                                        this.AboutDialog(pV4, qu2, qm_04, n11, (int)(d7 += 0.3), n5);
                                        ++n11;
                                    }
                                }
                            }
                        } else if (this.k.d <= 5) {
                            this.k.g("Unsupported stack type " + qv2.d);
                        }
                        ++n4;
                    }
                }
                ++n2;
            }
            // ** MonitorExit[var1_2] (shouldn't be in output)
            return true;
        }
    }

    private void AboutDialog(CardImage pV2, Card qu2, CardRun qm_02, int n2, int n3, int n4) {
        if (this.k.ao.wHandler) {
            pV2.AboutDialog(n3, n4);
            if (this.ap != 0 && this.aq != 0) {
                pV2.AboutDialog(this.ap, this.aq, n3, n4, this.EHandler++, 1);
            }
        } else if (!qu2.h() && !qu2.h) {
            if (pV2.h.xHandler != n3 || pV2.h.yHandler != -220) {
                pV2.AboutDialog(n3, -220);
                pV2.AboutDialog(n3, n4, n3, -220, this.EHandler++, 2);
                if (this.k.d <= 2) {
                    this.k.g("Card on stack " + qu2.c + " index " + n2 + " becomes invisible");
                }
            }
        } else if (pV2.h.xHandler != n3 || pV2.h.yHandler != n4) {
            if (this.k.d <= 2) {
                this.k.g("Card on stack " + qu2.c + " index " + n2 + " has moved");
            }
            int n5 = pV2.h.xHandler;
            int n6 = pV2.h.yHandler;
            if (pV2.b()) {
                n5 += this.k.ar.rPanel.xHandler - this.k.ar.q.xHandler;
                n6 += this.k.ar.rPanel.yHandler - this.k.ar.q.yHandler;
                pV2.b(false);
            }
            pV2.AboutDialog(n3, n4);
            if (pV2.h.xHandler != 0 && pV2.h.yHandler != 0) {
                pV2.AboutDialog(n5, n6, n3, n4, this.EHandler++, 3);
            }
        }
        this.o[this.p] = pV2;
        pV2.o = qu2;
        pV2.p = qm_02;
        pV2.q = n2;
        pV2.m = this.p++;
        pV2.c(qm_02.b);
        pV2.c();
    }
}

