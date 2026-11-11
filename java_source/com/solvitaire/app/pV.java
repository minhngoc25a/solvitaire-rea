/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.pW;
import com.solvitaire.app.qm_0;
import com.solvitaire.app.qo_0;
import com.solvitaire.app.qr;
import com.solvitaire.app.qu;
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Point;
import java.awt.Rectangle;
import java.awt.RenderingHints;

public final class pV {
    boolean a = false;
    static int b = 80;
    static int c = 110;
    private static final Color r = new Color(0xFFFF00);
    private static final Color s = new Color(3166384);
    private static final Color t = new Color(6861055);
    private static final Color u = new Color(0xC0C0C0);
    private static final Color v = new Color(0xE00800);
    qo_0 d;
    int e;
    int f;
    int g;
    Point h = new Point();
    private Point w = new Point();
    pW i = null;
    pW j = null;
    private long x;
    boolean k;
    boolean l;
    int m;
    private Rectangle y;
    private boolean z;
    private boolean A;
    boolean n;
    qu o;
    qm_0 p;
    int q;

    static {
        new Point(0, 0);
    }

    pV(qo_0 qo_02) {
        this.d = qo_02;
    }

    final void a(boolean bl2) {
        if (bl2 != this.z) {
            this.z = bl2;
            this.d(true);
        }
    }

    final boolean a() {
        return this.z;
    }

    final void b(boolean bl2) {
        if (bl2 != this.A) {
            this.A = bl2;
            this.d(true);
        }
    }

    final boolean b() {
        return this.A;
    }

    final void a(int n2) {
        this.g = n2;
        this.f = n2 % 100;
        this.e = n2 / 100;
    }

    final void a(int n2, int n3) {
        this.h.setLocation(n2, n3);
        this.y = new Rectangle(n2, n3, b, c);
    }

    final Point b(int n2, int n3) {
        return new Point(this.h.x + b / 2 + n2 - this.d.ar.q.x, this.h.y + c / 8 + n3 - this.d.ar.q.y);
    }

    final void b(int n2) {
        this.l = true;
        this.a(n2);
    }

    final void c(boolean bl2) {
        if (this.k != bl2) {
            this.k = bl2;
            this.d(false);
        }
    }

    private void d(boolean bl2) {
        int n2 = bl2 ? 6 : 2;
        this.d.ar.ad.repaint(this.w.x - n2, this.w.y - n2, b + (n2 << 1), c + (n2 << 1));
    }

    static void a(Graphics graphics, qo_0 qo_02, int n2, int n3, int n4, int n5, int n6) {
        Graphics2D graphics2D = (Graphics2D)graphics;
        graphics2D.setRenderingHint(RenderingHints.KEY_TEXT_ANTIALIASING, RenderingHints.VALUE_TEXT_ANTIALIAS_GASP);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        int n7 = n4 / 8;
        graphics2D.setStroke(new BasicStroke(1.0f));
        graphics.setColor(Color.LIGHT_GRAY);
        int n8 = n7;
        graphics.drawRoundRect(n2 + 1, n3 + 1, n4 - 2, n5 - 2, n8, n8);
        if (n6 > 0) {
            graphics.setFont(qo_02.ar.w);
            graphics.drawString(qr.e(n6), n2 + n4 / 2 - qo_02.ar.aa, n3 + n5 / 2 + qo_02.ar.ab);
        }
    }

    final void a(int n2, int n3, int n4, int n5, int n6, int n7) {
        this.n = n7 == 1;
        this.i = new pW(this, n4, n2, "animateX");
        this.j = new pW(this, n5, n3, "animateY");
        this.x = System.currentTimeMillis() + (long)(n6 * 20);
    }

