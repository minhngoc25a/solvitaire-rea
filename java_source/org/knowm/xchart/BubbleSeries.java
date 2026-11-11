/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import org.knowm.xchart.BubbleSeries$BubbleSeriesRenderStyle;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;
import org.knowm.xchart.internal.series.NoMarkersSeries;

public class BubbleSeries
extends NoMarkersSeries {
    private BubbleSeries$BubbleSeriesRenderStyle i;

    public final BubbleSeries$BubbleSeriesRenderStyle b() {
        return this.i;
    }

    public final void a(BubbleSeries$BubbleSeriesRenderStyle bubbleSeriesRenderStyle) {
        this.i = bubbleSeriesRenderStyle;
    }

    @Override
    public final RenderableSeries$LegendRenderType a() {
        return this.i.a();
    }
}

