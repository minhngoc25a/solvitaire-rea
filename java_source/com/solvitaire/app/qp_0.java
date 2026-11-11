/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qo_0;
import com.solvitaire.app.qq_0;
import java.awt.Point;

/*
 * Renamed from com.solvitaire.app.qp
 */
final class qp_0 {
    private qq_0 c = null;
    private qq_0 d = null;
    private Point e = new Point();
    private Point f = null;
    private boolean g = false;
    boolean a = false;
    private int h;
    final /* synthetic */ qo_0 b;

    qp_0(qo_0 qo_02, double d2, double d3) {
        this.b = qo_02;
        qo_02.b(this.e);
        this.c = new qq_0(this, d2, this.e.x, "x");
        this.d = new qq_0(this, d3, this.e.y, "y");
        this.h = (int)(5.0 * qo_02.F.w);
    }

    final boolean a() {
        int n2;
        Point point = new Point();
        this.b.b(point);
        if (this.f != null && (Math.abs(this.f.x - point.x) > this.h || Math.abs(this.f.y - point.y) > this.h)) {
            if (!this.b.aV) {
                this.a = true;
            }
            this.b.g("Detected a mouse fight, pos " + point.x + "," + point.y + " last pos " + this.f.x + "," + this.f.y);
        }
        int n3 = point.x - this.e.x;
        int n4 = point.y - this.e.y;
        if (!this.g) {
            double d2;
            int n5 = n3;
            int n6 = n4;
            double d3 = n5 * n5 + n6 * n6;
            if (d2 > 256.0) {
                this.g = true;
                this.c.a += n3 + this.b.bb;
                this.d.a += n4 + this.b.bb;
                n2 = this.b.F.r.a.x + this.b.F.r.a.width;
                int n7 = this.b.F.r.a.y + this.b.F.r.a.height;
                if (this.c.a < 0) {
                    this.b.g("Invalid mouse target " + this.c.a + "," + this.d.a + " set to 0," + this.d.a);
                    this.c.a = 0;
                }
                if (this.d.a < 0) {
                    this.b.g("Invalid mouse target " + this.c.a + "," + this.d.a + " set to " + this.c.a + ",0");
                    this.d.a = 0;
                }
                if (this.c.a > n2) {
                    this.b.g("Invalid mouse target " + this.c.a + "," + this.d.a + " set to " + (n2 - 1) + "," + this.d.a);
                    this.c.a = n2 - 1;
                }
                if (this.d.a > n7) {
                    this.b.g("Invalid mouse target " + this.c.a + "," + this.d.a + " set to " + this.c.a + "," + (n7 - 1));
                    this.d.a = n7 - 1;
                }
            }
        }
        int n8 = this.c.a(n3);
        int n9 = this.d.a(n4);
        this.f = new Point();
        this.b.b(this.f);
        while (this.f.x != n8 || this.f.y != n9) {
            this.b.a(n8, n9);
            this.b.a(2L, "Wait for move to take effect");
            this.b.b(this.f);
        }
        n2 = this.c.b && this.d.b ? 0 : 1;
        return n2 != 0;
    }
}

