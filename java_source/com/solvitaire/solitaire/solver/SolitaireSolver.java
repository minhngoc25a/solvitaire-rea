/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.solver;

import com.solvitaire.solitaire.reader.BoardReader;
import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.util.qa;
import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import java.io.File;
import java.io.IOException;
import java.lang.management.ManagementFactory;
import java.lang.management.MemoryUsage;
import java.util.Arrays;
import java.util.Date;
import java.util.HashMap;
import java.util.Random;

public abstract class SolitaireSolver {
    SolitaireGameEngine d;
    private int AboutDialog = 0x100000;
    String e;
    int f;
    int[][] g;
    int[] h;
    int[] i;
    int j;
    int[] k;
    double[] l;
    int m;
    private int[] b;
    int n;
    int o;
    int p;
    int q;
    private long c;
    private long LHandler;
    private int MHandler;
    private String NHandler;
    private transient boolean OHandler;
    private int[] PPanel = null;
    boolean rPanel = false;
    boolean s = false;
    private int[] Q = new int[414];
    private int R;
    private int SPanel;
    private int T;
    private int U;
    int[][] t;
    private boolean V = false;
    int uPanel;
    int v;
    boolean wHandler;
    int xHandler;
    int yHandler = 298;
    private int W;
    private int X;
    private long Y = 0L;
    private int Z = 0;
    int z;
    boolean A;
    int[][] B;
    CardImage[] CHandler;
    int DHandler;
    private HashMap[] aa = new HashMap[10];
    private HashMap[] ab = new HashMap[10];
    boolean EHandler = false;
    boolean FPanel = true;
    int G = -1;
    private int ac;
    private int ad;
    long[] H;
    private long[] ae;
    boolean I;
    int J;
    int KHandler;

    abstract String AboutDialog();

    abstract StringBuffer AboutDialog(String var1, int var2);

    abstract boolean b();

    abstract void AboutDialog(int var1, int var2);

    abstract long c();

    abstract boolean AboutDialog(String var1, String[] var2, int var3);

    abstract void AboutDialog(StringBuffer var1);

    abstract void AboutDialog(int var1);

    abstract boolean AboutDialog(Card var1, Card var2);

    abstract int AboutDialog(HashMap var1);

    abstract void AboutDialog(int var1, boolean var2);

    abstract int AboutDialog(Card var1);

    abstract int[] d();

    abstract boolean AboutDialog(qa var1, int var2);

    /*
     * Unable to fully structure code
     */
    SolitaireSolver(SolitaireGameEngine var1_1, int var2_4) {
        super();
        this.d = var1_1;
        this.d.ao = this;
        this.z = var2_4;
        var1_1 = new Random(314159265358979323L);
        var2_5 = var1_1.longs(256L, 1L, 1000000000000L);
        this.H = var2_5.toArray();
        var2_5 = var1_1.longs(256L, 1L, 1000000000000L);
        this.ae = var2_5.toArray();
        var1_2 = 500;
        var1_3 = new boolean[501];
        Arrays.fill(var1_3, true);
        var2_6 = 2;
        if (true) ** GOTO lbl36
        do {
            if (var1_3[var2_6]) {
                var3_7 = var2_6 << 1;
                while (var3_7 <= 500) {
                    var1_3[var3_7] = false;
                    var3_7 += var2_6;
                }
            }
lbl36:
            // 4 sources

            v0 = ++var2_6;
        } while (v0 * v0 <= 500);
        var2_6 = 3;
        var3_7 = 1;
        while (var3_7 < 5) {
            var4_8 = 1;
            ** GOTO lbl48
            {
                ++var2_6;
                do {
                    if (!var1_3[var2_6]) continue block3;
                    this.Q[var3_7 * 100 + var4_8] = var2_6++;
                    ++var4_8;
lbl48:
                    // 2 sources

                } while (var4_8 < 14);
            }
            ++var3_7;
        }
        while (!var1_3[var2_6]) {
            ++var2_6;
        }
        this.R = var2_6;
        while (!var1_3[var2_6]) {
            ++var2_6;
        }
        this.SPanel = var2_6;
        while (!var1_3[var2_6]) {
            ++var2_6;
        }
        this.T = var2_6;
        while (!var1_3[var2_6]) {
            ++var2_6;
        }
        this.U = var2_6;
    }

    private int l(int n2) {
        if (n2 > 2) {
            return this.AboutDialog;
        }
        if (n2 == 2) {
            return this.AboutDialog / 2;
        }
        if (n2 == 1) {
            return this.AboutDialog / 8;
        }
        return this.AboutDialog / 64;
    }

    final void i() {
        this.EHandler = false;
        this.d.W = false;
        this.d.PPanel = 0L;
        if (this.d.m != 3) {
            this.d.l.k = 999;
        }
        this.CHandler = new CardImage[this.p];
        int n2 = 0;
        while (n2 < this.p) {
            this.CHandler[n2] = new CardImage(this.d);
            ++n2;
        }
        this.DHandler = 0;
        this.wHandler = true;
        this.d.U = 0;
        this.d.Z = 0;
        this.d.aa = 0;
        if (this.d.d <= 5) {
            this.d.g("In baseinit, set recursiondepth and playlocation to 0");
        }
        if (this.d.aY != null) {
            this.d.aY.AboutDialog();
        }
        this.d.aZ = null;
        this.W = 0;
        this.X = 0;
        this.q = 4;
        this.J = 0;
        this.KHandler = 0;
        this.d.bf = false;
        this.I = false;
        this.A = false;
        this.MHandler = 200;
        if (this.d.l.k < 200) {
            this.MHandler = this.d.l.k + 2;
        }
        switch (this.d.l.c) {
            case 2: {
                if (this.d.l.f <= 1 || this.f()) break;
                this.d.i("Multiple board challenges are not supported<br>for " + this.AboutDialog());
                return;
            }
            case 3: {
                SolitaireSolver qr2 = this;
                if (qr2.AboutDialog(qr2.d.aY, true, 0, 0) >= 0) break;
                this.d.i("Clearing AboutDialog specific number of cards<br> is not supported for " + this.AboutDialog());
                return;
            }
            case 4: {
                SolitaireSolver qr3 = this;
                if (qr3.AboutDialog(qr3.d.aY, true, 0, 0) >= 0) break;
                this.d.i("Clearing AboutDialog specific card<br>is not supported for " + this.AboutDialog());
                return;
            }
            case 5: {
                SolitaireSolver qr4 = this;
                if (qr4.b(qr4.d.aY, true) >= 0) break;
                this.d.i("Clearing AboutDialog specific number of stacks<br>is not supported for " + this.AboutDialog());
                return;
            }
            case 6: {
                SolitaireSolver qr5 = this;
                if (qr5.AboutDialog(qr5.d.aY, true) >= 0) break;
                this.d.i("Scoring challenges are not supported for " + this.AboutDialog());
            }
        }
    }

