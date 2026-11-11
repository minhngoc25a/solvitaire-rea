/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.lines;

import java.awt.BasicStroke;
import org.knowm.xchart.style.lines.a;

public interface SeriesLines {
    public static final a a_ = new a();
    public static final BasicStroke b_ = new BasicStroke(2.0f, 1, 0);
    public static final BasicStroke c_ = new BasicStroke(2.0f, 0, 0, 10.0f, new float[]{3.0f, 1.0f}, 0.0f);
    public static final BasicStroke d_ = new BasicStroke(2.0f, 0, 0, 10.0f, new float[]{3.0f, 3.0f}, 0.0f);
    public static final BasicStroke e_ = new BasicStroke(2.0f, 1, 1, 10.0f, new float[]{2.0f}, 0.0f);

    public BasicStroke[] g_();
}

