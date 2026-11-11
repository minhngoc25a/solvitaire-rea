/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.BasicStroke;
import java.awt.Graphics2D;

public interface ChartPart {
    public static final BasicStroke b = new BasicStroke(1.0f, 0, 2, 10.0f, new float[]{3.0f, 0.0f}, 0.0f);

    public void a(Graphics2D var1);
}

