/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.Graphics2D;
import java.util.Iterator;
import org.knowm.xchart.XYSeries;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.Plot_;
import org.knowm.xchart.internal.series.AxesChartSeries;
import org.knowm.xchart.internal.series.MarkerSeries;
import org.knowm.xchart.internal.series.Series;
import org.knowm.xchart.internal.style.SeriesColorMarkerLineStyle;
import org.knowm.xchart.internal.style.SeriesColorMarkerLineStyleCycler;
import org.knowm.xchart.style.XYStyler;

public class XYChart
extends Chart {
    @Override
    public final void a(Graphics2D graphics2D, int n2, int n3) {
        this.a(n2);
        this.b(n3);
        for (XYSeries xYSeries : this.o().values()) {
            Object object = xYSeries.h();
            if (object != null) continue;
            xYSeries.a(((XYStyler)this.b()).V());
        }
        Iterator iterator = this;
        SeriesColorMarkerLineStyleCycler seriesColorMarkerLineStyleCycler = new SeriesColorMarkerLineStyleCycler(((XYStyler)((Chart)((Object)iterator)).b()).aj(), ((XYStyler)((Chart)((Object)iterator)).b()).al(), ((XYStyler)((Chart)((Object)iterator)).b()).ak());
        for (Object object : ((Chart)((Object)iterator)).o().values()) {
            SeriesColorMarkerLineStyle seriesColorMarkerLineStyle = seriesColorMarkerLineStyleCycler.a();
            if (((AxesChartSeries)object).b_() == null) {
                ((AxesChartSeries)object).b(seriesColorMarkerLineStyle.c());
            }
            if (((AxesChartSeries)object).c_() == null) {
                ((AxesChartSeries)object).d(seriesColorMarkerLineStyle.a());
            }
            if (((Series)object).t() == null) {
                ((Series)object).e(seriesColorMarkerLineStyle.a());
            }
            if (((MarkerSeries)object).d_() == null) {
                ((MarkerSeries)object).b(seriesColorMarkerLineStyle.b());
            }
            if (((MarkerSeries)object).g() != null) continue;
            ((MarkerSeries)object).c(seriesColorMarkerLineStyle.a());
        }
        this.a(graphics2D);
        this.e.a(graphics2D);
        ((Plot_)this.f).a(graphics2D);
        this.b.a(graphics2D);
        this.g.a(graphics2D);
        this.d.forEach(chartPart -> chartPart.a(graphics2D));
    }
}