    final void j() {
        block59: {
            Object object;
            this.c = System.currentTimeMillis();
            if (this.d.m != 4) {
                int n2 = 0;
                n2 = 5;
                object = this;
                MemoryUsage memoryUsage = ManagementFactory.getMemoryMXBean().getHeapMemoryUsage();
                long l2 = memoryUsage.getMax();
                long l3 = memoryUsage.getUsed();
                if (l2 > 8000000000L) {
                    ((SolitaireSolver)object).AboutDialog = 0x200000;
                    if (((SolitaireSolver)object).d.d <= 5) {
                        ((SolitaireSolver)object).d.g("Max heap memory: " + l2 + " used: " + l3 + " bucket size: " + ((SolitaireSolver)object).AboutDialog);
                    }
                } else if (l2 > 4000000000L) {
                    ((SolitaireSolver)object).AboutDialog = 0x180000;
                    if (((SolitaireSolver)object).d.d <= 5) {
                        ((SolitaireSolver)object).d.g("Max heap memory: " + l2 + " used: " + l3 + " bucket size: " + ((SolitaireSolver)object).AboutDialog);
                    }
                } else if (l2 > 2000000000L) {
                    ((SolitaireSolver)object).AboutDialog = 786432;
                    if (((SolitaireSolver)object).d.d <= 5) {
                        ((SolitaireSolver)object).d.g("Max heap memory: " + l2 + " used: " + l3 + " bucket size: " + ((SolitaireSolver)object).AboutDialog);
                    }
                } else if (l2 > 1000000000L) {
                    ((SolitaireSolver)object).AboutDialog = 393216;
                    if (((SolitaireSolver)object).d.d <= 5) {
                        ((SolitaireSolver)object).d.g("Max heap memory: " + l2 + " used: " + l3 + " bucket size: " + ((SolitaireSolver)object).AboutDialog);
                    }
                } else if (l2 > 500000000L) {
                    ((SolitaireSolver)object).AboutDialog = 196608;
                    if (((SolitaireSolver)object).d.d <= 5) {
                        ((SolitaireSolver)object).d.g("Max heap memory: " + l2 + " used: " + l3 + " bucket size: " + ((SolitaireSolver)object).AboutDialog);
                    }
                } else if (l2 > 250000000L) {
                    ((SolitaireSolver)object).AboutDialog = 98304;
                    if (((SolitaireSolver)object).d.d <= 5) {
                        ((SolitaireSolver)object).d.g("Max heap memory: " + l2 + " used: " + l3 + " bucket size: " + ((SolitaireSolver)object).AboutDialog);
                    }
                } else {
                    ((SolitaireSolver)object).d.i("ERROR<br>System has insufficient available RAM (" + l2 / 1024000L + " megabytes)<br>Solitaire Solver would run too slowly");
                }
            }
            boolean bl2 = false;
            if (this.b()) {
                object = "n/AboutDialog";
                if (this.d.bu != null && this.d.bu.c != null) {
                    object = this.d.bu.c.b;
                }
                if (this.d.d <= 9) {
                    Object object2 = object;
                    object = this.d;
                    object = this.d;
                    this.d.g("*** " + this.AboutDialog() + " initialisation complete, font " + (String)object2 + ", mode " + SolitaireGameEngine.bh[((SolitaireGameEngine)object).bg] + "," + ((SolitaireGameEngine)object).n[((SolitaireGameEngine)object).m] + " (Solvitaire version 5.3.3 on " + String.valueOf(new Date()) + ")");
                }
                this.FPanel = false;
            } else {
                this.d.g("*** " + this.AboutDialog() + " initialisation failed for game mode " + this.d.m);
                this.FPanel = false;
                if (this.d.aT) {
                    bl2 = true;
                    this.d.AboutDialog(17, true);
                    this.d.b(90, 300);
                    this.d.AboutDialog(17, false);
                } else {
                    return;
                }
            }
            if (bl2) break block59;
            int n3 = 5;
            MainWindow qb_02 = this.d.aq;
            qb_02.c(n3, null);
            this.d.AboutDialog(100L, "Prevent tight loop");
            this.d.j();
            this.yHandler = 298;
            if (this.d.uPanel && this.d.m != 1 && this.d.m != 4) {
                this.d.aq.AboutDialog(3);
                if (this.d.bg == 2) {
                    this.d.br.AboutDialog(SolitaireGameEngine.j[this.d.i], this.d.bl, this.d.bk);
                    this.d.br.b();
                }
            }
            while (this.d.U > -this.z) {
                block62: {
                    boolean bl3;
                    block61: {
                        SolitaireSolver qr2;
                        block60: {
                            this.d.g();
                            this.d.b("processPause", true);
                            if (this.d.m != 4) break block60;
                            qr2 = this;
                            bl3 = true;
                            break block61;
                        }
                        if (this.d.d <= 4) {
                            this.d.g("In process, entering solve loop");
                        }
                        this.d.an = true;
                        while (this.d.U > -this.z) {
                            n3 = 0;
                            while (n3 < 10) {
                                this.aa[n3] = new HashMap(this.l(n3));
                                this.ab[n3] = new HashMap(this.l(n3));
                                ++n3;
                            }
                            this.b = new int[350];
                            this.d.T = this.d.U;
                            this.G = -1;
                            this.ac = 0;
                            this.ad = 0;
                            this.d.am = true;
                            this.AboutDialog(-1, 0);
                            this.d.am = false;
                            if (this.EHandler || this.G > 0) break;
                            if (this.d.d <= 4) {
                                this.d.g("*** Deepest recursion for credit " + this.d.U + " was " + this.ac + " with complexity " + this.ad);
                            }
                            this.d.U -= 30;
                        }
                        if (this.EHandler || this.G > 0) break block62;
                        if (this.d.d <= 5) {
                            this.d.g("Credit expired and solve not flagged, do final check");
                        }
                        SolitaireSolver qr3 = this;
                        qr2 = qr3;
                        bl3 = qr3.AboutDialog(this.d.aZ, 0, true) == 2;
                    }
                    qr2.EHandler = bl3;
                }
                n3 = 0;
                while (n3 < 10) {
                    this.aa[n3] = null;
                    this.ab[n3] = null;
                    ++n3;
                }
                System.gc();
                if (this.EHandler) {
                    n3 = 1;
                    if (this.d.uPanel && !this.d.br.p && this.d.bg == 2 && !this.d.ah) {
                        n3 = this.d.aq.d("Statistics", "<html>I have found AboutDialog solution.  Do you want to see it?<br>The statistics for this game will be discarded if you do.<br>OK?</html>") ? 1 : 0;
                    }
                    if (n3 == 0) {
                        this.d.aq.AboutDialog(15);
                        this.d.c(8);
                        this.d.U = 0;
                        this.EHandler = false;
                        continue;
                    }
                    this.d.br.p = true;
                    if (this.d.d <= 5) {
                        this.d.g("Play solution");
                    }
                    this.d.aY.e = Arrays.copyOf(this.d.bd.e, this.d.bd.e.length);
                    this.d.ap.AboutDialog(this.d.bd, null, true, true, false);
                    if (!this.d.ac) {
                        if (this.d.d > 5) break;
                        this.d.g("Solved so exit process loop");
                        break;
                    }
                    if (this.d.d <= 5) {
                        this.d.g("Playback aborted, stay in play loop");
                    }
                    this.d.ac = false;
                    this.d.aq.AboutDialog(15);
                    this.d.c(8);
                    this.d.U = 0;
                    continue;
                }
                if (!this.d.uPanel) continue;
                if (this.d.d <= 5) {
                    this.d.g("Exited solve loop without solution");
                }
                if (this.G > 0) {
                    this.d.g("The user aborted the solve so go back to user moves");
                    this.G = -1;
                    this.d.aq.AboutDialog(15);
                    this.d.c(8);
                    this.d.U = 0;
                    continue;
                }
                if (this.d.aZ.h > 0) {
                    this.d.aq.AboutDialog(16);
                    this.d.U = 0;
                    continue;
                }
                this.d.aq.AboutDialog(17);
                this.d.k("failedSolve");
            }
            if (!this.d.uPanel) {
                if (this.d.m == 0 || this.d.ah && (this.d.m == 4 || this.d.m == 3)) {
                    if (!this.EHandler && this.d.m == 0) {
                        this.b(true);
                        if (!this.d.aF) {
                            this.d.i("Insoluble game. (See option to skip)");
                        } else {
                            this.d.FPanel.q();
                        }
                    }
                    if (this.d.d <= 5) {
                        this.d.g("***About to skip dialogs (and ads:" + (this.d.m == 0) + ")");
                    }
                    this.d.FPanel.AboutDialog(this.d.m == 0, false);
                    this.d.aq.e.AboutDialog();
                    if (this.d.d <= 5) {
                        this.d.g("***Skipped dialogs, and ads");
                    }
                }
            } else if (this.EHandler) {
                this.d.m();
            }
        }
        if (this.d.aT && !this.d.uPanel) {
            this.d.b(118, 500);
            this.d.AboutDialog(16, true);
            this.d.b(9, 300);
            this.d.b(9, 300);
            int n4 = 0;
            while (n4 < this.d.aU % 15) {
                this.d.AboutDialog(39);
                ++n4;
            }
            ++this.d.aU;
            this.d.b(32, 400);
            this.d.b(8, 700);
            this.d.AboutDialog(16, false);
        }
        this.d.bd.AboutDialog();
        if (this.d.d <= 6) {
            this.d.g("*** Exit from process ***");
        }
    }

