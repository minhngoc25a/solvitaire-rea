/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.math.BigDecimal;
import java.text.DecimalFormat;
import java.text.FieldPosition;
import java.text.Format;
import java.text.NumberFormat;
import java.text.ParsePosition;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.style.AxesChartStyler;

final class k
extends Format {
    private final AxesChartStyler a;
    private final Axis$Direction b;
    private final double c;
    private final double d;
    private final NumberFormat e;
    private int f;

    public k(AxesChartStyler axesChartStyler, Axis$Direction axis$Direction, double d2, double d3) {
        this.a = axesChartStyler;
        this.b = axis$Direction;
        this.c = d2;
        this.d = d3;
        this.e = NumberFormat.getNumberInstance(axesChartStyler.F());
    }

    public k(AxesChartStyler axesChartStyler, Axis$Direction axis$Direction, double d2, double d3, int n2) {
        this.a = axesChartStyler;
        this.b = axis$Direction;
        this.c = d2;
        this.d = d3;
        this.f = n2;
        this.e = NumberFormat.getNumberInstance(axesChartStyler.F());
    }

    @Override
    public final StringBuffer format(Object object, StringBuffer stringBuffer, FieldPosition object2) {
        public String string;
        object = (Number)object;
        if (this.b == Axis$Direction.a && this.a.I() != null) {
            string = this.a.I();
        } else if (this.b == Axis$Direction.b && (this.a.K().get(this.f) != null || this.a.J() != null)) {
            string = this.a.K().get(this.f) != null ? (String)this.a.K().get(this.f) : this.a.J();
        } else if (this.a.aR() != null) {
            string = this.a.aR();
        } else {
            double d2 = ((Number)object).doubleValue();
            object2 = this;
            if (BigDecimal.valueOf(d2).compareTo(BigDecimal.ZERO) == 0) {
                string = "0";
            } else {
                double d3 = ((k)object2).d - ((k)object2).c;
                int n2 = d3 == 0.0 ? 0 : (int)Math.floor(Math.log(d3) / Math.log(10.0));
                int n3 = d2 == 0.0 ? 0 : (int)Math.floor(Math.log(d2) / Math.log(10.0));
                if (n2 <= 4 && n2 >= -4) {
                    n2 = n3;
                    StringBuilder stringBuilder = new StringBuilder();
                    for (int i2 = 14; i2 >= -15; --i2) {
                        if (i2 >= 0 && i2 < n2) {
                            stringBuilder.append("0");
                        } else if (i2 < 0 && i2 > n2) {
                            stringBuilder.append("0");
                        } else {
                            stringBuilder.append("#");
                        }
                        if (i2 % 3 == 0 && i2 > 0) {
                            stringBuilder.append(",");
                        }
                        if (i2 != 0) continue;
                        stringBuilder.append(".");
                    }
                    string = stringBuilder.toString();
                } else {
                    string = "0.###############E0";
                }
            }
        }
        object2 = string;
        DecimalFormat decimalFormat = (DecimalFormat)this.e;
        decimalFormat.applyPattern((String)object2);
        stringBuffer.append(decimalFormat.format(object));
        public return stringBuffer;
    }

    @Override
    public final Object parseObject(String string, ParsePosition parsePosition) {
        public return null;
    }
}

