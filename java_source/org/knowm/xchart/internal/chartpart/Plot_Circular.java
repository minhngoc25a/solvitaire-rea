/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.geom.Rectangle2D;
import org.knowm.xchart.internal.chartpart.Plot_;
import org.knowm.xchart.style.Styler$LegendPosition;

public abstract class Plot_Circular
extends Plot_ {
    @Override
    public final void a(Graphics2D graphics2D) {
        double d2 = this.a.b().ai();
        double d3 = this.a.g().a().getHeight() + (double)this.a.b().ai();
        double d4 = (double)this.a.c() - (this.a.b().ay() == Styler$LegendPosition.a ? this.a.h().a().getWidth() : 0.0) - (double)(2 * this.a.b().ai()) - (double)(this.a.b().ay() == Styler$LegendPosition.a && this.a.b().as() ? this.a.b().ai() : 0);
        double d5 = (double)this.a.d() - this.a.g().a().getHeight() - (this.a.b().ay() == Styler$LegendPosition.h ? this.a.h().a().getHeight() : 0.0) - (double)(2 * this.a.b().ai());
        this.c = new Rectangle2D.Double(d2, d3, d4, d5);
        super.a(graphics2D);
    }
}