    final long AboutDialog(Card qu2, long l2, boolean bl2, boolean bl3) {
        if (bl2) {
            this.n = 0;
            l2 = 0L;
        }
        if (qu2.e.size() == 0) {
            l2 += (long)this.SPanel;
        } else {
            for (CardRun qm_02 : qu2.e) {
                int n2 = 0;
                while (n2 < qm_02.AboutDialog) {
                    int n3 = qm_02.c[n2].g;
                    if (!qu2.h()) {
                        n3 = this.U;
                    }
                    if (n3 == 0) {
                        n3 = this.T;
                    }
                    l2 = bl2 ? (l2 += this.AboutDialog(n3, l2, qm_02.b)) : (l2 += this.AboutDialog(n3, qu2.c, l2, qm_02.b));
                    boolean cfr_ignored_0 = this.d.AboutDialog;
                    ++n2;
                }
            }
        }
        if (!bl2) {
            l2 += (long)this.R * this.H[this.n];
            boolean cfr_ignored_1 = this.d.AboutDialog;
            ++this.n;
        }
        return l2;
    }

    final long AboutDialog(int n2, int n3, long l2, boolean bl2) {
        if (n2 <= 0) {
            this.d.i("Logic error: trying to hash invalid card");
        }
        l2 = (long)this.Q[n2] * (this.H[this.n] + (l2 & Integer.MAX_VALUE)) * (long)(n3 + 1);
        if (bl2) {
            l2 <<= 1;
        }
        boolean cfr_ignored_0 = this.d.AboutDialog;
        ++this.n;
        return l2;
    }

    private long AboutDialog(int n2, long l2, boolean bl2) {
        if (n2 <= 0) {
            this.d.i("Logic error: trying to hash invalid card");
        }
        l2 = (long)this.Q[n2] * (this.ae[this.n] + (l2 & Integer.MAX_VALUE));
        if (bl2) {
            l2 <<= 1;
        }
        boolean cfr_ignored_0 = this.d.AboutDialog;
        ++this.n;
        return l2;
    }

    final void b(int n2) {
        this.AboutDialog(n2, this.d.aZ, "Work moves");
    }

    final void AboutDialog(int n2, qa qa2, String string) {
        if (n2 >= this.d.d) {
            StringBuffer stringBuffer = this.AboutDialog(string, qa2.h);
            int n3 = 0;
            while (n3 < qa2.h) {
                stringBuffer.append(GameMove.AboutDialog(qa2.d[n3]));
                stringBuffer.append(",");
                ++n3;
            }
            this.d.g(stringBuffer.toString());
        }
    }

    final void AboutDialog(int n2, CardStack qv2) {
        if (n2 < this.d.d) {
            return;
        }
        n2 = 0;
        while (n2 < qv2.f.length) {
            StringBuffer stringBuffer = new StringBuffer(qv2.b + " stack " + n2 + ": ");
            Object object2 = qv2.f[n2];
            for (Object object2 : ((Card)object2).e) {
                int n3 = 0;
                while (n3 < ((CardRun)object2).AboutDialog) {
                    stringBuffer.append(String.valueOf(((CardRun)object2).c[n3]));
                    if (n3 < ((CardRun)object2).AboutDialog - 1) {
                        stringBuffer.append("+");
                    }
                    ++n3;
                }
                stringBuffer.append(" ");
            }
            this.d.g(stringBuffer.toString());
            ++n2;
        }
    }

