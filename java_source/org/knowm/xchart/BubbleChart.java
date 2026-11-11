/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.Graphics2D;
import java.util.Iterator;
import org.knowm.xchart.BubbleSeries;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.Plot_;
import org.knowm.xchart.internal.series.AxesChartSeries;
import org.knowm.xchart.internal.series.Series;
import org.knowm.xchart.internal.style.SeriesColorMarkerLineStyle;
import org.knowm.xchart.internal.style.SeriesColorMarkerLineStyleCycler;
import org.knowm.xchart.style.BubbleStyler;

public class BubbleChart
extends Chart {
    @Override
    public final void a(Graphics2D graphics2D, int n2, int n3) {
        this.a(n2);
        this.b(n3);
        for (BubbleSeries bubbleSeries : this.o().values()) {
            Object object = bubbleSeries.b();
            if (object != null) continue;
            bubbleSeries.a(((BubbleStyler)this.b()).V());
        }
        Iterator iterator = this;
        SeriesColorMarkerLineStyleCycler seriesColorMarkerLineStyleCycler = new SeriesColorMarkerLineStyleCycler(((BubbleStyler)((Chart)((Object)iterator)).b()).aj(), ((BubbleStyler)((Chart)((Object)iterator)).b()).al(), ((BubbleStyler)((Chart)((Object)iterator)).b()).ak());
        for (Object object : ((Chart)((Object)iterator)).o().values()) {
            SeriesColorMarkerLineStyle seriesColorMarkerLineStyle = seriesColorMarkerLineStyleCycler.a();
            if (((AxesChartSeries)object).b_() == null) {
                ((AxesChartSeries)object).b(seriesColorMarkerLineStyle.c());
            }
            if (((AxesChartSeries)object).c_() == null) {
                ((AxesChartSeries)object).d(seriesColorMarkerLineStyle.a());
            }
            if (((Series)object).t() != null) continue;
            ((Series)object).e(seriesColorMarkerLineStyle.a());
        }
        this.a(graphics2D);
        this.e.a(graphics2D);
        ((Plot_)this.f).a(graphics2D);
        this.b.a(graphics2D);
        this.g.a(graphics2D);
        this.d.forEach(chartPart -> chartPart.a(graphics2D));
    }
}

