/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style;

import org.knowm.xchart.OHLCSeries$OHLCSeriesRenderStyle;
import org.knowm.xchart.style.AxesChartStyler;

public class OHLCStyler
extends AxesChartStyler {
    private OHLCSeries$OHLCSeriesRenderStyle b;

    public OHLCStyler() {
        this.a();
    }

    @Override
    protected final void a() {
        super.a();
        this.b = OHLCSeries$OHLCSeriesRenderStyle.a;
    }

    public final OHLCSeries$OHLCSeriesRenderStyle V() {
        return this.b;
    }
}