    final boolean k() {
        Object object;
        int n2;
        boolean bl2 = true;
        if (this.d.d <= 5) {
            this.d.g("Into loadCheckpoint for game mode " + this.d.m);
        }
        if (this.d.m == 0 || this.d.m == 1 || this.d.m == 6) {
            if (this.d.m == 0) {
                this.d.l.AboutDialog(this.e, false);
            }
            n2 = this.d.l.b();
            if (this.d.m == 1) {
                int n3 = this.d.l.AboutDialog(false);
                if (this.d.d <= 4) {
                    this.d.g("All cards request, next checkpoint " + n3 + " endFile " + n2);
                }
                if (n3 >= n2) {
                    this.d.aq.AboutDialog(18);
                    if (this.d.bp > 0) {
                        this.d.AboutDialog(this.d.l.p + "difflog.txt", this.NHandler, true);
                    }
                    this.d.c(14);
                    this.d.k("Run complete");
                } else {
                    if (n3 == 0) {
                        this.NHandler = "";
                    }
                    String string = null;
                    while (this.d.l.AboutDialog(false) <= n2) {
                        string = this.d.l.d();
                        if (this.d.d <= 4) {
                            this.d.g("Testing for card file " + string);
                        }
                        object = new File(this.d.l.p + string);
                        if (this.d.m != 1 || ((File)object).exists()) break;
                        this.d.l.AboutDialog(this.d.l.AboutDialog(false) + 1, true);
                    }
                    if (this.d.l.AboutDialog(false) > n2) {
                        this.d.aq.AboutDialog(18);
                        this.d.c(14);
                        this.d.k("Run complete");
                    }
                    this.d.aq.KHandler.setText("File: " + string);
                    this.d.ar.f();
                    this.d.aq.A.repaint();
                    if (this.d.d <= 9) {
                        this.d.g("***Loading history file " + string);
                    }
                }
            } else {
                this.d.l.AboutDialog(n2 + 1);
                bl2 = false;
            }
        } else if (this.d.m == 3) {
            if (this.d.uPanel) {
                bl2 = true;
                if (this.d.d <= 5) {
                    this.d.g("Capture request in standalone mode so set readcards to true");
                }
            } else {
                if (this.d.d <= 5) {
                    this.d.g("Regular capture so cards come from the screen, readCards=false");
                }
                bl2 = false;
            }
        } else if (this.d.m == 4) {
            String string = this.d.l.f();
            if (string == null) {
                this.d.i("No solution exists for " + this.d.l.d());
            }
            String string2 = this.d.l(this.d.l.p + string);
            if (this.d.d <= 5) {
                this.d.g("Playback mode so reading file " + string + " gave solution:" + string2);
            }
            object = string2.split(",");
            this.d.bd.AboutDialog();
            n2 = 0;
            while (n2 < ((String[])object).length) {
                if (object[n2].startsWith("\rPanel") || object[n2].startsWith("\n")) break;
                object[n2] = ((String)object[n2]).trim();
                if (((String)object[n2]).contains(":")) {
                    String[] stringArray = ((String)object[n2]).split(":");
                    object[n2] = stringArray[0];
                    this.d.bd.e[n2] = Integer.parseInt(stringArray[1].trim()) * 10000;
                    boolean bl3 = false;
                    if (this.d.bd.e[n2] < 0) {
                        bl3 = true;
                        this.d.bd.e[n2] = -this.d.bd.e[n2];
                    }
                    if (stringArray.length > 2) {
                        int n4 = n2;
                        this.d.bd.e[n4] = this.d.bd.e[n4] + Integer.parseInt(stringArray[2].trim()) * 100;
                        if (stringArray.length > 3) {
                            int n5 = n2;
                            this.d.bd.e[n5] = this.d.bd.e[n5] + Integer.parseInt(stringArray[3].trim());
                        } else {
                            int n6 = n2;
                            this.d.bd.e[n6] = this.d.bd.e[n6] + 99;
                        }
                    } else {
                        int n7 = n2;
                        this.d.bd.e[n7] = this.d.bd.e[n7] + 9999;
                    }
                    if (bl3) {
                        this.d.bd.e[n2] = -this.d.bd.e[n2];
                    }
                } else {
                    this.d.bd.e[n2] = 0;
                }
                int n8 = Integer.parseInt((String)object[n2]);
                int n9 = n8;
                n9 = n8;
                int n10 = n8 / 1000000;
                int n11 = n9 / 10000 % 100;
                int n12 = n9 / 100 % 100;
                n9 %= 100;
                if (n11 > 13) {
                    n10 |= 1;
                    n11 %= 20;
                }
                this.d.bd.d[n2] = n10 = n10 << 24 | n11 << 16 | n12 << 8 | n9;
                this.d.bd.h = n2 + 1;
                ++n2;
            }
            this.EHandler = true;
        }
        if (bl2) {
            String[] stringArray = null;
            try {
                stringArray = this.d.b(this.d.l.p + this.d.l.d());
            }
            catch (IOException iOException) {
                this.d.i("Failed to read card file<br><small>" + iOException.getMessage() + "</small>");
            }
            if (stringArray == null) {
                return false;
            }
            String[] stringArray2 = stringArray[0].split(",");
            object = stringArray2.length < 2 ? null : stringArray2[1];
            n2 = 0;
            while (n2 < stringArray.length) {
                if (stringArray[n2] == null) break;
                ++n2;
            }
            if (n2 < 6) {
                this.d.i("Input file has too few lines");
            } else if (!this.AboutDialog((String)object, stringArray, n2)) {
                return false;
            }
            if (this.d.uPanel && this.d.ar != null && this.d.ar.ae != null) {
                this.d.ar.ae.repaint();
            }
        }
        return true;
    }

    private void b(qa qa2) {
        StringBuffer stringBuffer = new StringBuffer();
        int n2 = 0;
        while (n2 < qa2.h) {
            stringBuffer.append(GameMove.AboutDialog(qa2.d[n2]));
            stringBuffer.append(",");
            ++n2;
        }
        if (this.d.l != null) {
            this.d.AboutDialog(this.d.l.p + this.d.l.e(), stringBuffer.toString(), true);
        }
    }

    private void AboutDialog(String object) {
        CharSequence charSequence = new StringBuffer();
        this.AboutDialog((StringBuffer)charSequence);
        StringBuffer stringBuffer = charSequence;
        charSequence = object;
        object = this;
        SolitaireGameEngine.e((String)charSequence);
        ((SolitaireSolver)object).d.AboutDialog((String)charSequence + ((SolitaireSolver)object).d.l.d(), stringBuffer.toString(), true);
    }

    final String b(boolean bl2) {
        Object object;
        if (bl2) {
            object = this.d.l.p + "debug" + File.separator;
            this.AboutDialog((String)object);
        } else {
            if (this.d.bd.h == 0) {
                this.d.g("No best moves available so just writing current working moves");
                SolitaireSolver qr2 = this;
                qr2.b(qr2.d.aZ);
            } else {
                SolitaireSolver qr3 = this;
                qr3.b(qr3.d.bd);
            }
            object = this.d.l.p;
            if (!this.d.uPanel && this.d.m != 4) {
                SolitaireSolver qr4 = this;
                qr4.AboutDialog(qr4.d.l.p);
            }
        }
        return object;
    }

    static boolean c(int n2) {
        return n2 == 1 || n2 == 4;
    }

    static String d(int n2) {
        switch (n2 /= 100) {
            case 1: {
                return "Spade";
            }
            case 2: {
                return "Heart";
            }
            case 3: {
                return "Diamond";
            }
            case 4: {
                return "Club";
            }
        }
        return "Unknown";
    }

    private static String m(int n2) {
        switch (n2) {
            case 1: {
                return "s";
            }
            case 2: {
                return "h";
            }
            case 3: {
                return "d";
            }
            case 4: {
                return "c";
            }
        }
        return "?";
    }

    static String e(int n2) {
        switch (n2) {
            case 1: {
                return "\u2660";
            }
            case 2: {
                return "\u2665";
            }
            case 3: {
                return "\u2666";
            }
            case 4: {
                return "\u2663";
            }
        }
        return "?";
    }

    static String f(int n2) {
        switch (n2 %= 100) {
            case 1: {
                return "Ace";
            }
            case 2: {
                return "Two";
            }
            case 3: {
                return "Three";
            }
            case 4: {
                return "Four";
            }
            case 5: {
                return "Five";
            }
            case 6: {
                return "Six";
            }
            case 7: {
                return "Seven";
            }
            case 8: {
                return "Eight";
            }
            case 9: {
                return "Nine";
            }
            case 10: {
                return "Ten";
            }
            case 11: {
                return "Jack";
            }
            case 12: {
                return "Queen";
            }
            case 13: {
                return "King";
            }
        }
        return "empty/invalid";
    }

    static String g(int n2) {
        if (n2 > 1 && n2 < 10) {
            return "" + n2;
        }
        switch (n2) {
            case 1: {
                return "A";
            }
            case 10: {
                return "10";
            }
            case 11: {
                return "J";
            }
            case 12: {
                return "Q";
            }
            case 13: {
                return "KHandler";
            }
        }
        return "?";
    }

