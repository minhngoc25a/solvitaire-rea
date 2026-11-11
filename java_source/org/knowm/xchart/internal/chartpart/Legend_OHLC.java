/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.util.Map;
import org.knowm.xchart.OHLCSeries;
import org.knowm.xchart.internal.chartpart.Legend_;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;
import org.knowm.xchart.internal.series.Series;
import org.knowm.xchart.style.OHLCStyler;

public class Legend_OHLC
extends Legend_ {
    private final OHLCStyler e;

    @Override
    public final void b(Graphics2D graphics2D) {
        ((OHLCStyler)this.a.b()).aw();
        ((OHLCStyler)this.a.b()).aw();
        Object object = graphics2D.getRenderingHint(RenderingHints.KEY_ANTIALIASING);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        Map map = this.a.o();
        for (OHLCSeries oHLCSeries : map.values()) {
            if (!oHLCSeries.v() || !oHLCSeries.w()) continue;
            this.b(oHLCSeries);
            throw new NullPointerException();
        }
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, object);
    }

    @Override
    public final /* synthetic */ double a(Series object) {
        OHLCSeries oHLCSeries = (OHLCSeries)object;
        object = this;
        if (((Series)oHLCSeries).a() == RenderableSeries$LegendRenderType.c || ((Series)oHLCSeries).a() == RenderableSeries$LegendRenderType.d) {
            return 20.0;
        }
        OHLCStyler cfr_ignored_0 = ((Legend_OHLC)object).e;
        throw new NullPointerException();
    }
}

