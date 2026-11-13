/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.engine;

import com.solvitaire.solitaire.util.pW;
import com.solvitaire.solitaire.engine.CardRun;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import com.solvitaire.solitaire.solver.SolitaireSolver;
import com.solvitaire.solitaire.engine.Card;
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Point;
import java.awt.Rectangle;
import java.awt.RenderingHints;

public final class CardImage {
    public boolean AboutDialog = false;
    static int b = 80;
    static int c = 110;
    private static final Color rPanel = new Color(0xFFFF00);
    private static final Color s = new Color(3166384);
    private static final Color t = new Color(6861055);
    private static final Color uPanel = new Color(0xC0C0C0);
    private static final Color v = new Color(0xE00800);
    public SolitaireGameEngine d;
    int e;
    int f;
    public int g;
    public Point h = new Point();
    private Point wHandler = new Point();
    public pW i = null;
    public pW j = null;
    private long xHandler;
    boolean k;
    boolean l;
    int m;
    private Rectangle yHandler;
    private boolean z;
    private boolean A;
    boolean n;
    public Card o;
    public CardRun p;
    int q;

    static {
        new Point(0, 0);
    }

    public CardImage(SolitaireGameEngine qo_02) {
        this.d = qo_02;
    }

    final void AboutDialog(boolean bl2) {
        if (bl2 != this.z) {
            this.z = bl2;
            this.d(true);
        }
    }