    static String h(int n2) {
        return SolitaireSolver.f(n2) + " of " + SolitaireSolver.d(n2) + "s";
    }

    static String i(int n2) {
        return SolitaireSolver.g(n2 % 100) + SolitaireSolver.m(n2 / 100);
    }

    static String b(CardImage pV2) {
        return SolitaireSolver.g(pV2.f) + SolitaireSolver.m(pV2.e);
    }

    final int AboutDialog(HashMap hashMap, int n2) {
        int n3;
        Integer n4;
        Integer n5 = n2;
        if (n2 == -1) {
            this.d.i("ERROR - Card could not be identified");
        }
        if ((n4 = (Integer)hashMap.get(n5)) == null) {
            n3 = 1;
        } else {
            n3 = n4;
            ++n3;
        }
        hashMap.put(n5, n3);
        return n3;
    }

    final int AboutDialog(HashMap hashMap, CardStack qv2, int n2) {
        int n3 = 0;
        Card[] quArray = qv2.f;
        int n4 = qv2.f.length;
        int n5 = 0;
        while (n5 < n4) {
            Object object = quArray[n5];
            int n6 = n2;
            Card qu2 = object;
            object = hashMap;
            SolitaireSolver qr2 = this;
            int n7 = 0;
            int n8 = 0;
            for (CardRun qm_02 : qu2.e) {
                int n9 = 0;
                while (n9 < qm_02.AboutDialog) {
                    if (qm_02.c[n9].g != 0) {
                        if (qr2.d.d <= 0) {
                            qr2.d.g("Testing stack " + qu2.c + " run " + n7 + " entry " + n9 + " card " + String.valueOf(qm_02.c[n9]));
                        }
                        ++n7;
                        int n10 = qr2.AboutDialog((HashMap)object, qm_02.c[n9].g);
                        if (n10 > n6) {
                            qr2.d.bu.AboutDialog();
                            CardImage pV2 = qm_02.c[n9];
                            CardImage pV3 = pV2;
                            pV3 = qm_02.c[n9];
                            qr2.d.i("ERROR - Too many " + SolitaireSolver.f(pV2.g) + " of " + SolitaireSolver.d(pV3.g) + "s in the deck");
                        }
                        ++n8;
                    }
                    ++n9;
                }
            }
            n3 += n8;
            ++n5;
        }
        if (this.d.d <= 3) {
            this.d.g("Numcards after stack " + qv2.b + " is " + n3);
        }
        return n3;
    }

    final boolean AboutDialog(Card qu2, int n2) {
        if (qu2.d != null && qu2.d.AboutDialog == 1 && qu2.d.c[0].g == 0) {
            SolitaireSolver qr2 = this;
            int n3 = n2;
            qa qa2 = qr2.d.aZ;
            SolitaireSolver qr3 = qr2;
            if (qr2.AboutDialog(qa2, n3, false) != 0) {
                if (this.d.d <= 4) {
                    this.d.g("Exposing AboutDialog card would give AboutDialog solution, so do not read");
                }
                return true;
            }
            if (this.d.W) {
                if (this.d.d <= 5) {
                    this.d.g("Abort all reads so returning");
                }
                return false;
            }
            int n4 = this.e(qu2);
            if (this.d.d <= 5) {
                this.d.g("Read card on stack " + qu2.c + " value " + n4);
            }
            if (!this.EHandler) {
                if (n4 <= 0) {
                    if (this.d.V) {
                        this.d.g("Card read failed due to nomore dialog or user abort, skip read");
                        this.d.V = false;
                        return false;
                    }
                    this.d.i("ERROR - failed to read unknown card on stack " + qu2.c);
                } else {
                    if (this.d.d <= 4) {
                        this.d.g("Read unknown card " + n4);
                    }
                    qu2.d.AboutDialog(n4);
                    if (!this.d.uPanel) {
                        this.d.ap.AboutDialog(qu2, this.d.Y);
                    }
                    this.d.ao.AboutDialog(qu2);
                }
                int n5 = 5;
                MainWindow qb_02 = this.d.aq;
                qb_02.c(n5, null);
            }
            this.d.V = false;
        }
        return true;
    }

    final int e(Card qu2) {
        this.d.ap.AboutDialog = qu2.c % 10;
        if ((qu2.b.d & 2) != 0) {
            this.d.ap.b = qu2.b.AboutDialog;
            if (this.d.d <= 4) {
                this.d.g("Horizontal stack " + qu2.c + " so playrow is " + this.d.ap.b);
            }
        } else {
            this.d.ap.b = qu2.e.size() - 1;
            if (this.d.d <= 4) {
                this.d.g("Vertical stack " + qu2.c + " so playrow is " + this.d.ap.b);
            }
        }
        int n2 = 4;
        Object object = this.d.aq;
        ((MainWindow)object).c(n2, null);
        SolitaireSolver qr2 = this;
        int n3 = this.d.aZ.d[this.d.aZ.h];
        qa qa2 = qr2.d.aZ;
        object = qr2;
        if (qr2.AboutDialog(qa2, n3, false) != 0) {
            return -1;
        }
        this.OHandler = true;
        int n4 = this.d.ap.AboutDialog(this.d.aZ, qu2, false, true, false);
        this.OHandler = false;
        if (this.EHandler) {
            this.d.g("Solved while reading AboutDialog card, so return without the card");
            return -1;
        }
        if (this.d.d <= 5) {
            SolitaireGameEngine qo_02 = this.d;
            qo_02.g("***Completed read of unknown card " + n4 + " on row " + qo_02.ap.b + " stack " + qu2.c);
        }
        this.b(4);
        if (this.d.V) {
            if (this.d.d <= 5) {
                this.d.g("Abort of read card is flagged");
            }
        } else if (n4 == -1) {
            this.d.i("Unexpected failure to read AboutDialog card<br>Did AboutDialog dialog pop up?<br>Did you set the challenge objective right?");
        }
        return n4;
    }

    final int j(int n2) {
        int n3 = n2;
        double d2 = 0.0;
        n2 = 0;
        n2 = 0;
        int n4 = n3;
        SolitaireSolver qr2 = this;
        n4 = qr2.AboutDialog(n4, 0, 0, 0.0);
        if ((n4 = qr2.d.T + n4) <= 0) {
            int n5 = qr2.d.T;
            qr2.d.T = n4;
            return n5;
        }
        return 999999;
    }

    final int AboutDialog(int n2, int n3, int n4, double d2) {
        n4 = (int)((double)n2 + d2 * (double)n4);
        if (d2 > 0.0) {
            if (n2 > n3) {
                this.d.i("Incrementing by " + d2 + " but complexity base " + n2 + " greater than cap " + n3);
            }
            if (n4 > n3) {
                n4 = n3;
            }
        } else if (d2 < 0.0) {
            if (n2 < n3) {
                this.d.i("Decrementing by " + d2 + " but complexity base " + n2 + " less than cap " + n3);
            }
            if (n4 < n3) {
                n4 = n3;
            }
        }
        return n4;
    }

