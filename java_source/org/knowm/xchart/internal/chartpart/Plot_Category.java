/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import org.knowm.xchart.CategoryChart;
import org.knowm.xchart.CategorySeries$CategorySeriesRenderStyle;
import org.knowm.xchart.internal.chartpart.PlotContent_Category_Bar;
import org.knowm.xchart.internal.chartpart.PlotContent_Category_Line_Area_Scatter;
import org.knowm.xchart.internal.chartpart.Plot_AxesChart;
import org.knowm.xchart.style.CategoryStyler;

public class Plot_Category
extends Plot_AxesChart {
    public Plot_Category(CategoryChart categoryChart) {
        super(categoryChart);
        CategoryStyler categoryStyler = (CategoryStyler)categoryChart.b();
        if (CategorySeries$CategorySeriesRenderStyle.d.equals(categoryStyler.V()) || CategorySeries$CategorySeriesRenderStyle.e.equals(categoryStyler.V()) || CategorySeries$CategorySeriesRenderStyle.c.equals(categoryStyler.V())) {
            this.e = new PlotContent_Category_Bar(categoryChart);
            return;
        }
        this.e = new PlotContent_Category_Line_Area_Scatter(categoryChart);
    }
}

