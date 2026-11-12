/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import org.knowm.xchart.internal.chartpart.RenderableSeries;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;

public final class BubbleSeries$BubbleSeriesRenderStyle
extends Enum
implements RenderableSeries {
    public static final /* enum */ BubbleSeries$BubbleSeriesRenderStyle a = new BubbleSeries$BubbleSeriesRenderStyle("Round", 0, RenderableSeries$LegendRenderType.c);
    private final RenderableSeries$LegendRenderType b;

    /*
     * WARNING - void declaration
     */
    private BubbleSeries$BubbleSeriesRenderStyle() {
        public void var3_2;
        void var1_-1;
        this.b = var3_2;
    }

    public final RenderableSeries$LegendRenderType a() {
        return this.b;
    }

    static {
        (new BubbleSeries$BubbleSeriesRenderStyle[1])[0] = a;
    }
}