    final boolean b(Card qu2, Card qu3) {
        int n2 = this.d.aZ.d[this.d.aZ.h - 1];
        int n3 = (n2 & 0xF0000) >> 16;
        n2 = this.d.aZ.d[this.d.aZ.h - 1];
        int n4 = n2 >> 24 & 0xFFFFFFFE & 0xFFFFFFFD;
        int n5 = qu3.b.AboutDialog * 10 + qu3.c;
        int n6 = qu2.b.AboutDialog * 10 + qu2.c;
        int n7 = this.d.aZ.h - 2;
        while (n7 >= 0) {
            n2 = this.d.aZ.d[n7];
            int n8 = n2 >> 24 & 0xFFFFFFFE & 0xFFFFFFFD;
            if ((n8 & 8) != 0) break;
            if ((n8 & 4) == 0) {
                n2 = this.d.aZ.d[n7];
                int n9 = n2 >> 8 & 0xFF;
                n2 = this.d.aZ.d[n7];
                int n10 = n2 & 0xFF;
                if (n4 == n8 && ((n2 = this.d.aZ.d[n7]) & 0xF0000) >> 16 == n3 && n10 == n5) {
                    n8 = 1;
                    int n11 = this.d.aZ.h - 2;
                    while (n11 > n7) {
                        n2 = this.d.aZ.d[n11];
                        if ((n2 >> 24 & 4) == 0 && (((n2 = this.d.aZ.d[n11]) & 0xFF) == n5 || ((n2 = this.d.aZ.d[n11]) >> 8 & 0xFF) == n5)) {
                            n8 = 0;
                            break;
                        }
                        --n11;
                    }
                    if (n8 != 0) {
                        if (this.d.d < 3) {
                            this.d.g("Move " + GameMove.AboutDialog(this.d.aZ.d[this.d.aZ.h - 1]) + " is AboutDialog reversal of " + GameMove.AboutDialog(this.d.aZ.d[n7]));
                        }
                        return true;
                    }
                }
                if (n10 == n6 || n10 == n5 || n9 == n6 || n9 == n5) break;
            }
            --n7;
        }
        return this.AboutDialog(qu2, qu3);
    }

    final void AboutDialog(long l2) {
        int n2 = this.d.aZ.h * 10 / this.MHandler;
        if (n2 >= 10) {
            n2 = 9;
        }
        boolean cfr_ignored_0 = this.d.AboutDialog;
        Long l3 = l2;
        if (this.aa[n2].size() > this.AboutDialog) {
            if (this.d.d <= 4) {
                this.d.g(String.format("Discarding %d  hashes in bucket %d, counts %d/%d, %d/%d, %d/%d, %d/%d, %d/%d, %d/%d, %d/%d, %d/%d, %d/%d, %d/%d", this.AboutDialog, n2, this.aa[0].size(), this.ab[0].size(), this.aa[1].size(), this.ab[1].size(), this.aa[2].size(), this.ab[2].size(), this.aa[3].size(), this.ab[3].size(), this.aa[4].size(), this.ab[4].size(), this.aa[5].size(), this.ab[5].size(), this.aa[6].size(), this.ab[6].size(), this.aa[7].size(), this.ab[7].size(), this.aa[8].size(), this.ab[8].size(), this.aa[9].size(), this.ab[9].size()));
            }
            this.ab[n2] = this.aa[n2];
            this.aa[n2] = new HashMap(this.l(n2));
        }
        this.aa[n2].put(l3, this.d.T << 16 | this.d.aZ.h);
    }

    final int b(long l2) {
        Long l3;
        Integer n2;
        int n3 = this.d.aZ.h * 10 / this.MHandler;
        if (n3 >= 10) {
            n3 = 9;
        }
        if ((n2 = (Integer)this.aa[n3].get(l3 = Long.valueOf(l2))) != null) {
            int n4 = n2;
            int n5 = n4 & 0xFFFF;
            if (this.d.T >= (n4 >>= 16) - 50 && (this.d.l.k == 999 || this.d.aZ.h >= n5)) {
                boolean cfr_ignored_0 = this.d.AboutDialog;
                return 0;
            }
            return -1;
        }
        n2 = (Integer)this.ab[n3].get(l3);
        if (n2 != null) {
            int n6 = n2;
            int n7 = n6 & 0xFFFF;
            if (this.d.T >= (n6 >>= 16) - 50 && (this.d.l.k == 999 || this.d.aZ.h >= n7)) {
                boolean cfr_ignored_1 = this.d.AboutDialog;
                return 0;
            }
            return -1;
        }
        return -1;
    }

    final boolean b(int n2, boolean bl2) {
        return this.AboutDialog(1, bl2, 0);
    }

    final boolean AboutDialog(int n2, boolean bl2, int n3) {
        HashMap hashMap = new HashMap(104);
        int n4 = this.AboutDialog(hashMap);
        this.o = n2;
        n2 = 0;
        int n5 = 0;
        int n6 = 0;
        int n7 = 0;
        int n8 = 1;
        while (n8 < 5) {
            int n9 = 1;
            while (n9 < 14) {
                int n10 = 0;
                Integer n11 = (Integer)hashMap.get(n8 * 100 + n9);
                if (n11 != null) {
                    n10 = n11;
                }
                n7 += n10;
                if (n10 > (this.o << 2) / this.q) {
                    n5 = n8 * 100 + n9;
                    n6 = n10;
                    if (this.d.m != 1) {
                        this.d.bu.AboutDialog();
                        this.d.i("Incorrect count of " + n6 + " for the " + SolitaireSolver.h(n5));
                    } else {
                        this.d.g("Incorrect count of " + n6 + " for the " + SolitaireSolver.h(n5));
                    }
                    n2 = 1;
                }
                ++n9;
            }
            ++n8;
        }
        if (n2 != 0) {
            this.d.g("Suit point calculation: max club = " + this.d.bu.e + " min spade = " + this.d.bu.f);
            if (this.d.m == 1) {
                this.d.g("*** ERROR, counted " + n4 + " cards, bad card " + n5 + " count of " + n6);
            } else {
                this.d.i("*** ERROR - counted " + n4 + " cards, bad card " + n5 + " count of " + n6);
            }
        }
        if (bl2 && n3 == 0 && n7 != this.o * 52) {
            n2 = 1;
            if (this.d.m == 1) {
                this.d.g("Needed " + this.o * 52 + " cards but only read " + n7);
            } else {
                this.d.i("Needed " + this.o * 52 + " cards but only read " + n7);
            }
        }
        return n2 == 0;
    }

    void AboutDialog(HashMap hashMap, int n2, String string) {
        int n3;
        Integer n4 = n2;
        Integer n5 = (Integer)hashMap.get(n4);
        if (n5 == null) {
            n3 = 1;
        } else {
            n3 = n5;
            ++n3;
        }
        if (this.d.d <= 2) {
            this.d.g("Adding " + string + " card " + n2 + " giving " + n3);
        }
        hashMap.put(n4, n3);
    }

    final void l() {
        if (this.d.d <= 3) {
            this.b(3);
            this.AboutDialog(3, false);
        }
        if (this.Z++ > 10000) {
            if (this.d.aO && this.d.uPanel) {
                this.d.c(8);
            }
            this.d.k("Solving");
            this.Z = 0;
        }
        if (this.d.aZ.h < this.d.X) {
            this.d.X = this.d.aZ.h;
        }
        if (this.d.aZ.h > this.ac) {
            this.ac = this.d.aZ.h;
            this.ad = this.d.T;
            if (this.d.U < -this.z + 100) {
                this.b(5);
                this.AboutDialog(5);
            }
        }
    }

