/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Shape;
import org.knowm.xchart.internal.chartpart.s;

public class MyToolTip
extends s {
    int a;
    String b;
    Shape c;
    double d;
    double e;

    MyToolTip(Shape shape, double d2, double d3, double d4, String string, int n2) {
        super(shape, d2, d3, d4, string);
        this.c = shape;
        this.b = string;
        this.d = d2;
        this.e = d3;
        this.a = n2;
    }
}

