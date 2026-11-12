/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.util.ErrorDialog;
import com.solvitaire.solitaire.util.pX;
import com.solvitaire.solitaire.util.pY;
import com.solvitaire.solitaire.util.q;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.engine.CardStack;
import com.solvitaire.solitaire.util.qw_0;
import com.solvitaire.solitaire.util.s_0;
import com.solvitaire.solitaire.ui.panels.uPanel;
import com.solvitaire.solitaire.util.u_0;
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Point;
import java.awt.Rectangle;
import java.awt.geom.Rectangle2D;
import java.awt.image.BufferedImage;
import javax.swing.JPanel;

public final class FPanel
extends JPanel {
    public ErrorDialog AboutDialog;
    public BufferedImage b;
    byte[][] c;
    int d;
    public u_0 e;
    public u_0 f;
    private u_0 l;
    public u_0 g;
    public u_0 h;
    private Point m;
    int i;
    private CardStack n;
    private int o;
    private pX p;
    private qw_0 q;
    private boolean rPanel = false;
    private boolean s = true;
    boolean j;
    final /* synthetic */ uPanel k;

    FPanel(uPanel u2, pX pX2, CardStack qv2, int n2, Point point, boolean bl2) {
        this.k = u2;
        this.p = pX2;
        this.n = qv2;
        this.o = n2;
        this.m = point;
        this.q = null;
        this.rPanel = bl2;
        this.i = -1;
    }

    final void AboutDialog() {
        Object object;
        int n2;
        int n3;
        Object object2;
        block28: {
            block30: {
                s_0 s_02;
                int n4;
                block29: {
                    if (this.s) {
                        this.b();
                        this.s = false;
                    }
                    if (this.k.AboutDialog.d <= 5) {
                        this.k.AboutDialog.g("Creating character mask");
                    }
                    this.k.i = this.p.z == 9 ? 5 : 10;
                    q q2 = this.k.AboutDialog.bu;
                    pX pX2 = this.p;
                    pX2.getClass();
                    q2.b = new pY(pX2);
                    if (this.q == null) {
                        if (this.k.AboutDialog.d >= 2) {
                            this.k.AboutDialog.b(2, "CharacterDialog");
                        }
                        SolitaireGameEngine cfr_ignored_0 = this.k.AboutDialog;
                        this.q = new qw_0(this.n.f[this.o]);
                        this.k.AboutDialog.FPanel.AboutDialog(this.q, this.n.f[this.o], true, -1, -1, false, this.rPanel);
                        if (this.k.AboutDialog.d >= 2) {
                            this.k.AboutDialog.n();
                        }
                    }
                    if (this.q == null) {
                        this.k.AboutDialog.aq.c("", "Could not allocate cards");
                        return;
                    }
                    if (this.q.b != null) {
                        this.k.AboutDialog.g("Card edges(" + this.q.b.length + "):" + String.valueOf(this.q));
                    }
                    this.k.h = null;
                    if (this.q.b == null || this.q.b.length <= 0) break block28;
                    if ((this.n.d & 0x10) == 0) break block29;
                    this.k.h = this.q.b[0];
                    if (this.m.xHandler < this.k.h.b()) break block30;
                    object2 = this.q.b;
                    n4 = this.q.b.length;
                    n3 = 0;
                    while (n3 < n4) {
                        s_02 = object2[n3];
                        if (this.m.xHandler > s_02.b()) {
                            this.k.h = s_02;
                            if ((double)this.m.xHandler > (double)this.k.h.b() + 26.0) {
                                this.k.h = null;
                            }
                        }
                        ++n3;
                    }
                    break block28;
                }
                this.k.h = this.q.b[0];
                object2 = this.q.b;
                n4 = this.q.b.length;
                n3 = 0;
                while (n3 < n4) {
                    s_02 = object2[n3];
                    if (this.m.yHandler > s_02.c()) {
                        this.k.h = s_02;
                    }
                    ++n3;
                }
                if (this.k.h.AboutDialog >= 0 && this.m.yHandler - this.k.h.c() <= 50) break block28;
            }
            this.k.h = null;
        }
        if (this.k.h == null) {
            n2 = (int)(this.k.AboutDialog.FPanel.b * this.p.EHandler);
            n3 = (int)((double)this.k.AboutDialog.FPanel.c * this.p.FPanel);
            Rectangle2D.Double double_ = this.n.f[this.o].l();
            double d2 = double_.xHandler;
            double d3 = double_.yHandler;
            if ((this.n.d & 1) != 0) {
                d3 = this.m.yHandler - this.p.yHandler.height / 2;
            } else if ((this.n.d & 0x10) != 0) {
                int n5;
                if (this.k.AboutDialog.FPanel.c()) {
                    d2 -= 26.0 * this.k.AboutDialog.FPanel.wHandler * 2.0;
                }
                if ((n5 = (int)((double)this.m.xHandler - d2)) < 0) {
                    n5 = 0;
                }
                if ((n5 /= (int)(26.0 * this.k.AboutDialog.FPanel.wHandler)) > 2) {
                    n5 = 2;
                }
                d2 += (double)((int)((double)n5 * 26.0 * this.k.AboutDialog.FPanel.wHandler));
            }
            if (this.k.AboutDialog.d <= 5) {
                this.k.AboutDialog.g("***Get unknown character image " + n2 + "xHandler" + n3);
            }
            this.k.AboutDialog.AboutDialog(500L);
            object = new Rectangle((int)d2, (int)d3, n2, n3);
            this.AboutDialog = this.rPanel ? this.k.AboutDialog.aD.AboutDialog(this.n.f[this.o], (Rectangle)object) : this.k.AboutDialog.aD.AboutDialog((Rectangle)object, "NotFound");
            object = this.AboutDialog.AboutDialog();
            this.b = this.AboutDialog.b();
            this.j = this.p.AboutDialog((int[][])object, 0, 0) == pX.LHandler;
            this.f = this.p.c(this.j);
            this.e = this.p.AboutDialog(this.j);
            this.l = this.p.b(this.j);
            this.c = this.AboutDialog((int[][])object);
        } else {
            n2 = (int)(this.k.AboutDialog.FPanel.b * this.p.EHandler);
            n3 = (int)((double)this.k.AboutDialog.FPanel.c * this.p.FPanel);
            object = this.n.f[this.o].m();
            this.k.AboutDialog.g("Selected character's coords are xHandler " + this.k.h.j + " yHandler " + this.k.h.k + " xd " + this.k.h.l + " yd " + this.k.h.m + " stack relative xHandler " + (this.k.h.j + ((Rectangle)object).xHandler) + " yHandler " + (this.k.h.k + ((Rectangle)object).yHandler));
            if (this.k.AboutDialog.d <= 5) {
                this.k.AboutDialog.g("***Get chosen character image " + n2 + "xHandler" + n3);
            }
            this.k.AboutDialog.AboutDialog(500L);
            ((Rectangle)object).xHandler = this.k.h.j;
            ((Rectangle)object).yHandler = this.k.h.k;
            ((Rectangle)object).width = n2;
            ((Rectangle)object).height = n3;
            this.AboutDialog = this.rPanel ? this.k.AboutDialog.aD.AboutDialog(this.n.f[this.o], (Rectangle)object) : this.k.AboutDialog.aD.AboutDialog((Rectangle)object, "DialogScreenData");
            object2 = this.AboutDialog.AboutDialog();
            this.b = this.AboutDialog.b();
            if (this.k.h != null && this.k.h.b > 0) {
                this.j = pX.AboutDialog(this.k.h.AboutDialog);
                this.f = this.p.c(this.j);
                this.e = this.p.AboutDialog(this.j);
                this.l = this.p.b(this.j);
                FPanel f2 = this;
                f2.AboutDialog(f2.k.h.b * 13 + this.k.h.c - 14);
            } else {
                this.c = this.AboutDialog((int[][])object2);
            }
        }
        if (this.AboutDialog != null) {
            n2 = this.AboutDialog.c();
            n3 = this.AboutDialog.d();
            object = new Dimension(n2 * this.k.i, n3 * this.k.i);
            this.setPreferredSize((Dimension)object);
            this.setMaximumSize((Dimension)object);
        }
        this.k.AboutDialog(false, true);
        this.repaint();
    }

    private byte[][] AboutDialog(int[][] nArray) {
        int n2 = this.p.AboutDialog(nArray, 0, 0);
        this.j = n2 == pX.LHandler;
        this.f = this.p.c(this.j);
        this.e = this.p.AboutDialog(this.j);
        this.l = this.p.b(this.j);
        this.c = this.p.AboutDialog(nArray, true, this.j);
        return this.c;
    }

    final void AboutDialog(int n2) {
        this.i = n2;
        this.c = this.p.p[n2];
        this.d = this.p.uPanel[n2];
        this.j = pX.AboutDialog(n2);
        this.b();
    }

    private void b() {
        this.e = new u_0();
        this.f = new u_0();
        this.l = new u_0();
        this.g = new u_0();
        this.h = new u_0();
        this.p.b(this.e, this.f, this.l, this.h, this.g, this.j);
    }

    final boolean b(int n2) {
        if (this.g == null || this.e == null) {
            this.k.AboutDialog("Define colors first");
            return false;
        }
        int[][] nArray = this.AboutDialog.AboutDialog();
        int[][] nArray2 = new int[this.p.c.height][this.p.c.width];
        int n3 = 0;
        while (n3 < this.p.c.width) {
            int n4 = 0;
            while (n4 < this.p.c.height) {
                nArray2[n4][n3] = nArray[n4 + this.p.c.yHandler][n3 + this.p.c.xHandler];
                ++n4;
            }
            ++n3;
        }
        this.p.AboutDialog(this.e, this.f, this.l, this.h, this.g, pX.AboutDialog(n2));
        if (this.p.q == null) {
            this.p.q = new int[52][][];
        }
        this.p.q[n2] = nArray2;
        this.p.AboutDialog();
        this.c = this.p.p[n2];
        return true;
    }

    @Override
    public final void paintComponent(Graphics graphics) {
        graphics = (Graphics2D)graphics;
        super.paintComponent(graphics);
        if (this.b == null) {
            return;
        }
        int n2 = this.b.getWidth() * this.k.i;
        int n3 = this.b.getHeight() * this.k.i;
        int n4 = this.k.i / 4;
        graphics.drawImage(this.b, 0, 0, n2, n3, null);
        graphics.setColor(Color.YELLOW);
        ((Graphics2D)graphics).setStroke(new BasicStroke(4.0f));
        graphics.drawRect(this.p.c.xHandler * this.k.i, this.p.c.yHandler * this.k.i, this.p.c.width * this.k.i, this.p.c.height * this.k.i);
        graphics.drawRect(this.p.xHandler.xHandler * this.k.i, this.p.xHandler.yHandler * this.k.i, this.p.xHandler.width * this.k.i, this.p.xHandler.height * this.k.i);
        ((Graphics2D)graphics).setStroke(new BasicStroke(1.0f));
        u_0 u_02 = new u_0(0);
        if (this.c != null && this.k.h != null) {
            n3 = this.c[0].length;
            int n5 = this.c.length;
            int[][] nArray = this.AboutDialog.AboutDialog();
            int n6 = 0;
            while (n6 < n3) {
                int n7 = 0;
                while (n7 < n5) {
                    int[][] nArray2 = this.k.h.i;
                    int n8 = n6 + this.p.c.xHandler + this.k.h.l;
                    int n9 = n7 + this.p.c.yHandler + this.k.h.m - this.k.h.n;
                    if (n8 < 0) {
                        return;
                    }
                    if (n9 < 0) {
                        return;
                    }
                    if (n8 > nArray[0].length - 1) {
                        return;
                    }
                    if (n9 > nArray.length - 1) {
                        return;
                    }
                    if (this.k.AboutDialog.FPanel.yHandler || this.k.AboutDialog.FPanel.z) {
                        u_02.c(nArray[n9][n8]);
                        if (u_02.AboutDialog(this.e, this.f) == 0) {
                            if (u_02.AboutDialog(this.h, this.g) == 0) {
                                graphics.setColor(Color.WHITE);
                            } else {
                                graphics.setColor(Color.ORANGE);
                            }
                        } else if (u_02.AboutDialog(this.h, this.g) == 0) {
                            graphics.setColor(Color.CYAN);
                        } else {
                            graphics.setColor(Color.BLACK);
                        }
                        graphics.drawRect(n8 * this.k.i + 1, n9 * this.k.i + 1, this.k.i - 1, this.k.i - 1);
                        int n10 = (this.c[n7][n6] & 0xF) + 1;
                        if (this.k.AboutDialog.FPanel.yHandler || nArray2 == null) {
                            graphics.setColor(Color.YELLOW);
                        } else {
                            graphics.setColor(Color.ORANGE);
                        }
                        if ((this.c[n7][n6] & 0x30) == 0) {
                            graphics.setColor(Color.WHITE);
                        } else if ((this.c[n7][n6] & 0x10) != 0) {
                            n10 = this.k.AboutDialog.FPanel.z && nArray2 != null ? nArray2[n7][n6] : (u_02.AboutDialog(this.e, this.f) == 0 ? 0 : n10 / 2 + 1);
                            if (n10 != 0) {
                                graphics.setColor(Color.BLUE);
                            }
                        } else {
                            n10 = this.k.AboutDialog.FPanel.z && nArray2 != null ? nArray2[n7][n6] : (u_02.AboutDialog(this.g, this.h) == 0 ? 0 : n10 / 2 + 1);
                            if (n10 != 0) {
                                graphics.setColor(Color.GREEN);
                            }
                        }
                        graphics.fillOval(n8 * this.k.i + n4, n9 * this.k.i + n4, this.k.i / 2 + n10, this.k.i / 2 + n10);
                    } else {
                        u_02.c(nArray[n9][n8]);
                        if (u_02.AboutDialog(this.e, this.f) == 0) {
                            if (u_02.AboutDialog(this.h, this.g) != 0) {
                                graphics.setColor(Color.ORANGE);
                            } else {
                                graphics.setColor(Color.WHITE);
                            }
                            graphics.drawRect(n8 * this.k.i + 1, n9 * this.k.i + 1, this.k.i - 1, this.k.i - 1);
                        } else {
                            if (u_02.AboutDialog(this.h, this.g) == 0) {
                                graphics.setColor(Color.CYAN);
                            } else {
                                graphics.setColor(Color.BLACK);
                            }
                            graphics.drawRect(n8 * this.k.i + 1, n9 * this.k.i + 1, this.k.i - 1, this.k.i - 1);
                        }
                    }
                    ++n7;
                }
                ++n6;
            }
        }
        if (this.k.AboutDialog.d <= 4) {
            this.k.AboutDialog.g("After paintComponent");
        }
    }
}

