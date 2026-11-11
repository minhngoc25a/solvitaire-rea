/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.al_0;
import com.solvitaire.app.pX;
import com.solvitaire.app.pY;
import com.solvitaire.app.q;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qv;
import com.solvitaire.app.qw_0;
import com.solvitaire.app.s_0;
import com.solvitaire.app.u;
import com.solvitaire.app.u_0;
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

public final class F
extends JPanel {
    al_0 a;
    BufferedImage b;
    byte[][] c;
    int d;
    u_0 e;
    u_0 f;
    private u_0 l;
    u_0 g;
    u_0 h;
    private Point m;
    int i;
    private qv n;
    private int o;
    private pX p;
    private qw_0 q;
    private boolean r = false;
    private boolean s = true;
    boolean j;
    final /* synthetic */ u k;

    F(u u2, pX pX2, qv qv2, int n2, Point point, boolean bl2) {
        this.k = u2;
        this.p = pX2;
        this.n = qv2;
        this.o = n2;
        this.m = point;
        this.q = null;
        this.r = bl2;
        this.i = -1;
    }

    final void a() {
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
                    if (this.k.a.d <= 5) {
                        this.k.a.g("Creating character mask");
                    }
                    this.k.i = this.p.z == 9 ? 5 : 10;
                    q q2 = this.k.a.bu;
                    pX pX2 = this.p;
                    pX2.getClass();
                    q2.b = new pY(pX2);
                    if (this.q == null) {
                        if (this.k.a.d >= 2) {
                            this.k.a.b(2, "CharacterDialog");
                        }
                        qo_0 cfr_ignored_0 = this.k.a;
                        this.q = new qw_0(this.n.f[this.o]);
                        this.k.a.F.a(this.q, this.n.f[this.o], true, -1, -1, false, this.r);
                        if (this.k.a.d >= 2) {
                            this.k.a.n();
                        }
                    }
                    if (this.q == null) {
                        this.k.a.aq.c("", "Could not allocate cards");
                        return;
                    }
                    if (this.q.b != null) {
                        this.k.a.g("Card edges(" + this.q.b.length + "):" + String.valueOf(this.q));
                    }
                    this.k.h = null;
                    if (this.q.b == null || this.q.b.length <= 0) break block28;
                    if ((this.n.d & 0x10) == 0) break block29;
                    this.k.h = this.q.b[0];
                    if (this.m.x < this.k.h.b()) break block30;
                    object2 = this.q.b;
                    n4 = this.q.b.length;
                    n3 = 0;
                    while (n3 < n4) {
                        s_02 = object2[n3];
                        if (this.m.x > s_02.b()) {
                            this.k.h = s_02;
                            if ((double)this.m.x > (double)this.k.h.b() + 26.0) {
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
                    if (this.m.y > s_02.c()) {
                        this.k.h = s_02;
                    }
                    ++n3;
                }
                if (this.k.h.a >= 0 && this.m.y - this.k.h.c() <= 50) break block28;
            }
            this.k.h = null;
        }
        if (this.k.h == null) {
            n2 = (int)(this.k.a.F.b * this.p.E);
            n3 = (int)((double)this.k.a.F.c * this.p.F);
            Rectangle2D.Double double_ = this.n.f[this.o].l();
            double d2 = double_.x;
            double d3 = double_.y;
            if ((this.n.d & 1) != 0) {
                d3 = this.m.y - this.p.y.height / 2;
            } else if ((this.n.d & 0x10) != 0) {
                int n5;
                if (this.k.a.F.c()) {
                    d2 -= 26.0 * this.k.a.F.w * 2.0;
                }
                if ((n5 = (int)((double)this.m.x - d2)) < 0) {
                    n5 = 0;
                }
                if ((n5 /= (int)(26.0 * this.k.a.F.w)) > 2) {
                    n5 = 2;
                }
                d2 += (double)((int)((double)n5 * 26.0 * this.k.a.F.w));
            }
            if (this.k.a.d <= 5) {
                this.k.a.g("***Get unknown character image " + n2 + "x" + n3);
            }
            this.k.a.a(500L);
            object = new Rectangle((int)d2, (int)d3, n2, n3);
            this.a = this.r ? this.k.a.aD.a(this.n.f[this.o], (Rectangle)object) : this.k.a.aD.a((Rectangle)object, "NotFound");
            object = this.a.a();
            this.b = this.a.b();
            this.j = this.p.a((int[][])object, 0, 0) == pX.L;
            this.f = this.p.c(this.j);
            this.e = this.p.a(this.j);
            this.l = this.p.b(this.j);
            this.c = this.a((int[][])object);
        } else {
            n2 = (int)(this.k.a.F.b * this.p.E);
            n3 = (int)((double)this.k.a.F.c * this.p.F);
            object = this.n.f[this.o].m();
            this.k.a.g("Selected character's coords are x " + this.k.h.j + " y " + this.k.h.k + " xd " + this.k.h.l + " yd " + this.k.h.m + " stack relative x " + (this.k.h.j + ((Rectangle)object).x) + " y " + (this.k.h.k + ((Rectangle)object).y));
            if (this.k.a.d <= 5) {
                this.k.a.g("***Get chosen character image " + n2 + "x" + n3);
            }
            this.k.a.a(500L);
            ((Rectangle)object).x = this.k.h.j;
            ((Rectangle)object).y = this.k.h.k;
            ((Rectangle)object).width = n2;
            ((Rectangle)object).height = n3;
            this.a = this.r ? this.k.a.aD.a(this.n.f[this.o], (Rectangle)object) : this.k.a.aD.a((Rectangle)object, "DialogScreenData");
            object2 = this.a.a();
            this.b = this.a.b();
            if (this.k.h != null && this.k.h.b > 0) {
                this.j = pX.a(this.k.h.a);
                this.f = this.p.c(this.j);
                this.e = this.p.a(this.j);
                this.l = this.p.b(this.j);
                F f2 = this;
                f2.a(f2.k.h.b * 13 + this.k.h.c - 14);
            } else {
                this.c = this.a((int[][])object2);
            }
        }
        if (this.a != null) {
            n2 = this.a.c();
            n3 = this.a.d();
            object = new Dimension(n2 * this.k.i, n3 * this.k.i);
            this.setPreferredSize((Dimension)object);
            this.setMaximumSize((Dimension)object);
        }
        this.k.a(false, true);
        this.repaint();
    }

    private byte[][] a(int[][] nArray) {
        int n2 = this.p.a(nArray, 0, 0);
        this.j = n2 == pX.L;
        this.f = this.p.c(this.j);
        this.e = this.p.a(this.j);
        this.l = this.p.b(this.j);
        this.c = this.p.a(nArray, true, this.j);
        return this.c;
    }

    final void a(int n2) {
        this.i = n2;
        this.c = this.p.p[n2];
        this.d = this.p.u[n2];
        this.j = pX.a(n2);
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
            this.k.a("Define colors first");
            return false;
        }
        int[][] nArray = this.a.a();
        int[][] nArray2 = new int[this.p.c.height][this.p.c.width];
        int n3 = 0;
        while (n3 < this.p.c.width) {
            int n4 = 0;
            while (n4 < this.p.c.height) {
                nArray2[n4][n3] = nArray[n4 + this.p.c.y][n3 + this.p.c.x];
                ++n4;
            }
            ++n3;
        }
        this.p.a(this.e, this.f, this.l, this.h, this.g, pX.a(n2));
        if (this.p.q == null) {
            this.p.q = new int[52][][];
        }
        this.p.q[n2] = nArray2;
        this.p.a();
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
        graphics.drawRect(this.p.c.x * this.k.i, this.p.c.y * this.k.i, this.p.c.width * this.k.i, this.p.c.height * this.k.i);
        graphics.drawRect(this.p.x.x * this.k.i, this.p.x.y * this.k.i, this.p.x.width * this.k.i, this.p.x.height * this.k.i);
        ((Graphics2D)graphics).setStroke(new BasicStroke(1.0f));
        u_0 u_02 = new u_0(0);
        if (this.c != null && this.k.h != null) {
            n3 = this.c[0].length;
            int n5 = this.c.length;
            int[][] nArray = this.a.a();
            int n6 = 0;
            while (n6 < n3) {
                int n7 = 0;
                while (n7 < n5) {
                    int[][] nArray2 = this.k.h.i;
                    int n8 = n6 + this.p.c.x + this.k.h.l;
                    int n9 = n7 + this.p.c.y + this.k.h.m - this.k.h.n;
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
                    if (this.k.a.F.y || this.k.a.F.z) {
                        u_02.c(nArray[n9][n8]);
                        if (u_02.a(this.e, this.f) == 0) {
                            if (u_02.a(this.h, this.g) == 0) {
                                graphics.setColor(Color.WHITE);
                            } else {
                                graphics.setColor(Color.ORANGE);
                            }
                        } else if (u_02.a(this.h, this.g) == 0) {
                            graphics.setColor(Color.CYAN);
                        } else {
                            graphics.setColor(Color.BLACK);
                        }
                        graphics.drawRect(n8 * this.k.i + 1, n9 * this.k.i + 1, this.k.i - 1, this.k.i - 1);
                        int n10 = (this.c[n7][n6] & 0xF) + 1;
                        if (this.k.a.F.y || nArray2 == null) {
                            graphics.setColor(Color.YELLOW);
                        } else {
                            graphics.setColor(Color.ORANGE);
                        }
                        if ((this.c[n7][n6] & 0x30) == 0) {
                            graphics.setColor(Color.WHITE);
                        } else if ((this.c[n7][n6] & 0x10) != 0) {
                            n10 = this.k.a.F.z && nArray2 != null ? nArray2[n7][n6] : (u_02.a(this.e, this.f) == 0 ? 0 : n10 / 2 + 1);
                            if (n10 != 0) {
                                graphics.setColor(Color.BLUE);
                            }
                        } else {
                            n10 = this.k.a.F.z && nArray2 != null ? nArray2[n7][n6] : (u_02.a(this.g, this.h) == 0 ? 0 : n10 / 2 + 1);
                            if (n10 != 0) {
                                graphics.setColor(Color.GREEN);
                            }
                        }
                        graphics.fillOval(n8 * this.k.i + n4, n9 * this.k.i + n4, this.k.i / 2 + n10, this.k.i / 2 + n10);
                    } else {
                        u_02.c(nArray[n9][n8]);
                        if (u_02.a(this.e, this.f) == 0) {
                            if (u_02.a(this.h, this.g) != 0) {
                                graphics.setColor(Color.ORANGE);
                            } else {
                                graphics.setColor(Color.WHITE);
                            }
                            graphics.drawRect(n8 * this.k.i + 1, n9 * this.k.i + 1, this.k.i - 1, this.k.i - 1);
                        } else {
                            if (u_02.a(this.h, this.g) == 0) {
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
        if (this.k.a.d <= 4) {
            this.k.a.g("After paintComponent");
        }
    }
}

