/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.markers;

import java.awt.BasicStroke;
import java.awt.Graphics2D;

public abstract class Marker {
    final BasicStroke a = new BasicStroke(1.0f, 0, 2);

    public abstract void a(Graphics2D var1, double var2, double var4, int var6);
}

