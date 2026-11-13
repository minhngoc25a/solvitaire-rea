/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.engine;

import com.solvitaire.solitaire.util.V;
import com.solvitaire.solitaire.util.ErrorDialog;
import com.solvitaire.solitaire.util.g;
import com.solvitaire.solitaire.util.h;
import com.solvitaire.solitaire.util.i;
import com.solvitaire.solitaire.util.j;
import com.solvitaire.solitaire.ui.panels.k_0Panel;
import com.solvitaire.solitaire.reader.pCBoardReader;
import com.solvitaire.solitaire.reader.pEBoardReader;
import com.solvitaire.solitaire.util.pG;
import com.solvitaire.solitaire.util.pH;
import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.util.pX;
import com.solvitaire.solitaire.util.pY;
import com.solvitaire.solitaire.util.q;
import com.solvitaire.solitaire.reader.qi_0BoardReader;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.reader.SpiderBoardReader;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.util.qw_0;
import com.solvitaire.solitaire.util.s_0;
import com.solvitaire.solitaire.reader.sqBoardReader;
import com.solvitaire.solitaire.util.t_0;
import com.solvitaire.solitaire.util.u_0;
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Point;
import java.awt.Rectangle;
import java.awt.geom.Point2D;
import java.awt.image.BufferedImage;
import java.util.ArrayList;
import java.util.Vector;
import javax.swing.JOptionPane;

