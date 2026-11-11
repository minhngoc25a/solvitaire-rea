/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import org.knowm.xchart.CategoryChart;
import org.knowm.xchart.MyCategoryChartBuilder;
import org.knowm.xchart.internal.chartpart.MyPlot_Category;
import org.knowm.xchart.internal.chartpart.MyToolTips;

public class MyCategoryChart
extends CategoryChart {
    public MyCategoryChart(MyCategoryChartBuilder myCategoryChartBuilder) {
        super(myCategoryChartBuilder);
    }

    public final void a(MyToolTips myToolTips) {
        this.f = new MyPlot_Category(this, myToolTips);
    }
}

