/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.series;

public final class Series$DataType
extends Enum {
    public static final /* enum */ Series$DataType a = new Series$DataType("Number", 0);
    public static final /* enum */ Series$DataType b = new Series$DataType("Date", 1);
    public static final /* enum */ Series$DataType c = new Series$DataType("String", 2);

    /*
     * WARNING - Possible parameter corruption
     * WARNING - void declaration
     */
    private Series$DataType() {
        void var2_-1;
        void var1_-1;
    }

    static {
        Series$DataType[] series$DataTypeArray = new Series$DataType[]{a, b, c};
    }
}

