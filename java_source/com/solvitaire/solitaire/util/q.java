/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.util.ErrorDialog;
import com.solvitaire.solitaire.engine.CardImage;
import com.solvitaire.solitaire.util.pX;
import com.solvitaire.solitaire.util.pY;
import com.solvitaire.solitaire.util.pZ;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.solver.SolitaireSolver;
import com.solvitaire.solitaire.util.s_0;
import com.solvitaire.solitaire.util.u_0;
import java.awt.Rectangle;

public final class q {
    private SolitaireGameEngine g;
    static pX[] AboutDialog = new pX[]{pZ.AboutDialog, pZ.b, pZ.c, pZ.d, pZ.e, pZ.f, pZ.g, pZ.h, pZ.i, pZ.j, pZ.k, pZ.l, pZ.m, pZ.n, pZ.o};
    pY b;
    private boolean h;
    private int i;
    pX c;
    int d;
    double e = -10000.0;
    double f = 10000.0;

    q(SolitaireGameEngine qo_02) {
        this.g = qo_02;
        int n2 = 0;
        while (n2 < AboutDialog.length) {
            pX pX2 = AboutDialog[n2];
            AboutDialog[n2].AboutDialog = qo_02;
            ++n2;
        }
    }

    final void AboutDialog(int n2) {
        this.i = n2;
        pX pX2 = this.c = AboutDialog[n2];
        pX2.getClass();
        this.b = new pY(pX2);
        this.e = -10000.0;
        this.f = 10000.0;
        this.c.AboutDialog();
    }

    static int b(int n2) {
        return n2 / 13 * 100 + n2 % 13 + 101;
    }

    static int c(int n2) {
        return (n2 -= 101) / 100 * 13 + n2 % 100;
    }

    final void AboutDialog(int n2, int n3) {
        if (this.g.d <= n2) {
            n3 = 0;
            while (n3 < 52) {
                s_0 s_02 = this.b.b[n3];
                this.AboutDialog(n2, s_02);
                ++n3;
            }
        }
    }

    private void AboutDialog(int n2, s_0 s_02) {
        if (this.g.d <= n2) {
            this.g.f(String.format("Card %d best match %d suit score %d val score %d part score %d vs suit %d, num %d, part %d", q.b(s_02.AboutDialog), s_02.e, s_02.f, s_02.g, s_02.h, this.c.t[s_02.AboutDialog], this.c.s[s_02.AboutDialog], this.c.rPanel[s_02.AboutDialog]));
        }
    }

    /*
     * WARNING - void declaration
     */
    final void AboutDialog(ErrorDialog object, int n2, int n3, boolean bl2, int n4, int n5, int n6) {
        int n7;
        void var5_8;
        void var6_9;
        int[][] nArray = ((ErrorDialog)object).AboutDialog();
        if (this.g.wHandler) {
            if (n2 == 0) {
                new ErrorDialog(this.g, nArray, "Interpret");
            } else {
                this.g.aD.AboutDialog(new Rectangle((int)((double)n2 + this.g.FPanel.AboutDialog.AboutDialog()), (int)((double)n3 + this.g.FPanel.AboutDialog.b()), this.c.c.xHandler + this.c.c.width, this.c.c.yHandler + this.c.c.height), "Interpret");
            }
        }
        pY n8 = this.b;
        int n9 = 0;
        while (n9 < 52) {
            n8.b[n9].AboutDialog();
            ++n9;
        }
        n8.AboutDialog = n8.b[0];
        int n10 = this.c.AboutDialog(nArray, n2, n3);
        if (n10 == pX.KHandler) {
            if (this.g.d <= 3) {
                this.g.f("Invalid colors at offset " + n3 + " in stack " + this.d);
            }
            this.b.AboutDialog.e = 1;
            return;
        }
        this.b.e = this.h = n10 == pX.LHandler;
        if (bl2) {
            int s_02 = this.c.AboutDialog(nArray, n2, n3, this.h);
            n3 += s_02;
            if (this.g.d <= 3) {
                this.g.f("ydelta is " + s_02 + " giving adjusted yHandler of " + n3);
            }
        }
        if (var6_9 < this.c.yHandler.height && var5_8 == 2) {
            this.c.AboutDialog(nArray, this.b, n2, n3, 3, (int)var6_9, n7);
        } else {
            this.c.AboutDialog(nArray, this.b, n2, n3, (int)var5_8, (int)var6_9, n7);
        }
        s_0 s_02 = this.b.AboutDialog;
        if (s_02.e != 9 && s_02.e != 6) {
            if (this.g.d <= 3) {
                this.g.f("***Card matching failed, for suit " + this.b.c + " best " + s_02.e);
                if (this.b.c > 0) {
                    n7 = 0;
                    while (n7 < 52) {
                        if (this.b.b[n7].g < 100) {
                            object = this.b.b[n7];
                            this.g.f("*** Looks like AboutDialog bad match on " + q.b(n7) + " nummatch " + ((s_0)object).g + " suitmatch " + ((s_0)object).f);
                        }
                        ++n7;
                    }
                    q.AboutDialog(this.g, this.c, nArray, n2 + this.c.yHandler.xHandler, n3 + this.c.yHandler.yHandler, this.c.c.width, (int)var6_9, this.h);
                    this.AboutDialog(3, (int)var5_8);
                    return;
                }
            }
        } else {
            n7 = s_02.b;
            if (var5_8 != 2 || s_02.e != 9) {
                if (this.g.d <= 4) {
                    this.g.f("Partial of " + (int)var5_8 + " and match of " + s_02.e + " so clear the suit");
                }
                n7 = 0;
            } else {
                if (n7 == 4 && this.b.d > this.e) {
                    if (this.g.d <= 5) {
                        this.g.g("Maxclub changed from " + this.e + " to " + this.b.d + " min spade " + this.f);
                    }
                    this.e = this.b.d;
                } else if (n7 == 1 && this.b.d < this.f) {
                    if (this.g.d <= 5) {
                        this.g.g("Minspade changed from " + this.f + " to " + this.b.d + " max club " + this.e);
                    }
                    this.f = this.b.d;
                }
                if (this.g.d <= 3) {
                    this.g.f("Full match worked, suit " + n7 + " value " + s_02.c);
                }
            }
            s_02.j += ((ErrorDialog)object).e();
            s_02.k += ((ErrorDialog)object).f();
            if (this.g.d <= 2) {
                int n92 = s_02.g;
                n10 = s_02.f;
                this.g.f(String.format("Interpret returning %s of %s (%d), suit score %d, num score %d vs %d, test height %d, xHandler %d yHandler %d xd %d yd %d", SolitaireSolver.f(s_02.c), SolitaireSolver.d(n7 * 100), n7 * 100 + s_02.c, n10, n92, this.b.f, (int)var6_9, s_02.j, s_02.k, s_02.l, s_02.m));
                if (this.g.d <= 3 || 999 == n7 * 100 + s_02.c) {
                    q.AboutDialog(this.g, this.c, nArray, n2 + this.c.c.xHandler, n3 + this.c.c.yHandler, this.c.c.width, this.c.c.height, this.h);
                    if (this.g.d <= 2) {
                        this.AboutDialog(9, (int)var5_8);
                        return;
                    }
                    this.AboutDialog(3, this.b.AboutDialog);
                }
            }
        }
    }

