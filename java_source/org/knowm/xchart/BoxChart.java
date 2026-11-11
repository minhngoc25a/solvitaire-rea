/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.Graphics2D;
import org.knowm.xchart.BoxSeries;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.Plot_;
import org.knowm.xchart.internal.style.SeriesColorMarkerLineStyle;
import org.knowm.xchart.internal.style.SeriesColorMarkerLineStyleCycler;
import org.knowm.xchart.style.BoxStyler;

public class BoxChart
extends Chart {
    @Override
    public final void a(Graphics2D graphics2D, int n2, int n3) {
        this.a(n2);
        this.b(n3);
        BoxChart boxChart = this;
        Object object = new SeriesColorMarkerLineStyleCycler(((BoxStyler)boxChart.b()).aj(), ((BoxStyler)boxChart.b()).al(), ((BoxStyler)boxChart.b()).ak());
        object = ((SeriesColorMarkerLineStyleCycler)object).a();
        for (BoxSeries boxSeries : boxChart.o().values()) {
            if (boxSeries.b_() == null) {
                boxSeries.b(((SeriesColorMarkerLineStyle)object).c());
            }
            if (boxSeries.c_() == null) {
                boxSeries.d(((SeriesColorMarkerLineStyle)object).a());
            }
            if (boxSeries.t() == null) {
                boxSeries.e(((SeriesColorMarkerLineStyle)object).a());
            }
            if (boxSeries.d_() == null) {
                boxSeries.b(((SeriesColorMarkerLineStyle)object).b());
            }
            if (boxSeries.g() != null) continue;
            boxSeries.c(((SeriesColorMarkerLineStyle)object).a());
        }
        this.a(graphics2D);
        this.e.a(graphics2D);
        ((Plot_)this.f).a(graphics2D);
        this.b.a(graphics2D);
        this.d.forEach(chartPart -> chartPart.a(graphics2D));
    }
}

