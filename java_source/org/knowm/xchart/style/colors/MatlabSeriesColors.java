/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.colors;

import java.awt.Color;
import org.knowm.xchart.style.colors.SeriesColors;

public class MatlabSeriesColors
implements SeriesColors {
    private static Color a = new Color(0, 0, 255, 255);
    private static Color b = new Color(0, 128, 0, 255);
    private static Color c = new Color(255, 0, 0, 255);
    private static Color d = new Color(0, 191, 191, 255);
    private static Color e = new Color(191, 0, 191, 255);
    private static Color f = new Color(191, 191, 0, 255);
    private static Color g = new Color(64, 64, 64, 255);
    private final Color[] h = new Color[]{a, b, c, d, e, f, g};

    @Override
    public final Color[] a() {
        return this.h;
    }
}