    final void AboutDialog() {
        if (!this.g.uPanel) {
            this.g.f("Suit calculation maxclub " + this.e + " minspade " + this.f + " cutoff " + this.c.CHandler);
        }
        int n2 = 0;
        while (n2 < this.g.ao.DHandler) {
            CardImage pV2 = this.g.ao.CHandler[n2];
            this.g.f("Card " + n2 + " value " + pV2.g + " original stack " + String.valueOf(pV2.o));
            ++n2;
        }
    }

    static void AboutDialog(SolitaireGameEngine qo_02, pX pX2, int[][] nArray, Rectangle rectangle, boolean bl2) {
        int n2;
        if (nArray == null) {
            String string = "Trying to trace null pixels";
            SolitaireGameEngine qo_03 = qo_02;
            qo_03.AboutDialog(string, false);
        }
        if (rectangle.yHandler + (n2 = rectangle.height) > nArray.length) {
            n2 = nArray.length - rectangle.yHandler;
        }
        q.AboutDialog(qo_02, pX2, nArray, rectangle.xHandler, rectangle.yHandler, rectangle.width, n2, bl2);
    }

    static void AboutDialog(SolitaireGameEngine qo_02, pX pX2, int[][] nArray, Rectangle rectangle, int n2, boolean bl2) {
        int n3;
        if (nArray == null) {
            String string = "Trying to trace null pixels";
            SolitaireGameEngine qo_03 = qo_02;
            qo_03.AboutDialog(string, false);
        }
        if ((n3 = n2 - 5) < 0) {
            n3 = 0;
        }
        if (rectangle.yHandler + (n2 = n2 + 10 - n3 + 1) > nArray.length) {
            n2 = nArray.length - rectangle.yHandler;
        }
        q.AboutDialog(qo_02, pX2, nArray, rectangle.xHandler, rectangle.yHandler + n3, rectangle.width, n2, bl2);
    }

    static void AboutDialog(SolitaireGameEngine qo_02, pX object, int[][] nArray, int n2, int n3, int n4, int n5, boolean n6) {
        u_0 u_02 = new u_0();
        u_0 u_03 = ((pX)object).AboutDialog(n6 != 0);
        object = ((pX)object).c(n6 != 0);
        if (n6 != 0) {
            qo_02.f("TOP OF RED at " + n2 + "," + n3 + "_________________________________________________");
        } else {
            qo_02.f("TOP OF BLACK at " + n2 + "," + n3 + "_________________________________________________");
        }
        if (n3 < 0) {
            n3 = 0;
        }
        if (n3 + n5 > nArray.length) {
            n5 = nArray.length - n3;
        }
        n6 = n3;
        while (n6 < n3 + n5) {
            StringBuffer stringBuffer = new StringBuffer();
            int n7 = n2;
            while (n7 < n2 + n4) {
                u_02.c(nArray[n6][n7]);
                if (u_02.AboutDialog(u_03, (u_0)object) == 0) {
                    stringBuffer.append("@@");
                } else {
                    stringBuffer.append("  ");
                }
                ++n7;
            }
            qo_02.f(stringBuffer.toString());
            ++n6;
        }
        qo_02.f("BOTTOM___________________________________________________");
    }
}