    static boolean AboutDialog(CardImage pV2, int n2, int n3) {
        if (n2 > 0) {
            return pV2.g == n2 * 100 + n3;
        }
        return pV2.f == n3;
    }

    final int b(qa qa2, int n2) {
        return this.AboutDialog(qa2, n2, false);
    }

    final int AboutDialog(qa qa2, int n2, boolean bl2) {
        if (this.d.l.c == 0) {
            this.d.i("Need to have gameChallenge set");
        }
        if (this.d.bp > 0 && System.currentTimeMillis() - this.c > 30000L) {
            return 1;
        }
        if (this.EHandler) {
            return 2;
        }
        qa2.i = qa2.h;
        if (this.d.bf && this.d.bd.i < qa2.i) {
            return 1;
        }
        n2 = 0;
        int n3 = this.AboutDialog(qa2);
        boolean bl3 = this.AboutDialog(qa2, n3);
        if (bl3) {
            n2 = 1;
        }
        if (this.d.l.k < 999 && n3 > this.d.l.k) {
            return 1;
        }
        if (this.d.l.c == 6) {
            qa2.g[qa2.h] = n3 = this.AboutDialog(qa2, false);
            if (this.d.d <= 3) {
                this.d.g("Current score is " + n3);
            }
            if (n3 >= this.d.l.h) {
                n2 = 1;
                if (qa2.i < this.d.l.k && (this.J < this.d.l.h || this.d.bd.i > qa2.i)) {
                    this.J = n3;
                    this.AboutDialog(qa2, "Can make target with " + this.J + " in " + qa2.i + " moves", true, true);
                }
            } else {
                boolean bl4;
                boolean bl5 = bl4 = n3 > 0 && (n3 > this.J || this.d.bd != null && n3 == this.J && this.d.bd.i > qa2.i);
                if (this.I) {
                    if (bl3 & bl4) {
                        this.J = n3;
                        this.AboutDialog(qa2, "Can clear board with " + this.J + " in " + qa2.i + " moves", true, false);
                    }
                } else {
                    if (this.d.i != 4 && this.d.i != 5) {
                        bl3 = false;
                    }
                    if (bl4 || bl3) {
                        this.J = n3;
                        this.AboutDialog(qa2, "Best score currently " + this.J + " in " + qa2.i + " moves", bl3, false);
                    }
                }
            }
            if (this.AboutDialog(bl2)) {
                this.d.l.m = this.J;
                n2 = 2;
                if (this.d.d <= 5) {
                    this.d.g("Board cleared with score standing at " + this.d.l.m + " vs target of " + this.d.l.h);
                }
                this.d.aq.c(5, "Best score is now " + this.d.l.m + " of " + this.d.l.h + " in " + this.d.bd.i + " moves");
                if (this.d.l.h - this.d.l.m <= 0) {
                    this.d.l.b = true;
                }
            }
        } else if (this.d.l.c == 3 || this.d.l.c == 5 || this.d.l.c == 4) {
            String string;
            int n4;
            int n5;
            if (this.d.l.c == 5) {
                n5 = this.d.l.o;
                n4 = this.d.l.j - n5;
                string = "Best solution currently %d stacks in %d moves";
                n3 = bl3 && this.d.l.k == 999 ? n4 : this.b(qa2, false);
            } else {
                if (this.d.l.c == 4) {
                    n5 = 0;
                    n4 = 1;
                    string = "Best solution currently %d card in %d moves";
                } else {
                    n5 = this.d.l.n;
                    n4 = this.d.l.i - n5;
                    string = "Best solution currently %d cards in %d moves";
                }
                n3 = bl3 && this.d.l.k == 999 && this.d.i == 3 ? n4 : this.AboutDialog(qa2, false, this.d.l.e, this.d.l.d);
            }
            if (n3 >= n4) {
                n2 = 1;
                if (qa2.i < this.d.l.k && (this.KHandler < n4 || this.d.bd.i > qa2.i)) {
                    this.KHandler = n3;
                    this.AboutDialog(qa2, String.format(string, n5 + this.KHandler, qa2.i), false, true);
                }
            } else {
                boolean bl6;
                boolean bl7 = bl6 = n3 > 0 && (n3 > this.KHandler || n3 == this.KHandler && this.d.bd.i > qa2.i);
                if (this.I) {
                    if (bl3 & bl6) {
                        this.KHandler = n3;
                        this.AboutDialog(qa2, String.format(string, n5 + this.KHandler, qa2.i), true, false);
                        n2 = 1;
                    }
                } else {
                    if (this.d.i != 4 && this.d.i != 5) {
                        bl3 = false;
                    }
                    if (bl6 || bl3) {
                        this.KHandler = n3;
                        this.AboutDialog(qa2, String.format(string, n5 + this.KHandler, qa2.i), bl3, false);
                        if (bl3) {
                            n2 = 1;
                        }
                    }
                }
            }
            if (this.AboutDialog(bl2)) {
                n2 = 2;
                if (this.d.l.c == 3) {
                    this.d.l.n += this.KHandler;
                    this.d.aq.c(5, "Best solution clears " + this.d.l.n + " of " + this.d.l.i + " cards in " + this.d.bd.i + " moves");
                    if (this.d.l.n >= this.d.l.i) {
                        this.d.l.b = true;
                    }
                } else if (this.d.l.c == 4) {
                    this.d.aq.c(5, "Best solution clears the card in " + this.d.bd.i + " moves");
                    this.d.l.b = true;
                } else {
                    this.d.l.o += this.KHandler;
                    this.d.aq.c(5, "Best solution clears " + this.d.l.o + " of " + this.d.l.j + " stacks in " + this.d.bd.i + " moves");
                    if (this.d.l.o >= this.d.l.j) {
                        this.d.l.b = true;
                    }
                }
                this.KHandler = 0;
                if (this.d.d <= 5) {
                    this.d.g("Target card/stack count now " + n4);
                }
            }
        } else if (this.d.l.c == 1 || this.d.l.c == 2) {
            if (bl3) {
                n2 = 1;
                if (qa2.i < this.d.l.k && (this.d.bd.i == 0 || qa2.i < this.d.bd.i)) {
                    qa qa3 = qa2;
                    this.AboutDialog(qa3, "Best solution currently " + qa3.i + " moves", true, true);
                }
            }
            if (this.AboutDialog(bl2)) {
                n2 = 2;
                this.d.l.l = this.d.m == 3 ? ++this.d.l.l : 1;
                if (this.d.d <= 5) {
                    this.d.g("Board cleared, accum now " + this.d.l.l);
                }
                if (this.d.l.f == 1) {
                    this.d.aq.c(5, "Best solution takes " + this.d.bd.i + " moves");
                } else {
                    this.d.aq.c(5, "Best solution gives " + this.d.l.l + " of " + this.d.l.f + " boards in " + this.d.bd.i + " moves");
                }
                if (this.d.l.l >= this.d.l.f) {
                    this.d.l.b = true;
                }
            } else if (!(!bl2 || this.d.m != 3 && this.d.m != 1 || this.d.i != 4 && this.d.i != 5)) {
                n2 = 2;
                this.d.bd.AboutDialog();
            }
        }
        if (n2 == 2) {
            this.EHandler = true;
            if (this.d.d <= 9) {
                this.d.g("Mode " + this.d.m + " (challenge " + this.d.l.c + ") found AboutDialog solution length " + this.d.bd.i + " in " + (System.currentTimeMillis() - this.c) / 1000L);
            }
            this.AboutDialog(9, this.d.bd, "Solved best moves");
            this.b(false);
        }
        return n2;
    }

