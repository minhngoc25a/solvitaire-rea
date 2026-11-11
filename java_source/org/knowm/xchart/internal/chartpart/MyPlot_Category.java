/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import org.knowm.xchart.CategorySeries$CategorySeriesRenderStyle;
import org.knowm.xchart.MyCategoryChart;
import org.knowm.xchart.internal.chartpart.MyPlotContent_Category_Bar;
import org.knowm.xchart.internal.chartpart.MyToolTips;
import org.knowm.xchart.internal.chartpart.PlotContent_Category_Line_Area_Scatter;
import org.knowm.xchart.internal.chartpart.Plot_AxesChart;
import org.knowm.xchart.style.CategoryStyler;

public class MyPlot_Category
extends Plot_AxesChart {
    public MyPlot_Category(MyCategoryChart myCategoryChart, MyToolTips myToolTips) {
        super(myCategoryChart);
        CategoryStyler categoryStyler = (CategoryStyler)myCategoryChart.b();
        if (CategorySeries$CategorySeriesRenderStyle.d.equals(categoryStyler.V()) || CategorySeries$CategorySeriesRenderStyle.e.equals(categoryStyler.V()) || CategorySeries$CategorySeriesRenderStyle.c.equals(categoryStyler.V())) {
            this.e = new MyPlotContent_Category_Bar(myCategoryChart, myToolTips);
            return;
        }
        this.e = new PlotContent_Category_Line_Area_Scatter(myCategoryChart);
    }
}

