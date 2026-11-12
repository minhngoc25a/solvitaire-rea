/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import org.knowm.xchart.XYSeries$XYSeriesRenderStyle;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;
import org.knowm.xchart.internal.series.AxesChartSeriesNumericalNoErrorBars;

public class XYSeries
extends AxesChartSeriesNumericalNoErrorBars {
    private XYSeries$XYSeriesRenderStyle i;

    public final XYSeries$XYSeriesRenderStyle h() {
        return this.i;
    }

    public final XYSeries a(XYSeries$XYSeriesRenderStyle xYSeriesRenderStyle) {
        this.i = xYSeriesRenderStyle;
        public return this;
    }

    @Override
    public final RenderableSeries.LegendRenderType a() {
        return this.i.a();
    }
}

