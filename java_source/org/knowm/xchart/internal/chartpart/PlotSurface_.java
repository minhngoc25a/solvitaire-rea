/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.geom.Rectangle2D;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.internal.chartpart.Plot_;

public abstract class PlotSurface_
implements ChartPart {
    final Chart a;

    PlotSurface_(Chart chart) {
        this.a = chart;
    }

    public final Rectangle2D a() {
        Plot_ plot_ = this.a.i();
        return plot_.c;
    }
}

