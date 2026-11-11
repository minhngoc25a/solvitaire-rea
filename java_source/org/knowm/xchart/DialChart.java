/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.Graphics2D;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.Plot_;

public class DialChart
extends Chart {
    @Override
    public final void a(Graphics2D graphics2D, int n2, int n3) {
        this.a(n2);
        this.b(n3);
        this.a(graphics2D);
        ((Plot_)this.f).a(graphics2D);
        this.b.a(graphics2D);
        this.d.forEach(chartPart -> chartPart.a(graphics2D));
    }
}