    final void c() {
        if (this.i == null) {
            return;
        }
        long l2 = System.currentTimeMillis();
        long l3 = l2 - this.x;
        if (l3 < 0L) {
            l3 = 0L;
        }
        if (l3 > 10000L) {
        }
        if (this.k & this.d.ar.ah) {
            this.d.ar.ad.repaint(this.w.x - 6, this.w.y - 6, b + 12, c + 12);
        } else {
            this.d.ar.ad.repaint(this.w.x - 3, this.w.y - 3, b + 6, c + 6);
        }
        this.w.setLocation(this.i.a(l3), this.j.a(l3));
        if (this.k & this.d.ar.ah) {
            this.d.ar.ad.repaint(this.w.x - 6, this.w.y - 6, b + 12, c + 12);
        } else {
            this.d.ar.ad.repaint(this.w.x - 2, this.w.y - 2, b + 4, c + 4);
        }
        if (this.i.a && this.j.a) {
            this.n = false;
            this.i = null;
            this.j = null;
        }
    }

    public final Point a(Graphics graphics) {
        Point point = this.h;
        if (this.A) {
            if (this.d.d <= 3) {
                this.d.g("Card " + (this.e * 100 + this.f) + " is dragging");
            }
            point = this.w;
            if (this.d.d <= 3) {
                this.d.g("Paint selected card, origin x " + this.h.x + " start " + this.d.ar.q.x + " end " + this.d.ar.r.x);
            }
            this.w.setLocation(this.h.x + this.d.ar.r.x - this.d.ar.q.x, this.h.y + this.d.ar.r.y - this.d.ar.q.y);
        } else if (this.i != null) {
            point = this.w;
        }
        Graphics2D graphics2D = (Graphics2D)graphics;
        graphics2D.setRenderingHint(RenderingHints.KEY_TEXT_ANTIALIASING, RenderingHints.VALUE_TEXT_ANTIALIAS_GASP);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        int n2 = b / 8;
        if (this.k & !this.d.ar.ah) {
            int n3 = c;
            int n4 = b;
            int n5 = point.y;
            int n6 = point.x;
            Graphics2D graphics2D2 = graphics2D;
            Object object = this;
            int n7 = n3;
            int n8 = n4;
            int n9 = n5;
            int n10 = n6;
            object = graphics2D2;
            double d2 = (double)n8 / 80.0;
            double d3 = d2 * 10.0;
            int n11 = (int)(d2 * 4.0);
            ((Graphics)object).setColor(Color.WHITE);
            ((Graphics)object).fillRoundRect(n10, n9, n8, n7, (int)d3, (int)d3);
            ((Graphics)object).setColor(t);
            ((Graphics)object).fillRect(n10 + n11, n9 + n11, n8 - (n11 << 1), n7 - (n11 << 1));
            ((Graphics)object).setColor(s);
            ((Graphics2D)object).setStroke(new BasicStroke(1.0f));
            ((Graphics)object).drawRect(n10 + (int)(d2 * 4.0), n9 + (int)(d2 * 4.0), n8 - (int)(d2 * 8.0), n7 - (int)(d2 * 8.0));
            ((Graphics)object).drawRect(n10 + (int)(d2 * 8.0), n9 + (int)(d2 * 8.0), n8 - (int)(d2 * 16.0), n7 - (int)(d2 * 16.0));
            double d4 = (double)n4 / 80.0;
            double d5 = (double)n6 + d4 * 8.0;
            double d6 = (double)n5 + d4 * 8.0;
            double d7 = (double)(n6 + n4) - d4 * 8.0;
            double d8 = (double)(n5 + n3) - d4 * 8.0;
            double d9 = d8 - d6;
            double d10 = d9 / 6.0001;
            graphics2D2.setStroke(new BasicStroke(1.0f));
            double d11 = 0.0;
            while (d11 <= d9) {
                double d12 = 0.0;
                while (d12 <= d9) {
                    graphics2D2.drawLine((int)d5, (int)(d6 + (d11 + 0.5)), (int)d7, (int)(d6 + (d12 + 0.5)));
                    d12 += d10;
                }
                d11 += d10;
            }
            graphics2D.setStroke(new BasicStroke(1.0f));
            graphics.setColor(Color.GRAY);
            int n12 = n2;
            graphics.drawRoundRect(point.x, point.y, b, c, n12, n12);
        } else {
            graphics2D.setStroke(new BasicStroke(1.0f));
            graphics.setColor(Color.WHITE);
            int n13 = n2;
            graphics.fillRoundRect(point.x, point.y, b, c, n13, n13);
            if (this.f == 13) {
                graphics.drawImage(this.d.aq.Q.getImage(), point.x + 10, point.y + 8, b - 20, c - 16, null);
            } else if (this.f == 12) {
                graphics.drawImage(this.d.aq.R.getImage(), point.x + 10, point.y + 8, b - 20, c - 16, null);
            } else if (this.f == 11) {
                graphics.drawImage(this.d.aq.S.getImage(), point.x + 10, point.y + 8, b - 20, c - 16, null);
            }
            if (this.k) {
                graphics.setColor(t);
                graphics2D.setStroke(new BasicStroke(4.0f));
                int n14 = n2;
                graphics.drawRoundRect(point.x - 2, point.y - 2, b + 4, c + 4, n14, n14);
            } else if (this.l) {
                graphics.setColor(r);
                graphics2D.setStroke(new BasicStroke(4.0f));
                graphics.drawRoundRect(point.x, point.y, b, c, 10, 10);
                if (this.z) {
                    graphics.setColor(u);
                    graphics2D.setStroke(new BasicStroke(4.0f));
                    int n15 = n2;
                    graphics.drawRoundRect(point.x - 4, point.y - 4, b + 8, c + 8, n15, n15);
                }
            } else if (this.z) {
                graphics.setColor(u);
                graphics2D.setStroke(new BasicStroke(5.0f));
                int n16 = n2;
                graphics.drawRoundRect(point.x, point.y, b, c, n16, n16);
            }
            graphics2D.setStroke(new BasicStroke(1.0f));
            graphics.setColor(Color.GRAY);
            int n17 = n2;
            graphics.drawRoundRect(point.x, point.y, b, c, n17, n17);
            if (this.e == 2 || this.e == 3) {
                graphics.setColor(v);
            } else {
                graphics.setColor(Color.BLACK);
            }
            if (this.f != 0) {
                graphics.setFont(this.d.ar.t);
                graphics.drawString(qr.e(this.e), point.x + this.d.ar.H, point.y + this.d.ar.I);
                graphics.setFont(this.d.ar.v);
                graphics.drawString(qr.e(this.e), point.x + b - this.d.ar.H, point.y + c - this.d.ar.I);
            }
            int n18 = 2;
            switch (this.f) {
                case 0: {
                    n18 = 0;
                    graphics.setFont(this.d.ar.w);
                    graphics.drawString(" ?", point.x + b / 2 - this.d.ar.aa, point.y + c / 2 + this.d.ar.ab);
                    break;
                }
                case 1: {
                    n18 = 0;
                    graphics.setFont(this.d.ar.w);
                    graphics.drawString(qr.e(this.e), point.x + b / 2 - this.d.ar.aa, point.y + c / 2 + this.d.ar.ab);
                    break;
                }
                case 2: {
                    graphics.setFont(this.d.ar.x);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.K, point.y + this.d.ar.P);
                    graphics.setFont(this.d.ar.y);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.N, point.y + this.d.ar.Z);
                    break;
                }
                case 3: {
                    n18 = 1;
                    graphics.setFont(this.d.ar.x);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.K, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.K, point.y + this.d.ar.X);
                    graphics.setFont(this.d.ar.y);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.N, point.y + this.d.ar.Z);
                    break;
                }
                case 4: {
                    n18 = 1;
                    graphics.setFont(this.d.ar.x);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.J, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.L, point.y + this.d.ar.P);
                    graphics.setFont(this.d.ar.y);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.M, point.y + this.d.ar.Z);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.O, point.y + this.d.ar.Z);
                    break;
                }
                case 5: {
                    n18 = 1;
                    graphics.setFont(this.d.ar.x);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.J, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.L, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.K, point.y + this.d.ar.X);
                    graphics.setFont(this.d.ar.y);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.M, point.y + this.d.ar.Z);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.O, point.y + this.d.ar.Z);
                    break;
                }
                case 6: {
                    n18 = 1;
                    graphics.setFont(this.d.ar.x);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.J, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.L, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.J, point.y + this.d.ar.X);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.L, point.y + this.d.ar.X);
                    graphics.setFont(this.d.ar.y);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.M, point.y + this.d.ar.Z);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.O, point.y + this.d.ar.Z);
                    break;
                }
                case 7: {
                    graphics.setFont(this.d.ar.x);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.J, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.L, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.J, point.y + this.d.ar.X);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.L, point.y + this.d.ar.X);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.K, point.y + this.d.ar.W);
                    graphics.setFont(this.d.ar.y);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.M, point.y + this.d.ar.Z);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.O, point.y + this.d.ar.Z);
                    break;
                }
                case 8: {
                    n18 = 1;
                    graphics.setFont(this.d.ar.x);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.J, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.L, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.J, point.y + this.d.ar.X);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.L, point.y + this.d.ar.X);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.K, point.y + this.d.ar.W);
                    graphics.setFont(this.d.ar.y);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.M, point.y + this.d.ar.Z);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.O, point.y + this.d.ar.Z);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.N, point.y + this.d.ar.Y);
                    break;
                }
                case 9: {
                    n18 = 1;
                    graphics.setFont(this.d.ar.x);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.J, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.L, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.J, point.y + this.d.ar.R);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.L, point.y + this.d.ar.R);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.K, point.y + this.d.ar.S);
                    graphics.setFont(this.d.ar.y);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.M, point.y + this.d.ar.T);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.O, point.y + this.d.ar.T);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.M, point.y + this.d.ar.V);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.O, point.y + this.d.ar.V);
                    break;
                }
                case 10: {
                    n18 = -1;
                    graphics.setFont(this.d.ar.x);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.J, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.L, point.y + this.d.ar.P);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.J, point.y + this.d.ar.R);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.L, point.y + this.d.ar.R);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.K, point.y + this.d.ar.Q);
                    graphics.setFont(this.d.ar.y);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.M, point.y + this.d.ar.T);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.O, point.y + this.d.ar.T);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.M, point.y + this.d.ar.V);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.O, point.y + this.d.ar.V);
                    graphics.drawString(qr.e(this.e), point.x + this.d.ar.N, point.y + this.d.ar.U);
                    break;
                }
                case 11: {
                    n18 = 3;
                    break;
                }
                case 12: {
                    n18 = 0;
                    break;
                }
                case 13: {
                    n18 = 0;
                }
            }
            if (this.f == 10) {
                graphics.setFont(this.d.ar.s);
                graphics.drawString("1", point.x + this.d.ar.F + n18, point.y + this.d.ar.G);
                graphics.drawString("0", point.x + this.d.ar.F + this.d.ar.ac + n18, point.y + this.d.ar.G);
                graphics.setFont(this.d.ar.u);
                graphics.drawString("1", point.x + b - this.d.ar.F - n18, point.y + c - this.d.ar.G);
                graphics.drawString("0", point.x + b - this.d.ar.F - this.d.ar.ac - n18, point.y + c - this.d.ar.G);
            } else {
                graphics.setFont(this.d.ar.s);
                graphics.drawString(qr.g(this.f), point.x + this.d.ar.F + n18, point.y + this.d.ar.G);
                graphics.setFont(this.d.ar.u);
                graphics.drawString(qr.g(this.f), point.x + b - this.d.ar.F - n18, point.y + c - this.d.ar.G);
            }
        }
        return point;
    }

    final boolean a(Point point) {
        return this.c(point.x, point.y);
    }

    final boolean c(int n2, int n3) {
        if (this.y.contains(n2, n3)) {
            this.d.g("Hit on card " + (this.e * 100 + this.f));
            return true;
        }
        return false;
    }

    public final String toString() {
        return Integer.toString(this.g);
    }
}