    final boolean AboutDialog() {
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

    public final void AboutDialog(int n2) {
        this.g = n2;
        this.f = n2 % 100;
        this.e = n2 / 100;
    }

    final void AboutDialog(int n2, int n3) {
        this.h.setLocation(n2, n3);
        this.yHandler = new Rectangle(n2, n3, b, c);
    }

    final Point b(int n2, int n3) {
        return new Point(this.h.xHandler + b / 2 + n2 - this.d.ar.q.xHandler, this.h.yHandler + c / 8 + n3 - this.d.ar.q.yHandler);
    }

    final void b(int n2) {
        this.l = true;
        this.AboutDialog(n2);
    }

    final void c(boolean bl2) {
        if (this.k != bl2) {
            this.k = bl2;
            this.d(false);
        }
    }

    private void d(boolean bl2) {
        int n2 = bl2 ? 6 : 2;
        this.d.ar.ad.repaint(this.wHandler.xHandler - n2, this.wHandler.yHandler - n2, b + (n2 << 1), c + (n2 << 1));
    }

    static void AboutDialog(Graphics graphics, SolitaireGameEngine qo_02, int n2, int n3, int n4, int n5, int n6) {
        Graphics2D graphics2D = (Graphics2D)graphics;
        graphics2D.setRenderingHint(RenderingHints.KEY_TEXT_ANTIALIASING, RenderingHints.VALUE_TEXT_ANTIALIAS_GASP);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        int n7 = n4 / 8;
        graphics2D.setStroke(new BasicStroke(1.0f));
        graphics.setColor(Color.LIGHT_GRAY);
        int n8 = n7;
        graphics.drawRoundRect(n2 + 1, n3 + 1, n4 - 2, n5 - 2, n8, n8);
        if (n6 > 0) {
            graphics.setFont(qo_02.ar.wHandler);
            graphics.drawString(SolitaireSolver.e(n6), n2 + n4 / 2 - qo_02.ar.aa, n3 + n5 / 2 + qo_02.ar.ab);
        }
    }

    final void AboutDialog(int n2, int n3, int n4, int n5, int n6, int n7) {
        this.n = n7 == 1;
        this.i = new pW(this, n4, n2, "animateX");
        this.j = new pW(this, n5, n3, "animateY");
        this.xHandler = System.currentTimeMillis() + (long)(n6 * 20);
    }

    final void c() {
        if (this.i == null) {
            return;
        }
        long l2 = System.currentTimeMillis();
        long l3 = l2 - this.xHandler;
        if (l3 < 0L) {
            l3 = 0L;
        }
        if (l3 > 10000L) {
        }
        if (this.k & this.d.ar.ah) {
            this.d.ar.ad.repaint(this.wHandler.xHandler - 6, this.wHandler.yHandler - 6, b + 12, c + 12);
        } else {
            this.d.ar.ad.repaint(this.wHandler.xHandler - 3, this.wHandler.yHandler - 3, b + 6, c + 6);
        }
        this.wHandler.setLocation(this.i.AboutDialog(l3), this.j.AboutDialog(l3));
        if (this.k & this.d.ar.ah) {
            this.d.ar.ad.repaint(this.wHandler.xHandler - 6, this.wHandler.yHandler - 6, b + 12, c + 12);
        } else {
            this.d.ar.ad.repaint(this.wHandler.xHandler - 2, this.wHandler.yHandler - 2, b + 4, c + 4);
        }
        if (this.i.AboutDialog && this.j.AboutDialog) {
            this.n = false;
            this.i = null;
            this.j = null;
        }
    }

    public final Point AboutDialog(Graphics graphics) {
        Point point = this.h;
        if (this.A) {
            if (this.d.d <= 3) {
                this.d.g("Card " + (this.e * 100 + this.f) + " is dragging");
            }
            point = this.wHandler;
            if (this.d.d <= 3) {
                this.d.g("Paint selected card, origin xHandler " + this.h.xHandler + " start " + this.d.ar.q.xHandler + " end " + this.d.ar.rPanel.xHandler);
            }
            this.wHandler.setLocation(this.h.xHandler + this.d.ar.rPanel.xHandler - this.d.ar.q.xHandler, this.h.yHandler + this.d.ar.rPanel.yHandler - this.d.ar.q.yHandler);
        } else if (this.i != null) {
            point = this.wHandler;
        }
        Graphics2D graphics2D = (Graphics2D)graphics;
        graphics2D.setRenderingHint(RenderingHints.KEY_TEXT_ANTIALIASING, RenderingHints.VALUE_TEXT_ANTIALIAS_GASP);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        int n2 = b / 8;
        if (this.k & !this.d.ar.ah) {
            int n3 = c;
            int n4 = b;
            int n5 = point.yHandler;
            int n6 = point.xHandler;
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
            graphics.drawRoundRect(point.xHandler, point.yHandler, b, c, n12, n12);
        } else {
            graphics2D.setStroke(new BasicStroke(1.0f));
            graphics.setColor(Color.WHITE);
            int n13 = n2;
            graphics.fillRoundRect(point.xHandler, point.yHandler, b, c, n13, n13);
            if (this.f == 13) {
                graphics.drawImage(this.d.aq.Q.getImage(), point.xHandler + 10, point.yHandler + 8, b - 20, c - 16, null);
            } else if (this.f == 12) {
                graphics.drawImage(this.d.aq.R.getImage(), point.xHandler + 10, point.yHandler + 8, b - 20, c - 16, null);
            } else if (this.f == 11) {
                graphics.drawImage(this.d.aq.SPanel.getImage(), point.xHandler + 10, point.yHandler + 8, b - 20, c - 16, null);
            }
            if (this.k) {
                graphics.setColor(t);
                graphics2D.setStroke(new BasicStroke(4.0f));
                int n14 = n2;
                graphics.drawRoundRect(point.xHandler - 2, point.yHandler - 2, b + 4, c + 4, n14, n14);
            } else if (this.l) {
                graphics.setColor(rPanel);
                graphics2D.setStroke(new BasicStroke(4.0f));
                graphics.drawRoundRect(point.xHandler, point.yHandler, b, c, 10, 10);
                if (this.z) {
                    graphics.setColor(uPanel);
                    graphics2D.setStroke(new BasicStroke(4.0f));
                    int n15 = n2;
                    graphics.drawRoundRect(point.xHandler - 4, point.yHandler - 4, b + 8, c + 8, n15, n15);
                }
            } else if (this.z) {
                graphics.setColor(uPanel);
                graphics2D.setStroke(new BasicStroke(5.0f));
                int n16 = n2;
                graphics.drawRoundRect(point.xHandler, point.yHandler, b, c, n16, n16);
            }
            graphics2D.setStroke(new BasicStroke(1.0f));
            graphics.setColor(Color.GRAY);
            int n17 = n2;
            graphics.drawRoundRect(point.xHandler, point.yHandler, b, c, n17, n17);
            if (this.e == 2 || this.e == 3) {
                graphics.setColor(v);
            } else {
                graphics.setColor(Color.BLACK);
            }
            if (this.f != 0) {
                graphics.setFont(this.d.ar.t);
                graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.H, point.yHandler + this.d.ar.I);
                graphics.setFont(this.d.ar.v);
                graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + b - this.d.ar.H, point.yHandler + c - this.d.ar.I);
            }
            int n18 = 2;
            switch (this.f) {
                case 0: {
                    n18 = 0;
                    graphics.setFont(this.d.ar.wHandler);
                    graphics.drawString(" ?", point.xHandler + b / 2 - this.d.ar.aa, point.yHandler + c / 2 + this.d.ar.ab);
                    break;
                }
                case 1: {
                    n18 = 0;
                    graphics.setFont(this.d.ar.wHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + b / 2 - this.d.ar.aa, point.yHandler + c / 2 + this.d.ar.ab);
                    break;
                }
                case 2: {
                    graphics.setFont(this.d.ar.xHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.KHandler, point.yHandler + this.d.ar.PPanel);
                    graphics.setFont(this.d.ar.yHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.NHandler, point.yHandler + this.d.ar.Z);
                    break;
                }
                case 3: {
                    n18 = 1;
                    graphics.setFont(this.d.ar.xHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.KHandler, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.KHandler, point.yHandler + this.d.ar.X);
                    graphics.setFont(this.d.ar.yHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.NHandler, point.yHandler + this.d.ar.Z);
                    break;
                }
                case 4: {
                    n18 = 1;
                    graphics.setFont(this.d.ar.xHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.J, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.LHandler, point.yHandler + this.d.ar.PPanel);
                    graphics.setFont(this.d.ar.yHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.MHandler, point.yHandler + this.d.ar.Z);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.OHandler, point.yHandler + this.d.ar.Z);
                    break;
                }
                case 5: {
                    n18 = 1;
                    graphics.setFont(this.d.ar.xHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.J, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.LHandler, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.KHandler, point.yHandler + this.d.ar.X);
                    graphics.setFont(this.d.ar.yHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.MHandler, point.yHandler + this.d.ar.Z);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.OHandler, point.yHandler + this.d.ar.Z);
                    break;
                }
                case 6: {
                    n18 = 1;
                    graphics.setFont(this.d.ar.xHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.J, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.LHandler, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.J, point.yHandler + this.d.ar.X);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.LHandler, point.yHandler + this.d.ar.X);
                    graphics.setFont(this.d.ar.yHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.MHandler, point.yHandler + this.d.ar.Z);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.OHandler, point.yHandler + this.d.ar.Z);
                    break;
                }
                case 7: {
                    graphics.setFont(this.d.ar.xHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.J, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.LHandler, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.J, point.yHandler + this.d.ar.X);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.LHandler, point.yHandler + this.d.ar.X);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.KHandler, point.yHandler + this.d.ar.W);
                    graphics.setFont(this.d.ar.yHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.MHandler, point.yHandler + this.d.ar.Z);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.OHandler, point.yHandler + this.d.ar.Z);
                    break;
                }
                case 8: {
                    n18 = 1;
                    graphics.setFont(this.d.ar.xHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.J, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.LHandler, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.J, point.yHandler + this.d.ar.X);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.LHandler, point.yHandler + this.d.ar.X);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.KHandler, point.yHandler + this.d.ar.W);
                    graphics.setFont(this.d.ar.yHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.MHandler, point.yHandler + this.d.ar.Z);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.OHandler, point.yHandler + this.d.ar.Z);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.NHandler, point.yHandler + this.d.ar.Y);
                    break;
                }
                case 9: {
                    n18 = 1;
                    graphics.setFont(this.d.ar.xHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.J, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.LHandler, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.J, point.yHandler + this.d.ar.R);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.LHandler, point.yHandler + this.d.ar.R);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.KHandler, point.yHandler + this.d.ar.SPanel);
                    graphics.setFont(this.d.ar.yHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.MHandler, point.yHandler + this.d.ar.T);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.OHandler, point.yHandler + this.d.ar.T);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.MHandler, point.yHandler + this.d.ar.V);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.OHandler, point.yHandler + this.d.ar.V);
                    break;
                }
                case 10: {
                    n18 = -1;
                    graphics.setFont(this.d.ar.xHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.J, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.LHandler, point.yHandler + this.d.ar.PPanel);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.J, point.yHandler + this.d.ar.R);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.LHandler, point.yHandler + this.d.ar.R);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.KHandler, point.yHandler + this.d.ar.Q);
                    graphics.setFont(this.d.ar.yHandler);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.MHandler, point.yHandler + this.d.ar.T);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.OHandler, point.yHandler + this.d.ar.T);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.MHandler, point.yHandler + this.d.ar.V);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.OHandler, point.yHandler + this.d.ar.V);
                    graphics.drawString(SolitaireSolver.e(this.e), point.xHandler + this.d.ar.NHandler, point.yHandler + this.d.ar.U);
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
                graphics.drawString("1", point.xHandler + this.d.ar.FPanel + n18, point.yHandler + this.d.ar.G);
                graphics.drawString("0", point.xHandler + this.d.ar.FPanel + this.d.ar.ac + n18, point.yHandler + this.d.ar.G);
                graphics.setFont(this.d.ar.uPanel);
                graphics.drawString("1", point.xHandler + b - this.d.ar.FPanel - n18, point.yHandler + c - this.d.ar.G);
                graphics.drawString("0", point.xHandler + b - this.d.ar.FPanel - this.d.ar.ac - n18, point.yHandler + c - this.d.ar.G);
            } else {
                graphics.setFont(this.d.ar.s);
                graphics.drawString(SolitaireSolver.g(this.f), point.xHandler + this.d.ar.FPanel + n18, point.yHandler + this.d.ar.G);
                graphics.setFont(this.d.ar.uPanel);
                graphics.drawString(SolitaireSolver.g(this.f), point.xHandler + b - this.d.ar.FPanel - n18, point.yHandler + c - this.d.ar.G);
            }
        }
        return point;
    }

    final boolean AboutDialog(Point point) {
        return this.c(point.xHandler, point.yHandler);
    }

    final boolean c(int n2, int n3) {
        if (this.yHandler.contains(n2, n3)) {
            this.d.g("Hit on card " + (this.e * 100 + this.f));
            return true;
        }
        return false;
    }

    public final String toString() {
        return Integer.toString(this.g);
    }
}

