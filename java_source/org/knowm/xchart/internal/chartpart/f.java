/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.util.List;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.internal.chartpart.AxisTickCalculator_;
import org.knowm.xchart.internal.chartpart.k;
import org.knowm.xchart.style.AxesChartStyler;

final class f
extends AxisTickCalculator_ {
    private final k i;

    public f(Axis$Direction axis$Direction, double d2, double d3, double d4, AxesChartStyler axesChartStyler) {
        super(axis$Direction, d2, d3, d4, axesChartStyler);
        this.i = new k(axesChartStyler, axis$Direction, d3, d4);
        this.h = this.i;
        this.a();
    }

    f(Axis$Direction axis$Direction, double d2, double d3, double d4, List list, AxesChartStyler axesChartStyler) {
        super(axis$Direction, d2, d3, d4, list, axesChartStyler);
        this.i = new k(axesChartStyler, axis$Direction, d3, d4);
        this.h = this.i;
        this.a();
    }

    public f(Axis$Direction axis$Direction, double d2, double d3, double d4, AxesChartStyler axesChartStyler, int n2) {
        super(axis$Direction, d2, d3, d4, axesChartStyler);
        this.i = new k(axesChartStyler, axis$Direction, d3, d4, n2);
        this.h = this.i;
        this.a();
    }
}

