/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.colors;

import java.awt.Color;

public final class ChartColor
extends Enum {
    public static final /* enum */ ChartColor a = new ChartColor("BLACK", 0, new Color(0, 0, 0));
    public static final /* enum */ ChartColor b = new ChartColor("DARK_GREY", 1, new Color(130, 130, 130));
    public static final /* enum */ ChartColor c = new ChartColor("GREY", 2, new Color(210, 210, 210));
    public static final /* enum */ ChartColor d = new ChartColor("LIGHT_GREY", 3, new Color(230, 230, 230));
    public static final /* enum */ ChartColor e = new ChartColor("WHITE", 4, new Color(255, 255, 255));
    public static final /* enum */ ChartColor f = new ChartColor("RED", 5, new Color(237, 67, 55));
    public static final /* enum */ ChartColor g = new ChartColor("BLUE", 6, new Color(67, 55, 237));
    public static final /* enum */ ChartColor h = new ChartColor("GREEN", 7, new Color(67, 237, 55));
    private Color i;

    /*
     * WARNING - Possible parameter corruption
     * WARNING - void declaration
     */
    private ChartColor() {
        void var3_2;
        void var2_-1;
        void var1_-1;
        this.i = var3_2;
    }

    public final Color a() {
        return this.i;
    }

    public final Color b() {
        return new Color(this.i.getRed(), this.i.getGreen(), this.i.getBlue(), 128);
    }

    static {
        ChartColor[] chartColorArray = new ChartColor[]{a, b, c, d, e, f, g, h};
    }
}

