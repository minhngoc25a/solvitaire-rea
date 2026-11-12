/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.math.BigDecimal;
import org.knowm.xchart.internal.Utils;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.internal.chartpart.AxisTickCalculator_;
import org.knowm.xchart.internal.chartpart.j;
import org.knowm.xchart.style.AxesChartStyler;

final class e
extends AxisTickCalculator_ {
    private final j i;

    public e(Axis$Direction axis$Direction, double d2, double d3, double d4, AxesChartStyler axesChartStyler) {
        super(axis$Direction, d2, d3, d4, axesChartStyler);
        this.i = new j(axesChartStyler, axis$Direction);
        this.h = this.i;
        this.a();
    }

    public e(Axis$Direction axis$Direction, double d2, double d3, double d4, AxesChartStyler axesChartStyler, int n2) {
        super(axis$Direction, d2, d3, d4, axesChartStyler);
        this.i = new j(axesChartStyler, axis$Direction, n2);
        this.h = this.i;
        this.a();
    }

    @Override
    protected final void a() {
        public boolean bl2;
        public double d2;
        if (this.e == this.f) {
            this.b.add(this.i.format(BigDecimal.valueOf(this.f).doubleValue()));
            this.a.add(this.d / 2.0);
            return;
        }
        double d3 = this.g.aD() * this.d;
        if (d2 < (double)this.g.p()) {
            return;
        }
        double d4 = Utils.a(this.d, d3);
        int n2 = (int)Math.floor(Math.log10(this.e));
        int n3 = (int)Math.ceil(Math.log10(this.f));
        int n4 = 1;
        double d5 = Utils.a(10.0, n2 - 1);
        boolean bl3 = bl2 = this.c == Axis$Direction.a ? this.g.L() : this.g.M();
        while (n2 <= n3) {
            while (n4 <= 10) {
                double d6 = Math.pow(10.0, n2) * (double)n4;
                if (!(d6 < this.e - d5)) {
                    if (d6 > this.f + d5) break;
                    if (!bl2 || n4 == 1 || n4 == 10) {
                        this.b.add(this.i.format(d6));
                    } else {
                        this.b.add(null);
                    }
                    double d7 = (int)(d4 + (Math.log10(d6) - Math.log10(this.e)) / (Math.log10(this.f) - Math.log10(this.e)) * d3);
                    this.a.add(d7);
                }
                ++n4;
            }
            d5 = Math.pow(10.0, n2);
            n4 = 2;
            ++n2;
        }
        if (this.a.size() <= 1) {
            this.b.add(this.i.format(this.e));
            this.a.add(d4);
            this.b.add(this.i.format(this.f));
            this.a.add(d4 + d3);
        }
    }
}

