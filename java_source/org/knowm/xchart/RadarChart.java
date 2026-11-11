/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.Graphics2D;
import org.knowm.xchart.RadarSeries;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.Plot_;
import org.knowm.xchart.internal.series.AxesChartSeries;
import org.knowm.xchart.internal.series.MarkerSeries;
import org.knowm.xchart.internal.style.SeriesColorMarkerLineStyle;
import org.knowm.xchart.internal.style.SeriesColorMarkerLineStyleCycler;
import org.knowm.xchart.style.RadarStyler;

public class RadarChart
extends Chart {
    @Override
    public final void a(Graphics2D graphics2D, int n2, int n3) {
        this.a(n2);
        this.b(n3);
        RadarChart radarChart = this;
        SeriesColorMarkerLineStyleCycler seriesColorMarkerLineStyleCycler = new SeriesColorMarkerLineStyleCycler(((RadarStyler)radarChart.b()).aj(), ((RadarStyler)radarChart.b()).al(), ((RadarStyler)radarChart.b()).ak());
        for (RadarSeries radarSeries : radarChart.o().values()) {
            SeriesColorMarkerLineStyle seriesColorMarkerLineStyle = seriesColorMarkerLineStyleCycler.a();
            if (((AxesChartSeries)radarSeries).b_() == null) {
                radarSeries.a(seriesColorMarkerLineStyle.c());
            }
            if (((AxesChartSeries)radarSeries).c_() == null) {
                radarSeries.a(seriesColorMarkerLineStyle.a());
            }
            if (radarSeries.t() == null) {
                radarSeries.e(seriesColorMarkerLineStyle.a());
            }
            if (((MarkerSeries)radarSeries).d_() == null) {
                radarSeries.a(seriesColorMarkerLineStyle.b());
            }
            if (((MarkerSeries)radarSeries).g() != null) continue;
            radarSeries.b(seriesColorMarkerLineStyle.a());
        }
        this.a(graphics2D);
        ((Plot_)this.f).a(graphics2D);
        this.b.a(graphics2D);
        this.g.a(graphics2D);
        this.d.forEach(chartPart -> chartPart.a(graphics2D));
    }
}

