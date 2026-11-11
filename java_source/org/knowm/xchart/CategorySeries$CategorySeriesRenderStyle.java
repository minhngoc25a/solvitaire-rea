/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import org.knowm.xchart.internal.chartpart.RenderableSeries;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;

public final class CategorySeries$CategorySeriesRenderStyle
extends Enum
implements RenderableSeries {
    public static final /* enum */ CategorySeries$CategorySeriesRenderStyle a = new CategorySeries$CategorySeriesRenderStyle("Line", 0, RenderableSeries$LegendRenderType.a);
    public static final /* enum */ CategorySeries$CategorySeriesRenderStyle b = new CategorySeries$CategorySeriesRenderStyle("Area", 1, RenderableSeries$LegendRenderType.a);
    private static /* enum */ CategorySeries$CategorySeriesRenderStyle f = new CategorySeries$CategorySeriesRenderStyle("Scatter", 2, RenderableSeries$LegendRenderType.b);
    public static final /* enum */ CategorySeries$CategorySeriesRenderStyle c = new CategorySeries$CategorySeriesRenderStyle("SteppedBar", 3, RenderableSeries$LegendRenderType.c);
    public static final /* enum */ CategorySeries$CategorySeriesRenderStyle d = new CategorySeries$CategorySeriesRenderStyle("Bar", 4, RenderableSeries$LegendRenderType.d);
    public static final /* enum */ CategorySeries$CategorySeriesRenderStyle e = new CategorySeries$CategorySeriesRenderStyle("Stick", 5, RenderableSeries$LegendRenderType.a);
    private final RenderableSeries$LegendRenderType g;

    /*
     * WARNING - Possible parameter corruption
     * WARNING - void declaration
     */
    private CategorySeries$CategorySeriesRenderStyle() {
        void var3_2;
        void var2_-1;
        void var1_-1;
        this.g = var3_2;
    }

    public final RenderableSeries$LegendRenderType a() {
        return this.g;
    }

    static {
        CategorySeries$CategorySeriesRenderStyle[] categorySeries$CategorySeriesRenderStyleArray = new CategorySeries$CategorySeriesRenderStyle[]{a, b, f, c, d, e};
    }
}

