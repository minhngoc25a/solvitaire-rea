/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.TimeUnit;
import org.knowm.xchart.internal.Utils;
import org.knowm.xchart.internal.chartpart.Axis$Direction;
import org.knowm.xchart.internal.chartpart.AxisTickCalculator_;
import org.knowm.xchart.internal.chartpart.d;
import org.knowm.xchart.style.AxesChartStyler;

final class c
extends AxisTickCalculator_ {
    private static final long i = TimeUnit.MILLISECONDS.toMillis(1L);
    private static final long j = TimeUnit.SECONDS.toMillis(1L);
    private static final long k = TimeUnit.MINUTES.toMillis(1L);
    private static final long l = TimeUnit.HOURS.toMillis(1L);
    private static final long m = TimeUnit.DAYS.toMillis(1L);
    private static final long n = TimeUnit.DAYS.toMillis(1L) * 30L;
    private static final long o = TimeUnit.DAYS.toMillis(1L) * 365L;
    private static final List p = new ArrayList<d>();

    public c(Axis$Direction direction, double d2, double d3, double d4, AxesChartStyler axesChartStyler) {
        super(direction, d2, d3, d4, axesChartStyler);
        this.a();
    }

    @Override
    protected final void a() {
        int n2;
        double d2;
        double d3 = this.g.aD() * this.d;
        if (d2 < (double)this.g.p()) {
            return;
        }
        if (this.e > this.f && this.e == Double.MAX_VALUE) {
            String string = ((d)p.get(0)).c();
            if (this.g.H() != null) {
                string = this.g.H();
            }
            SimpleDateFormat simpleDateFormat = new SimpleDateFormat(string, this.g.F());
            simpleDateFormat.setTimeZone(this.g.G());
            this.h = simpleDateFormat;
            this.b.add(this.h.format(0.0));
            this.a.add(this.d / 2.0);
            return;
        }
        double d4 = Utils.a(this.d, d3);
        long l2 = (long)Math.abs(this.f - this.e);
        int n3 = (this.c == Axis$Direction.a ? this.g.p() : this.g.q()) - 5;
        long l3 = (long)((double)l2 / d3 * (double)n3);
        int n4 = 0;
        for (int i2 = 0; i2 < p.size() - 1; ++i2) {
            if (!((double)l2 < (double)(((d)p.get(i2)).a() * (long)((d)p.get(i2)).b() + ((d)p.get(i2 + 1)).a() * (long)((d)p.get(i2 + 1)).b()) / 2.0)) continue;
            n4 = i2;
            break;
        }
        String string = ((d)p.get(n4)).c();
        for (n2 = n4 - 1; n2 > 0; --n2) {
            if (l3 <= ((d)p.get(n2)).a() * (long)((d)p.get(n2)).b()) continue;
            n4 = n2;
            break;
        }
        --n4;
        while (true) {
            n2 = 0;
            this.b.clear();
            this.a.clear();
            double d5 = ((d)p.get(++n4)).a() * (long)((d)p.get(n4)).b();
            n3 = (int)(d5 / (double)l2 * d3);
            if (n3 < 10 && n4 < p.size() - 1) {
                n2 = 1;
            } else {
                double d6 = this.a(d5);
                if (this.g.H() != null) {
                    string = this.g.H();
                }
                SimpleDateFormat simpleDateFormat = new SimpleDateFormat(string, this.g.F());
                simpleDateFormat.setTimeZone(this.g.G());
                this.h = simpleDateFormat;
                for (double d7 = d6; d7 <= this.f + d5 * 2.0; d7 += d5) {
                    this.b.add(this.h.format(d7));
                    double d8 = d4 + (d7 - this.e) / (this.f - this.e) * d3;
                    this.a.add(d8);
                }
            }
            if (n2 != 0 || !org.knowm.xchart.internal.chartpart.c.a(this.b)) continue;
            c c2 = this;
            if (c2.a(c2.b, n3)) break;
        }
    }

    static {
        p.add(new d(i, 1, "ss.SSS"));
        p.add(new d(i, 2, "ss.SSS"));
        p.add(new d(i, 5, "ss.SSS"));
        p.add(new d(i, 10, "ss.SSS"));
        p.add(new d(i, 50, "ss.SS"));
        p.add(new d(i, 100, "ss.SS"));
        p.add(new d(i, 200, "ss.SS"));
        p.add(new d(i, 500, "ss.SS"));
        p.add(new d(j, 1, "ss.SS"));
        p.add(new d(j, 2, "ss.S"));
        p.add(new d(j, 5, "ss.S"));
        p.add(new d(j, 10, "HH:mm:ss"));
        p.add(new d(j, 15, "HH:mm:ss"));
        p.add(new d(j, 20, "HH:mm:ss"));
        p.add(new d(j, 30, "HH:mm:ss"));
        p.add(new d(k, 1, "HH:mm:ss"));
        p.add(new d(k, 2, "HH:mm:ss"));
        p.add(new d(k, 5, "HH:mm:ss"));
        p.add(new d(k, 10, "HH:mm"));
        p.add(new d(k, 15, "HH:mm"));
        p.add(new d(k, 20, "HH:mm"));
        p.add(new d(k, 30, "HH:mm"));
        p.add(new d(l, 1, "HH:mm"));
        p.add(new d(l, 2, "HH:mm"));
        p.add(new d(l, 4, "HH:mm"));
        p.add(new d(l, 8, "HH:mm"));
        p.add(new d(l, 12, "HH:mm"));
        p.add(new d(m, 1, "EEE HH:mm"));
        p.add(new d(m, 2, "EEE HH:mm"));
        p.add(new d(m, 3, "EEE HH:mm"));
        p.add(new d(m, 5, "MM-dd"));
        p.add(new d(m, 10, "MM-dd"));
        p.add(new d(m, 15, "MM-dd"));
        p.add(new d(n, 1, "MM-dd"));
        p.add(new d(n, 2, "MM-dd"));
        p.add(new d(n, 3, "MM-dd"));
        p.add(new d(n, 4, "MM-dd"));
        p.add(new d(n, 6, "yyyy-MM"));
        p.add(new d(o, 1, "yyyy-MM"));
        p.add(new d(o, 2, "yyyy-MM"));
        p.add(new d(o, 5, "yyyy"));
        p.add(new d(o, 10, "yyyy"));
        p.add(new d(o, 20, "yyyy"));
        p.add(new d(o, 100, "yyyy"));
        p.add(new d(o, 500, "yyyy"));
        p.add(new d(o, 1000, "yyyy"));
    }
}

