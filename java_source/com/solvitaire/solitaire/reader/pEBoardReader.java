/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.reader;

import com.solvitaire.solitaire.reader.BoardReader;
import com.solvitaire.solitaire.solver.pDSolver;
import com.solvitaire.solitaire.engine.GameMove;
import com.solvitaire.solitaire.ui.MainWindow;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.engine.Card;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.util.qw_0;
import java.io.Serializable;
import java.util.Vector;

public final class pEBoardReader
extends BoardReader {
    public static final double[] p = new double[]{882.0, 882.0};
    private pDSolver q;
    private CardStack rPanel;
    private CardStack s;
    private CardStack t;
    private CardStack uPanel;
    private Card v;
    private Card wHandler;
    private boolean xHandler;

    pEBoardReader(pDSolver pD2) {
        super(pD2);
        this.q = pD2;
        this.h = 1;
        this.i = 2;
    }

    @Override
    final boolean AboutDialog() {
        this.k = true;
        this.xHandler = true;
        this.rPanel = this.f.aY.AboutDialog[0];
        this.s = this.f.aY.AboutDialog[1];
        this.t = this.f.aY.AboutDialog[2];
        this.uPanel = this.f.aY.AboutDialog[3];
        this.v = this.s.f[0];
        this.wHandler = this.t.f[0];
        this.f.ao.i = new int[this.q.f];
        if (this.f.d <= 5) {
            this.f.g("Testing for presence of Feed stack, expect trace of fail to read color");
        }
        pEBoardReader pE2 = this;
        int n2 = pE2.c(pE2.v, -1, -1);
        if (n2 > 0) {
            this.f.FPanel.AboutDialog(true);
            this.g.AboutDialog(-10, true);
        }
        if (this.f.m != 4) {
            int[] nArray;
            int[] nArray2;
            int n3;
            int n4 = 2;
            MainWindow qb_02 = this.f.aq;
            qb_02.c(n4, null);
            int n5 = 0;
            while (n5 < this.q.f) {
                if (this.f.d <= 3) {
                    this.f.g("Reading cards on stack " + n5);
                }
                pEBoardReader pE3 = this;
                pE3.f(pE3.rPanel.f[n5]);
                ++n5;
            }
            this.g();
            n4 = 2;
            Object object = this.f.aq;
            ((MainWindow)object).c(n4, null);
            object = null;
            Serializable serializable = null;
            if (!this.g.c() && (n3 = this.AboutDialog((Vector)(object = new Vector()), (Vector)(serializable = new Vector()), nArray2 = new int[3])) < 0) {
                if (n3 == -2) {
                    return false;
                }
                this.f.FPanel.AboutDialog(true);
                this.g.AboutDialog(-10, true);
            }
            if (this.g.c() && (n3 = this.AboutDialog((Vector)(object = new Vector()), (Vector)(serializable = new Vector()), nArray = new int[3])) == -2) {
                return false;
            }
            n3 = 0;
            Object object2 = ((Vector)serializable).iterator();
            while (object2.hasNext()) {
                serializable = (Integer)object2.next();
                this.q.B[n3++][0] = (Integer)serializable;
                this.wHandler.AboutDialog(new CardRun(this.q.b(this.wHandler, ((Integer)serializable).intValue())));
            }
            int n6 = 0;
            object = ((Vector)object).iterator();
            while (object.hasNext()) {
                object2 = (Integer)object.next();
                this.q.B[n3++][0] = (Integer)object2;
                ++n6;
                this.v.AboutDialog(new CardRun(this.q.b(this.v, ((Integer)object2).intValue())));
            }
            this.q.uPanel = n3;
            this.q.v = n6;
            this.f.FPanel.d(false);
            this.f.aD.AboutDialog();
            int n7 = 0;
            while (n7 < 4) {
                pEBoardReader pE4 = this;
                int n8 = pE4.d(pE4.uPanel.f[n7]);
                if (n8 > 0) {
                    this.q.AboutDialog[n7] = n8;
                    if (this.f.d <= 5) {
                        this.f.g("Adding cards to ace up to " + n8);
                    }
                    n6 = n8 / 100;
                    n8 %= 100;
                    Card qu2 = this.uPanel.f[n7];
                    CardRun qm_02 = new CardRun(this.q.b(qu2, n6 * 100 + 1));
                    qu2.AboutDialog(qm_02);
                    int n9 = 2;
                    while (n9 <= n8) {
                        qm_02.AboutDialog(new CardRun(this.q.b(qu2, n6 * 100 + n9)), 1);
                        ++n9;
                    }
                }
                ++n7;
            }
        }
        return true;
    }

    private int AboutDialog(Vector vector, Vector vector2, int[] nArray) {
        int n2;
        SolitaireGameEngine qo_02;
        String string;
        qw_0 qw_02;
        int n3 = 0;
        if (this.f.bu.c.z == 9) {
            pEBoardReader pE2 = this;
            qw_02 = pE2.AboutDialog(pE2.wHandler, false, 0, -1);
            if (qw_02 != null && qw_02.b != null && qw_02.b.length > 1) {
                string = "Cannot use AboutDialog Jumbo font for AboutDialog mid-game start in Klondike";
                qo_02 = this.f;
                qo_02.AboutDialog(string, false);
            }
        } else {
            int n4 = 0;
            while (n4 < 3) {
                pEBoardReader pE3 = this;
                int bl2 = pE3.c(pE3.wHandler, n4, -1);
                if (this.f.d < 5) {
                    this.f.g("Read pile card value " + bl2);
                }
                if (bl2 <= 0) break;
                this.q.A = true;
                nArray[n4] = bl2;
                ++n3;
                ++n4;
            }
            if (this.f.d <= 5) {
                this.f.g("There are " + n3 + " cards already on the pile");
            }
        }
        pEBoardReader pE4 = this;
        pE4.b(pE4.v);
        this.f.AboutDialog((long)(500 + this.f.aI), "First deal click");
        pEBoardReader pE5 = this;
        pE5.e(pE5.wHandler);
        this.f.aD.AboutDialog();
        if (this.f.bu.c.z == 9) {
            pEBoardReader pE6 = this;
            qw_02 = pE6.AboutDialog(pE6.wHandler, false, 0, -1);
            if (qw_02 != null && qw_02.b != null && qw_02.b.length > 0 && Math.abs((double)qw_02.b[0].b() - this.t.g.xHandler) > 4.0) {
                if (!this.f.aT) {
                    string = "Cannot use AboutDialog Jumbo font for AboutDialog three card deal";
                    qo_02 = this.f;
                    qo_02.AboutDialog(string, false);
                } else {
                    return -2;
                }
            }
        }
        boolean bl3 = false;
        boolean bl2 = false;
        boolean bl4 = true;
        int n4 = 0;
        pEBoardReader pE7 = this;
        int n5 = pE7.c(pE7.wHandler, 0, -1);
        if (n5 <= 0) {
            if (this.f.d <= 4) {
                this.f.g("The first deal flipped the pile, or reverse layout!");
            }
            bl3 = false;
            boolean bl5 = true;
            pEBoardReader pE8 = this;
            pE8.b(pE8.v);
            this.f.AboutDialog((long)(300 + this.f.aI), "Flipped deal click");
            pEBoardReader pE9 = this;
            pE9.e(pE9.wHandler);
            this.f.aD.AboutDialog();
            n4 = 1;
            pEBoardReader pE10 = this;
            n5 = pE10.c(pE10.wHandler, 0, -1);
            if (this.f.d <= 5) {
                this.f.g("Card " + n5 + " present after flip deal");
            }
            if (n5 < 0) {
                if (this.g.c()) {
                    string = "Mid-game start with no deal cards is not supported";
                    qo_02 = this.f;
                    qo_02.AboutDialog(string, false);
                } else {
                    this.f.g("Deal is not productive so try for reverse layout");
                    return -1;
                }
            }
        }
        if (n4 == 0 && n3 > 2) {
            pEBoardReader pE11 = this;
            n4 = pE11.c(pE11.wHandler, 0, -1);
            if (n4 == nArray[1]) {
                if (this.f.d <= 5) {
                    this.f.g("Card1 moved to card0 so this is single card deal");
                }
                this.f.FPanel.l = 1;
            } else {
                if (this.f.d <= 5) {
                    this.f.g("Card1 not moved to card0 so this is 3 card deal");
                }
                this.f.FPanel.l = 3;
            }
        } else if (n4 == 0 && n3 > 1) {
            pEBoardReader pE12 = this;
            n4 = pE12.c(pE12.wHandler, 1, -1);
            if (n4 == nArray[1]) {
                if (this.f.d <= 5) {
                    this.f.g("Deal did not change card1 on 2 card pile so this is single card deal");
                }
                this.f.FPanel.l = 1;
            } else {
                if (this.f.d <= 5) {
                    this.f.g("Deal changed card1 on 2 card pile so this is three card deal");
                }
                this.f.FPanel.l = 3;
            }
        } else if (n4 == 0 && n3 > 0) {
            pEBoardReader pE13 = this;
            n4 = pE13.c(pE13.wHandler, 0, -1);
            if (n4 == nArray[0]) {
                if (this.f.d <= 5) {
                    this.f.g("Deal did not change card0 on 1 card pile so this is single card deal");
                }
                this.f.FPanel.l = 1;
            } else {
                if (this.f.d <= 5) {
                    this.f.g("Deal changed card0 on 1 card pile so this is 3 card deal");
                }
                this.f.FPanel.l = 3;
            }
        } else {
            if (n4 == 0) {
                bl4 = false;
            }
            pEBoardReader pE14 = this;
            n4 = pE14.c(pE14.wHandler, 1, -1);
            if (n4 <= 0) {
                if (this.f.d <= 5) {
                    this.f.g("Deal did not add card2 to empty pile so this is 1 card deal");
                }
                this.f.FPanel.l = 1;
            } else {
                if (this.f.d <= 5) {
                    this.f.g("Deal added card2 to empty pile so this is 3 card deal");
                }
                this.f.FPanel.l = 3;
                if (this.f.bu.c.z == 9) {
                    string = "Cannot use AboutDialog Jumbo font for AboutDialog Klondike 3 card deal";
                    qo_02 = this.f;
                    qo_02.AboutDialog(string, false);
                }
            }
        }
        n4 = -1;
        int n7 = 0;
        n5 = -1;
        int n6 = -1;
        block1: while (!bl3) {
            block94: {
                boolean bl6;
                block92: {
                    int n19;
                    block95: {
                        block93: {
                            if (n7 == 24) break;
                            this.f.k("Dealing");
                            if (this.f.FPanel.l != 1) break block92;
                            if (n5 > 0) {
                                if (this.f.d <= 5) {
                                    this.f.g("Last cards " + n5 + "," + n6 + " getNonDupCard");
                                }
                                pEBoardReader pE15 = this;
                                n19 = pE15.AboutDialog(pE15.wHandler, -1, n5, n6, true);
                                if (n19 == -2) {
                                    if (this.f.d <= 5) {
                                        this.f.g("***Second attempt on getNonDupCard");
                                    }
                                    pEBoardReader pE16 = this;
                                    pE16.b(pE16.v);
                                    this.f.aD.AboutDialog(3000);
                                    pEBoardReader pE17 = this;
                                    n19 = pE17.AboutDialog(pE17.wHandler, -1, n5, n6, true);
                                    if (n19 < 0) {
                                        String string2 = "Failed to read AboutDialog deck card";
                                        SolitaireGameEngine qo_03 = this.f;
                                        qo_03.AboutDialog(string2, false);
                                    }
                                }
                            } else {
                                if (this.f.d <= 5) {
                                    this.f.g("No last card so read card normally");
                                }
                                pEBoardReader pE18 = this;
                                n19 = pE18.AboutDialog(pE18.wHandler, -1, false);
                            }
                            if (this.f.d <= 5) {
                                this.f.g("Have read deal card " + n7 + " value " + n19);
                            }
                            if (n19 > 0) break block93;
                            if (!bl4) {
                                bl3 = true;
                                if (this.f.d <= 5) {
                                    this.f.g("End of deal cards after dealing " + n7 + " and no pile so all done reading");
                                }
                            } else {
                                bl3 = bl6;
                                n5 = -1;
                                n6 = -1;
                                if (this.f.d <= 5) {
                                    this.f.g("End of deal cards after dealing " + n7 + " alldealt now " + bl3);
                                }
                            }
                            bl6 = true;
                            break block94;
                        }
                        n6 = n5;
                        n5 = n19;
                        ++n7;
                        if (!bl6) break block95;
                        if (n19 == n4) {
                            if (this.f.d <= 5) {
                                this.f.g("Card " + n19 + " first feed " + n4 + " all dealt now");
                            }
                            bl3 = true;
                        } else {
                            if (this.f.d <= 5) {
                                this.f.g("Card " + n19 + " first feed " + n4 + " add to pile");
                            }
                            vector2.add(n19);
                        }
                        break block94;
                    }
                    if (n4 == -1) {
                        n4 = n19;
                        if (this.f.d <= 5) {
                            this.f.g("Card " + n19 + " is the first feed card");
                        }
                    }
                    vector.add(n19);
                    if (this.f.d > 5) break block94;
                    this.f.g("Added card " + n19 + " to feed");
                    break block94;
                }
                int[] nArray2 = new int[3];
                n2 = n5;
                int n10 = 0;
                while (n10 < this.f.FPanel.l) {
                    int n11;
                    pEBoardReader pE19 = this;
                    nArray2[n10] = n11 = pE19.AboutDialog(pE19.wHandler, n10, false, false, n10 == 0);
                    if (n11 <= 0) {
                        String string3 = "Got value " + n11 + " reading pile stack";
                        SolitaireGameEngine qo_04 = this.f;
                        qo_04.AboutDialog(string3, false);
                        n2 = -10;
                        break;
                    }
                    if (n11 == n2) {
                        if (this.f.d <= 5) {
                            this.f.g("Got duplicate card " + n11 + " reading pile stack, retry");
                        }
                        n2 = -11;
                        break;
                    }
                    n2 = n11;
                    ++n10;
                }
                if (n2 == -11) {
                    n2 = n5;
                    int n12 = 0;
                    while (n12 < this.f.FPanel.l) {
                        int n13;
                        pEBoardReader pE20 = this;
                        nArray2[n12] = n13 = pE20.AboutDialog(pE20.wHandler, n12, false, false, n12 == 0);
                        if (n13 <= 0) {
                            String string4 = "Got error " + n13 + " reading feed stack";
                            SolitaireGameEngine qo_05 = this.f;
                            qo_05.AboutDialog(string4, false);
                            break;
                        }
                        if (n13 == n2) {
                            String string5 = "Got duplicate card " + n13 + " on repeat so try another click";
                            SolitaireGameEngine qo_06 = this.f;
                            qo_06.AboutDialog(string5, false);
                            n2 = -11;
                            break;
                        }
                        n2 = n13;
                        ++n12;
                    }
                }
                if (n2 == -11) {
                    if (this.f.d <= 5) {
                        this.f.g("Got duplicate card twice, try another click");
                    }
                    pEBoardReader pE21 = this;
                    pE21.b(pE21.v);
                    this.f.aD.AboutDialog(3000);
                    n2 = n5;
                    int n14 = 0;
                    while (n14 < this.f.FPanel.l) {
                        int n15;
                        pEBoardReader pE22 = this;
                        nArray2[n14] = n15 = pE22.AboutDialog(pE22.wHandler, n14, false, false, false);
                        if (n15 <= 0) {
                            String string6 = "Got error " + n15 + " reading feed stack";
                            SolitaireGameEngine qo_07 = this.f;
                            qo_07.AboutDialog(string6, false);
                            break;
                        }
                        if (n15 == n2) {
                            String string7 = "Got persistent duplicate card " + n15 + " so abort";
                            SolitaireGameEngine qo_08 = this.f;
                            qo_08.AboutDialog(string7, false);
                            break;
                        }
                        n2 = n15;
                        ++n14;
                    }
                }
                n5 = n2;
                int n16 = 0;
                while (n16 < this.f.FPanel.l) {
                    if (this.f.d <= 5) {
                        this.f.g("Read deal card " + n7 + " value " + nArray2[n16]);
                    }
                    if (nArray2[n16] == 0) {
                        if (n16 == 0) {
                            if (!bl4) {
                                if (this.f.d <= 5) {
                                    this.f.g("End of deal cards after dealing " + n7 + " and no pile so all done reading");
                                }
                                bl3 = true;
                            } else {
                                bl3 = bl6;
                                if (this.f.d <= 5) {
                                    this.f.g("End of deal cards after dealing " + n7 + " alldealt now " + bl3);
                                }
                            }
                            bl6 = true;
                            break;
                        }
                    } else {
                        ++n7;
                        if (bl6) {
                            if (nArray2[n16] == n4) {
                                bl3 = true;
                            } else {
                                vector2.add(nArray2[n16]);
                            }
                        } else {
                            if (n4 == -1) {
                                n4 = nArray2[n16];
                            }
                            vector.add(nArray2[n16]);
                        }
                        if (n7 == 24) {
                            bl3 = true;
                            break;
                        }
                    }
                    ++n16;
                }
            }
            if (bl3) continue;
            pEBoardReader pE23 = this;
            int n8 = pE23.d(pE23.wHandler);
            if (this.f.d <= 4) {
                this.f.g("Not yet all dealt, previous read was " + n8);
            }
            pEBoardReader pE24 = this;
            pE24.b(pE24.v);
            this.f.AboutDialog((long)(300 + this.f.aI), "Another deal click");
            n2 = 0;
            while (n2 < 10) {
                pEBoardReader pE25 = this;
                int n18 = pE25.AboutDialog(pE25.wHandler, -1, false, true, true);
                if (n18 != n8) continue block1;
                this.f.AboutDialog(200L, "GetCard");
                if (this.f.d <= 5) {
                    this.f.g("Read previous card " + n8 + " so retry read");
                }
                ++n2;
            }
        }
        int n9 = vector.size();
        n2 = vector2.size();
        if (this.f.d <= 5) {
            this.f.g("Got " + n9 + " feed cards and " + n2 + " pile cards");
        }
        if (n9 + n2 > 24) {
            String string8 = "Error, read too many cards from the feed and pile stacks";
            SolitaireGameEngine qo_09 = this.f;
            qo_09.AboutDialog(string8, false);
        }
        return n3;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    @Override
    final void AboutDialog(GameMove var1_1, int[] var2_4, int var3_10, int var4_11, boolean var5_17) {
        block63: {
            block68: {
                block70: {
                    block69: {
                        block61: {
                            block66: {
                                block65: {
                                    block67: {
                                        block64: {
                                            block62: {
                                                var1_1.q = 0;
                                                var1_1.rPanel = 0;
                                                if (!var1_1.n) break block61;
                                                if (!this.f.uPanel) break block62;
                                                if (!var1_1.o) {
                                                    this.q.AboutDialog(0, var1_1.g, var1_1.e, false);
                                                    var4_12 = this.f.aY.AboutDialog[1].f[0].e.iterator();
                                                    while (var4_12.hasNext()) {
                                                        var2_4 /* !! */  = (int[])((CardRun)var4_12.next());
                                                        ((CardRun)var4_12.next()).b = true;
                                                    }
                                                    var4_12 = this.f.aY.AboutDialog[2].f[0].e.iterator();
                                                    while (var4_12.hasNext()) {
                                                        var2_4 /* !! */  = (int[])((CardRun)var4_12.next());
                                                        ((CardRun)var4_12.next()).b = false;
                                                    }
                                                    return;
                                                }
                                                if (this.f.m != 1) {
                                                    var2_5 = 52;
                                                    var4_11 = 0;
                                                    while (var4_11 < 4) {
                                                        var5_18 = this.f.aY.AboutDialog[3].f[var4_11];
                                                        var2_5 -= var5_18.p();
                                                        ++var4_11;
                                                    }
                                                    if (this.f.d <= 5) {
                                                        this.f.g("There are " + var2_5 + " cards remaining on stacks");
                                                    }
                                                    while (var2_5 > 0) {
                                                        var4_11 = 0;
                                                        var5_17 = 0;
                                                        while (var5_17 < 7) {
                                                            var6_20 = this.f.aY.AboutDialog[0].f[var5_17];
                                                            if (var6_20.d != null) {
                                                                var7_24 = 0;
                                                                while (var7_24 < 4) {
                                                                    var1_2 = this.f.aY.AboutDialog[3].f[var7_24];
                                                                    var3_10 = var1_2.AboutDialog(var6_20, 1, false);
                                                                    if (var3_10 >= 0) {
                                                                        var4_11 = 1;
                                                                        var1_2.AboutDialog(var6_20, var3_10, null);
                                                                        --var2_5;
                                                                        if (this.f.ar == null) break;
                                                                        var1_3 = 0;
                                                                        while (var1_3 < 20) {
                                                                            this.f.ar.b(false);
                                                                            this.f.AboutDialog(5L, "End move delay");
                                                                            ++var1_3;
                                                                        }
                                                                        break;
                                                                    }
                                                                    ++var7_24;
                                                                }
                                                            }
                                                            ++var5_17;
                                                        }
                                                        if (var4_11 == 0) break;
                                                    }
                                                    if (var2_5 != 0) {
                                                        var4_13 = "Failed to clear all cards to aces at end game";
                                                        var2_6 = this.f;
                                                        var2_6.AboutDialog(var4_13, false);
                                                    }
                                                    this.f.AboutDialog(1000L);
                                                    return;
                                                }
                                                break block63;
                                            }
                                            if (var1_1.o) {
                                                this.f.AboutDialog(700L, "Pre quick solve");
                                                this.f.c(this.wHandler.m + (double)((int)(this.f.FPanel.b / 2.0)) + this.g.AboutDialog.AboutDialog(), this.t.g.yHandler + this.f.FPanel.AboutDialog.b() + (double)(this.f.FPanel.c / 2));
                                                this.f.AboutDialog(2000L, "Quick solve");
                                                return;
                                            }
                                            var2_7 = var1_1.k;
                                            var4_11 = var1_1.l;
                                            v0 = var5_17 = this.f.FPanel.l == 1 ? 60 : 350;
                                            if (this.f.d <= 4) {
                                                this.f.g("***Dealing " + var2_7 + " cards (" + var4_11 + " restored) at level " + var3_10);
                                            }
                                            if (var4_11 > 0) {
                                                if (var4_11 != var1_1.e.p()) {
                                                    var4_14 = "Stack mismatch during deal, pile stack " + var1_1.e.p() + " but restoring " + var4_11;
                                                    var2_8 = this.f;
                                                    var2_8.AboutDialog(var4_14, false);
                                                }
                                                if (this.f.d <= 5) {
                                                    this.f.g("Prepare to click feed pile for flip");
                                                }
                                                v1 = this;
                                                if (!v1.AboutDialog(v1.f.Z, 1500, "before flip deal")) {
                                                    var1_1.rPanel = 1;
                                                    return;
                                                }
                                                this.f.AboutDialog(200L, "Before flip click");
                                                if (this.f.d <= 5) {
                                                    this.f.g("Now click on feed pile");
                                                }
                                                this.i();
                                                var6_21 = 0;
                                                while (var6_21 < 10) {
                                                    this.f.AboutDialog(50L, "after flip deal");
                                                    v2 = this;
                                                    if (!v2.AboutDialog(v2.f.Z, 10, "after flip deal")) break;
                                                    if (var6_21 == 4) {
                                                        if (this.f.d <= 5) {
                                                            this.f.g("First click did not work, try click again");
                                                        }
                                                        this.i();
                                                    } else if (this.f.d <= 5) {
                                                        this.f.g("Cards unchanged, keep waiting for deal movement");
                                                    }
                                                    ++var6_21;
                                                }
                                                this.f.AboutDialog(350L, "After flip");
                                            }
                                            if (this.f.d <= 5) {
                                                this.f.g("Click on feed pile");
                                            }
                                            this.i();
                                            this.f.AboutDialog((long)var5_17, "After deal");
                                            if (this.f.d <= 4) {
                                                this.f.g("Done AboutDialog deal, reversed:" + this.f.FPanel.c());
                                            }
                                            this.q.AboutDialog(0, var1_1.g, var1_1.e, false);
                                            if (this.f.d <= 5) {
                                                this.f.g("Updated state, feed stack should be now " + var1_1.g.p() + " pile stack " + var1_1.e.p());
                                            }
                                            if ((var6_22 = this.f.aY.AboutDialog[2].f[0].d) != null) {
                                                var6_22.b = false;
                                            }
                                            if (var1_1.m == 0 && !this.xHandler) break block63;
                                            var7_25 = false;
                                            if (this.xHandler) break block64;
                                            v3 = this;
                                            if (v3.AboutDialog(v3.f.Z, 1500, "after deal")) break block65;
                                            if (this.f.d <= 5) {
                                                this.f.g("Cards do not match expected state, try one more click");
                                            }
                                            this.i();
                                            v4 = this;
                                            if (!v4.AboutDialog(v4.f.Z, 1500, "after retry")) break block66;
                                            break block65;
                                        }
                                        v5 = this;
                                        if (!v5.AboutDialog(v5.f.Z, 1500, "first deal")) break block67;
                                        var7_25 = true;
                                        this.xHandler = false;
                                        break block66;
                                    }
                                    this.f.FPanel.AboutDialog(true);
                                    this.g.AboutDialog(-10, true);
                                    this.i();
                                    v6 = this;
                                    if (!v6.AboutDialog(v6.f.Z, 1500, "try reversed")) break block66;
                                    if (this.f.d <= 5) {
                                        this.f.g("Successfully set to reversed (right) Klondike deal");
                                    }
                                }
                                var7_25 = true;
                            }
                            if (!var7_25) {
                                if (this.f.d <= 5) {
                                    this.f.g("State check failed after flip deal at " + this.f.Z);
                                }
                                this.q.b(var1_1.AboutDialog, var1_1.g, var1_1.e, false);
                                var1_1.rPanel = 1;
                                return;
                            }
                            break block63;
                        }
                        if (this.f.uPanel) {
                            this.AboutDialog(var1_1, (CardStack)null);
                            return;
                        }
                        if (var1_1.c.g == null) {
                            v7 = this.f;
                            var4_15 = "Stackset " + var1_1.c.b + " has not yet been located";
                            var2_4 /* !! */  = (int[])v7;
                            v7.AboutDialog(var4_15, false);
                        }
                        var2_9 = this.f.g;
                        if (var1_1.c.AboutDialog == 3) break block68;
                        var4_16 = var1_1.g.d.c[var1_1.g.d.AboutDialog - var1_1.i];
                        var5_19 = var1_1.e.AboutDialog();
                        if (var4_16.f != 13) break block69;
                        v8 = -1;
                        break block70;
                    }
                    if (var5_19 == null) break;
                    switch (var5_19.e) {
                        case 1: {
                            v8 = 400 + var5_19.f;
                            break;
                        }
                        case 2: {
                            v8 = 300 + var5_19.f;
                            break;
                        }
                        case 3: {
                            v8 = 200 + var5_19.f;
                            break;
                        }
                        case 4: {
                            v8 = 100 + var5_19.f;
                            break;
                        }
                        default:
                        // 2 sources

                        {
                            v8 = 0;
                        }
                    }
                }
                var6_23 = v8;
                var7_26 = 0;
                while (var7_26 < var1_1.f) {
                    if (var1_1.c.f[var7_26].b() == var6_23) {
                        var2_9 = false;
                    }
                    ++var7_26;
                }
                var7_26 = 0;
                while (var7_26 < 4) {
                    if (var1_1.i == 1 && this.f.aY.AboutDialog[3].f[var7_26].b() == var4_16.g - 1) {
                        var2_9 = false;
                    }
                    ++var7_26;
                }
            }
            if (var2_9) {
                v9 = var4_11 = var1_1.d.AboutDialog == 3 ? 1 : 0;
                if (!this.b(var1_1, (boolean)var4_11)) {
                    if (this.f.d <= 5) {
                        this.f.g("Click stack failed - need to attempt recovery");
                    }
                    var1_1.rPanel = 1;
                    return;
                }
                if (this.k) {
                    if (this.f.d <= 5) {
                        this.f.g("Recovery level before first click is " + (var3_10 - 1));
                    }
                    this.j = var3_10 - 1;
                    this.k = false;
                }
                var1_1.e.l = System.currentTimeMillis() + 300L + (long)(var1_1.i > 1 ? 200 : 0);
            } else {
                if (!this.AboutDialog(var1_1, 0)) {
                    if (this.f.d <= 5) {
                        this.f.g("Move stack failed - need to attempt recovery");
                    }
                    var1_1.rPanel = 1;
                    return;
                }
                var1_1.e.l = System.currentTimeMillis() + 100L;
            }
            var4_11 = (int)this.AboutDialog(var1_1, (CardStack)null);
            if (!var2_9) {
                var1_1.q |= 1;
            }
            if (var4_11 != 0) {
                var1_1.q |= 2;
            }
        }
    }

    private void i() {
        this.f.d(this.s.g.xHandler + 10.0, this.s.g.yHandler + 10.0);
    }

    @Override
    final void AboutDialog(GameMove iterator, boolean n2) {
        ((GameMove)((Object)iterator)).rPanel = 0;
        if (this.f.FPanel.v && !n2) {
            this.f.FPanel.p();
            if (!((GameMove)((Object)iterator)).n) {
                if (this.f.d <= 6) {
                    this.f.g("No more moves on something other than AboutDialog deal of remaining cards, move = " + GameMove.AboutDialog(((GameMove)((Object)iterator)).AboutDialog));
                }
                this.AboutDialog((GameMove)((Object)iterator), 0, null);
                return;
            }
            n2 = ((GameMove)((Object)iterator)).k;
            if (this.f.d <= 6) {
                this.f.g("Backspace undid deal of " + (int)n2 + " cards");
            }
            this.q.b(((GameMove)((Object)iterator)).AboutDialog, ((GameMove)((Object)iterator)).g, ((GameMove)((Object)iterator)).e, true);
            this.b((GameMove)((Object)iterator));
            return;
        }
        if (((GameMove)((Object)iterator)).n) {
            if (!n2) {
                n2 = ((GameMove)((Object)iterator)).l;
                if (n2 > 0) {
                    if (this.f.d <= 4) {
                        this.f.g("***Restoring stack of " + (int)n2 + " cards");
                    }
                    this.f.FPanel.k();
                    this.f.AboutDialog(100L, "Undo flip");
                }
                if (this.f.d <= 4) {
                    this.f.g("***Undoing deal");
                }
                this.f.FPanel.k();
                this.f.AboutDialog((long)(this.f.FPanel.l == 1 ? 50 : 100), "Undo feed");
            }
            this.q.b(((GameMove)((Object)iterator)).AboutDialog, ((GameMove)((Object)iterator)).g, ((GameMove)((Object)iterator)).e, true);
            this.b((GameMove)((Object)iterator));
            for (CardRun qm_02 : this.f.aY.AboutDialog[1].f[0].e) {
                ((CardRun)iterator.next()).b = true;
            }
            for (CardRun qm_03 : this.f.aY.AboutDialog[2].f[0].e) {
                ((CardRun)iterator.next()).b = false;
            }
            return;
        }
        if (!n2) {
            if (this.f.d <= 4) {
                this.f.g("***Undoing move of " + String.valueOf(iterator));
            }
            this.f.FPanel.k();
            if (((GameMove)((Object)iterator)).c.AboutDialog == 3) {
                this.f.AboutDialog(100L, "Undo ace");
            } else {
                this.f.AboutDialog(100L, "Undo stack");
            }
        }
        this.AboutDialog((GameMove)((Object)iterator), 0, null);
    }

    @Override
    final int[] b() {
        int[] nArray = new int[3];
        nArray[1] = 2;
        nArray[2] = 3;
        int[] nArray2 = nArray;
        return nArray;
    }

    @Override
    final double c() {
        return 0.2;
    }

    @Override
    final int AboutDialog(GameMove pJ2, Card qu2) {
        int n2 = super.AboutDialog(pJ2, qu2);
        if (n2 < 0 && this.f.FPanel.o()) {
            if (this.f.d <= 5) {
                this.f.g("No more moves dialog up in spider");
            }
            this.f.V = true;
        }
        return n2;
    }
}

