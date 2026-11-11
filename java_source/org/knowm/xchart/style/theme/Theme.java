/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.style.theme;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Font;
import org.knowm.xchart.style.PieStyler$LabelType;
import org.knowm.xchart.style.Styler$LegendPosition;
import org.knowm.xchart.style.Styler$ToolTipType;
import org.knowm.xchart.style.colors.ChartColor;
import org.knowm.xchart.style.colors.SeriesColors;
import org.knowm.xchart.style.lines.SeriesLines;
import org.knowm.xchart.style.markers.SeriesMarkers;

public interface Theme
extends SeriesColors,
SeriesLines,
SeriesMarkers {
    public static final Font i = new Font("SansSerif", 0, 10);
    public static final BasicStroke j = new BasicStroke(1.0f);

    public Font b();

    public Color c();

    public Color d();

    public int e();

    public Font f();

    public boolean g();

    public boolean h();

    public Color i();

    public Color j();

    public int k();

    public Font l();

    public boolean m();

    public Color n();

    public Color o();

    public int p();

    public int q();

    public Styler$LegendPosition r();

    public boolean I();

    public boolean J();

    public Color K();

    public Color L();

    public boolean M();

    public Color O();

    public BasicStroke P();

    public boolean N();

    default public double an() {
        return 0.92;
    }

    public int Q();

    default public Font ao() {
        return new Font("Monospaced", 0, 10);
    }

    default public Color ap() {
        return ChartColor.a.a();
    }

    default public Color aq() {
        return ChartColor.e.a();
    }

    default public Color ar() {
        return ChartColor.b.a();
    }

    default public int as() {
        return 10;
    }

    default public Font at() {
        return new Font("Monospaced", 0, 10);
    }

    default public Color au() {
        return ChartColor.a.a();
    }

    default public BasicStroke av() {
        return j;
    }

    default public Color aw() {
        return ChartColor.b.a();
    }

    default public boolean ax() {
        return false;
    }

    default public Styler$ToolTipType ay() {
        return Styler$ToolTipType.c;
    }

    default public Font az() {
        return i;
    }

    default public Color ak() {
        return ChartColor.e.a();
    }

    default public Color al() {
        return ChartColor.b.a();
    }

    default public Color am() {
        return ChartColor.d.a();
    }

    public boolean s();

    public boolean t();

    public Font u();

    public boolean v();

    public boolean w();

    public Font x();

    public int y();

    public int z();

    public Color A();

    public BasicStroke B();

    public Color C();

    public boolean D();

    public boolean E();

    public int F();

    public int G();

    public int H();

    public boolean R();

    public Color S();

    public float T();

    public Font U();

    public Color V();

    public Color W();

    public double X();

    public boolean Y();

    public boolean Z();

    public double aa();

    public double ab();

    public PieStyler$LabelType ac();

    public boolean ad();

    public double ae();

    public boolean af();

    public Font ag();

    public int ah();

    public Color ai();

    public boolean aj();

    default public Color aA() {
        return Color.BLACK;
    }

    default public Color aB() {
        return Color.WHITE;
    }

    default public boolean aC() {
        return true;
    }
}

