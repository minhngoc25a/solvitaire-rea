/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.colors;

import java.awt.Color;
import org.knowm.xchart.style.colors.SeriesColors;

public class ColorBlindFriendlySeriesColors
implements SeriesColors {
    private static final Color a = new Color(0, 0, 0, 255);
    private static final Color b = new Color(230, 159, 0, 255);
    private static final Color c = new Color(86, 180, 233, 255);
    private static final Color d = new Color(0, 158, 115, 255);
    private static final Color e = new Color(240, 228, 66, 255);
    private static final Color f = new Color(0, 114, 178, 255);
    private static final Color g = new Color(213, 94, 0, 255);
    private static final Color h = new Color(204, 121, 167, 255);
    private final Color[] i = new Color[]{a, b, c, d, e, f, g, h};

    @Override
    public final Color[] a() {
        return this.i;
    }
}