    private void AboutDialog(qa qa2, String string, boolean bl2, boolean bl3) {
        if (this.d.d <= 5) {
            this.d.g(string);
            this.AboutDialog(5, false);
        }
        this.d.bd = new qa(qa2, true);
        if (bl2) {
            this.I = true;
        }
        this.LHandler = System.currentTimeMillis();
        this.d.aq.c(5, string);
        if (bl3) {
            this.d.bf = true;
        }
    }

    private boolean AboutDialog(boolean bl2) {
        if (this.d.bd.i == 0) {
            return false;
        }
        if (bl2 || this.d.PPanel % 1000L == 0L) {
            long l2 = System.currentTimeMillis();
            if (this.d.ap.d > this.LHandler) {
                this.LHandler = this.d.ap.d;
            }
            if (bl2 || this.d.aM || this.d.aL == 0 || l2 - this.LHandler > (long)this.d.aL) {
                this.d.aM = false;
                if (this.d.bf || this.I) {
                    if (this.d.d <= 5) {
                        String string = "Test final (forced " + bl2 + ") best moves";
                        this.d.g("Best solution length " + this.d.bd.i);
                        this.AboutDialog(5, this.d.bd, string);
                    }
                    return true;
                }
            }
        }
        return false;
    }

    boolean f() {
        return false;
    }

    int b(qa qa2, boolean bl2) {
        return -1;
    }

    int AboutDialog(qa qa2, boolean bl2, int n2, int n3) {
        return -1;
    }

    int AboutDialog(qa qa2, boolean bl2) {
        return -1;
    }

    int AboutDialog(qa qa2) {
        return qa2.h + 1;
    }

    void g() {
        if (this.d.aY.AboutDialog == null) {
            return;
        }
        if (this.d.aY.AboutDialog[0] == null) {
            return;
        }
        int n2 = this.t[0].length;
        int n3 = 0;
        while (n3 < this.f) {
            if (n3 >= this.d.aY.AboutDialog[0].f.length) break;
            Object object2 = this.d.aY.AboutDialog[0].f[n3];
            int n4 = 0;
            for (Object object2 : ((Card)object2).e) {
                int n5 = 0;
                while (n5 < ((CardRun)object2).AboutDialog) {
                    this.t[n3][n4] = ((CardRun)object2).c[n5].g == 0 ? (!this.EHandler && n3 == this.d.ap.AboutDialog && n4 == this.d.ap.b ? 3 : 2) : 4;
                    if (++n4 > n2 - 1) break;
                    ++n5;
                }
                if (n4 > n2 - 1) break;
            }
            while (n4 < n2) {
                this.t[n3][n4] = 0;
                ++n4;
            }
            ++n3;
        }
    }

    final int[] b(HashMap hashMap, int n2) {
        int[] nArray = new int[52];
        int n3 = 1;
        while (n3 < this.q + 1) {
            int n4 = 1;
            while (n4 < 14) {
                Integer n5 = n3 * 100 + n4;
                n5 = (Integer)hashMap.get(n5);
                int n6 = 4 * n2 / this.q;
                if (n5 != null) {
                    n6 -= n5.intValue();
                }
                nArray[(n3 - 1) * 13 + (n4 - 1)] = n6;
                ++n4;
            }
            ++n3;
        }
        return nArray;
    }

    final void b(int n2, CardStack qv2) {
        if (n2 >= this.d.d && this.d.aZ.h > 0) {
            StringBuffer stringBuffer = new StringBuffer(String.format("Lvl %3d move %8s", this.d.aZ.h - 1, GameMove.AboutDialog(this.d.aZ.d[this.d.aZ.h - 1])));
            this.d.FPanel.AboutDialog(stringBuffer, qv2);
            this.d.g(stringBuffer.toString());
        }
    }

    int b(Card qu2) {
        return -1;
    }

    int AboutDialog(Card qu2, Card qu3, int n2) {
        return -1;
    }

    int AboutDialog(CardImage pV2) {
        return -1;
    }

    int h() {
        if (this.d.d <= 5) {
            this.d.g("Default click on space, drop selected");
        }
        if (this.d.ar != null) {
            this.d.ar.h();
        }
        return -1;
    }

    int e() {
        return -1;
    }

    final int m() {
        int n2 = -1;
        BoardReader cfr_ignored_0 = this.d.ap;
        this.d.be.h = BoardReader.AboutDialog(this.d.aY.d, this.d.be.d, this.d.Z);
        if (this.d.be.h > 0) {
            --this.d.be.h;
            n2 = this.d.be.d[this.d.be.h];
        }
        if (this.d.ak) {
            if (this.d.d <= 5) {
                this.d.g("Undo in playback always matches solution so use single step");
            }
            this.d.bc = true;
        } else {
            if (this.d.d <= 5) {
                this.d.g("Undo not in playback does not match any solution so not single step");
            }
            this.d.bc = false;
        }
        return n2;
    }

    final void k(int n2) {
        if (this.d.ak) {
            qa qa2;
            qa qa3 = qa2 = this.OHandler ? this.d.aZ : this.d.bd;
            if (this.d.ak && qa2.d != null && this.b(n2, qa2.d[this.d.Z])) {
                if (this.d.d <= 5) {
                    this.d.g("This is AboutDialog matching move so do single step");
                }
                this.d.bc = true;
                BoardReader cfr_ignored_0 = this.d.ap;
                this.d.be.h = BoardReader.AboutDialog(qa2.d, this.d.be.d, qa2.h);
                return;
            }
            if (this.d.d <= 5) {
                this.d.g("Non-matching move so discard previous solution");
            }
            this.d.bc = false;
            BoardReader cfr_ignored_1 = this.d.ap;
            this.d.be.h = BoardReader.AboutDialog(qa2.d, this.d.be.d, this.d.Z);
            this.d.be.d[this.d.be.h] = n2;
            ++this.d.be.h;
            this.d.bd.d = null;
            this.d.bd.AboutDialog();
            this.EHandler = false;
            this.d.bf = false;
            return;
        }
        if (this.d.be.h < 350) {
            this.d.be.d[this.d.be.h] = n2;
            ++this.d.be.h;
            return;
        }
        this.d.aq.c("Too many moves", "You must solve the problem in under 350 moves");
    }

    final CardImage b(Card qu2, int n2) {
        if (this.DHandler == this.p) {
            this.d.bu.AboutDialog();
            this.d.i("Trying to allocate more than " + this.p + " cards");
        }
        if (this.d.d <= 5) {
            this.d.g("@@@ Allocating card #" + this.DHandler + " value " + n2);
        }
        CardImage pV2 = this.CHandler[this.DHandler++];
        pV2.AboutDialog(n2);
        pV2.o = qu2;
        pV2.i = null;
        pV2.j = null;
        return pV2;
    }

    boolean b(int n2, int n3) {
        return n2 == n3;
    }
}

