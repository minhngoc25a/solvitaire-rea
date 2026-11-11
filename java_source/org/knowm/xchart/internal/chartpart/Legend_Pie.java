/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.geom.Rectangle2D;
import java.util.Map;
import org.knowm.xchart.internal.chartpart.Legend_;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;
import org.knowm.xchart.internal.series.Series;
import org.knowm.xchart.style.Styler$LegendLayout;

public class Legend_Pie
extends Legend_ {
    @Override
    public final void b(Graphics2D graphics2D) {
        double d2 = this.c + (double)this.a.b().aw();
        double d3 = this.d + (double)this.a.b().aw();
        Object object = graphics2D.getRenderingHint(RenderingHints.KEY_ANTIALIASING);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        Map map = this.a.o();
        for (Series series : map.values()) {
            if (!series.v() || !series.w()) continue;
            Map map2 = this.b(series);
            float f2 = Legend_Pie.a(map2, 20);
            Rectangle2D.Double double_ = new Rectangle2D.Double(d2, d3, 20.0, 20.0);
            graphics2D.setColor(series.t());
            graphics2D.fill(double_);
            double d4 = d2 + 20.0 + (double)this.a.b().aw();
            this.a(graphics2D, map2, 20, d4, d3);
            if (this.a.b().az() == Styler$LegendLayout.a) {
                d3 += (double)(f2 + (float)this.a.b().aw());
                continue;
            }
            int n2 = 20;
            if (series.a() == RenderableSeries$LegendRenderType.a) {
                n2 = this.a.b().ax();
            }
            float f3 = this.b(map2, n2);
            d2 += (double)(f3 + (float)this.a.b().aw());
        }
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, object);
    }

    @Override
    public final double a(Series series) {
        return 20.0;
    }
}

