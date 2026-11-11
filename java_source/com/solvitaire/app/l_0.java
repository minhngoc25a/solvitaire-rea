/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.k_0;
import com.solvitaire.app.o_0;
import com.solvitaire.app.qu;
import com.solvitaire.app.qv;
import com.solvitaire.app.u;
import java.awt.Point;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.geom.Rectangle2D;
import java.util.ArrayList;
import java.util.Iterator;

/*
 * Renamed from com.solvitaire.app.l
 */
final class l_0
extends MouseAdapter {
    private /* synthetic */ k_0 a;

    l_0(k_0 k_02) {
        this.a = k_02;
    }

    @Override
    public final void mouseClicked(MouseEvent serializable) {
        boolean bl2 = true;
        if (this.a.b.aY == null) {
            return;
        }
        if (this.a.b.aY.a == null) {
            return;
        }
        if (this.a.b.F.a == null) {
            return;
        }
        if (((MouseEvent)serializable).getButton() == 1 || ((MouseEvent)serializable).getButton() == 3) {
            Object object;
            if (((MouseEvent)serializable).getButton() == 3) {
                bl2 = false;
            }
            serializable = ((MouseEvent)serializable).getPoint();
            this.a.b.g("Clicked at " + ((Point)serializable).x + "," + ((Point)serializable).y);
            Point point = new Point();
            new Point().x = (int)this.a.b.c((double)((Point)serializable).x);
            point.y = (int)(this.a.b.d((double)((Point)serializable).y) + this.a.b.F.t.a());
            serializable = new ArrayList();
            int n2 = this.a.b.aY.a.length - 1;
            while (n2 >= 0) {
                object = this.a.b.aY.a[n2];
                if (object != null && ((qv)object).g != null) {
                    qu[] quArray = ((qv)object).f;
                    int n3 = ((qv)object).f.length;
                    int n4 = 0;
                    while (n4 < n3) {
                        qu qu2 = quArray[n4];
                        Rectangle2D.Double double_ = qu2.l();
                        if ((((qv)object).d & 0x10) != 0 && this.a.b.F.c()) {
                            double_.x -= this.a.b.F.b * 0.45;
                        }
                        if (double_.contains(point)) {
                            ((ArrayList)serializable).add(new o_0(this.a, qu2, false));
                            if ((qu2.b.d & 0x40) != 0) {
                                ((ArrayList)serializable).add(new o_0(this.a, qu2, true));
                            }
                            if (bl2) break;
                        }
                        ++n4;
                    }
                    if (bl2 && ((ArrayList)serializable).size() > 0) break;
                }
                --n2;
            }
            if (((ArrayList)serializable).size() > 0) {
                n2 = 0;
                if (((ArrayList)serializable).size() > 1) {
                    object = "";
                    int n5 = 0;
                    Iterator iterator = ((ArrayList)serializable).iterator();
                    while (iterator.hasNext()) {
                        o_0 o_02 = (o_0)iterator.next();
                        object = (String)object + String.format("%d = %s %s\n", n5, o_02.a, o_02.b ? "inverted" : "");
                        ++n5;
                    }
                    n2 = this.a.b.aq.e("More than one stack at that location", "Choose stack id from the following:\n" + (String)object);
                    if (n2 > ((ArrayList)serializable).size() - 1 || n2 < 0) {
                        n2 = 0;
                    }
                }
                object = (o_0)((ArrayList)serializable).get(n2);
                this.a.b.g("Clicked on stack:" + String.valueOf(((o_0)object).a) + " inverted? " + ((o_0)object).b);
                this.a.a.setVisible(false);
                this.a.a.dispose();
                this.a.b.a(500L);
                this.a.b.aD.a();
                new u(this.a.b, ((o_0)object).a.b, ((o_0)object).a.c, point, ((o_0)object).b);
                return;
            }
        }
    }
}

