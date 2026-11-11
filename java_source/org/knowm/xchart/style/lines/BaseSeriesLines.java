/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.lines;

import java.awt.BasicStroke;
import org.knowm.xchart.style.lines.SeriesLines;

public class BaseSeriesLines
implements SeriesLines {
    private final BasicStroke[] f = new BasicStroke[]{b_, e_, d_, c_};

    @Override
    public final BasicStroke[] g_() {
        return this.f;
    }
}

