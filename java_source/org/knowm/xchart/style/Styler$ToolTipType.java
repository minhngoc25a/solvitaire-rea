/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style;

public final class Styler$ToolTipType
extends Enum {
    public static final /* enum */ Styler$ToolTipType a = new Styler$ToolTipType("xLabels", 0);
    public static final /* enum */ Styler$ToolTipType b = new Styler$ToolTipType("yLabels", 1);
    public static final /* enum */ Styler$ToolTipType c = new Styler$ToolTipType("xAndYLabels", 2);
    private static final /* synthetic */ Styler$ToolTipType[] d;

    public static Styler$ToolTipType[] a() {
        return (Styler$ToolTipType[])d.clone();
    }

    /*
     * WARNING - Possible parameter corruption
     * WARNING - void declaration
     */
    private Styler$ToolTipType() {
        void var2_-1;
        void var1_-1;
    }

    static {
        d = new Styler$ToolTipType[]{a, b, c};
    }
}

