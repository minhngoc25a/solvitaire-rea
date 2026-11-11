/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.MyToolTips;
import org.knowm.xchart.internal.chartpart.PlotContent_Category_Bar;

public class MyPlotContent_Category_Bar
extends PlotContent_Category_Bar {
    private MyToolTips f;

    MyPlotContent_Category_Bar(Chart chart, MyToolTips myToolTips) {
        super(chart);
        this.f = myToolTips;
    }

    @Override
    public final void a(Graphics2D graphics2D) {
        this.c = this.f;
        super.a(graphics2D);
    }
}

