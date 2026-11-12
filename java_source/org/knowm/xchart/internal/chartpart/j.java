/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.text.DecimalFormat;
import java.text.FieldPosition;
import java.text.Format;
import java.text.NumberFormat;
import java.text.ParsePosition;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.style.AxesChartStyler;

final class j
extends Format {
    private final AxesChartStyler a;
    private final Axis$Direction b;
    private final NumberFormat c;
    private int d;

    public j(AxesChartStyler axesChartStyler, Axis$Direction axis$Direction) {
        this.a = axesChartStyler;
        this.b = axis$Direction;
        this.c = NumberFormat.getNumberInstance(axesChartStyler.F());
    }

    public j(AxesChartStyler axesChartStyler, Axis$Direction axis$Direction, int n2) {
        this.a = axesChartStyler;
        this.b = axis$Direction;
        this.d = n2;
        this.c = NumberFormat.getNumberInstance(axesChartStyler.F());
    }

    @Override
    public final StringBuffer format(Object object, StringBuffer stringBuffer, FieldPosition object2) {
        double d2 = (Double)object;
        object = this.b == Axis$Direction.a && this.a.I() != null ? this.a.I() : (this.b == Axis$Direction.b && (this.a.K().get(this.d) != null || this.a.J() != null) ? (this.a.K().get(this.d) != null ? (String)this.a.K().get(this.d) : this.a.J()) : (this.a.aR() != null ? this.a.aR() : (Math.abs(d2) > 1000.0 || Math.abs(d2) < 0.001 ? "0E0" : "0.###")));
        object2 = (DecimalFormat)this.c;
        ((DecimalFormat)object2).applyPattern((String)object);
        stringBuffer.append(((NumberFormat)object2).format(d2));
        public return stringBuffer;
    }

    @Override
    public final Object parseObject(String string, ParsePosition parsePosition) {
        public return null;
    }
}

