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
    Point p;
    private boolean G = false;
    private boolean H = false;
    private Graphics I;
    BufferedImage q;
    j rPanel;
    i s;
    i t;
    private i J;
    private h KHandler;
    h uPanel;
    private h LHandler;
    private h MHandler;
    private boolean NHandler = false;
    private long OHandler;
    boolean v = false;
    private int PPanel;
    private int Q = 100;
    private int R = 100;
    private int SPanel = 4;
    private int T = 5;
    private int U = 4;
    private int V = 5;
    private int W = -1;
    private int X = -1;
    double wHandler = 0.0;
    boolean xHandler;
    boolean yHandler;
    boolean z;
    private int Y;
    private int Z;
    private int aa;
    private int ab;
    private int ac = 0;
    private int ad = 0;
    Rectangle A;
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
        double d4 = (double)(pF2.rPanel.AboutDialog.yHandler + pF2.rPanel.AboutDialog.height) - pF2.k.d(23.0);
        double d5 = (double)(pF2.rPanel.AboutDialog.xHandler + n2) + d3 * 155.0;
        pF2.MHandler = new h(pF2, (int)d5, (int)d4);
        d5 = (int)((double)(pF2.rPanel.AboutDialog.xHandler + pF2.rPanel.AboutDialog.width) - d3 * 155.0 - (double)n3);
        pF2.uPanel = new h(pF2, (int)d5, (int)d4);
        if (this.k.m == 0 || this.k.m == 3) {
            boolean cfr_ignored_0 = this.k.b;
            if (!this.k.aW) {
                this.d(true);
                this.k.aD.AboutDialog();
            }
        }
        if (!this.k.aD.b(5000)) {
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
                        this.xHandler();
                        this.g(-20);
                        break;
                    }
                    default: {
                        String string = "Failed to identify the theme<br>or the version of solitaire";
                        SolitaireGameEngine qo_04 = this.k;
                        qo_04.AboutDialog(string, false);
                        break;
                    }
                }
            } else {
                String string = "Failed to identify the theme<br>or the version of solitaire";
                SolitaireGameEngine qo_05 = this.k;
                qo_05.AboutDialog(string, false);
            }
        }
        this.g();
        String string = "StackSets";
        GameStats pF3 = this;
        pF3.AboutDialog(string, false);
        if (this.k.aW) {
            this.xHandler = true;
            while (this.xHandler) {
                this.k.aD.AboutDialog();
                this.rPanel();
                string = "Font testing";
                pF3 = this;
                pF3.AboutDialog(string, false);
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
        this.AboutDialog = new j(pF4, pF4.rPanel.AboutDialog.xHandler, this.rPanel.AboutDialog.yHandler + n3, this.rPanel.AboutDialog.width, n2 - n3 + this.t.AboutDialog / 4);
        if (this.k.d <= 5) {
            this.k.g("Tabrect is " + String.valueOf(this.AboutDialog));
        }
        GameStats pF5 = this;
        pF5.b(pF5.AboutDialog.AboutDialog);
        this.k.aq.n();
    }

    private void b(Rectangle object) {
        int n2 = 1;
        while (n2 < ((Rectangle)object).width - 1) {
            if (!this.k.AboutDialog((double)(n2 + ((Rectangle)object).xHandler), (double)(((Rectangle)object).yHandler + 1))) {
                String string = "Solitaire window is partially covered along top";
                object = this.k;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
                return;
            }
            if (!this.k.AboutDialog((double)(n2 + ((Rectangle)object).xHandler), (double)(((Rectangle)object).yHandler + ((Rectangle)object).height - 2))) {
                String string = "Solitaire window is partially covered along bottom";
                object = this.k;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
                return;
            }
            ++n2;
        }
        n2 = 1;
        while (n2 < ((Rectangle)object).height - 1) {
            if (!this.k.AboutDialog((double)(((Rectangle)object).xHandler + 1), (double)(n2 + ((Rectangle)object).yHandler))) {
                String string = "Solitaire window is partially covered along left side";
                object = this.k;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
                return;
            }
            if (!this.k.AboutDialog((double)(((Rectangle)object).xHandler + ((Rectangle)object).width - 2), (double)(n2 + ((Rectangle)object).yHandler))) {
                String string = "Solitaire window is partially covered along right side";
                object = this.k;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
                return;
            }
            ++n2;
        }
    }

    private boolean AboutDialog(int[][] nArray, Rectangle rectangle, pX pX2) {
        u_0 u_02 = new u_0(0);
        int n2 = 0;
        int n3 = 0;
        int n4 = 0;
        while (n4 < rectangle.width) {
            int n5 = 0;
            while (n5 < rectangle.height) {
                ++n2;
                u_02.c(nArray[rectangle.yHandler + n5][rectangle.xHandler + n4]);
                if (u_02.AboutDialog(pX2.e, pX2.d) == 0) {
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
        u_0 u_02 = new u_0(0);
        double d3 = n3 * n2;
        int n4 = 0;
        int n5 = 0;
        while (n5 < n3) {
            int n6 = 0;
            while (n6 < n2) {
                u_02.c(nArray[n5][n6]);
                if (u_02.c(pX2.l) < pX2.m) {
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
        j j2 = new j(pF2, pF2.rPanel);
        j2.AboutDialog.yHandler += this.t.AboutDialog;
        j2.AboutDialog.height -= this.t.AboutDialog;
        this.q = this.k.AboutDialog(j2, "annotate").b();
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
                while (n3 < com.solvitaire.app.q.AboutDialog.length) {
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
                    this.xHandler();
                    if (this.g(n2) && this.g(-20)) {
                        bl3 = true;
                        break;
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
        if (n3 != this.k.bs.AboutDialog || n4 != this.k.bs.b) {
            if (this.k.d <= 5) {
                this.k.g("Changing screen dimensions from " + this.k.bs.AboutDialog + "xHandler" + this.k.bs.b + " to " + n3 + "xHandler" + n4);
            }
            this.k.bs.AboutDialog(n3, n4);
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
            this.k.bu.c.AboutDialog();
            this.Y = (int)(this.wHandler * 8.0) + 1;
            this.Z = (int)(this.wHandler * 8.0) + 1;
            this.aa = (int)(this.wHandler * (double)this.k.bu.c.n + 0.5);
            this.ab = (int)(this.wHandler * (double)this.k.bu.c.o + 0.5);
            this.ad = n2;
        }
    }

    final void g() {
        this.yHandler();
        ErrorDialog al_02 = this.b((ErrorDialog)null);
        int n2 = this.PPanel;
        this.PPanel = GameStats.c(al_02);
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
            ((CardStack)object).h = (((CardStack)object).d & 1) != 0 ? this.AboutDialog.d() - ((CardStack)object).g.yHandler : (this.c > 0 ? (double)this.c : 300.0);
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
            ErrorDialog al_02 = this.k.aD.AboutDialog((Rectangle)object, "GoodBgPixels");
            boolean bl3 = true;
            if (n4 != -20) {
                bl3 = this.AboutDialog(al_02.AboutDialog(), ((Rectangle)object).width, ((Rectangle)object).height, this.k.bu.c, 0.05);
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
        this.AboutDialog();
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
            ErrorDialog al_02 = this.k.aD.AboutDialog(rectangle, "pyramidSnip");
            int[][] nArray = al_02.AboutDialog();
            n2 = 0;
            while (n2 < al_02.d()) {
                int n8 = 0;
                while (n8 < al_02.c()) {
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
                this.AboutDialog(nArray, n6, 2);
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
        this.AboutDialog();
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
        this.AboutDialog();
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
        Object object2 = ((CardStack)object).f[n3 % 10].m();
        object = new Rectangle((Rectangle)object2);
        int n4 = this.j;
        int n5 = this.i;
        Rectangle rectangle = object2;
        rectangle.grow(-rectangle.width / 10, -((Rectangle)object2).height / 7);
        Object object3 = object;
        ((Rectangle)object3).grow(-((Rectangle)object3).width / 3, -((int)((double)((Rectangle)object).height / 2.4)));
        if (this.k.d <= 5) {
            this.k.g("Stackset " + n2 + " outer rectangle " + String.valueOf(object2) + " inner rectangle " + String.valueOf(object) + " testvert " + n4 + " testhor " + n5);
        }
        this.AboutDialog((Rectangle)object2, Color.RED);
        this.AboutDialog((Rectangle)object, Color.RED);
        Object object4 = this.k.aD.AboutDialog((Rectangle)object2, "freecellOuter");
        int[][] nArray = ((ErrorDialog)object4).AboutDialog();
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
        Object object5 = this.k.aD.AboutDialog((Rectangle)object, "freecellInner");
        object5 = ((ErrorDialog)object5).AboutDialog();
        object5 = new u_0(u_0.AboutDialog((int[][])object5));
        int n9 = ((u_0)object2).c((u_0)object5);
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
        double d2 = this.k.aY.AboutDialog[1].g.xHandler;
        this.k.aY.AboutDialog[1].g.xHandler = this.k.aY.AboutDialog[2].g.xHandler;
        this.k.aY.AboutDialog[2].g.xHandler = d2;
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
        this.AboutDialog();
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
        this.p = new Point((int)(this.k.aY.AboutDialog[1].f[0].m + (double)((int)(this.b / 2.0)) + this.AboutDialog.AboutDialog()), (int)(this.k.aY.AboutDialog[1].g.yHandler + this.AboutDialog.b() + (double)this.f));
        return n3;
    }

    private void xHandler() {
        this.k.i = 0;
        this.AboutDialog(5, 1590.0, sqBoardReader.p, 127.0, 165.7);
        if (this.k.d <= 4) {
            this.k.g("Scanning TriPeaks with scaling " + this.k.A);
        }
        this.AboutDialog(5);
        this.AboutDialog();
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
                this.AboutDialog(true);
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
        double d2 = (double)this.rPanel.AboutDialog.xHandler + this.k.c(20.0);
        double d3 = (double)(this.rPanel.AboutDialog.yHandler + this.t.AboutDialog) + this.k.d(30.0);
        this.KHandler = new h(this, (int)d2, (int)d3);
        this.LHandler = new h(this, (int)d2, (int)(d3 + (double)((int)this.k.d(200.0))));
    }

    private int AboutDialog(pX pX2, int[][] nArray, Rectangle rectangle, u_0 u_02) {
        int n2;
        int n3 = pX2.yHandler.xHandler;
        int n4 = pX2.yHandler.width;
        int n5 = rectangle.height - 1;
        if (this.k.d <= 4) {
            this.k.g("Scanning for first card xHandler = " + n3 + " yHandler = 0 to " + n5 + " width " + n4 + " xshave 2 height " + rectangle.height);
        }
        while (n5 >= 0) {
            if (pX2.AboutDialog(u_02, nArray, n3 + 2, n5, n4 - 2, pX2.d, pX2.e)) break;
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
        var8_14 = this.k.bu.c;
        this.k.bu.d = var2_2.b.AboutDialog * 10 + var2_2.c;
        var9_15 = var2_2.b;
        if ((var9_15.d & 2) != 0) {
            if ((var9_15.d & 16) != 0) {
                var10_16 = 26.0 * this.wHandler;
                if (this.m) {
                    var10_16 = 26.0 * this.wHandler;
                    var1_1.AboutDialog.xHandler -= (int)(var10_16 * 2.0 + 0.5);
                }
                var12_20 = this.k.FPanel.b * var8_14.EHandler;
                var1_1.AboutDialog.width = (int)(var10_16 * 2.0 + var12_20);
                var1_1.AboutDialog.height = (int)((double)this.k.FPanel.c * var8_14.FPanel);
                var7_11 = this.k.aD.AboutDialog(var1_1.AboutDialog, "CardNumber");
                var9_15 = new Vector<s_0>();
                var14_22 = 0;
                while (var14_22 < 3) {
                    var15_25 = (int)(var10_16 * (double)var14_22 + 0.5);
                    this.k.bu.AboutDialog(var7_11, var15_25, 0, true, 2, var8_14.yHandler.height, var4_7);
                    var16_27 = this.k.bu.b;
                    if (var16_27.AboutDialog.e == 9) {
                        var9_15.add(new s_0(var16_27.AboutDialog));
                    } else {
                        if (this.k.d <= 4) {
                            this.k.f("Failure reading card " + var14_22 + " on triplet stack " + String.valueOf(var2_2));
                        }
                        if (this.k.xHandler && var4_7 != 0 && var4_7 != -1) {
                            this.k.f("Error reading triplet image at xHandler offset " + var15_25);
                            this.k.b(var7_11, "Triplet" + var14_22 + "error");
                        }
                    }
                    ++var14_22;
                }
                v0 = var9_15;
                var14_23 = v0.toArray(new s_0[v0.size()]);
                var1_1.b = var14_23;
                return;
            }
            var1_1.AboutDialog.width = (int)(this.k.FPanel.b * var8_14.EHandler);
            var1_1.AboutDialog.height = (int)((double)this.k.FPanel.c * var8_14.FPanel);
            if (var7_10) {
                var10_17 = this.k.aD.AboutDialog(var2_2, var1_1.AboutDialog);
            } else {
                var11_29 = var2_2.m();
                var2_2.m().width = var1_1.AboutDialog.width;
                var11_29.height = var1_1.AboutDialog.height;
                var10_17 = this.k.aD.AboutDialog((Rectangle)var11_29, "CardNumber");
            }
            this.k.bu.AboutDialog(var10_17, 0, 0, true, 2, var8_14.yHandler.height, var4_7);
            var11_29 = this.k.bu.b;
            if (var11_29.AboutDialog.e > 4) {
                if (var11_29.AboutDialog.e == 9) {
                    var1_1.b = new s_0[1];
                    var1_1.b[0] = new s_0(var11_29.AboutDialog);
                    return;
                }
                if (this.k.d <= 5) {
                    this.k.g("Failure reading card on horizontal stack " + String.valueOf(var2_2) + " result " + this.k.bu.b.AboutDialog.e);
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
        var10_18 = this.k.aY.AboutDialog[var9_15.AboutDialog].f[var2_2.c];
        var11_30 = new pH(this);
        var12_21 = new ArrayList<s_0>();
        var13_31 = new u_0();
        var7_12 = new u_0();
        var1_1.AboutDialog.width = (int)(this.k.FPanel.b * var8_14.EHandler);
        var9_15 = this.k.aD.AboutDialog(var1_1.AboutDialog, "VertStack");
        var14_24 = var9_15.AboutDialog();
        var15_26 = this.AboutDialog((pX)var8_14, var14_24, var1_1.AboutDialog, var13_31);
        if (var15_26 <= 0) {
            var1_1.b = new s_0[0];
            return;
        }
        var16_28 = false;
        if (this.k.d <= 3) {
            this.k.f("screen relative bounds are " + String.valueOf(var1_1.AboutDialog));
        }
        var17_32 = false;
        var18_33 = false;
        var11_30.AboutDialog = 1;
        var11_30.g = new int[8];
        while (var15_26 >= 0) {
            block159: {
                block160: {
                    block161: {
                        block158: {
                            var19_34 = var8_14.yHandler.xHandler;
                            var20_38 = var8_14.AboutDialog(var13_31, var14_24, var19_34 + 2, var15_26, var8_14.yHandler.width - 2, var8_14.i, var8_14.k, 1);
                            if (var20_38 >= 0 && !var8_14.b(var7_12, var14_24, var19_34 + 2, var15_26, var8_14.yHandler.width - 2, var8_14.i, var8_14.j, 5)) {
                                var16_28 = false;
                                if (this.k.d <= 3) {
                                    this.k.f(String.format("First black pixel %08x (red=%08x-%08x black=%08x-%08x) at %d,%d", new Object[]{var13_31.AboutDialog(), this.k.bu.c.f.AboutDialog(), this.k.bu.c.h.AboutDialog(), this.k.bu.c.i.AboutDialog(), this.k.bu.c.k.AboutDialog(), var20_38, var15_26}));
                                }
                            } else {
                                var20_38 = var8_14.AboutDialog(var13_31, var14_24, var19_34 + 2, var15_26, var8_14.yHandler.width - 2, var8_14.f, var8_14.h, 1);
                                if (var20_38 >= 0 && !var8_14.b(var7_12, var14_24, var19_34 + 2, var15_26, var8_14.yHandler.width - 2, var8_14.f, var8_14.g, 5)) {
                                    var16_28 = true;
                                    if (this.k.d <= 3) {
                                        this.k.f(String.format("First red pixel %08x (red=%08x-%08x black=%08x-%08x) at %d,%d", new Object[]{var13_31.AboutDialog(), this.k.bu.c.f.AboutDialog(), this.k.bu.c.h.AboutDialog(), this.k.bu.c.i.AboutDialog(), this.k.bu.c.k.AboutDialog(), var20_38, var15_26}));
                                    }
                                } else if (var15_26 > 0) {
                                    --var15_26;
                                    continue;
                                }
                            }
                            var21_40 = var15_26;

                            var23_44 = var8_14.AboutDialog(var14_24, var19_34 + 2, var15_26, var8_14.yHandler.width - 2, var16_28);
                            if (var23_44 >= var15_26) {
                                --var15_26;
                                continue;
                            }
                            var15_26 = var23_44;
                            var24_45 = false;
                            if (var11_30.AboutDialog != 1) break block158;
                            if (!var17_32) {
                                var11_30.b = var21_40;
                            }
                            var11_30.AboutDialog = 0;
                            var11_30.AboutDialog((pX)var8_14);
                            var22_41 = var11_30.AboutDialog(var21_40, var15_26);
                            if (var22_41 == -1) {
                                if (this.k.d <= 3) {
                                    this.k.f("FIRST_MATCH failed at " + var15_26 + " aceChecking " + var17_32);
                                }
                                if (this.k.d <= 2) {
                                    com.solvitaire.app.q.AboutDialog(this.k, (pX)var8_14, var14_24, var19_34, var15_26, var8_14.yHandler.width, 20, var16_28);
                                }
                                if (!var17_32) break;
                                if (this.k.d <= 5) {
                                    this.k.f("Ace checking indicated single ace so empty stack now");
                                }
                                var12_21.clear();
                                break;
                            }
                            if (var22_41 != -2) {
                                if (this.k.d <= 3) {
                                    this.k.f("Attempting FIRST_MATCH at searchy " + var22_41 + " font.rect.yHandler " + var8_14.c.yHandler + " phase start " + var11_30.b + " ace checking:" + var17_32);
                                }
                                if (this.k.d <= 3) {
                                    com.solvitaire.app.q.AboutDialog(this.k, (pX)var8_14, var14_24, var19_34, var22_41, var8_14.yHandler.width, var8_14.c.height, var16_28);
                                }
                                this.k.bu.AboutDialog((ErrorDialog)var9_15, 0, var22_41 -= var8_14.c.yHandler, false, 2, var8_14.yHandler.height, var4_7);
                                var25_49 = this.k.bu.b.AboutDialog;
                                if (var25_49.e != 1) {
                                    if (var25_49.e == 9) {
                                        if (var17_32) {
                                            if (this.k.d <= 3) {
                                                this.k.f("Found another card when ace checking so empty stack of ace first");
                                            }
                                            var12_21.clear();
                                            var18_33 = true;
                                        } else {
                                            var18_33 = this.AboutDialog(var25_49.c, var22_41, var12_21, (pX)var8_14, (pH)var11_30);
                                        }
                                        var17_32 = false;
                                        var24_45 = true;
                                        v1 = var11_30;
                                        var15_26 = v1.AboutDialog(v1.AboutDialog, var22_41, this.k.bu.b.AboutDialog.m, this.k.bu.c.uPanel[this.k.bu.b.AboutDialog.AboutDialog]);
                                        var11_30.AboutDialog((pX)var8_14);
                                    }
                                } else if (this.k.d <= 3) {
                                    this.k.f("FULL_MATCH number data not present, continuing scan from " + var15_26);
                                }
                            } else {
                                if (this.k.d <= 3) {
                                    this.k.f("Blob too small so continuing scan from " + var15_26);
                                }
                                if (this.k.d <= 2) {
                                    com.solvitaire.app.q.AboutDialog(this.k, (pX)var8_14, var14_24, var19_34, var15_26, var8_14.yHandler.width, var8_14.c.height, var16_28);
                                }
                            }
                            break block159;
                        }
                        if (this.k.d <= 3) {
                            this.k.f("Not the first match, testing mid stack blob top of " + var15_26);
                        }
                        if ((var22_41 = var11_30.AboutDialog(var14_24, var13_31, var21_40, var19_34, var15_26, (pX)var8_14)) != -1) break block160;
                        if (this.k.d <= 2) {
                            com.solvitaire.app.q.AboutDialog(this.k, (pX)var8_14, var14_24, var19_34, var15_26, var8_14.yHandler.width, var8_14.yHandler.height + 30, var16_28);
                        }
                        if (var11_30.AboutDialog((pX)var8_14)) break block161;
                        if (var17_32) break;
                        if (!var18_33 && this.AboutDialog(var12_21, (pX)var8_14, (pH)var11_30)) {
                            if (this.k.d <= 5) {
                                this.k.f("Now checking whether ace needs discarding");
                            }
                            var17_32 = true;
                            var11_30.AboutDialog(1);
                        } else {
                            if (this.k.d > 3) break;
                            this.k.f("Ace check unnecessary or test indicated not required");
                            break;
lbl169:
                            // 1 sources

                            if (var12_21.size() == 1) {
                                if (this.k.d <= 5) {
                                    this.k.g("Dropping single king because probably ace stack");
                                }
                                var12_21.clear();
                                break;
                            }
                            if (this.k.d > 5) break;
                            this.k.g("Found another card when ace checking so ignore");
                            break;
                        }
                    }
                    var15_26 = var11_30.b;
                    break block159;
                }
                if (var22_41 != -2) {
                    if (var11_30.AboutDialog < 3) {
                        if (var11_30.e > var8_14.yHandler.height + 5) {
                            var25_50 = var8_14.yHandler.height;
                        } else {
                            if (this.k.d <= 3) {
                                this.k.f("Search height " + var11_30.e + " in full_match mode means we try part_match");
                            }
                            var25_50 = var8_14.yHandler.height - 1;
                            if (var8_14.z == 9) {
                                var25_50 -= 7;
                            }
                        }
                    } else {
                        var25_50 = var11_30.f - 1;
                    }
                    var22_41 -= var8_14.c.yHandler;
                    if (this.k.d <= 3) {
                        this.k.f("Attempting match in phase " + var11_30.AboutDialog + " at yHandler " + var15_26 + " matchHeight " + var11_30.f + " above search min " + var11_30.c + " and below max " + var11_30.d + " searchHeight " + var11_30.e);
                    }
                    if (this.k.d <= 2) {
                        com.solvitaire.app.q.AboutDialog(this.k, (pX)var8_14, var14_24, var19_34, var22_41 + var8_14.c.yHandler, var8_14.yHandler.width, var11_30.f, var16_28);
                    }
                    this.k.bu.AboutDialog((ErrorDialog)var9_15, 0, var22_41, false, var11_30.AboutDialog, var25_50, -1);
                    if (var11_30.AboutDialog <= 2 && this.k.bu.b.AboutDialog.e != 9 && this.k.bu.b.AboutDialog.e == 6) {
                        if (var11_30.e > var8_14.c.height) {
                            if (this.k.d <= 3) {
                                this.k.f("Rejecting part match because search height " + var11_30.e + " too large");
                            }
                            this.k.bu.b.AboutDialog.e = 4;
                        } else if (this.k.d <= 3) {
                            this.k.f("Accepting part match because search height " + var11_30.e + " less than font rect of " + var8_14.c.height);
                        }
                    }
                    if (this.k.bu.b.AboutDialog.e == 9 || this.k.bu.b.AboutDialog.e == 6) {
                        var24_45 = true;
                        v2 = var11_30;
                        var15_26 = v2.AboutDialog(v2.AboutDialog, var22_41, this.k.bu.b.AboutDialog.m, this.k.bu.c.uPanel[this.k.bu.b.AboutDialog.AboutDialog]);
                        if (var11_30.AboutDialog <= 2) {
                            if (this.k.e) {
                                var19_35 = this.k.bu.b;
                                var30_58 = var19_35.AboutDialog;
                                var31_62 = var30_58.AboutDialog;
                                var26_54 = var8_14.s[var31_62] - var30_58.g;
                                if (var26_54 < 5 && this.k.d <= 5) {
                                    this.k.g("***Nearly missed on match of card " + com.solvitaire.app.q.b(var31_62) + " leeway " + var26_54 + " stack " + String.valueOf(var2_2) + " xd " + var19_35.AboutDialog.l + " yd " + var19_35.AboutDialog.m);
                                }
                            }
                            if (this.k.bu.b.AboutDialog.e == 6) {
                                var11_30.AboutDialog((pX)var8_14);
                            }
                        }
                    } else if (this.k.bu.b.AboutDialog.e == 1) {
                        var19_36 = new Rectangle(var8_14.yHandler.xHandler + var8_14.yHandler.width / 4, var15_26, var8_14.yHandler.width / 2, 15);
                        if (this.k.d <= 3) {
                            this.k.f("Phase " + var11_30.AboutDialog + " number data not present, testing for bg at " + String.valueOf(var19_36));
                        }
                        if (!this.AboutDialog(var14_24, var19_36, (pX)var8_14)) {
                            if (this.k.d <= 3) {
                                this.k.f("Phase " + var11_30.AboutDialog + " bg not present, switch phase");
                            }
                            if (!var11_30.AboutDialog((pX)var8_14)) break;
                            var15_26 = var11_30.b;
                        }
                    }
                } else if (this.k.d <= 3) {
                    var25_51 = var11_30.b - var15_26 + 1;
                    this.k.f("Did not attempt match in phase " + var11_30.AboutDialog + " at yHandler " + var15_26 + " because height " + var25_51 + " too low, not between search min " + var11_30.c + " and search max " + var11_30.d);
                    if ((var25_51 += 5) > 50) {
                        var25_51 = 50;
                    }
                    if (this.k.d <= 2) {
                        com.solvitaire.app.q.AboutDialog(this.k, (pX)var8_14, var14_24, var19_34, var15_26, var8_14.yHandler.width, var25_51 + 5, var16_28);
                    }
                }
            }
            if (var24_45) {
                var25_49 = this.k.bu.b;
                var19_37 = new s_0(var25_49.AboutDialog);
                if (var11_30.AboutDialog != 2) {
                    var19_37.b = 0;
                    var19_37.d = var19_37.c;
                }
                var12_21.add(var19_37);
                if (this.k.d <= 3) {
                    this.k.f("Found AboutDialog card at " + var25_49.AboutDialog.l + "," + var22_41 + "+" + var25_49.AboutDialog.m + "-" + this.k.bu.c.uPanel[var25_49.AboutDialog.AboutDialog] + " suit " + var19_37.b + " value " + var19_37.c);
                }
                var30_59 = var12_21.size();
                if (!var3_3 && var18_33 | var30_59 > 1) {
                    if (this.k.d > 3) break;
                    this.k.f("Do not need to locate all cards after finding " + var30_59);
                    break;
                }
                if (this.k.d <= 2) {
                    this.k.f("Matching successful, continuing to scan upward for background match from " + var15_26);
                }
                while (var15_26 >= var1_1.AboutDialog.yHandler) {
                    if (!var8_14.AboutDialog(var13_31, var14_24, var8_14.yHandler.xHandler, var15_26, var8_14.yHandler.width, var8_14.d, var8_14.e)) break;
                    --var15_26;
                }
                ++var15_26;
                if (this.k.d <= 3) {
                    this.k.f("After searching, skipped over bg pixels to " + var15_26);
                }
            } else if (this.k.d <= 3) {
                this.k.f("Match was not successful, continue search upwards from " + var15_26);
            }
            if (--var15_26 > 0 || var11_30.b < 4) continue;
            if (var11_30.AboutDialog != 1 && var11_30.AboutDialog((pX)var8_14)) {
                if (this.k.d <= 3) {
                    this.k.f("Hit top of stack so switched phase");
                }
                var15_26 = var11_30.b;
                continue;
            }
            if (this.k.d <= 3) {
                this.k.f("Hit top of stack so check for ace testing");
            }
            if (var17_32) {
                if (var12_21.size() == 1) {
                    if (this.k.d <= 5) {
                        this.k.g("Discarding what we assume is an ace");
                    }
                    var12_21.clear();
                    continue;
                }
                if (this.k.d > 5) continue;
                this.k.g("Found " + var12_21.size() + " when checking for ace stack so keep all cards");
                continue;
            }
            if (!var18_33 && this.AboutDialog(var12_21, (pX)var8_14, (pH)var11_30)) {
                if (this.k.d <= 5) {
                    this.k.f("Ace checking now so set FIRST_MATCH again");
                }
                var17_32 = true;
                var11_30.AboutDialog(1);
                var15_26 = var11_30.b;
                continue;
            }
            var15_26 = -1;
        }
        var19_34 = var12_21.size();
        if (!var3_3) {
            var20_38 = 1;
            if (var19_34 > 0 && var11_30.b > 4) {
                var20_38 = 0;
                var1_1.b = new s_0[var19_34 + 1];
                var15_26 = var9_15.f();
                var1_1.b[0] = new s_0(this.k, (pX)var8_14, -1);
                var1_1.b[0].AboutDialog(0, var15_26);
                var1_1.b[0].AboutDialog(-2);
                var1_1.b[0].o = true;
            } else {
                var1_1.b = new s_0[var19_34];
            }
            var21_40 = 0;
            while (var21_40 < var19_34) {
                var1_1.b[var19_34 - var21_40 - var20_38] = var22_43 = (s_0)var12_21.get(var21_40);
                ++var21_40;
            }
            return;
        }
        var20_39 = new ArrayList<s_0>();
        var21_40 = this.AboutDialog(var19_34, var12_21);
        var22_41 = 99999;
        var23_44 = 99999;
        for (s_0 var24_47 : var12_21) {
            if (this.k.d <= 3) {
                this.k.f("Processing card at " + var24_47.c());
            }
            if ((var19_34 = var20_39.size()) == 0) {
                var22_41 = var23_44 = var24_47.c();
                var20_39.add(var24_47);
                if (this.k.d > 3) continue;
                this.k.f("Added first card at " + var24_47.c());
                continue;
            }
            var30_60 = var24_47.c();
            var31_62 = var22_41 - var30_60;
            if (this.k.d <= 3) {
                v3 = var22_41;
                this.k.f("Average delta is now " + var21_40 + " and delta " + var31_62 + " from " + (var19_34 - 1) + " cards, average between " + var23_44 + " and " + v3 + " delta from " + v3);
            }
            if (var31_62 - var21_40 < -5) {
                if ((this.k.i != 3 || var19_34 < 8) && this.k.d <= 5) {
                    this.k.g("Unexpected delta reduction after " + var19_34 + " cards, delta " + var31_62 + " av " + var21_40);
                }
            } else if (var31_62 - var21_40 > var21_40 * 3 / 4) {
                if (this.k.d <= 6) {
                    this.k.g("***Detected missing card(s) in stack " + String.valueOf(var2_2) + " at " + var19_34);
                    for (s_0 var26_55 : var12_21) {
                        this.k.g(var26_55.toString());
                    }
                }
                if (Math.abs(var31_62 / 2 - var21_40) < 5) {
                    if (this.k.d <= 6) {
                        this.k.g(" card spacing " + var31_62 + " is close to twice average of " + var21_40 + " so inserting blank card");
                    }
                    var26_56 = new s_0(this.k, (pX)var8_14, -1);
                    var26_56.AboutDialog(var24_47.b(), (var22_41 + var24_47.c()) / 2);
                    var20_39.add(var26_56);
                    if (this.k.d <= 6) {
                        this.k.g("Added dummy dropped card at " + var26_56.c());
                    }
                } else if (Math.abs(var31_62 / 3 - var21_40) < 5) {
                    if (this.k.d <= 6) {
                        this.k.g(" card spacing " + var31_62 + " is close to three times average of " + var21_40 + " so inserting 2 blank cards");
                    }
                    var26_57 = new s_0(this.k, (pX)var8_14, -1);
                    var26_57.AboutDialog(var24_47.b(), ((var22_41 << 1) + var24_47.c()) / 3);
                    var20_39.add(var26_57);
                    if (this.k.d <= 6) {
                        this.k.g("Added first dummy dropped card at " + var26_57.c());
                    }
                    var26_57 = new s_0(this.k, (pX)var8_14, -1);
                    var26_57.AboutDialog(var24_47.b(), (var22_41 + (var24_47.c() << 1)) / 3);
                    var20_39.add(var26_57);
                    if (this.k.d <= 6) {
                        this.k.g("Added second dummy dropped card at " + var26_57.c());
                    }
                } else if (var31_62 / 3 - var21_40 >= 5) {
                    if (this.k.d <= 6) {
                        this.k.g("***Card " + var20_39.size() + " delta " + var31_62 + " implies more than 2 cards missing, fail read");
                    }
                    var1_1.b = null;
                    return;
                }
            }
            var20_39.add(var24_47);
            var19_34 = var20_39.size() - 1;
            var21_40 = (var23_44 - var30_60 + var19_34 / 2) / var19_34;
            if (this.k.d <= 3) {
                this.k.f("Copied card at " + var24_47.c() + " length now " + var20_39.size() + " new average " + var21_40);
            }
            var22_41 = var30_60;
        }
        var12_21 = var20_39;
        var24_48 = var12_21.size();
        if (var24_48 == 0) {
            var1_1.b = new s_0[0];
            return;
        }
        var25_53 = var11_30.b;
        if (this.k.d <= 3) {
            this.k.f("Residual space at top of stack " + String.valueOf(var10_18) + " is " + var25_53);
        }
        var19_34 = 0;
        var30_61 = 0.0;
        if (var25_53 > 6 || var24_48 > 13 && var25_53 > 4) {
            if (var2_2.o) {
                var26_54 = var2_2.q();
                var19_34 = var26_54 - var24_48;
                if (var19_34 < 0) {
                    var19_34 = 0;
                }
                if (this.k.d <= 3) {
                    this.k.f("Stack has residual space of " + var25_53 + " the reliable length is " + var26_54 + " and we found " + var24_48 + " so set faced to " + var19_34);
                }
            } else {
                if (this.k.i == 1 || this.k.i == 2) {
                    var30_61 = GameStats.B[this.k.i] * this.wHandler;
                    var19_34 = (int)(((double)var25_53 + var30_61 / 2.0) / var30_61);
                    if (var19_34 == 0) {
                        var19_34 = 1;
                    }
                    var1_1.c = false;
                } else if ((double)var25_53 > 10.0 * this.wHandler) {
                    var19_34 = 1;
                    if (this.k.d <= 4) {
                        this.k.f("Cannot guess freecell compressed length so set to 1");
                    }
                    var1_1.c = false;
                }
                if (this.k.d <= 3) {
                    this.k.f("Stack has residual space of " + var25_53 + " step is " + var30_61 + "(" + GameStats.B[this.k.i] + "*" + this.wHandler + ") giving " + var19_34 + " steps");
                }
            }
            if (var19_34 > 6) {
                var1_1.c = false;
                if (this.k.d <= 2) {
                    this.k.f("Too many face down cards so last resort estimating card separation");
                }
                if ((var26_54 = var10_18.p()) <= var24_48) {
                    if (this.k.d <= 3) {
                        this.k.f("Found more cards than in autostack, just leave face down as " + var19_34);
                    }
                    var30_61 = (double)var25_53 / (double)var19_34;
                } else {
                    var3_3 = var10_18.rPanel();
                    var4_7 = 0;
                    if (this.k.i == 2) {
                        var4_7 = var3_3 / 2;
                    }
                    if ((var19_34 = var26_54 - var24_48 - var4_7) < 0) {
                        var19_34 = 0;
                    } else {
                        var30_61 = (double)var25_53 / (double)var19_34;
                    }
                    if (this.k.d <= 3) {
                        this.k.f("Expected of " + var26_54 + " and adjust of " + var4_7 + " gives faced of " + var19_34 + " and ystep of " + var30_61);
                    }
                }
            }
        }
        var1_1.b = new s_0[var24_48 + var19_34];
        var26_54 = 0;
        while (var26_54 < var19_34) {
            var15_26 = (int)((double)var9_15.f() + var30_61 * (double)var26_54);
            var1_1.b[var26_54] = new s_0(this.k, (pX)var8_14, -1);
            var1_1.b[var26_54].AboutDialog(0, var15_26);
            var1_1.b[var26_54].AboutDialog(-2);
            var1_1.b[var26_54].o = true;
            ++var26_54;
        }
        var26_54 = 1;
        while (var26_54 <= var24_48) {
            var1_1.b[var24_48 - var26_54 + var19_34] = var3_5 = (s_0)var12_21.get(var26_54 - 1);
            if (var3_5.b == 0) {
                var1_1.c = false;
            }
            ++var26_54;
        }
        if (var6_9 == 0 && var10_18.o && var5_8 > 0) {
            var26_54 = var1_1.b.length;
            var3_6 = var12_21.size();
            var4_7 = var10_18.p();
            if (var5_8 > var3_6) {
                if (this.k.d <= 5) {
                    this.k.g("Caller required " + var5_8 + " cards, but only read " + var3_6 + " cards so abort");
                }
                var1_1.b = null;
                return;
            }
            var3_6 = var4_7 - var5_8;
            var6_9 = var26_54 - var5_8;
            var7_13 = 0;
            for (Object var8_14 : var10_18.e) {
                var10_19 = 0;
                while (var10_19 < var8_14.AboutDialog) {
                    if (var3_6-- <= 0) {
                        var11_30 = var1_1.b[var6_9];
                        var12_21 = var8_14.c[var10_19];
                        if (var12_21.g != 0 && var12_21.g != var11_30.d) {
                            if (var6_9 == var1_1.b.length - 1) {
                                if (this.k.d <= 6) {
                                    this.k.g("Reading bottom card on stack " + String.valueOf(var2_2) + " expected " + var12_21.g + " but found " + var11_30.d + " so returning null");
                                }
                                var1_1.b = null;
                                return;
                            }
                            if (var11_30.c != var12_21.f) {
                                if (this.k.d <= 5) {
                                    this.k.g("Stack " + String.valueOf(var2_2) + " card #" + var6_9 + " in run of " + var5_8 + " value should be " + var12_21.f + " but read " + var11_30.c);
                                }
                                ++var7_13;
                            }
                        }
                        ++var6_9;
                    }
                    ++var10_19;
                }
            }
            if (var7_13 > var5_8 / 2 && this.k.d <= 6) {
                this.k.f("Misread " + var7_13 + " cards when looking for run of " + var5_8 + " in AboutDialog stack of " + var4_7 + " cards:" + String.valueOf(var1_1));
            }
        }
    }

    private int AboutDialog(int n2, ArrayList arrayList) {
        if (n2 > 3) {
            n2 = 3;
            int n3 = ((s_0)arrayList.get(0)).c();
            int n4 = ((s_0)arrayList.get(1)).c();
            int n5 = ((s_0)arrayList.get(2)).c();
            int n6 = ((s_0)arrayList.get(3)).c();
            int n7 = n3 - n4;
            n4 -= n5;
            n5 -= n6;
            if (this.k.d <= 3) {
                this.k.f("Spacing 1,2,3:" + n7 + "," + n4 + "," + n5);
            }
            if (n7 - n4 > 5) {
                if (this.k.d <= 3) {
                    this.k.f("Looks like dropped first card");
                }
                n2 = 4;
            } else if (n4 - n5 > 5) {
                if (this.k.d <= 3) {
                    this.k.f("Looks like dropped second card");
                }
                n2 = 4;
            }
            n2 = (n3 - n6 + n2 / 2) / n2;
            if (this.k.d <= 3) {
                this.k.f("Calculated card spacing as " + n2);
            }
        } else if (n2 > 1) {
            int n8;
            n2 = ((s_0)arrayList.get(0)).c();
            int n9 = ((s_0)arrayList.get(1)).c();
            if (Math.abs((n2 -= n9) - (n8 = (int)CHandler[this.k.i])) > 5) {
                if (this.k.d <= 6) {
                    this.k.g("Overriding card spacing of " + n2 + " to app standard of " + n8);
                }
                n2 = n8;
            }
        } else {
            n2 = (int)CHandler[this.k.i];
        }
        return n2;
    }

    private boolean AboutDialog(int n2, pH pH2) {
        boolean bl2 = false;
        if (this.k.i != 2) {
            if (this.k.d <= 3) {
                this.k.g("Not spider so no need to check for ace stack");
            }
        } else {
            Point2D.Double double_ = this.k.aY.AboutDialog[2].g;
            Point2D.Double double_2 = this.k.aY.AboutDialog[0].g;
            if (double_ != null) {
                double d2;
                double d3 = double_.yHandler - (double)n2 - double_2.yHandler;
                if (Math.abs(d2) < 15.0) {
                    n2 = (int)((double)this.c * 3.0 / 2.0);
                    if (pH2.b > n2) {
                        bl2 = true;
                    }
                    if (this.k.d <= 5) {
                        this.k.g("Start loc " + pH2.b + " maxfaced " + n2 + " ace test needed:" + bl2);
                    }
                } else if (this.k.d <= 3) {
                    this.k.f("Stack delta of " + d3 + " means ace check unnecessary");
                }
            }
        }
        return bl2;
    }

    private boolean AboutDialog(ArrayList object, pX pX2, pH pH2) {
        boolean bl2 = false;
        if (((ArrayList)object).size() == 1) {
            object = (s_0)((ArrayList)object).get(0);
            double d2 = (double)((s_0)object).c() - this.k.FPanel.AboutDialog.b() - this.k.aY.AboutDialog[0].g.yHandler;
            int cfr_ignored_0 = ((s_0)object).c;
            bl2 = this.AboutDialog((int)d2, pH2);
            if (this.k.d <= 5) {
                this.k.g("Needs Ace check? " + bl2 + ", cardTabLoc " + d2);
            }
        } else if (this.k.d <= 3) {
            this.k.f("Foundcards size " + ((ArrayList)object).size() + " so no need to check for ace stack");
        }
        return bl2;
    }

    private boolean AboutDialog(int n2, int n3, ArrayList arrayList, pX pX2, pH pH2) {
        n2 = 0;
        if (arrayList.size() == 0) {
            pY pY2 = this.k.bu.b;
            n3 = n3 + pY2.AboutDialog.m - this.k.bu.c.uPanel[pY2.AboutDialog.AboutDialog];
            boolean bl2 = this.AboutDialog(n3, pH2);
            n2 = bl2 ? 1 : 0;
            if (bl2) {
                if (this.k.d <= 5) {
                    this.k.g("First card indicates ace check is NOT UNnecessary, cardy " + n3);
                }
            } else if (this.k.d <= 3) {
                this.k.f("First card location indicates ace check is unnecessary");
            }
        }
        return n2 == 0;
    }

    private boolean AboutDialog(int[][] nArray, int n2, int n3) {
        int n4 = 0;
        while (n4 < this.c / 3) {
            if (n3 <= 2) {
                this.k.g("Testing icon row " + n4 + " of " + this.c / 3);
            }
            int n5 = n2;
            if (this.AboutDialog(nArray[n4], n5, n5 / 6, n3)) {
                if (n3 <= 5) {
                    this.k.g("Found horizontal line in icon at " + n4 + " test half way");
                }
                if (this.AboutDialog(nArray[n4], n2 / 2, n2 / 6, n3)) {
                    if (n3 <= 5) {
                        this.k.g("Rectangle is on left of icon = normal deal");
                    }
                    return true;
                }
                if (n3 <= 5) {
                    this.k.g("Rectangle is NOT on left of icon = reverse deal");
                }
                this.m = true;
                return true;
            }
            ++n4;
        }
        return false;
    }

    private boolean AboutDialog(int[] nArray, int n2, int n3, int n4) {
        int n5 = 0;
        int n6 = 0;
        while (n6 < n2) {
            if (nArray[n6] == 0) {
                ++n5;
                if (n4 <= 2) {
                    this.k.g("Offset " + n6 + " white count " + n5);
                }
                if (n5 > n3) {
                    return true;
                }
            } else {
                n5 = 0;
            }
            ++n6;
        }
        return false;
    }

    private void AboutDialog(CardStack object, Color color) {
        Card[] quArray = ((CardStack)object).f;
        int n2 = ((CardStack)object).f.length;
        int n3 = 0;
        while (n3 < n2) {
            object = quArray[n3];
            if (((Card)object).h()) {
                object = ((Card)object).m();
                ((Rectangle)object).xHandler = (int)((double)((Rectangle)object).xHandler - this.AboutDialog.AboutDialog());
                ((Rectangle)object).yHandler = (int)((double)((Rectangle)object).yHandler - this.AboutDialog.b());
                this.AboutDialog((Rectangle)object, color, 1);
            }
            ++n3;
        }
    }

    private void AboutDialog(Rectangle rectangle, Color color) {
        if (this.I == null) {
            return;
        }
        Graphics2D graphics2D = (Graphics2D)this.I;
        graphics2D.setStroke(new BasicStroke(2.0f));
        this.I.setColor(color);
        this.I.drawRect(this.h(rectangle.xHandler), this.i(rectangle.yHandler), rectangle.width, rectangle.height);
    }

    private void AboutDialog(Rectangle rectangle, Color color, int n2) {
        if (this.I == null) {
            return;
        }
        Graphics2D graphics2D = (Graphics2D)this.I;
        graphics2D.setStroke(new BasicStroke(1.0f));
        this.I.setColor(color);
        this.I.drawRect(this.AboutDialog((double)rectangle.xHandler), this.b((double)rectangle.yHandler), rectangle.width, rectangle.height);
    }

    private int AboutDialog(double d2) {
        return (int)(d2 + this.AboutDialog.AboutDialog() - this.rPanel.AboutDialog());
    }

    private int b(double d2) {
        return (int)(d2 + this.AboutDialog.b() - this.rPanel.b() - this.t.AboutDialog());
    }

    private int h(int n2) {
        return (int)((double)n2 - this.rPanel.AboutDialog());
    }

    private int i(int n2) {
        return (int)((double)n2 - this.rPanel.b() - this.t.AboutDialog());
    }

    final void AboutDialog(String object, boolean bl2) {
        if (this.k.aW) {
            new k_0Panel(this.k, this.q, (String)object);
            if (this.k.d <= 3) {
                this.k.g("Paused for dialog");
            }
            this.k.aO = true;
            this.k.k("ShowMSBoard");
            this.k.AboutDialog(500L);
            if (bl2) {
                String string = object;
                object = this.k;
                ((SolitaireGameEngine)object).AboutDialog(string, false);
            }
        }
    }

    final Rectangle i() {
        Rectangle rectangle = this.rPanel.e();
        this.rPanel.e().height = (int)this.s.AboutDialog() - 3;
        rectangle.yHandler = (int)((double)rectangle.yHandler + this.t.AboutDialog());
        return rectangle;
    }

    final int[][] AboutDialog(Rectangle object) {
        object = this.k.AboutDialog((Rectangle)object, null);
        this.k.AboutDialog((ErrorDialog)object, "GetButton");
        ((ErrorDialog)object).g();
        return ((ErrorDialog)object).AboutDialog();
    }

    final Point j() {
        Object object = this.i();
        int[][] nArray = this.AboutDialog((Rectangle)object);
        this.k.AboutDialog(2, nArray, 0, 0, ((Rectangle)object).width, ((Rectangle)object).height, "Menu Bar");
        Rectangle rectangle = object;
        object = this;
        int n2 = (int)((double)rectangle.width - 24.0 * ((GameStats)object).wHandler);
        while (n2 >= rectangle.width / 2) {
            int n3;
            int n4 = 999;
            int n5 = 0;
            int n6 = 0;
            while ((double)n6 < (double)rectangle.height - 15.0 * ((GameStats)object).wHandler) {
                n3 = ((GameStats)object).AboutDialog(nArray, ((GameStats)object).af, n2, n6, "left");
                if (n3 < n4) {
                    n4 = n3;
                    n5 = n6;
                }
                ++n6;
            }
            if (n4 <= 3) {
                if (((g)object).k.d <= 5) {
                    ((g)object).k.g("Possible left side of cross at " + n2 + "," + n5 + " miss " + n4);
                }
                ((g)object).k.AboutDialog(3, nArray, n2, n5, 22, 12, "BestCrossStart");
                n6 = n5 - 3;
                if (n6 < 0) {
                    n6 = 0;
                    n5 = 3;
                }
                n3 = n2 + 6;
                while (n3 < n2 + 12) {
                    n4 = n6;
                    while (n4 < n5 + 4) {
                        int n7 = ((GameStats)object).AboutDialog(nArray, ((GameStats)object).ag, n3, n4, "right");
                        if (n7 <= 3) {
                            if (((g)object).k.d <= 5) {
                                ((g)object).k.g("Right side of cross at " + n3 + "," + n4 + " miss " + n7);
                            }
                            ((g)object).k.AboutDialog(3, nArray, n2, n5, 22, 12, "BestCross");
                            return new Point((int)((double)(rectangle.xHandler + n2) + 6.0 * ((GameStats)object).wHandler), (int)((double)(rectangle.yHandler + n5) + 5.0 * ((GameStats)object).wHandler));
                        }
                        ++n4;
                    }
                    ++n3;
                }
            }
            --n2;
        }
        if (((g)object).k.d <= 5) {
            ((g)object).k.g("Did not locate an advert close button in top right corner");
        }
        return null;
    }

    final int c(boolean bl2) {
        int n2 = 0;
        int n3 = (int)(this.k.c(30.0) * this.k.A);
        int n4 = (int)(this.k.c(10.0) * this.k.A);
        int n5 = n3 * n4;
        int n6 = n5 / 20;
        if (this.k.d <= 4) {
            this.k.g("Testing undo button for " + n6 + " white/gray");
        }
        Object object = new Rectangle(this.uPanel.AboutDialog(), this.uPanel.b(), n3, n4);
        object = this.k.AboutDialog((Rectangle)object, "undoCheck");
        this.k.AboutDialog((ErrorDialog)object, "undoCheck");
        n4 = 0;
        int n7 = 0;
        int[][] nArray = ((ErrorDialog)object).AboutDialog();
        int n8 = 0;
        while (n8 < nArray[0].length) {
            int n9 = 0;
            while (n9 < nArray.length) {
                if (this.k.aB.d(nArray[n9][n8])) {
                    ++n4;
                } else {
                    t_0 t_02;
                    t_0 t_03 = this.k.aB;
                    if ((double)t_02.b < 0.08 && (double)t_03.c > 0.5) {
                        ++n7;
                    }
                }
                ++n9;
            }
            ++n8;
        }
        if (n4 + n7 < n6 || n4 + n7 > n5 - 10) {
            if (bl2) {
                this.k.g("***ERROR Found " + n4 + " white and " + n7 + " gray pixels in area of " + n5 + " at " + this.uPanel.AboutDialog() + "," + this.uPanel.b() + " against test count of " + n6 + " , so Undo not found, try again after 5s");
                ((ErrorDialog)object).AboutDialog("UndoError", true);
                ErrorDialog al_02 = this.k.AboutDialog(this.k.CHandler, null);
                al_02.AboutDialog("UndoScreen", true);
                this.k.AboutDialog(5000L, "Try second undo");
                n2 = this.c(false);
                if (n2 == 0) {
                    object = "Could not find the Undo button<br>Did you hide the bottom button bar?";
                    SolitaireGameEngine qo_02 = this.k;
                    qo_02.AboutDialog((String)object, false);
                }
            } else if (this.k.d <= 5) {
                this.k.g("Did not find " + n6 + " white/gray pixels so Undo is not present");
            }
        } else if (n4 > n6 / 2) {
            if (this.k.d <= 5) {
                this.k.g("Found " + n4 + " white and " + n7 + " gray pixels in area of " + n5 + " at " + this.uPanel.AboutDialog() + "," + this.uPanel.b() + " against test count of " + n6 + ", so Undo enabled");
            }
            n2 = 2;
        } else {
            if (this.k.d <= 5) {
                this.k.g("Found " + n4 + " white and " + n7 + " gray pixels in area of " + n5 + " at " + this.uPanel.AboutDialog() + "," + this.uPanel.b() + " against test count of " + n6 + ", so Undo disabled");
            }
            n2 = 1;
        }
        return n2;
    }

    final void d(boolean n2) {
        if (this.c(true) == 2) {
            if (n2 != 0) {
                n2 = JOptionPane.showConfirmDialog(null, "This game has already been started.\nCan I undo to the start?", "Game In Progress", 0, 3);
                this.k.AboutDialog(3000L, "Undo dialog dismissed");
                this.k.c();
                if (n2 != 0) {
                    this.k.c(14);
                    this.k.k("UndoToStart");
                }
            }
            n2 = 0;
            while (this.c(true) != 1 && n2++ < 50) {
                int n3 = 0;
                while (n3 < 10) {
                    this.k();
                    this.k.AboutDialog(50L, "undo to start (auto)");
                    this.k.k("MSBoardUndo");
                    ++n3;
                }
            }
            if (this.k.bt) {
                this.k.AboutDialog(17, false);
            }
        }
    }

    final void k() {
        int n2 = this.k.aC.GetForegroundWindow();
        if (n2 != this.k.DHandler) {
            if (this.k.bt) {
                this.k.AboutDialog(17, false);
            }
            if (this.k.d <= 3) {
                this.k.g("Using click to undo");
            }
            this.k.AboutDialog(this.uPanel);
            return;
        }
        if (!this.k.bt) {
            this.k.AboutDialog(17, true);
        }
        if (this.k.d <= 5) {
            this.k.g("Using CTRL-Z to undo");
        }
        this.k.b(90, 100);
        if (this.k.d <= 5) {
            this.k.g("After ctrl z");
        }
    }

    final void l() {
        if (this.k.ao == null) {
            return;
        }
        if (this.k.d <= 5) {
            this.k.g("Into handleUndo");
        }
        if (this.k.am) {
            if (this.k.d <= 5) {
                this.k.g("In solve so ignore undo");
                return;
            }
        } else {
            int n2 = this.k.ao.m();
            if (this.k.d <= 5) {
                if (this.k.d <= 5) {
                    this.k.g(String.format("Undoing move %s", GameMove.AboutDialog(n2)));
                }
                this.k.ao.AboutDialog(5, this.k.be, "User moves(after undo)");
            }
            this.k.aq.AboutDialog(7);
            this.k.c(10);
        }
    }

    final boolean b(int n2) {
        return ErrorDialog.AboutDialog(this.k, this.AboutDialog.e(), null, 200, n2, true, "tableStable") != null;
    }

    private ErrorDialog b(ErrorDialog al_02) {
        int n2;
        int n3 = n2 = (int)(this.k.c(10.0) * this.k.A);
        Rectangle rectangle = new Rectangle(this.KHandler.AboutDialog() - n2, this.KHandler.b() - n2, n3, n3);
        al_02 = al_02 != null ? ErrorDialog.AboutDialog(this.k, rectangle, al_02, 50, 1000, true, "StabilizeMenu") : new ErrorDialog(this.k, rectangle, "menuColor");
        return al_02;
    }

    private static int c(ErrorDialog object) {
        int[][] nArray = ((ErrorDialog)object).AboutDialog();
        object = nArray;
        int n2 = u_0.AboutDialog(nArray);
        return n2;
    }

    final void m() {
        if (this.k.m == 4) {
            return;
        }
        this.k.AboutDialog(true);
        if (!this.NHandler && this.k.m != 4) {
            long l2 = System.currentTimeMillis();
            if (l2 - this.OHandler > 500L) {
                this.OHandler = l2;
                if (this.n()) {
                    this.k.aq.AboutDialog(14);
                }
            }
        } else if (this.k.d <= 2) {
            this.k.g("Asked to skip menu presence test");
        }
        if (this.k.aO) {
            this.k.k("TestMenuNoRead");
            this.k.aD.AboutDialog();
        }
    }

    final boolean n() {
        if (this.k.d <= 2) {
            this.k.g("Testing if menu pulled down");
        }
        int n2 = (int)(this.k.c(20.0) * this.k.A);
        int n3 = (int)(this.k.d(250.0) * this.k.A);
        int n4 = (int)(this.k.d(6.0) * this.k.A);
        Rectangle rectangle = new Rectangle(this.k.aD.b() + n2, this.k.aD.c(), 20, this.k.aD.d());
        ErrorDialog al_02 = this.k.aD.AboutDialog(rectangle, "MenuTest");
        int n5 = n3;
        int n6 = al_02.d();
        int[][] nArray = al_02.AboutDialog();
        int n7 = n5;
        while (n7 < n6) {
            if ((nArray[n7][0] & 0xFFFFFF) != 0) {
                if (this.k.d > 3) break;
                this.k.g(String.format("Got %08x at %d into menu black test", nArray[n7][0], n7 - n5));
                break;
            }
            ++n7;
        }
        if (n7 == n6) {
            if (this.k.d <= 3) {
                this.k.g("Did not find any non-black line so not menu");
            }
            return false;
        }
        n5 = -1;
        boolean bl2 = false;
        while (n7 < n6) {
            if ((nArray[n7][0] & 0xFFFFFF) == 0) break;
            if (!bl2 && this.k.aB.f(nArray[n7][0])) {
                if (this.k.d <= 3) {
                    this.k.g(String.format("Found pixel at %d of %08x which is valid menu white", n7, nArray[n7][0]));
                }
                bl2 = true;
                n5 = n7;
            }
            ++n7;
        }
        if (!bl2) {
            if (this.k.d <= 3) {
                this.k.g("Did not find white so not menu");
            }
            return false;
        }
        if (n7 == n6) {
            if (this.k.d <= 3) {
                this.k.g("Did not find end of white separator so not menu");
            }
            return false;
        }
        if (n7 - n5 > n4) {
            if (this.k.d <= 3) {
                this.k.g("White line width " + (n7 - n5) + " so not menu");
            }
            return false;
        }
        Point point = new Point(0, n5);
        Point point2 = this.AboutDialog(nArray, point, 2);
        if (point2.xHandler - point.xHandler < 19 || Math.abs(point2.yHandler - point.yHandler) > 3) {
            if (this.k.d <= 3) {
                this.k.g("Almost found menu but xdelta " + (point2.xHandler - point.xHandler) + " and ydelta " + (point2.yHandler - point.yHandler));
            }
            return false;
        }
        int n8 = n7;
        while (n7 < n6) {
            if ((nArray[n7][0] & 0xFFFFFF) != 0) break;
            ++n7;
        }
        if (n7 - n8 < n3 / 3) {
            if (this.k.d <= 3) {
                this.k.g("Too little black below white line, so not menu");
            }
            return false;
        }
        int n9 = n7;
        this.k.g("Black screen with white line at " + n9 + " width " + (n9 - n5) + " so menu pause");
        return true;
    }

    private boolean z() {
        Object object;
        Object object2 = object = new Rectangle((int)this.AboutDialog.AboutDialog(), (int)this.AboutDialog.b(), 10, 100);
        object = this;
        object2 = ((g)object).k.aD.AboutDialog((Rectangle)object2, "testDialog");
        int n2 = u_0.AboutDialog(((ErrorDialog)object2).AboutDialog());
        if (((g)object).k.d <= 2) {
            ((g)object).k.g(String.format("Average top left dialog color is %08x", n2));
        }
        if (((g)object).k.aB.g(n2)) {
            int n3 = (int)(((g)object).k.FPanel.b * 6.0);
            int n4 = ((g)object).k.FPanel.c;
            object2 = new Rectangle((int)(((g)object).AboutDialog.AboutDialog() + ((g)object).AboutDialog.c() / 2.0 - (double)(n3 / 2)), (int)(((g)object).AboutDialog.b() + ((g)object).AboutDialog.d() / 2.0 - (double)(n4 / 2)), n3, n4);
            object2 = ((g)object).k.aD.AboutDialog((Rectangle)object2, "testDialog2");
            object2 = ((ErrorDialog)object2).AboutDialog();
            int n5 = 0;
            int n6 = 0;
            while (n6 < n3) {
                int n7 = 0;
                while (n7 < n4) {
                    if (((g)object).k.aB.c((int)object2[n7][n6])) {
                        ++n5;
                    }
                    ++n7;
                }
                ++n6;
            }
            if (((g)object).k.d <= 2) {
                ((g)object).k.g(String.format("Mid-dialog blue count is %d", n5));
            }
            if (n5 > n3 * n4 / 2) {
                ((g)object).k.g("Got NO MORE MOVES/LEVEL UP dialog in testDialog");
                ((g)object).k.g(String.format("NO MORE MOVES/LEVEL UP DIALOG, corner color %08x blue count %d of %d", n2, n5, n3 * n4));
                return true;
            }
            if (((g)object).k.d <= 5) {
                ((g)object).k.g(String.format("Dark screen (av %08x) maybe no moves, but blue count only %d", n2, n5));
            }
        }
        return false;
    }

    final boolean o() {
        if (this.k.m == 4) {
            return false;
        }
        this.m();
        if (this.z()) {
            this.v = true;
            return true;
        }
        return false;
    }

    final void p() {
        double d2;
        double d3;
        Rectangle rectangle = this.d(null);
        if (rectangle == null) {
            if (this.ae != null) {
                this.ae.AboutDialog("findDialog", true);
                this.ae = null;
            }
            this.k.g("Asked to dismiss noMoreMoves but did not find it, retry");
            this.k.AboutDialog(1000L, "Wait nomore");
            this.k.b(2, "dismissNoMore");
            rectangle = this.d(null);
            this.k.n();
            if (rectangle == null && this.ae != null) {
                this.ae.AboutDialog("findDialog2", true);
                this.ae = null;
            }
        }
        if (rectangle == null) {
            String string = "Asked to dismiss noMoreMoves but did not find it";
            SolitaireGameEngine qo_02 = this.k;
            qo_02.AboutDialog(string, false);
            return;
        }
        if (rectangle.height < 0) {
            String string = "Failure scanning for No Moves dialog";
            SolitaireGameEngine qo_03 = this.k;
            qo_03.AboutDialog(string, false);
        }
        if (this.AboutDialog(d3 = ((double)rectangle.xHandler + (double)rectangle.width * 0.375) / this.k.FPanel.AboutDialog.c(), d2 = ((double)rectangle.yHandler + (double)rectangle.height * 0.4) / this.k.FPanel.AboutDialog.d(), 100, -1) != null) {
            if (this.k.d <= 5) {
                this.k.g("Waiting extra second for nomore");
            }
            this.k.AboutDialog(1000L, "Extra wait for nomore");
        }
        int n2 = (int)(this.k.FPanel.AboutDialog.AboutDialog() + (double)rectangle.xHandler + (double)rectangle.width * 0.72);
        int n3 = (int)(this.k.FPanel.AboutDialog.b() + (double)rectangle.yHandler + (double)rectangle.height * 0.88);
        this.k.c((double)n2, (double)n3);
        this.k.AboutDialog(1000L, "wait for dialog to go away (auto dismissNoMore)");
        if (this.k.d <= 5) {
            this.k.g("After wait for dialog to disappear");
        }
        this.k.aD.AboutDialog();
        this.v = false;
        this.o();
        if (this.v) {
            this.k.c((double)n2, (double)n3);
            this.k.aD.AboutDialog();
            this.v = false;
            this.o();
        }
        if (this.v) {
            this.k.g("Dialog dismiss failure");
            this.k.wHandler = true;
            this.d(null);
            this.k.wHandler = false;
            String string = "Detected AboutDialog dialog, location " + rectangle.xHandler + "," + rectangle.yHandler + " dimensions " + rectangle.width + "," + rectangle.height + " but clicking at " + n2 + "," + n3 + " (" + (double)n2 / this.k.A + "," + (double)n3 / this.k.A + ") failed to dismiss it";
            SolitaireGameEngine qo_04 = this.k;
            qo_04.AboutDialog(string, false);
        }
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    final void AboutDialog(boolean var1_1, boolean var2_3) {
        var3_5 = false;
        var4_6 = System.currentTimeMillis() + 1000000L;
        this.k.aq.c(9, "Waiting for the next deal");
        this.k.AboutDialog((long)(var2_3 != false || this.k.ah != false ? 2500 : 1500), "Before SkipDialogsAnd Ads");
        var6_7 = 0;
        while (var6_7 < 300) {
            if (!var2_3) {
                this.k.k("SkipDialogsAndAds");
            }
            this.k.AboutDialog(500L, "skipdialogsandads");
            if (this.b(600)) {
                if (this.k.d <= 6) {
                    this.k.g("Table is stable, is menu present?");
                }
                var8_9 = this.k.ah;
                var7_8.NHandler = true;
                var9_13 = false;
                var7_8.k.AboutDialog(true);
                if (var7_8.k.d <= 5) {
                    var7_8.k.g("Testing for menu (from cmd line? " + var8_9 + ") ...");
                }
                var10_17 = var7_8.b((ErrorDialog)null);
                var11_19 = GameStats.c(var10_17);
                if (var7_8.k.d <= 5) {
                    var7_8.k.g(String.format("Non-highlighted menu RGB %08x", new Object[]{var11_19}));
                }
                var7_8.k.b((double)var7_8.KHandler.AboutDialog(), (double)var7_8.KHandler.b());
                var7_8.k.AboutDialog(5L);
                var7_8.k.b((double)(var7_8.KHandler.AboutDialog() + 1), (double)(var7_8.KHandler.b() + 1));
                var10_17 = var7_8.b(var10_17);
                var12_20 = GameStats.c(var10_17);
                var7_8.k.aB.AboutDialog(var12_20);
                if (var7_8.k.d <= 5) {
                    var7_8.k.g(String.format("Highlighted menu RGB %08x lgt %f", new Object[]{var12_20, Float.valueOf(var7_8.k.aB.c)}));
                }
                var7_8.k.b((double)var7_8.LHandler.AboutDialog(), (double)var7_8.LHandler.b());
                if ((double)var7_8.k.aB.c < 0.25) {
                    v0 = false;
                } else {
                    if (var12_20 != var11_19) {
                        var10_17 = var7_8.b(var10_17);
                        var10_18 = GameStats.c(var10_17);
                        if (var7_8.k.d <= 5) {
                            var7_8.k.g(String.format("Second non-highlighted menu RGB %08x", new Object[]{var10_18}));
                        }
                        if (var10_18 == var11_19) {
                            if (var10_18 != var7_8.PPanel && !var7_8.k.aT && !var8_9) {
                                if (var7_8.k.d <= 5) {
                                    var7_8.k.g(String.format("Menu color changed, previous %08x now %08x", new Object[]{var7_8.PPanel, var10_18}));
                                }
                                var7_8.PPanel = var10_18;
                                var7_8.k.c(14);
                                if (!var8_9) {
                                    var7_8.k.k("ChangedMenuColor");
                                }
                            } else {
                                if (var7_8.k.d <= 5) {
                                    var7_8.k.g("Solitaire menu is present");
                                }
                                var9_13 = true;
                            }
                        }
                    }
                    var7_8.NHandler = false;
                    v0 = var9_13;
                }
                if (v0) {
                    if (this.k.d <= 6) {
                        this.k.g("Menu is present, is AboutDialog board showing?");
                    }
                    if (this.k.ah || this.b(var2_3 == false)) {
                        if (this.k.d > 6) break;
                        this.k.g("API or board seems to be present, break out");
                        break;
                    }
                }
            } else {
                if (this.k.d <= 6) {
                    this.k.g("Table is not stable, is there an advert to close?");
                }
                var4_6 = System.currentTimeMillis() + 4000L;
            }
            if (!var1_1) break;
            if (this.k.d <= 2) {
                var8_9 = 2 != 0;
                var7_8 = this.k;
                if (var7_8.d <= 2) {
                    var9_14 = var7_8.FPanel.i();
                    var7_8.AboutDialog(2, var9_14, "Menu Bar");
                }
            }
            if ((var7_8 = this.j()) != null) {
                if (this.k.d <= 6) {
                    this.k.g("Got close button at " + var7_8.xHandler + "," + var7_8.yHandler);
                }
                var8_10 = this.i();
                var9_15 = this.AboutDialog(var8_10);
                this.k.AboutDialog(5, var9_15, 0, 0, var8_10.width, var8_10.height, "Menu Bar");
                this.k.c((double)(var7_8.xHandler + 5), (double)(var7_8.yHandler + 5));
                this.k.AboutDialog(1000L, "after click on close (auto)");
                if (this.k.d <= 6) {
                    this.k.g("Clicked on close!");
                }
            } else {
            // 2 sources

            {
                if (this.AboutDialog((ErrorDialog)null)) {
                    if (this.k.d <= 5) {
                        this.k.g("Dismiss timeout updated to +4 seconds");
                    }
                    var4_6 = System.currentTimeMillis() + 4000L;
                }
                if (!var1_1 && System.currentTimeMillis() > var4_6) {
                    if (this.k.d > 6) break;
                    this.k.g("More than 4 seconds from last dismiss so return");
                    break;
                }
                if (this.k.d <= 5) {
                    this.k.g("Continuing because ad testing:" + var1_1 + " and timeout remaining:" + (var4_6 - System.currentTimeMillis()));
                }
                if (var6_7 == 280) {
                    if (this.k.d <= 5) {
                        this.k.g("Nearing end of advert loop without finding solitaire...");
                    }
                    if (!var3_5) {
                        var3_5 = true;
                        this.k.b((double)this.KHandler.AboutDialog(), (double)this.KHandler.b());
                        this.k.AboutDialog(2000L);
                        var7_8 = new Point();
                        this.k.b((Point)var7_8);
                        this.k.g("Mouse is at " + String.valueOf(var7_8));
                        var8_11 = "UnexpectedStatic";
                        var7_8 = this.k;
                        var7_8.b().AboutDialog((String)var8_11, false);
                        this.k.wHandler = true;
                        var8_11 = this.b((ErrorDialog)null);
                        var9_16 = GameStats.c((ErrorDialog)var8_11);
                        this.k.aB.AboutDialog(var9_16);
                        this.k.g(String.format("Highlighted menu RGB %08x lgt %f", new Object[]{var9_16, Float.valueOf(this.k.aB.c)}));
                    }
                    this.k.AboutDialog("Breakpoint at nearing end of advert loop without finding solitaire...");
                    this.k.AboutDialog(5000L, "After advert break");
                }
            }
            ++var6_7;
        }
        if (var6_7 == 300) {
            var8_12 = "NotSolitaire";
            var7_8 = this.k;
            if (var7_8.wHandler) {
                v1 = var7_8;
                v1.AboutDialog(v1.b(), var8_12);
            }
            var2_4 = "*** Wait for solitaire to appear has timed out";
            var1_2 = this.k;
            var1_2.AboutDialog(var2_4, false);
        }
    }

    final boolean AboutDialog(ErrorDialog al_02) {
        boolean bl2 = false;
        Cloneable cloneable = this.d(al_02);
        if (cloneable == null) {
            if (this.k.d <= 5 && this.ae != null) {
                this.ae.AboutDialog("skipDialog", true);
                this.ae = null;
            }
        } else {
            if (this.k.d <= 6) {
                this.k.g("There might be AboutDialog dialog, look for orange button");
            }
            int n2 = cloneable.yHandler + cloneable.height;
            if (cloneable.height > 0) {
                double d2 = (double)cloneable.width / (double)cloneable.height;
                if (this.k.d <= 5) {
                    this.k.g("Dialog ratio is " + d2);
                }
            } else {
                n2 = -cloneable.height;
            }
            double d3 = ((double)cloneable.xHandler + (double)cloneable.width * 0.43) / this.AboutDialog.c();
            if (this.k.d <= 5) {
                this.k.g("Button scan factor is " + d3);
            }
            if ((cloneable = this.AboutDialog(d3, 0.55, 1000, n2)) != null && ((Point)cloneable).xHandler > 0) {
                if (this.k.d <= 6) {
                    this.k.g("Found orange button at centre*0.45, dismiss dialog");
                }
                if (al_02 == null) {
                    this.AboutDialog((Point)cloneable);
                }
                bl2 = true;
            } else if (this.k.d <= 5) {
                this.k.g("No orange button found, keep trying");
            }
        }
        return bl2;
    }

    final void q() {
        this.k.g("***Asked to skip/retry this game");
        this.k.AboutDialog(this.MHandler);
        this.k.AboutDialog(1000L, "after click on new game/retry button (auto)");
        int n2 = 0;
        while (n2 < 10) {
            if (this.AboutDialog(0.45, 0.5)) {
                return;
            }
            ++n2;
        }
        String string = "Did not find the OK button on the Warning dialog";
        SolitaireGameEngine qo_02 = this.k;
        qo_02.AboutDialog(string, false);
    }

    private Point AboutDialog(double d2, double d3, int n2, int n3) {
        Point point = null;
        int n4 = 0;
        boolean bl2 = false;
        Rectangle rectangle = this.AboutDialog.e();
        int n5 = (int)(this.AboutDialog.c() * d2);
        rectangle.yHandler = (int)(this.AboutDialog.b() + this.AboutDialog.d() * d3);
        if (n3 > 0) {
            rectangle.height = n3 + (int)this.AboutDialog.b() - rectangle.yHandler;
        } else {
            rectangle.height = (int)(this.AboutDialog.d() * (1.0 - d3) + this.s.AboutDialog());
            if (this.k.d <= 5) {
                this.k.g("Height adjusted to full extent of tabrect");
            }
        }
        if (this.k.d <= 5) {
            this.k.g("FindOrange invoked with xpos " + d2 + " and ypos " + d3 + " giving " + n5 + "," + this.AboutDialog.d() * d3 + " height " + rectangle.height);
        }
        ErrorDialog al_02 = this.k.AboutDialog(rectangle, "FindOrange");
        Object[] objectArray = al_02.AboutDialog(n5, 0, 1, rectangle.height, null, 0, 1);
        V[] vArray = this.k.aB.AboutDialog((int[])objectArray);
        this.k.AboutDialog((long)n2, "FindOrange");
        al_02 = this.k.AboutDialog(rectangle, "FindOrange2");
        objectArray = al_02.AboutDialog(n5, 0, 1, rectangle.height, null, 0, 1);
        objectArray = this.k.aB.AboutDialog((int[])objectArray);
        V[] vArray2 = new V[]{new V(0, 0, 0.0f, 0.0f, 1.0f, 0)};
        n2 = 0;
        while (n2 < vArray.length - 2) {
            vArray2 = this.k.aB.AboutDialog(vArray, n2, (V[])objectArray, 100, 2, vArray2);
            ++n2;
        }
        if (vArray2.length > 2) {
            if (this.k.d <= 4) {
                this.k.g("Found possible dialog starting at row " + vArray2[0].b + " length " + vArray2.length);
            }
            n2 = this.k.e(12.0);
            int n6 = this.k.e(28.0);
            int n7 = this.k.e(140.0);
            n3 = 0;
            while (n3 < vArray2.length - 2) {
                int n8;
                int n9;
                if (this.k.d <= 4) {
                    this.k.g("Testing colors " + vArray2[n3].b() + "," + vArray2[n3 + 1].b() + "," + vArray2[n3 + 2].b());
                }
                if (this.k.wHandler) {
                    n9 = al_02.c();
                    n8 = 0;
                    while (n8 < n9) {
                        al_02.AboutDialog(n8, vArray2[n3].b, 0xFF0000);
                        al_02.AboutDialog(n8, vArray2[n3 + 1].b, 0xFF0000);
                        if (vArray2[n3 + 2].AboutDialog != 0) {
                            al_02.AboutDialog(n8, vArray2[n3 + 2].b, 0xFF0000);
                        }
                        ++n8;
                    }
                }
                if (vArray2[n3].AboutDialog == 9) {
                    n9 = n3 + 1;
                    while (n9 < vArray2.length - 2) {
                        if ((vArray2[n9].AboutDialog != 5 || this.k.aB.h(vArray2[n9].AboutDialog())) && vArray2[n9].AboutDialog != 1) break;
                        ++n9;
                    }
                    if (n9 > n3 + 1 && (vArray2[n9].AboutDialog == 9 || vArray2[n9].AboutDialog == 0)) {
                        n8 = vArray2[n3 + 1].b - vArray2[n3].b;
                        int n10 = vArray2[n9].b - vArray2[n3 + 1].b;
                        n9 = vArray2[n9].AboutDialog == 0 ? 100 : vArray2[n9 + 1].b - vArray2[n9].b;
                        if (this.k.d <= 4) {
                            this.k.g("Color depths blue/orange(button)/blue " + n8 + "," + n10 + "," + n9 + " button min/button max/min blue band " + n6 + "/" + n7 + "/" + n2);
                        }
                        if (n10 > n6 && n10 < n7 && n8 > n2 && n9 > n2) {
                            if (this.k.d <= 5) {
                                this.k.g("Button height " + n10 + " between " + n6 + " and " + n7 + " so found orange button at " + vArray2[n3 + 1].b);
                            }
                            n4 = vArray2[n3 + 1].b + n10 / 2;
                            bl2 = true;
                        }
                    }
                }
                ++n3;
            }
            this.k.AboutDialog(al_02, "TryDialog");
        }
        if (bl2) {
            if (this.k.d <= 5) {
                this.k.g("Found orange button centre at depth " + n4);
            }
            point = new Point(rectangle.xHandler + n5, rectangle.yHandler + n4);
            this.k.AboutDialog(al_02, "foundorange");
        }
        return point;
    }

    private Rectangle d(ErrorDialog object) {
        if (object != null) {
            this.k.DHandler = 0;
            this.k.FPanel.e();
        }
        this.A = this.AboutDialog.e();
        this.A.height = (int)((double)this.A.height + this.s.AboutDialog());
        if (object != null) {
            if (((ErrorDialog)object).c() != this.A.width) {
                this.k.g("WARNING Image width " + ((ErrorDialog)object).c() + " does not match dialog width " + this.A.width);
                this.A.width = ((ErrorDialog)object).c();
            }
            if (((ErrorDialog)object).d() != this.A.height) {
                this.k.g("WARNING Image height " + ((ErrorDialog)object).d() + " does not match dialog height " + this.A.height);
                this.A.height = ((ErrorDialog)object).d();
            }
            this.ae = object;
        } else {
            if (this.k.d <= 3) {
                this.k.g("In findDialog, grab tabrect with modified height of " + this.A.height);
            }
            this.ae = this.k.AboutDialog(this.A, "FindDialog");
        }
        object = this.ae.AboutDialog();
        int n2 = 0;
        int n3 = this.A.height / 2;
        boolean bl2 = false;
        Object object2 = object[n3][10];
        if (this.k.aB.b((int)object2)) {
            bl2 = true;
        }
        n2 += 5;
        while (n2 < this.A.width / 2) {
            if (!this.k.aB.AboutDialog((int)object[n3][n2], bl2)) break;
            ++n2;
        }
        n2 -= 2;
        if (this.k.d <= 4) {
            this.k.g("Found supposed line edge at " + n2 + "," + n3 + " in rect " + this.A.width + "xHandler" + this.A.height);
        }
        int n4 = n2;
        pG pG2 = this.AboutDialog((int[][])object, n4, n4 + 4, n3, "left side", bl2);
        if (pG2 == null) {
            return null;
        }
        int n5 = n2 + 5;
        int n6 = pG2.b;
        int n7 = pG2.b;
        while (n5 < this.A.width - 5) {
            int n8 = 10;
            while (n8 > -10) {
                if (n6 + 10 >= this.A.height || n6 < pG2.AboutDialog) {
                    if (this.k.d <= 5) {
                        this.k.g("Wandered to top/bottom of area so no dialog present");
                    }
                    return null;
                }
                if (!this.k.aB.AboutDialog((int)object[n6 + n8][n5], bl2)) {
                    if ((n6 += n8) <= n7) break;
                    n7 = n6;
                    break;
                }
                --n8;
            }
            if (n8 == -10) {
                ++n5;
                if (this.k.d > 5) break;
                this.k.g("Hit end of scan across bottom at " + n5 + " max bottom " + n7);
                break;
            }
            ++n5;
        }
        if (n5 - n2 < 300) {
            if (this.k.d <= 5) {
                this.k.g("Width too small to be AboutDialog dialog:" + (n5 - n2));
            }
            return null;
        }
        if (n7 - pG2.AboutDialog < 200) {
            if (this.k.d <= 5) {
                this.k.g("Height too small to be AboutDialog dialog, bottom " + n7 + " top " + pG2.AboutDialog);
            }
            return null;
        }
        int n9 = n5;
        pG pG3 = this.AboutDialog((int[][])object, n9, n9 - 4, n3, "right side", bl2);
        if (pG3 == null) {
            return null;
        }
        int n10 = pG2.b - pG3.b;
        if (n10 > 10 || n10 < -10) {
            if (this.k.d <= 5) {
                this.k.g("Left and right sides uneven, bottom left " + pG2.b + " right " + pG3.b);
            }
            return null;
        }
        if (this.k.d <= 5) {
            this.k.g("Candidate dialog rect left " + n2 + " right " + n5 + " top " + pG2.AboutDialog + " bottom " + n7);
        }
        this.ae = null;
        Rectangle rectangle = new Rectangle(n2, pG2.AboutDialog, n5 - n2, n7 - pG2.AboutDialog);
        return rectangle;
    }

    private pG AboutDialog(int[][] nArray, int n2, int n3, int n4, String string, boolean bl2) {
        pG pG2 = new pG(this);
        new pG(this).AboutDialog = n4 - 30;
        pG2.b = n4 + 30;
        u_0 u_02 = new u_0();
        int n5 = pG2.b - pG2.AboutDialog;
        int n6 = pG2.AboutDialog;
        while (n6 < pG2.AboutDialog + n5) {
            u_02.AboutDialog(nArray[n6][n3]);
            ++n6;
        }
        u_02.b(n5);
        if (this.k.d <= 5) {
            this.k.g("Checking line color " + String.valueOf(u_02) + " from " + n3 + "," + pG2.AboutDialog + " down to " + pG2.b);
        }
        n6 = pG2.AboutDialog;
        while (n6 < pG2.AboutDialog + n5) {
            if (!this.AboutDialog(nArray[n6][n2], nArray[n6][n3], u_02, string, bl2)) {
                if (this.k.d <= 5) {
                    this.k.g(string + " check failed at yHandler offset " + n6);
                }
                return null;
            }
            ++n6;
        }
        while (pG2.AboutDialog > 0) {
            if (!this.AboutDialog(nArray[pG2.AboutDialog][n2], nArray[pG2.AboutDialog][n3], u_02, string, bl2)) break;
            --pG2.AboutDialog;
        }
        while (pG2.b < this.A.height) {
            if (!this.AboutDialog(nArray[pG2.b][n2], nArray[pG2.b][n3], u_02, string, bl2)) break;
            ++pG2.b;
        }
        if (this.k.d <= 5) {
            this.k.g(string + " at " + n2 + " top is now at " + pG2.AboutDialog + " bottom at " + pG2.b);
        }
        return pG2;
    }

    private boolean AboutDialog(int n2, int n3, u_0 u_02, String string, boolean bl2) {
        if (!this.k.aB.AboutDialog(n2, bl2)) {
            if (this.k.d <= 5) {
                u_0 u_03 = new u_0(n2);
                this.k.g("Pixel " + String.valueOf(u_03) + " darkness " + this.k.aB.c + " breaks " + string + " scan");
            }
            return false;
        }
        n2 = u_02.d(n3);
        if (n2 > 24) {
            if (this.k.d <= 5) {
                u_0 u_04 = new u_0(n3);
                this.k.g("Variance of " + n2 + " pixel " + String.valueOf(u_04) + " average " + String.valueOf(u_02) + " breaks " + string + " scan");
            }
            return false;
        }
        return true;
    }

    private Point AboutDialog(int[][] nArray, Point point, int n2) {
        int n3;
        int n4;
        Point point2 = new Point(point);
        int n5 = point2.yHandler;
        int n6 = point2.xHandler;
        while (this.k.aB.f(nArray[point2.yHandler][point2.xHandler])) {
            n5 = point2.yHandler;
            n6 = point2.xHandler++;
            point2.yHandler = point2.yHandler;
            if (point2.yHandler == 0 || point2.xHandler == 0 || point2.yHandler == nArray.length - 1 || point2.xHandler == nArray[0].length - 1) {
                if (this.k.d <= 5) {
                    this.k.g("Hit edge of test area at " + point2.xHandler + "," + point2.yHandler);
                }
                return point2;
            }
            n4 = t_0.d.d(nArray[point2.yHandler][point2.xHandler]);
            n3 = t_0.d.d(nArray[point2.yHandler + 1][point2.xHandler]);
            if (n3 < n4) {
                ++point2.yHandler;
                point2.xHandler = point2.xHandler;
                continue;
            }
            n3 = t_0.d.d(nArray[point2.yHandler - 1][point2.xHandler]);
            if (n3 >= n4) continue;
            --point2.yHandler;
            point2.xHandler = point2.xHandler;
        }
        point2.yHandler = n5;
        point2.xHandler = n6;
        if (this.k.d <= 5) {
            n4 = point2.yHandler;
            n3 = point2.xHandler - 1;
            if (n4 < 0) {
                n4 = 0;
            }
            if (n3 < 0) {
                n3 = 0;
            }
            this.k.g(String.format("Walk in direction %d from %d,%d got to %d,%d transition %08x to %08x", 2, point.xHandler, point.yHandler, point2.xHandler, point2.yHandler, nArray[n4][n3], nArray[point2.yHandler][point2.xHandler]));
        }
        return point2;
    }

    private boolean AboutDialog(double d2, double d3) {
        Point point;
        boolean bl2 = false;
        if (this.k.d <= 5) {
            this.k.g("Find orange button and dismiss dialog");
        }
        if ((point = this.AboutDialog(0.45, 0.5, 1000, -1)) != null) {
            this.k.AboutDialog(500L, "findAndDismiss");
            this.AboutDialog(point);
            this.k.AboutDialog(500L, "afterDismiss");
            bl2 = true;
        } else if (this.k.d <= 5) {
            this.k.g("Did not find orange button");
        }
        return bl2;
    }

    private void AboutDialog(Point point) {
        if (this.k.d <= 5) {
            this.k.g("Clicking on dialog button");
        }
        String string = this.k.aq.V;
        int n2 = this.k.aq.U;
        this.k.aq.c(9, "Dismissing dialog");
        this.k.AboutDialog(300L, "Before dialog click");
        this.k.c(point);
        this.k.AboutDialog(300L, "after click dialog button (auto dismissdialog)");
        this.v = false;
        this.k.aq.c(n2, string);
    }

    private int AboutDialog(int[][] nArray, int[][][] nArray2, int n2, int n3, String string) {
        int n4 = 999;
        int n5 = 0;
        while (n5 < nArray2.length) {
            int n6 = this.AboutDialog(nArray, nArray2[n5], n2, n3, false);
            if (this.k.d <= 1) {
                this.k.g("At " + n2 + "," + n3 + " crossstart " + n5 + " misses " + n6);
            }
            if (n6 < n4 && (n4 = n6) < 6) {
                if (this.k.d <= 4) {
                    this.k.g("Best " + string + " cross miss now " + n4 + " for " + n5 + " at " + n2 + "," + n3);
                }
                this.k.AboutDialog(4, nArray, n2, n3, 8, 10, "BestCrossMiss");
                if (this.k.d <= 3) {
                    this.AboutDialog(nArray, nArray2[n5], n2, n3, true);
                }
            }
            ++n5;
        }
        return n4;
    }

    private int AboutDialog(int[][] nArray, int[][] nArray2, int n2, int n3, boolean bl2) {
        int n4 = 0;
        int n5 = 0;
        while (n5 < nArray2[0].length) {
            int n6 = 0;
            while (n6 < nArray2.length) {
                if (nArray2[n6][n5] != 2 && nArray[n6 + n3][n2 + n5] != nArray2[n6][n5]) {
                    if (bl2 && this.k.d <= 3) {
                        this.k.g("Miss at " + n5 + "," + n6 + " wanted " + nArray2[n6][n5]);
                    }
                    ++n4;
                }
                ++n6;
            }
            ++n5;
        }
        return n4;
    }
}