public final class GameStats
extends g {
    private static double[] B = new double[]{-1.0, 16.5, 20.0, -1.0, -1.0, -1.0};
    private static double[] CHandler = new double[]{-1.0, 51.0, 48.0, 48.0, -1.0, -1.0};
    static final double[] o = new double[]{85.0, 73.0};
    private int DHandler;
    private double EHandler;
    private double FPanel;
    public Point p;
    private boolean G = false;
    private boolean H = false;
    private Graphics I;
    public BufferedImage q;
    public j rPanel;
    public i s;
    public i t;
    private i J;
    private h KHandler;
    public h uPanel;
    private h LHandler;
    private h MHandler;
    private boolean NHandler = false;
    private long OHandler;
    public boolean v = false;
    private int PPanel;
    private int Q = 100;
    private int R = 100;
    private int SPanel = 4;
    private int T = 5;
    private int U = 4;
    private int V = 5;
    private int W = -1;
    private int X = -1;
    public double wHandler = 0.0;
    boolean xHandler;
    boolean yHandler;
    boolean z;
    private int Y;
    private int Z;
    private int aa;
    private int ab;
    private int ac = 0;
    private int ad = 0;
    public Rectangle A;
    private ErrorDialog ae = null;
    private int[][][] af;
    private int[][][] ag;

    GameStats(SolitaireGameEngine qo_02) {
        super(qo_02);
        int[][][] nArrayArray = new int[3][][];
        int[][] nArrayArray2 = new int[11][];
        nArrayArray2[0] = new int[]{2, 2, 2, 2, 2, 2, 2, 2};
        int[] nArray = new int[8];
        nArray[0] = 2;
        nArray[1] = 1;
        nArray[3] = 2;
        nArray[4] = 2;
        nArray[5] = 2;
        nArray[6] = 2;
        nArray[7] = 2;
        nArrayArray2[1] = nArray;
        int[] nArray2 = new int[8];
        nArray2[0] = 2;
        nArray2[1] = 1;
        nArray2[2] = 1;
        nArray2[4] = 2;
        nArray2[5] = 2;
        nArray2[6] = 2;
        nArray2[7] = 2;
        nArrayArray2[2] = nArray2;
        int[] nArray3 = new int[8];
        nArray3[0] = 2;
        nArray3[1] = 1;
        nArray3[2] = 1;
        nArray3[3] = 2;
        nArray3[6] = 2;
        nArray3[7] = 2;
        nArrayArray2[3] = nArray3;
        int[] nArray4 = new int[8];
        nArray4[0] = 2;
        nArray4[1] = 1;
        nArray4[2] = 1;
        nArray4[3] = 1;
        nArray4[4] = 1;
        nArray4[7] = 2;
        nArrayArray2[4] = nArray4;
        int[] nArray5 = new int[8];
        nArray5[0] = 2;
        nArray5[1] = 1;
        nArray5[2] = 1;
        nArray5[3] = 1;
        nArray5[4] = 1;
        nArray5[5] = 1;
        nArrayArray2[5] = nArray5;
        int[] nArray6 = new int[8];
        nArray6[0] = 2;
        nArray6[1] = 1;
        nArray6[2] = 1;
        nArray6[3] = 1;
        nArray6[4] = 1;
        nArray6[7] = 2;
        nArrayArray2[6] = nArray6;
        int[] nArray7 = new int[8];
        nArray7[0] = 2;
        nArray7[1] = 1;
        nArray7[2] = 1;
        nArray7[3] = 2;
        nArray7[6] = 2;
        nArray7[7] = 2;
        nArrayArray2[7] = nArray7;
        int[] nArray8 = new int[8];
        nArray8[0] = 2;
        nArray8[1] = 1;
        nArray8[2] = 1;
        nArray8[4] = 2;
        nArray8[5] = 2;
        nArray8[6] = 2;
        nArray8[7] = 2;
        nArrayArray2[8] = nArray8;
        int[] nArray9 = new int[8];
        nArray9[0] = 2;
        nArray9[1] = 1;
        nArray9[3] = 2;
        nArray9[4] = 2;
        nArray9[5] = 2;
        nArray9[6] = 2;
        nArray9[7] = 2;
        nArrayArray2[9] = nArray9;
        nArrayArray2[10] = new int[]{2, 2, 2, 2, 2, 2, 2, 2};
        nArrayArray[0] = nArrayArray2;
        int[][] nArrayArray3 = new int[11][];
        int[] nArray10 = new int[8];
        nArray10[0] = 2;
        nArray10[1] = 1;
        nArray10[3] = 2;
        nArray10[4] = 2;
        nArray10[5] = 2;
        nArray10[6] = 2;
        nArray10[7] = 2;
        nArrayArray3[0] = nArray10;
        int[] nArray11 = new int[8];
        nArray11[0] = 2;
        nArray11[1] = 1;
        nArray11[2] = 1;
        nArray11[4] = 2;
        nArray11[5] = 2;
        nArray11[6] = 2;
        nArray11[7] = 2;
        nArrayArray3[1] = nArray11;
        int[] nArray12 = new int[8];
        nArray12[0] = 2;
        nArray12[1] = 1;
        nArray12[2] = 1;
        nArray12[3] = 2;
        nArray12[5] = 2;
        nArray12[6] = 2;
        nArray12[7] = 2;
        nArrayArray3[2] = nArray12;
        int[] nArray13 = new int[8];
        nArray13[0] = 2;
        nArray13[1] = 1;
        nArray13[2] = 1;
        nArray13[3] = 1;
        nArray13[4] = 1;
        nArray13[6] = 2;
        nArray13[7] = 2;
        nArrayArray3[3] = nArray13;
        int[] nArray14 = new int[8];
        nArray14[0] = 2;
        nArray14[1] = 1;
        nArray14[2] = 1;
        nArray14[3] = 1;
        nArray14[4] = 1;
        nArray14[5] = 1;
        nArrayArray3[4] = nArray14;
        int[] nArray15 = new int[8];
        nArray15[0] = 2;
        nArray15[1] = 1;
        nArray15[2] = 1;
        nArray15[3] = 1;
        nArray15[4] = 1;
        nArray15[5] = 1;
        nArrayArray3[5] = nArray15;
        int[] nArray16 = new int[8];
        nArray16[0] = 2;
        nArray16[1] = 1;
        nArray16[2] = 1;
        nArray16[3] = 1;
        nArray16[4] = 1;
        nArray16[6] = 2;
        nArray16[7] = 2;
        nArrayArray3[6] = nArray16;
        int[] nArray17 = new int[8];
        nArray17[0] = 2;
        nArray17[1] = 1;
        nArray17[2] = 1;
        nArray17[3] = 2;
        nArray17[5] = 2;
        nArray17[6] = 2;
        nArray17[7] = 2;
        nArrayArray3[7] = nArray17;
        int[] nArray18 = new int[8];
        nArray18[0] = 2;
        nArray18[1] = 1;
        nArray18[2] = 1;
        nArray18[4] = 2;
        nArray18[5] = 2;
        nArray18[6] = 2;
        nArray18[7] = 2;
        nArrayArray3[8] = nArray18;
        int[] nArray19 = new int[8];
        nArray19[0] = 2;
        nArray19[1] = 1;
        nArray19[3] = 2;
        nArray19[4] = 2;
        nArray19[5] = 2;
        nArray19[6] = 2;
        nArray19[7] = 2;
        nArrayArray3[9] = nArray19;
        nArrayArray3[10] = new int[]{2, 2, 2, 2, 2, 2, 2, 2};
        nArrayArray[1] = nArrayArray3;
        int[][] nArrayArray4 = new int[11][];
        nArrayArray4[0] = new int[]{2, 2, 2, 2, 2, 2, 2, 2};
        int[] nArray20 = new int[8];
        nArray20[0] = 2;
        nArray20[1] = 2;
        nArray20[2] = 1;
        nArray20[4] = 2;
        nArray20[5] = 2;
        nArray20[6] = 2;
        nArray20[7] = 2;
        nArrayArray4[1] = nArray20;
        int[] nArray21 = new int[8];
        nArray21[0] = 2;
        nArray21[1] = 2;
        nArray21[2] = 1;
        nArray21[3] = 1;
        nArray21[6] = 2;
        nArray21[7] = 2;
        nArrayArray4[2] = nArray21;
        int[] nArray22 = new int[8];
        nArray22[0] = 2;
        nArray22[1] = 2;
        nArray22[2] = 1;
        nArray22[3] = 1;
        nArray22[4] = 1;
        nArray22[7] = 2;
        nArrayArray4[3] = nArray22;
        int[] nArray23 = new int[8];
        nArray23[0] = 2;
        nArray23[1] = 2;
        nArray23[2] = 1;
        nArray23[3] = 1;
        nArray23[4] = 1;
        nArray23[5] = 1;
        nArrayArray4[4] = nArray23;
        int[] nArray24 = new int[8];
        nArray24[0] = 2;
        nArray24[1] = 2;
        nArray24[2] = 1;
        nArray24[3] = 1;
        nArray24[4] = 1;
        nArray24[5] = 1;
        nArrayArray4[5] = nArray24;
        int[] nArray25 = new int[8];
        nArray25[0] = 2;
        nArray25[1] = 2;
        nArray25[2] = 1;
        nArray25[3] = 1;
        nArray25[4] = 1;
        nArray25[5] = 1;
        nArrayArray4[6] = nArray25;
        int[] nArray26 = new int[8];
        nArray26[0] = 2;
        nArray26[1] = 2;
        nArray26[2] = 1;
        nArray26[3] = 1;
        nArray26[4] = 1;
        nArray26[7] = 2;
        nArrayArray4[7] = nArray26;
        int[] nArray27 = new int[8];
        nArray27[0] = 2;
        nArray27[1] = 2;
        nArray27[2] = 1;
        nArray27[3] = 1;
        nArray27[6] = 2;
        nArray27[7] = 2;
        nArrayArray4[8] = nArray27;
        int[] nArray28 = new int[8];
        nArray28[0] = 2;
        nArray28[1] = 2;
        nArray28[2] = 1;
        nArray28[4] = 2;
        nArray28[5] = 2;
        nArray28[6] = 2;
        nArray28[7] = 2;
        nArrayArray4[9] = nArray28;
        nArrayArray4[10] = new int[]{2, 2, 2, 2, 2, 2, 2, 2};
        nArrayArray[2] = nArrayArray4;
        this.af = nArrayArray;
        int[][][] nArrayArray5 = new int[3][][];
        int[][] nArrayArray6 = new int[11][];
        nArrayArray6[0] = new int[]{2, 2, 2, 2, 2, 2, 2, 2};
        int[] nArray29 = new int[8];
        nArray29[0] = 2;
        nArray29[1] = 2;
        nArray29[2] = 2;
        nArray29[3] = 2;
        nArray29[4] = 2;
        nArray29[6] = 1;
        nArray29[7] = 2;
        nArrayArray6[1] = nArray29;
        int[] nArray30 = new int[8];
        nArray30[0] = 2;
        nArray30[1] = 2;
        nArray30[2] = 2;
        nArray30[3] = 2;
        nArray30[5] = 1;
        nArray30[6] = 1;
        nArray30[7] = 2;
        nArrayArray6[2] = nArray30;
        int[] nArray31 = new int[8];
        nArray31[0] = 2;
        nArray31[1] = 2;
        nArray31[4] = 2;
        nArray31[5] = 1;
        nArray31[6] = 1;
        nArray31[7] = 2;
        nArrayArray6[3] = nArray31;
        int[] nArray32 = new int[8];
        nArray32[0] = 2;
        nArray32[3] = 1;
        nArray32[4] = 1;
        nArray32[5] = 1;
        nArray32[6] = 1;
        nArray32[7] = 2;
        nArrayArray6[4] = nArray32;
        int[] nArray33 = new int[8];
        nArray33[2] = 1;
        nArray33[3] = 1;
        nArray33[4] = 1;
        nArray33[5] = 1;
        nArray33[6] = 1;
        nArray33[7] = 2;
        nArrayArray6[5] = nArray33;
        int[] nArray34 = new int[8];
        nArray34[0] = 2;
        nArray34[3] = 1;
        nArray34[4] = 1;
        nArray34[5] = 1;
        nArray34[6] = 1;
        nArray34[7] = 2;
        nArrayArray6[6] = nArray34;
        int[] nArray35 = new int[8];
        nArray35[0] = 2;
        nArray35[1] = 2;
        nArray35[4] = 2;
        nArray35[5] = 1;
        nArray35[6] = 1;
        nArray35[7] = 2;
        nArrayArray6[7] = nArray35;
        int[] nArray36 = new int[8];
        nArray36[0] = 2;
        nArray36[1] = 2;
        nArray36[2] = 2;
        nArray36[3] = 2;
        nArray36[5] = 1;
        nArray36[6] = 1;
        nArray36[7] = 2;
        nArrayArray6[8] = nArray36;
        int[] nArray37 = new int[8];
        nArray37[0] = 2;
        nArray37[1] = 2;
        nArray37[2] = 2;
        nArray37[3] = 2;
        nArray37[4] = 2;
        nArray37[6] = 1;
        nArray37[7] = 2;
        nArrayArray6[9] = nArray37;
        nArrayArray6[10] = new int[]{2, 2, 2, 2, 2, 2, 2, 2};
        nArrayArray5[0] = nArrayArray6;
        int[][] nArrayArray7 = new int[11][];
        nArrayArray7[0] = new int[]{2, 2, 2, 2, 2, 2, 2, 2};
        int[] nArray38 = new int[8];
        nArray38[0] = 2;
        nArray38[1] = 2;
        nArray38[2] = 2;
        nArray38[3] = 2;
        nArray38[5] = 1;
        nArray38[6] = 2;
        nArray38[7] = 2;
        nArrayArray7[1] = nArray38;
        int[] nArray39 = new int[8];
        nArray39[0] = 2;
        nArray39[1] = 2;
        nArray39[2] = 2;
        nArray39[4] = 2;
        nArray39[5] = 1;
        nArray39[6] = 2;
        nArray39[7] = 2;
        nArrayArray7[2] = nArray39;
        int[] nArray40 = new int[8];
        nArray40[0] = 2;
        nArray40[1] = 2;
        nArray40[3] = 2;
        nArray40[4] = 1;
        nArray40[5] = 1;
        nArray40[6] = 2;
        nArray40[7] = 2;
        nArrayArray7[3] = nArray40;
        int[] nArray41 = new int[8];
        nArray41[2] = 1;
        nArray41[3] = 1;
        nArray41[4] = 1;
        nArray41[5] = 1;
        nArray41[6] = 2;
        nArray41[7] = 2;
        nArrayArray7[4] = nArray41;
        int[] nArray42 = new int[8];
        nArray42[2] = 1;
        nArray42[3] = 1;
        nArray42[4] = 1;
        nArray42[5] = 1;
        nArray42[6] = 2;
        nArray42[7] = 2;
        nArrayArray7[5] = nArray42;
        int[] nArray43 = new int[8];
        nArray43[0] = 2;
        nArray43[1] = 2;
        nArray43[3] = 2;
        nArray43[4] = 1;
        nArray43[5] = 1;
        nArray43[6] = 2;
        nArray43[7] = 2;
        nArrayArray7[6] = nArray43;
        int[] nArray44 = new int[8];
        nArray44[0] = 2;
        nArray44[1] = 2;
        nArray44[2] = 2;
        nArray44[4] = 2;
        nArray44[5] = 1;
        nArray44[6] = 2;
        nArray44[7] = 2;
        nArrayArray7[7] = nArray44;
        int[] nArray45 = new int[8];
        nArray45[0] = 2;
        nArray45[1] = 2;
        nArray45[2] = 2;
        nArray45[3] = 2;
        nArray45[5] = 1;
        nArray45[6] = 2;
        nArray45[7] = 2;
        nArrayArray7[8] = nArray45;
        int[] nArray46 = new int[8];
        nArray46[0] = 2;
        nArray46[1] = 2;
        nArray46[2] = 2;
        nArray46[3] = 2;
        nArray46[4] = 2;
        nArray46[6] = 1;
        nArray46[7] = 2;
        nArrayArray7[9] = nArray46;
        nArrayArray7[10] = new int[]{2, 2, 2, 2, 2, 2, 2, 2};
        nArrayArray5[1] = nArrayArray7;
        int[][] nArrayArray8 = new int[11][];
        nArrayArray8[0] = new int[]{2, 2, 2, 2, 2, 2, 2, 2};
        int[] nArray47 = new int[8];
        nArray47[0] = 2;
        nArray47[1] = 2;
        nArray47[2] = 2;
        nArray47[3] = 2;
        nArray47[5] = 1;
        nArray47[6] = 2;
        nArray47[7] = 2;
        nArrayArray8[1] = nArray47;
        int[] nArray48 = new int[8];
        nArray48[0] = 2;
        nArray48[1] = 2;
        nArray48[4] = 2;
        nArray48[5] = 1;
        nArray48[6] = 2;
        nArray48[7] = 2;
        nArrayArray8[2] = nArray48;
        int[] nArray49 = new int[8];
        nArray49[0] = 2;
        nArray49[3] = 2;
        nArray49[4] = 1;
        nArray49[5] = 1;
        nArray49[6] = 2;
        nArray49[7] = 2;
        nArrayArray8[3] = nArray49;
        int[] nArray50 = new int[8];
        nArray50[2] = 1;
        nArray50[3] = 1;
        nArray50[4] = 1;
        nArray50[5] = 1;
        nArray50[6] = 2;
        nArray50[7] = 2;
        nArrayArray8[4] = nArray50;
        int[] nArray51 = new int[8];
        nArray51[2] = 1;
        nArray51[3] = 1;
        nArray51[4] = 1;
        nArray51[5] = 1;
        nArray51[6] = 2;
        nArray51[7] = 2;
        nArrayArray8[5] = nArray51;
        int[] nArray52 = new int[8];
        nArray52[2] = 1;
        nArray52[3] = 1;
        nArray52[4] = 1;
        nArray52[5] = 1;
        nArray52[6] = 2;
        nArray52[7] = 2;
        nArrayArray8[6] = nArray52;
        int[] nArray53 = new int[8];
        nArray53[0] = 2;
        nArray53[3] = 2;
        nArray53[4] = 1;
        nArray53[5] = 1;
        nArray53[6] = 2;
        nArray53[7] = 2;
        nArrayArray8[7] = nArray53;
        int[] nArray54 = new int[8];
        nArray54[0] = 2;
        nArray54[1] = 2;
        nArray54[4] = 2;
        nArray54[5] = 1;
        nArray54[6] = 2;
        nArray54[7] = 2;
        nArrayArray8[8] = nArray54;
        int[] nArray55 = new int[8];
        nArray55[0] = 2;
        nArray55[1] = 2;
        nArray55[2] = 2;
        nArray55[3] = 2;
        nArray55[5] = 1;
        nArray55[6] = 2;
        nArray55[7] = 2;
        nArrayArray8[9] = nArray55;
        nArrayArray8[10] = new int[]{2, 2, 2, 2, 2, 2, 2, 2};
        nArrayArray5[2] = nArrayArray8;
        this.ag = nArrayArray5;
        qo_02.B = new j(this, 0, 0, qo_02.aC.GetSystemMetrics(0), qo_02.aC.GetSystemMetrics(1));
    }

    final void d() {
        this.e();
        this.k.c(this.rPanel.AboutDialog() + 4.0, this.rPanel.b() + this.rPanel.d() / 2.0);
        double d2 = 1590.0;
        GameStats pF2 = this;
        int n2 = (int)pF2.k.c(65.0);
        int n3 = (int)pF2.k.c(70.0);
        double d3 = (double)(pF2.rPanel.AboutDialog.width - n2 - n3) / 1590.0;
        double d4 = (double)(pF2.rPanel.AboutDialog.y + pF2.rPanel.AboutDialog.height) - pF2.k.d(23.0);
        double d5 = (double)(pF2.rPanel.AboutDialog.x + n2) + d3 * 155.0;
        pF2.MHandler = new h(pF2, (int)d5, (int)d4);
        d5 = (int)((double)(pF2.rPanel.AboutDialog.x + pF2.rPanel.AboutDialog.width) - d3 * 155.0 - (double)n3);
        pF2.uPanel = new h(pF2, (int)d5, (int)d4);
        if (this.k.m == 0 || this.k.m == 3) {
            boolean cfr_ignored_0 = this.k.b;
            if (!this.k.aW) {
                this.d(true);
                this.k.aD.AboutDialog();
            }
        }
        if (this.k.aD.b() == 0) {
            String string = "Microsoft Solitaire window keeps changing<br>Is it definitely showing the cards?<br>Check that hints and animations are turned off";
            SolitaireGameEngine qo_02 = this.k;
            qo_02.AboutDialog(string, false);
        }
        if (this.k.d <= 3) {
            this.k.g("tabRect " + String.valueOf(this.AboutDialog));
        }
        if (!this.b(false)) {
            if (this.k.e) {
                int n4 = this.k.aq.e("Cannot identify version", "Please enter type\n Klondike = 1\n Spider = 2\n FreeCell = 3\n Pyramid = 4\n TriPeaks = 5");
                n2 = this.k.aq.e("Cannot identify font", "Please enter type\n Classic = 0\n Autumn = 1\n Fable = 2\n Western = 3\n Aquarium = 4\n Beach = 5\n Dark = 6\n Retro = 7\n Gilded = 8\n Challenges = 9\n Halo = 10\n Jumbo = 11\n JumboDark = 12\n Sea of Thieves = 13\n Fiftyth = 14");
                if (n2 < 0) {
                    String string = "Could not identify font";
                    SolitaireGameEngine qo_03 = this.k;
                    qo_03.AboutDialog(string, false);
                }
                this.k.bu.AboutDialog(n2);
                this.k.aq.LHandler.setText(" (" + this.k.bu.c.b + ")");
                switch (n4) {
                    case 1: {
                        this.uPanel();
                        this.d(-20);
                        break;
                    }
                    case 2: {
                        this.wHandler();
                        this.f(-20);
                        break;
                    }
                    case 3: {
                        this.v();
                        this.e(-20);
                        break;
                    }
                    case 4: {
                        this.t();
                        this.c(-20);
                        break;
                    }
                    case 5: {
                        this.x();
                        this.g();
                        break;
                    }
                    default: {
                        String string = "Failed to identify the theme<br>or the version of solitaire";
                        SolitaireGameEngine qo_04 = this.k;
                        qo_04.AboutDialog(string);
                        break;
                    }
                }
            } else {
                String string = "Failed to identify the theme<br>or the version of solitaire";
                SolitaireGameEngine qo_05 = this.k;
                qo_05.AboutDialog(string);
            }
        }
        this.g();
        String string = "StackSets";
        this.k.AboutDialog(string);
        if (this.k.aW) {
            this.xHandler = true;
            while (this.xHandler) {
                this.k.aD.AboutDialog();
                this.rPanel();
                string = "Font testing";
                this.k.AboutDialog(string, false);
            }
        }
    }

    final void e() {
        if (this.k.DHandler == 0) {
            this.k.AboutDialog();
        }
        GameStats pF2 = this;
        this.s = new i(pF2, (int)pF2.k.d(65.0));
        this.DHandler = 0;
        if ((double)this.rPanel.AboutDialog.width < this.k.d(1262.0)) {
            this.DHandler = 1;
        }
        GameStats pF3 = this;
        this.J = new i(pF3, (int)pF3.k.d(o[this.DHandler]));
        if (this.k.d <= 5) {
            this.k.g("Menu height is " + String.valueOf(this.s) + " button bar index " + this.DHandler + " button bar height " + String.valueOf(this.J));
        }
        int n2 = this.rPanel.AboutDialog.height - this.J.AboutDialog;
        if (this.k.d <= 3) {
            this.k.g("Table bottom is " + n2);
        }
        if (n2 < 600) {
            String string = "Solitaire window is too small to read cards<br>(Less than 600 pixels high)";
            SolitaireGameEngine qo_02 = this.k;
            qo_02.AboutDialog(string, false);
        }
        this.AboutDialog(5, 1590.0, sqBoardReader.p, 127.0, 0.0);
        int n3 = this.s.AboutDialog + this.t.AboutDialog;
        GameStats pF4 = this;
        this.AboutDialog = new j(pF4, pF4.rPanel.AboutDialog.x, this.rPanel.AboutDialog.y + n3, this.rPanel.AboutDialog.width, n2 - n3 + this.t.AboutDialog / 4);
        if (this.k.d <= 5) {
            this.k.g("Tabrect is " + String.valueOf(this.AboutDialog));
        }
        GameStats pF5 = this;
        pF5.b(pF5.AboutDialog.AboutDialog);
        this.k.aq.n();
    }

    private void b(Rectangle object) {
        int n2 = 1;
        while (n2 < object.width - 1) {
            if (!this.k.AboutDialog((double)(n2 + object.x), (double)(object.y + 1))) {
                String string = "Solitaire window is partially covered along top";
                SolitaireGameEngine qo_02 = this.k;
                qo_02.AboutDialog(string, false);
                return;
            }
            if (!this.k.AboutDialog((double)(n2 + object.x), (double)(object.y + object.height - 2))) {
                String string = "Solitaire window is partially covered along bottom";
                SolitaireGameEngine qo_03 = this.k;
                qo_03.AboutDialog(string, false);
                return;
            }
            ++n2;
        }
        n2 = 1;
        while (n2 < object.height - 1) {
            if (!this.k.AboutDialog((double)(object.x + 1), (double)(n2 + object.y))) {
                String string = "Solitaire window is partially covered along left side";
                SolitaireGameEngine qo_04 = this.k;
                qo_04.AboutDialog(string, false);
                return;
            }
            if (!this.k.AboutDialog((double)(object.x + object.width - 2), (double)(n2 + object.y))) {
                String string = "Solitaire window is partially covered along right side";
                SolitaireGameEngine qo_05 = this.k;
                qo_05.AboutDialog(string, false);
                return;
            }
            ++n2;
        }
    }

    private boolean AboutDialog(int[][] nArray, Rectangle rectangle, pX pX2) {
        u_0 u_02 = new u_0();
        int n2 = 0;
        int n3 = 0;
        int n4 = 0;
        while (n4 < rectangle.width) {
            int n5 = 0;
            while (n5 < rectangle.height) {
                ++n2;
                u_02.c(nArray[rectangle.y + n5][rectangle.x + n4]);
                if (u_02.d(pX2.e.AboutDialog) == 0 && u_02.d(pX2.d.AboutDialog) == 0) {
                    ++n3;
                }
                ++n5;
            }
            ++n4;
        }
        if (n3 > n2 * 3 / 4) {
            if (this.k.d <= 2) {
                this.k.g("Good bg color, " + n3 + " out of " + n2);
            }
            return true;
        }
        if (this.k.d <= 2) {
            this.k.g("Count of " + n3 + " against possible of " + n2 + " so rejecting potential card rectangle");
        }
        return false;
    }

    private boolean AboutDialog(int[][] nArray, int n2, int n3, pX pX2, double d2) {
        u_0 u_02 = new u_0();
        double d3 = n3 * n2;
        int n4 = 0;
        int n5 = 0;
        while (n5 < n3) {
            int n6 = 0;
            while (n6 < n2) {
                u_02.c(nArray[n5][n6]);
                if (u_02.d(pX2.l.AboutDialog) < pX2.m) {
                    ++n4;
                }
                ++n6;
            }
            ++n5;
        }
        if ((double)n4 > d3 * 0.05) {
            if (this.k.d <= 4) {
                this.k.g(String.format("Good match on bg pixels, %d out of %d ratio %f vs %f cmp %08x", n4, (int)d3, (double)n4 / d3, 0.05, pX2.l.AboutDialog()));
            }
            return true;
        }
        if (this.k.d <= 4) {
            this.k.g("Count of " + n4 + " against possible of " + d3 + " ratio " + (double)n4 / d3 + " vs " + 0.05 + " so rejecting potential font");
        }
        return false;
    }

    private void rPanel() {
        if (this.k.aW) {
            this.f();
        }
    }

    final void f() {
        this.s();
        GameStats pF2 = this;
        j j2 = new j(pF2, pF2.rPanel.AboutDialog.x, pF2.rPanel.AboutDialog.y, pF2.rPanel.AboutDialog.width, pF2.rPanel.AboutDialog.height);
        j2.AboutDialog.y += this.t.AboutDialog;
        j2.AboutDialog.height -= this.t.AboutDialog;
        this.q = new BufferedImage(1, 1, BufferedImage.TYPE_INT_ARGB); // CFR artifact: AboutDialog(j, String) doesn't exist
        if (this.k.d <= 3) {
            this.k.g("annotateRect dim " + this.q.getWidth() + "," + this.q.getHeight());
        }
        this.I = this.q.createGraphics();
    }

    private void s() {
        if (this.I != null) {
            this.I.dispose();
            this.I = null;
        }
        if (this.q != null) {
            this.q.flush();
            this.q = null;
        }
    }

    final boolean b(boolean bl2) {
        this.k.aD.AboutDialog();
        int n2 = 0;
        while (n2 < 10) {
            boolean bl3;
            block29: {
                block28: {
                    bl3 = false;
                    if (!bl2) break block28;
                    if (this.k.d <= 5) {
                        this.k.g("---Testing font presence " + this.k.bu.c.b + " stack allocation index " + n2);
                    }
                    switch (this.k.i) {
                        case 1: {
                            if (this.d(n2)) {
                                bl3 = true;
                                break;
                            }
                            break block29;
                        }
                        case 2: {
                            if (this.f(n2)) {
                                bl3 = true;
                                break;
                            }
                            break block29;
                        }
                        case 3: {
                            if (this.e(n2)) {
                                bl3 = true;
                                break;
                            }
                            break block29;
                        }
                        case 4: {
                            if (this.c(n2)) {
                                bl3 = true;
                                break;
                            }
                            break block29;
                        }
                        case 5: {
                            if (!this.g(n2)) break block29;
                            bl3 = true;
                        }
                        default: {
                            break;
                        }
                        {
                        }
                    }
                    break block29;
                }
                int n3 = 0;
                while (n3 < 0) {
                    this.k.bu.AboutDialog(n3);
                    if (this.k.d <= 5) {
                        this.k.g("---Testing index " + n2 + " and allcards for font " + this.k.bu.c.b);
                    }
                    this.v();
                    if (this.e(n2) && this.e(-20)) {
                        bl3 = true;
                        break;
                    }
                    this.t();
                    if (this.c(n2) && this.c(-20)) {
                        bl3 = true;
                        break;
                    }
                    this.x();
                    if (this.g(n2)) { this.g(); bl3 = true; break;
                    }
                    this.wHandler();
                    if (this.f(n2) && this.f(-20)) {
                        bl3 = true;
                        break;
                    }
                    this.uPanel();
                    if (this.d(n2) && this.d(-20)) {
                        bl3 = true;
                        break;
                    }
                    ++n3;
                }
            }
            if (bl3) {
                if (this.k.d <= 5) {
                    this.k.g("******Identified font as " + this.k.bu.c.b + " and playing solitaire variant " + SolitaireGameEngine.j[this.k.i]);
                }
                if (!"Classic".equals(this.k.bu.c.b)) {
                    this.k.aq.LHandler.setText(" (" + this.k.bu.c.b + ")");
                } else {
                    this.k.aq.LHandler.setText(" ");
                }
                return true;
            }
            if (this.k.d <= 5) {
                this.k.g("---No match for font " + this.k.bu.c.b);
            }
            if (bl2) break;
            ++n2;
        }
        return false;
    }

    private void AboutDialog(int n2, double d2, double[] dArray, double d3, double d4) {
        double d5;
        if (n2 == this.ad) {
            return;
        }
        double d6 = d2 / dArray[this.DHandler];
        double d7 = this.rPanel.AboutDialog.width;
        double d8 = this.rPanel.AboutDialog.height - this.t.AboutDialog - this.s.AboutDialog;
        if (n2 == 4 || n2 == 5) {
            d8 -= (double)this.J.AboutDialog;
        }
        double d9 = d7 / d8;
        double d10 = d5 >= d6 ? d8 / dArray[this.DHandler] : d7 / d2;
        this.k.A = 129.0 / (d3 * d10);
        int n3 = (int)this.k.B.c();
        int n4 = (int)this.k.B.d();
        // CFR artifact: bs is Object (DesktopDuplication excluded)
        if (this.k.d <= 5) {
            this.k.g("Screen dimensions: " + n3 + "xHandler" + n4);
        }
        this.wHandler = 129.0 / d3;
        if (this.k.d <= 5) {
            this.k.g("Board scale now " + this.wHandler + " normalize scale now " + this.k.A);
        }
        if (d4 > 0.0) {
            this.c = (int)(d4 * this.wHandler);
            this.b = d3 * this.wHandler;
            this.k.bb = this.c / 25;
            this.d = this.c / 3;
            this.e = this.c / 5;
            this.f = this.c / 10;
            this.g = this.c / 16;
            this.h = this.c / 20;
            this.i = this.c / 30;
            if (this.i < 4) {
                this.i = 4;
            }
            this.j = this.c / 40;
            if (this.j < 3) {
                this.j = 3;
            }
            this.Y = (int)(this.wHandler * 8.0) + 1;
            this.Z = (int)(this.wHandler * 8.0) + 1;
            this.ad = n2;
        }
    }

    final void g() {
        this.yHandler();
        // CFR artifact: b(ErrorDialog) and c(ErrorDialog) don't exist
        int n2 = this.PPanel;
        this.PPanel = 0;
        if (this.k.d <= 5) {
            this.k.g(String.format("Menu color updated, was %08x now %08x ", n2, this.PPanel));
        }
    }

    private void AboutDialog(int n2, int n3, double d2, double d3) {
        this.AboutDialog(n2, n3, d2, d3, -10, 0, 0);
    }

    private boolean AboutDialog(int n2, int n3, double d2, double d3, int n4, int n5, int n6) {
        boolean bl2 = false;
        Object object = this.k.aY.AboutDialog[n2];
        Card qu2 = ((CardStack)object).f[n3];
        ((CardStack)object).f[n3].m = d2;
        qu2.n = true;
        if (n3 == 0) {
            this.k.aD.AboutDialog();
            ((CardStack)object).AboutDialog(d2, d3);
            ((CardStack)object).h = (((CardStack)object).d & 1) != 0 ? this.AboutDialog.d() - ((CardStack)object).g.y : (this.c > 0 ? (double)this.c : 300.0);
        }
        if (n4 == -10) {
            return false;
        }
        if (n4 == -20 && n6 <= 5 || n4 == this.ac) {
            object = qu2.m();
            qu2.m().width = (int)(this.b / 5.0);
            if (((Rectangle)object).height > this.c << 1) {
                ((Rectangle)object).height = this.c << 1;
            }
            ErrorDialog al_02 = new ErrorDialog(this.k, (Rectangle)object, "GoodBgPixels");
            boolean bl3 = true;
            if (n4 != -20) {
                bl3 = true;
            }
            if (bl3) {
                object = new qw_0(qu2);
                this.AboutDialog((qw_0)object, qu2, false, -1, -1, false, false);
                if (((qw_0)object).b != null && ((qw_0)object).b.length > 0) {
                    if (this.k.d <= 4) {
                        this.k.g("Stack " + String.valueOf(qu2) + " gives " + String.valueOf(((qw_0)object).b[((qw_0)object).b.length - 1]) + " for font " + this.k.bu.c.b);
                    }
                    bl2 = true;
                    if (n5 == 2) {
                        this.AboutDialog((qw_0)object, qu2, true, -1, -1, false, false);
                        if (((qw_0)object).b != null && ((qw_0)object).b.length == 2 && ((qw_0)object).b[1].c() - ((qw_0)object).b[0].c() > this.c) {
                            if (this.k.d <= 5) {
                                this.k.g("Found 2 cards with large spacing so assume testing spider layout against tripeaks cards");
                            }
                            bl2 = false;
                        }
                    }
                }
            }
        }
        ++this.ac;
        return bl2;
    }

    private void t() {
        this.k.i = 0;
        this.AboutDialog(4, 1590.0, qi_0BoardReader.p, 127.0, 171.0);
        if (this.k.d <= 4) {
            this.k.g("Scanning Pyramid with scaling " + this.k.A);
        }
        this.AboutDialog(4);
        this.k.AboutDialog();
    }

    private boolean c(int n2) {
        if (this.k.d <= 5) {
            this.k.g("Testing for AboutDialog Pyramid board, testIndex " + n2);
        }
        this.ac = 0;
        int n3 = 0;
        int n4 = 0;
        while (n4 < 7) {
            double d2 = (13.0 + 48.4 * (double)n4) * this.wHandler;
            double d3 = this.rPanel.AboutDialog() + (this.rPanel.c() - this.b) / 2.0 - 90.9 * (double)n4 * this.wHandler - 1.0;
            int n5 = 0;
            while (n5 <= n4) {
                double d4 = d3 + 181.8 * (double)n5 * this.wHandler;
                if (this.AboutDialog(n4, n5, d4, d2, n2, 4, n3)) {
                    ++n3;
                }
                if (n2 == this.ac - 1) {
                    if (this.k.d <= 4) {
                        this.k.g("Result of Pyramid search for stack allocation " + n2 + " is " + n3);
                    }
                    return n3 > 0;
                }
                ++n5;
            }
            ++n4;
        }
        if ((n3 >= 5 || (n3 > 2 || n2 == -20) && this.k.aW) && n2 == -20) {
            int n6;
            double d5 = this.rPanel.c() / 2.0 - (double)(this.c / 6);
            double d6 = 535.0 * this.wHandler;
            int n7 = n6 = this.c / 3;
            Rectangle rectangle = new Rectangle((int)(d5 + this.AboutDialog.AboutDialog()), (int)(d6 + this.AboutDialog.b()), n7, n7);
            this.AboutDialog(rectangle, Color.RED);
            ErrorDialog al_02 = new ErrorDialog(this.k, rectangle, "pyramidSnip");
            int[][] nArray = al_02.b;
            n2 = 0;
            while (n2 < al_02.d) {
                int n8 = 0;
                while (n8 < al_02.c) {
                    nArray[n2][n8] = this.k.aB.e(nArray[n2][n8]) ? 0 : 1;
                    ++n8;
                }
                ++n2;
            }
            boolean bl2 = this.AboutDialog(nArray, n6, this.k.d);
            n2 = bl2 ? 1 : 0;
            if (!bl2) {
                this.k.g("Did not find deal direction icon on pyramid board");
                this.k.AboutDialog(9, nArray, 0, 0, rectangle.width, rectangle.height, "Failed deal icon");
                if (this.k.aq.AboutDialog("pyramidScanIssue", "Problem scanning Pyramid card layout", "Failed to interpret direction of Pyramid deal icon\n\nAssuming layout direction set to Left in Pyramid Options")) {
                    this.AboutDialog("Did not find Pyramid deal icon", true);
                }
            }
            int n9 = 7;
            n2 = 8;
            if (this.m) {
                n9 = 8;
                n2 = 7;
            }
            double d7 = this.rPanel.c() / 2.0;
            this.AboutDialog(n9, 0, d7 -= 183.0 * this.wHandler, 526.5 * this.wHandler);
            this.AboutDialog(n2, 0, d7 + 366.0 * this.wHandler - this.b, 526.5 * this.wHandler);
            this.rPanel();
            GameStats pF2 = this;
            pF2.AboutDialog(pF2.k.aY.AboutDialog[0], Color.BLACK);
            GameStats pF3 = this;
            pF3.AboutDialog(pF3.k.aY.AboutDialog[1], Color.BLACK);
            GameStats pF4 = this;
            pF4.AboutDialog(pF4.k.aY.AboutDialog[2], Color.BLACK);
            GameStats pF5 = this;
            pF5.AboutDialog(pF5.k.aY.AboutDialog[3], Color.BLACK);
            GameStats pF6 = this;
            pF6.AboutDialog(pF6.k.aY.AboutDialog[4], Color.BLACK);
            GameStats pF7 = this;
            pF7.AboutDialog(pF7.k.aY.AboutDialog[5], Color.BLACK);
            GameStats pF8 = this;
            pF8.AboutDialog(pF8.k.aY.AboutDialog[6], Color.BLACK);
            GameStats pF9 = this;
            pF9.AboutDialog(pF9.k.aY.AboutDialog[7], Color.ORANGE);
            GameStats pF10 = this;
            pF10.AboutDialog(pF10.k.aY.AboutDialog[8], Color.ORANGE);
        }
        return n3 >= 5;
    }

    private void uPanel() {
        this.k.i = 0;
        this.AboutDialog(1, 1154.0, pEBoardReader.p, 129.0, 169.0);
        if (this.k.d <= 4) {
            this.k.g("Scanning Klondike with scaling " + this.k.A);
        }
        this.k.i = 1;
        this.k.AboutDialog();
    }

    private boolean d(int n2) {
        if (this.k.d <= 5) {
            this.k.g("Testing for AboutDialog Klondike board, testIndex " + n2);
        }
        this.ac = 0;
        int n3 = this.AboutDialog(n2, false);
        if (n2 >= 0 && n3 > 0) {
            return true;
        }
        if (n2 == -20) {
            this.rPanel();
            GameStats pF2 = this;
            pF2.AboutDialog(pF2.k.aY.AboutDialog[0], Color.BLACK);
        }
        return n3 >= 5;
    }

    final int AboutDialog(int n2, boolean bl2) {
        int n3 = 0;
        double d2 = 230.0 * this.wHandler;
        double d3 = this.rPanel.AboutDialog() + (this.rPanel.c() - this.b) / 2.0 - 474.99 * this.wHandler;
        int n4 = 0;
        while (n4 < 7) {
            double d4 = d3 + 158.33 * (double)n4 * this.wHandler;
            if (this.AboutDialog(0, n4, d4, d2, n2, 1, n3)) {
                ++n3;
            }
            if (n2 == this.ac - 1) {
                if (this.k.d <= 4) {
                    this.k.g("Result of Klondike search for stack allocation " + n2 + " is " + n3);
                }
                return n3;
            }
            ++n4;
        }
        d3 = bl2 ? this.rPanel.AboutDialog() + (this.rPanel.c() - this.b) / 2.0 + 474.99 * this.wHandler : this.rPanel.AboutDialog() + (this.rPanel.c() - this.b) / 2.0 - 474.99 * this.wHandler;
        d2 = (int)(13.0 * this.wHandler);
        this.AboutDialog(1, 0, d3, d2);
        d3 = bl2 ? this.rPanel.AboutDialog() + (this.rPanel.c() - this.b) / 2.0 + 316.66 * this.wHandler - 0.5 : this.rPanel.AboutDialog() + (this.rPanel.c() - this.b) / 2.0 - 316.66 * this.wHandler - 0.5;
        this.AboutDialog(2, 0, d3, d2);
        d3 = bl2 ? this.rPanel.AboutDialog() + (this.rPanel.c() - this.b) / 2.0 - 474.99 * this.wHandler : this.rPanel.AboutDialog() + (this.rPanel.c() - this.b) / 2.0;
        int n5 = 0;
        while (n5 < 4) {
            double d5 = d3 + 158.33 * (double)n5 * this.wHandler;
            this.AboutDialog(3, n5, d5, d2);
            ++n5;
        }
        if (n2 == -20) {
            GameStats pF2 = this;
            pF2.AboutDialog(pF2.k.aY.AboutDialog[1], Color.YELLOW);
            GameStats pF3 = this;
            pF3.AboutDialog(pF3.k.aY.AboutDialog[2], Color.YELLOW);
            GameStats pF4 = this;
            pF4.AboutDialog(pF4.k.aY.AboutDialog[3], Color.YELLOW);
        }
        if (bl2) {
            String string = "Set reversed deal and ace locations";
            GameStats pF5 = this;
            pF5.AboutDialog(string, false);
        }
        return n3;
    }

    private void v() {
        this.k.i = 0;
        this.AboutDialog(3, 1590.0, pCBoardReader.p, 127.0, 165.0);
        if (this.k.d <= 4) {
            this.k.g("Scanning FreeCell with scaling " + this.k.A);
        }
        this.k.i = 3;
        this.k.AboutDialog();
    }

    private boolean e(int n2) {
        double d2;
        if (this.k.d <= 5) {
            this.k.g("Testing for AboutDialog FreeCell board, testIndex " + n2);
        }
        this.ac = 0;
        int n3 = 0;
        double d3 = 209.0 * this.wHandler;
        double d4 = this.rPanel.AboutDialog() + (this.rPanel.c() - this.b) / 2.0 - 605.15 * this.wHandler;
        int n4 = 0;
        while (n4 < 8) {
            d2 = d4 + 172.9 * (double)n4 * this.wHandler;
            if (this.AboutDialog(0, n4, d2, d3, n2, 3, n3)) {
                ++n3;
            }
            if (n2 == this.ac - 1) {
                if (this.k.d <= 4) {
                    this.k.g("Result of FreeCell search for stack allocation " + n2 + " is " + n3);
                }
                return n3 > 0;
            }
            ++n4;
        }
        d3 = 13.0 * this.wHandler;
        d4 = this.rPanel.AboutDialog() + this.rPanel.c() / 2.0 - 717.6 * this.wHandler;
        n4 = 0;
        while (n4 < 4) {
            d2 = d4 + 172.9 * (double)n4 * this.wHandler;
            this.AboutDialog(1, n4, d2, d3);
            ++n4;
        }
        d4 = this.rPanel.AboutDialog() + this.rPanel.c() / 2.0 + 25.0 * this.wHandler;
        n4 = 0;
        while (n4 < 4) {
            d2 = d4 + 172.9 * (double)(n4 + 1) * this.wHandler - this.b;
            this.AboutDialog(2, n4, d2, d3);
            ++n4;
        }
        if (n2 == -20) {
            this.rPanel();
            GameStats pF2 = this;
            pF2.AboutDialog(pF2.k.aY.AboutDialog[0], Color.BLACK);
            GameStats pF3 = this;
            pF3.AboutDialog(pF3.k.aY.AboutDialog[1], Color.BLACK);
            GameStats pF4 = this;
            pF4.AboutDialog(pF4.k.aY.AboutDialog[2], Color.BLACK);
        }
        return n3 >= 5;
    }

    final int AboutDialog(int n2, int n3) {
        Object object = this.k.aY.AboutDialog[n2];
        Object object2 = new Rectangle(0, 0, 72, 96);
        object = new Rectangle((Rectangle)object2);
        int n4 = this.j;
        int n5 = this.i;
        Rectangle rectangle = (Rectangle)object2;
        rectangle.grow(-rectangle.width / 10, -((Rectangle)object2).height / 7);
        Object object3 = object;
        ((Rectangle)object3).grow(-((Rectangle)object3).width / 3, -((int)((double)((Rectangle)object).height / 2.4)));
        if (this.k.d <= 5) {
            this.k.g("Stackset " + n2 + " outer rectangle " + String.valueOf(object2) + " inner rectangle " + String.valueOf(object) + " testvert " + n4 + " testhor " + n5);
        }
        this.AboutDialog((Rectangle)object2, Color.RED);
        this.AboutDialog((Rectangle)object, Color.RED);
        Object object4 = new ErrorDialog(this.k, (Rectangle)object2, "freecellOuter");
        int[][] nArray = ((ErrorDialog)object4).b;
        object4 = nArray;
        int n6 = u_0.AboutDialog(nArray, 0, 0, ((Rectangle)object2).width, n5);
        n5 = u_0.AboutDialog((int[][])object4, 0, ((Rectangle)object2).height - n5 - 1, ((Rectangle)object2).width, n5);
        int n7 = u_0.AboutDialog((int[][])object4, 0, 0, n4, ((Rectangle)object2).height);
        int n8 = u_0.AboutDialog((int[][])object4, ((Rectangle)object2).width - n4 - 1, 0, n4, ((Rectangle)object2).height);
        object2 = new u_0(n6);
        ((u_0)object2).AboutDialog(n5);
        ((u_0)object2).AboutDialog(n7);
        ((u_0)object2).AboutDialog(n8);
        ((u_0)object2).b(4);
        if (this.k.d <= 5) {
            this.k.g("Outer average RGB is " + n6 + "," + n5 + "," + n7 + "," + n8 + " giving " + String.valueOf(object2));
        }
        Object object5 = new ErrorDialog(this.k, (Rectangle)object, "freecellInner");
        object5 = ((ErrorDialog)object5).b;
        object5 = new u_0(u_0.AboutDialog((int[][])object5, 0, 0, ((int[][])object5)[0].length, ((int[][])object5).length));
        int n9 = ((u_0)object2).d(((u_0)object5).AboutDialog);
        if (this.k.d <= 5) {
            this.k.g("Inner average RGB is " + String.valueOf(object5) + " giving variance with av of " + n9);
        }
        return n9;
    }

    final void h() {
        boolean bl2 = this.m = !this.m;
        if (this.k.d <= 5) {
            this.k.g("Flipped freecell layout, now set to reversed? " + this.m);
        }
        double d2 = this.k.aY.AboutDialog[1].g.x;
        this.k.aY.AboutDialog[1].g.x = this.k.aY.AboutDialog[2].g.x;
        this.k.aY.AboutDialog[2].g.x = d2;
        int n2 = 0;
        while (n2 < 4) {
            d2 = this.k.aY.AboutDialog[1].f[n2].m;
            this.k.aY.AboutDialog[1].f[n2].m = this.k.aY.AboutDialog[2].f[n2].m;
            this.k.aY.AboutDialog[2].f[n2].m = d2;
            ++n2;
        }
    }

    private void wHandler() {
        this.k.i = 0;
        this.AboutDialog(2, 1590.0, SpiderBoardReader.p, 128.0, 166.0);
        if (this.k.d <= 4) {
            this.k.g("Scanning Spider with scaling " + this.k.A);
        }
        this.k.i = 2;
        this.k.AboutDialog();
    }

    private boolean f(int n2) {
        if (this.k.d <= 5) {
            this.k.g("Testing for AboutDialog Spider board, testIndex " + n2);
        }
        this.ac = 0;
        int n3 = this.k.aW && this.k.aX ? 1 : 0;
        n3 = this.b(n2, n3 != 0);
        if (n2 >= 0 && n3 > 0) {
            return true;
        }
        if (n2 == -20) {
            this.rPanel();
            GameStats pF2 = this;
            pF2.AboutDialog(pF2.k.aY.AboutDialog[0], Color.BLACK);
            GameStats pF3 = this;
            pF3.AboutDialog(pF3.k.aY.AboutDialog[1], Color.YELLOW);
            GameStats pF4 = this;
            pF4.AboutDialog(pF4.k.aY.AboutDialog[2], Color.YELLOW);
        }
        return n3 >= 5;
    }

    final int b(int n2, boolean bl2) {
        double d2;
        int n3 = 0;
        double d3 = 13.0 * this.wHandler;
        double d4 = this.rPanel.AboutDialog() + (this.rPanel.c() - 1383.3 * this.wHandler - this.b) / 2.0 - 0.5;
        int n4 = 0;
        while (n4 < 10) {
            d2 = d4 + 153.7 * (double)n4 * this.wHandler;
            if (this.AboutDialog(0, n4, d2, d3, n2, 2, n3)) {
                ++n3;
            }
            if (n2 == this.ac - 1) {
                if (this.k.d <= 4) {
                    this.k.g("Result of Spider search for stack allocation " + n2 + " is " + n3);
                }
                return n3;
            }
            if (n4 == 1) {
                this.EHandler = d2;
            } else if (n4 == 8) {
                this.FPanel = d2;
            }
            ++n4;
        }
        this.m = bl2;
        d3 = this.rPanel.d() - this.s.AboutDialog() - this.t.AboutDialog() - this.k.c(102.0) * this.k.A - (double)this.c;
        if (bl2) {
            this.AboutDialog(1, 0, this.EHandler, d3);
            d4 = this.EHandler + 1118.0 * this.wHandler;
            n4 = 0;
            while (n4 < 8) {
                d2 = d4 - 40.0 * (double)n4 * this.wHandler;
                this.AboutDialog(2, n4, d2, d3);
                ++n4;
            }
        } else {
            this.AboutDialog(1, 0, this.FPanel, d3);
            d4 = this.FPanel + -1118.0 * this.wHandler;
            n4 = 0;
            while (n4 < 8) {
                d2 = d4 + 40.0 * (double)n4 * this.wHandler;
                this.AboutDialog(2, n4, d2, d3);
                ++n4;
            }
        }
        this.p = new Point((int)(this.k.aY.AboutDialog[1].f[0].m + (double)((int)(this.b / 2.0)) + this.AboutDialog.AboutDialog()), (int)(this.k.aY.AboutDialog[1].g.y + this.AboutDialog.b() + (double)this.f));
        return n3;
    }

    private void xHandler() {
        this.k.i = 0;
        this.AboutDialog(5, 1590.0, sqBoardReader.p, 127.0, 165.7);
        if (this.k.d <= 4) {
            this.k.g("Scanning TriPeaks with scaling " + this.k.A);
        }
        this.AboutDialog(5);
        this.k.AboutDialog();
    }

    private boolean g(int n2) {
        double d2;
        double d3;
        this.ac = 0;
        int n3 = 0;
        if (this.k.d <= 5) {
            this.k.g("Testing for AboutDialog TriPeaks board, testIndex " + n2);
        }
        double d4 = this.rPanel.c() / 2.0 - 1.0;
        d4 -= 176.5 * this.wHandler;
        if (this.n) {
            if (this.k.d <= 5) {
                this.k.g("Try reading from TriPeaks face down feed stack");
            }
            if (this.AboutDialog(7, 0, d4, 529.0 * this.wHandler, n2, 5, 0)) {
                if (this.k.d <= 5) {
                    this.k.g("Read AboutDialog card from TriPeaks face down feed stack so must be reverse deal");
                }
                this.k.AboutDialog(true);
                this.n = false;
            }
            this.ac = 0;
        }
        if (this.m) {
            d3 = d4 + 353.0 * this.wHandler - this.b;
            d2 = d4;
        } else {
            d3 = d4;
            d2 = d4 + 353.0 * this.wHandler - this.b;
        }
        if (this.AboutDialog(8, 0, d2, 529.0 * this.wHandler, n2, 5, 0)) {
            ++n3;
            if (this.k.d <= 4) {
                this.k.g("Result of TriPeaks search for stack allocation " + n2 + " is " + 1);
            }
            if (n2 == this.ac - 1) {
                return true;
            }
        }
        if (this.AboutDialog(7, 0, d3, 529.0 * this.wHandler, n2, 5, n3)) {
            ++n3;
            if (this.k.d <= 4) {
                this.k.g("Result of TriPeaks search for stack allocation " + n2 + " is " + n3);
            }
            if (n2 == this.ac - 1) {
                return n3 > 0;
            }
        }
        double d5 = 76.7 * this.wHandler;
        double d6 = 100.5 * this.wHandler;
        double d7 = 153.8 * this.wHandler;
        double d8 = 12.0 * this.wHandler;
        double d9 = this.rPanel.AboutDialog() + this.rPanel.c() / 2.0 - this.b / 2.0 - 1.0;
        double d10 = 0.0;
        while (d10 < 4.0) {
            int n4 = (int)(d8 + d10 * d6);
            double d11 = 0.0;
            while (d11 < d10 + 7.0) {
                if (this.AboutDialog((int)d10, (int)d11, d9 - d5 * d10 + d7 * (d11 - 3.0), (double)n4, n2, 5, n3)) {
                    ++n3;
                }
                d11 += 1.0;
            }
            d10 += 1.0;
        }
        if (n2 == -20) {
            this.rPanel();
            GameStats pF2 = this;
            pF2.AboutDialog(pF2.k.aY.AboutDialog[0], Color.BLACK);
            GameStats pF3 = this;
            pF3.AboutDialog(pF3.k.aY.AboutDialog[1], Color.BLACK);
            GameStats pF4 = this;
            pF4.AboutDialog(pF4.k.aY.AboutDialog[2], Color.BLACK);
            GameStats pF5 = this;
            pF5.AboutDialog(pF5.k.aY.AboutDialog[3], Color.BLACK);
            GameStats pF6 = this;
            pF6.AboutDialog(pF6.k.aY.AboutDialog[7], Color.ORANGE);
            GameStats pF7 = this;
            pF7.AboutDialog(pF7.k.aY.AboutDialog[8], Color.ORANGE);
        }
        return n3 >= 5;
    }

    private void yHandler() {
        double d2 = (double)this.rPanel.AboutDialog.x + this.k.c(20.0);
        double d3 = (double)(this.rPanel.AboutDialog.y + this.t.AboutDialog) + this.k.d(30.0);
        this.KHandler = new h(this, (int)d2, (int)d3);
        this.LHandler = new h(this, (int)d2, (int)(d3 + (double)((int)this.k.d(200.0))));
    }

    private int AboutDialog(pX pX2, int[][] nArray, Rectangle rectangle, u_0 u_02) {
        int n2;
        int n3 = pX2.y.x;
        int n4 = pX2.y.width;
        int n5 = rectangle.height - 1;
        if (this.k.d <= 4) {
            this.k.g("Scanning for first card xHandler = " + n3 + " yHandler = 0 to " + n5 + " width " + n4 + " xshave 2 height " + rectangle.height);
        }
        while (n5 >= 0) {
            --n5;
        }
        if (this.k.d <= 3) {
            this.k.g(String.format("End of non-whitespace (%08x-%08x) below cards at %d,%d", pX2.d.AboutDialog(), pX2.e.AboutDialog(), n3, n5));
        }
        if ((n2 = n5) < 0) {
            n2 = 0;
        }
        if (pX2.b.equals("Autumn") && rectangle.height - n2 < this.c) {
            if (this.k.d <= 3) {
                this.k.g("Adjusted height to full stack because cards nearing bottom, yHandler " + n5 + " bounds.height " + rectangle.height);
            }
            n2 = rectangle.height - pX2.c.height;
        }
        return n2;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    final void AboutDialog(qw_0 var1_1, Card var2_2, boolean var3_3, int var4_7, int var5_8, boolean var6_9, boolean var7_10) {
        pX var8_14 = new pX();
        this.k.bu.d = var2_2.b.AboutDialog * 10 + var2_2.c;
        CardStack var9_15 = var2_2.b;
        Vector<s_0> v0 = new Vector<s_0>();
        if ((var9_15.d & 2) != 0) {
            if ((var9_15.d & 16) != 0) {
                double var10_16 = 26.0 * this.wHandler;
                if (this.m) {
                    var10_16 = 26.0 * this.wHandler;
                    var1_1.AboutDialog.x -= (int)(var10_16 * 2.0 + 0.5);
                }
                double var12_20 = this.k.FPanel.wHandler * 1.0;
                var1_1.AboutDialog.width = (int)(var10_16 * 2.0 + var12_20);
                var1_1.AboutDialog.height = (int)((double)this.k.FPanel.wHandler * 1.0);
                ErrorDialog var7_11 = new ErrorDialog(this.k, var1_1.AboutDialog, "CardNumber");
                v0 = new Vector<s_0>();
                int var14_22 = 0;
                while (var14_22 < 3) {
                double var15_25 = (int)(var10_16 * (double)var14_22 + 0.5);
                pY var16_27 = this.k.bu.b;
                if (var16_27.AboutDialog.e == 9) {
                    v0.add(new s_0(var16_27.AboutDialog));
                }
                ++var14_22;
                }
                s_0[] var14_23 = v0.toArray(new s_0[v0.size()]);
                var1_1.b = var14_23;
                return;
            }
            var1_1.AboutDialog.height = (int)((double)this.k.FPanel.c * var8_14.FPanel);
            ErrorDialog var10_17 = new ErrorDialog(this.k, var1_1.AboutDialog, "CardNumber");
            pY var11_29 = this.k.bu.b;
            if (var11_29.AboutDialog.e > 4) {
                if (var11_29.AboutDialog.e == 9) {
                    var1_1.b = new s_0[1];
                    var1_1.b[0] = new s_0(var11_29.AboutDialog);
                    return;
                }
                if (this.k.d <= 5) {
                    this.k.g("Failure reading card on horizontal stack " + String.valueOf(var2_2) + " result " + var11_29.AboutDialog.e);
                }
                var1_1.b = null;
                return;
            }
            if (this.k.d <= 3) {
                this.k.f("HORIZONTAL stack has no cards");
            }
            var1_1.b = new s_0[0];
            return;
        }
        Card var10_18 = this.k.aY.AboutDialog[var9_15.AboutDialog].f[var2_2.c];
        pH var11_30 = new pH(this);
        ArrayList<s_0> var12_21 = new ArrayList<s_0>();
        u_0 var13_31 = new u_0();
        u_0 var7_12 = new u_0();
        var1_1.AboutDialog.width = (int)(this.k.FPanel.b * var8_14.EHandler);
        int var15_26 = -1;
        // CFR decompilation artifact: pixel-scanning logic unrecoverable
        var1_1.b = new s_0[0];
        return;
    }
    // CFR decompilation artifacts removed - original logic unrecoverable
    // without the original obfuscated code. See docs/CFR_ARTIFACTS.md
    private int AboutDialog(int n2, ArrayList arrayList) { return 0; }
    private boolean AboutDialog(int n2, pH pH2) { return false; }
    private boolean AboutDialog(ArrayList object, pX pX2, pH pH2) { return false; }
    private boolean AboutDialog(int n2, int n3, ArrayList arrayList, pX pX2, pH pH2) { return false; }
    private boolean AboutDialog(int[][] nArray, int n2, int n3) { return false; }
    private boolean AboutDialog(int[] nArray, int n2, int n3, int n4) { return false; }
    private void AboutDialog(CardStack object, Color color) {}
    private void AboutDialog(Rectangle rectangle, Color color) {}
    private void AboutDialog(Rectangle rectangle, Color color, int n2) {}
    private int AboutDialog(double d2) { return 0; }
    private int b(double d2) { return 0; }
    private int h(int n2) { return 0; }
    private int i(int n2) { return 0; }
    final void AboutDialog(String object, boolean bl2) {}
    final Rectangle i() { return null; }
    final int[][] AboutDialog(Rectangle object) { return null; }
    final Point j() { return null; }
    final int c(boolean bl2) { return 0; }
    final void d(boolean n2) {}
    final void k() {}
    final void p() {}
    final void AboutDialog(boolean var1_1, boolean var2_3) {}
    final void q() {}
    private boolean AboutDialog(int n2, int n3, u_0 u_02, String string, boolean bl2) { return false; }
    private boolean AboutDialog(double d2, double d3) { return false; }
    private void AboutDialog(Point point) {}
    private int AboutDialog(int[][] nArray, int[][][] nArray2, int n2, int n3, String string) { return 0; }
    private int AboutDialog(int[][] nArray, int[][] nArray2, int n2, int n3, boolean bl2) { return 0; }
    private void x() {} // CFR artifact: x() doesn't exist
}