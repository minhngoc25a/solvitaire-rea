/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.util.List;
import java.util.function.Function;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.internal.chartpart.AxisTickCalculator_;
import org.knowm.xchart.internal.chartpart.Formatter_Custom;
import org.knowm.xchart.style.AxesChartStyler;

final class a
extends AxisTickCalculator_ {
    public a(Function function, Axis$Direction axis$Direction, double d2, double d3, double d4, AxesChartStyler axesChartStyler) {
        super(axis$Direction, d2, d3, d4, axesChartStyler);
        this.h = new Formatter_Custom(function);
        this.a();
    }

    a(Function function, Axis$Direction axis$Direction, double d2, double d3, double d4, List list, AxesChartStyler axesChartStyler) {
        super(axis$Direction, d2, d3, d4, list, axesChartStyler);
        this.h = new Formatter_Custom(function);
        this.a();
    }
}

