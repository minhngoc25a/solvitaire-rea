/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import org.knowm.xchart.PieSeries$PieSeriesRenderStyle;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;
import org.knowm.xchart.internal.series.Series;

public class PieSeries
extends Series {
    private PieSeries$PieSeriesRenderStyle a;

    public final PieSeries$PieSeriesRenderStyle c() {
        return this.a;
    }

    public final PieSeries a(PieSeries$PieSeriesRenderStyle pieSeries$PieSeriesRenderStyle) {
        this.a = pieSeries$PieSeriesRenderStyle;
        return this;
    }

    @Override
    public final RenderableSeries$LegendRenderType a() {
        return null;
    }
}

