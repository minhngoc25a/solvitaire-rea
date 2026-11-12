/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import org.knowm.xchart.internal.chartpart.RenderableSeries;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;

public final class XYSeries$XYSeriesRenderStyle
extends Enum
implements RenderableSeries {
    public static final /* enum */ XYSeries$XYSeriesRenderStyle a = new XYSeries$XYSeriesRenderStyle("Line", 0, RenderableSeries$LegendRenderType.a);
    public static final /* enum */ XYSeries$XYSeriesRenderStyle b = new XYSeries$XYSeriesRenderStyle("Area", 1, RenderableSeries$LegendRenderType.a);
    public static final /* enum */ XYSeries$XYSeriesRenderStyle c = new XYSeries$XYSeriesRenderStyle("Step", 2, RenderableSeries$LegendRenderType.a);
    public static final /* enum */ XYSeries$XYSeriesRenderStyle d = new XYSeries$XYSeriesRenderStyle("StepArea", 3, RenderableSeries$LegendRenderType.a);
    public static final /* enum */ XYSeries$XYSeriesRenderStyle e = new XYSeries$XYSeriesRenderStyle("PolygonArea", 4, RenderableSeries$LegendRenderType.c);
    private static /* enum */ XYSeries$XYSeriesRenderStyle f = new XYSeries$XYSeriesRenderStyle("Scatter", 5, RenderableSeries$LegendRenderType.b);
    private final RenderableSeries$LegendRenderType g;

    /*
     * WARNING - Possible parameter corruption
     * WARNING - void declaration
     */
    private XYSeries$XYSeriesRenderStyle() {
        public void var3_2;
        void var2_-1;
        void var1_-1;
        this.g = var3_2;
    }

    public final RenderableSeries$LegendRenderType a() {
        return this.g;
    }

    static {
        XYSeries$XYSeriesRenderStyle[] xYSeries$XYSeriesRenderStyleArray = new XYSeries$XYSeriesRenderStyle[]{a, b, c, d, e, f};
    }
}

