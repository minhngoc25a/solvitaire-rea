/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import org.knowm.xchart.internal.chartpart.RenderableSeries;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;

public final class OHLCSeries$OHLCSeriesRenderStyle
extends Enum
implements RenderableSeries {
    public static final /* enum */ OHLCSeries$OHLCSeriesRenderStyle a = new OHLCSeries$OHLCSeriesRenderStyle("Candle", 0, RenderableSeries$LegendRenderType.a);
    private static /* enum */ OHLCSeries$OHLCSeriesRenderStyle c = new OHLCSeries$OHLCSeriesRenderStyle("HiLo", 1, RenderableSeries$LegendRenderType.a);
    public static final /* enum */ OHLCSeries$OHLCSeriesRenderStyle b = new OHLCSeries$OHLCSeriesRenderStyle("Line", 2, RenderableSeries$LegendRenderType.a);
    private final RenderableSeries$LegendRenderType d;

    /*
     * WARNING - Possible parameter corruption
     * WARNING - void declaration
     */
    private OHLCSeries$OHLCSeriesRenderStyle() {
        void var3_2;
        void var2_-1;
        void var1_-1;
        this.d = var3_2;
    }

    public final RenderableSeries$LegendRenderType a() {
        return this.d;
    }

    static {
        OHLCSeries$OHLCSeriesRenderStyle[] oHLCSeries$OHLCSeriesRenderStyleArray = new OHLCSeries$OHLCSeriesRenderStyle[]{a, c, b};
    }
}

