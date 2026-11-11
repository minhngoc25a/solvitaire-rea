/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style;

import org.knowm.xchart.style.a;
import org.knowm.xchart.style.theme.AbstractBaseTheme;
import org.knowm.xchart.style.theme.GGPlot2Theme;
import org.knowm.xchart.style.theme.MatlabTheme;
import org.knowm.xchart.style.theme.XChartTheme;

public final class Styler$ChartTheme
extends Enum {
    public static final /* enum */ Styler$ChartTheme a = new Styler$ChartTheme("XChart", 0);
    public static final /* enum */ Styler$ChartTheme b = new Styler$ChartTheme("GGPlot2", 1);
    public static final /* enum */ Styler$ChartTheme c = new Styler$ChartTheme("Matlab", 2);
    private static final /* synthetic */ Styler$ChartTheme[] d;

    public static Styler$ChartTheme[] a() {
        return (Styler$ChartTheme[])d.clone();
    }

    /*
     * WARNING - Possible parameter corruption
     * WARNING - void declaration
     */
    private Styler$ChartTheme() {
        void var2_-1;
        void var1_-1;
    }

    public static AbstractBaseTheme a(Styler$ChartTheme styler$ChartTheme) {
        switch (org.knowm.xchart.style.a.a[styler$ChartTheme.ordinal()]) {
            case 1: {
                return new GGPlot2Theme();
            }
            case 2: {
                return new MatlabTheme();
            }
        }
        return new XChartTheme();
    }

    static {
        d = new Styler$ChartTheme[]{a, b, c};
    }
}

