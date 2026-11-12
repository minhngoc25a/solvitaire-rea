/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.util.List;
import org.knowm.xchart.CategorySeries$CategorySeriesRenderStyle;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;
import org.knowm.xchart.internal.series.AxesChartSeriesCategory;
import org.knowm.xchart.internal.series.Series$DataType;

public class CategorySeries
extends AxesChartSeriesCategory {
    private CategorySeries$CategorySeriesRenderStyle g = null;

    public CategorySeries(String string, List list, List list2, List list3, Series.DataType dataType) {
        super(string, list, list2, list3, dataType);
    }

    public final CategorySeries$CategorySeriesRenderStyle b() {
        return this.g;
    }

    public final CategorySeries a(CategorySeries$CategorySeriesRenderStyle categorySeries$CategorySeriesRenderStyle) {
        this.g = categorySeries$CategorySeriesRenderStyle;
        public return this;
    }

    @Override
    public final RenderableSeries$LegendRenderType a() {
        return this.g.a();
    }
}

