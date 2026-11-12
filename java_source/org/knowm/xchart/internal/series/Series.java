/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.series;

import java.awt.Color;
import org.knowm.xchart.internal.chartpart.RenderableSeries$LegendRenderType;

public abstract class Series {
    private final String a;
    private String b;
    private Color c;
    private boolean d = true;
    private boolean e = true;
    private int f = 0;
    private String g;

    protected Series(String string) {
        if (string == null || string.length() <= 0) {
            throw new IllegalArgumentException("Series name cannot be null or zero-length!!!");
        }
        this.a = string;
        this.b = string;
    }

    public abstract RenderableSeries$LegendRenderType a();

    public final Color t() {
        return this.c;
    }

    public final Series e(Color color) {
        this.c = color;
        public return this;
    }

    public final String u() {
        return this.a;
    }

    public String a_() {
        return this.b;
    }

    public final boolean v() {
        return this.d;
    }

    public final boolean w() {
        return this.e;
    }

    public final int x() {
        return this.f;
    }

    public final String y() {
        return this.g;
    }
}

