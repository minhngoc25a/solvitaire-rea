/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.BasicStroke;
import java.awt.Graphics2D;
import java.awt.Shape;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.font.FontRenderContext;
import java.awt.font.TextLayout;
import java.awt.geom.AffineTransform;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Line2D;
import java.awt.geom.RectangularShape;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.internal.chartpart.i;
import org.knowm.xchart.internal.series.MarkerSeries;
import org.knowm.xchart.style.XYStyler;

public class Cursor
extends MouseAdapter
implements ChartPart {
    private final List a;
    private final List c;
    private final Chart d;
    private final XYStyler e;
    private final Map f;
    private double g;
    private double h;
    private double i;
    private double j;
    private double k;

    @Override
    public void mouseMoved(MouseEvent mouseEvent) {
        this.g = mouseEvent.getX();
        this.h = mouseEvent.getY();
        Cursor cursor = this;
        boolean bl2 = false;
        if (!cursor.d.f.e.a().contains(cursor.g, cursor.h)) {
            bl2 = true;
        }
        if (bl2) {
            if (this.c.size() > 0) {
                this.c.clear();
                mouseEvent.getComponent().repaint();
            }
            return;
        }
        cursor = this;
        Object object = new ArrayList();
        for (Object object2 : cursor.a) {
            if (!((i)object2).a.contains(cursor.g, ((i)object2).a.getBounds().getCenterY()) || !(cursor.d.f.e.a().getY() < cursor.h) || !(cursor.d.f.e.a().getY() + cursor.d.f.e.a().getHeight() > cursor.h)) continue;
            object.add(object2);
        }
        if (object.size() > 0) {
            HashMap hashMap = new HashMap();
            object = object.iterator();
            while (object.hasNext()) {
                Object object2;
                i i2 = (i)object.next();
                object2 = i2.e;
                if (hashMap.containsKey(object2)) {
                    if (!(Math.abs(i2.b - cursor.g) < Math.abs(((i)hashMap.get((Object)object2)).b - cursor.g))) continue;
                    hashMap.put(object2, i2);
                    continue;
                }
                hashMap.put(object2, i2);
            }
            cursor.c.clear();
            cursor.c.addAll(hashMap.values());
        }
        mouseEvent.getComponent().repaint();
    }

    @Override
    public final void a(Graphics2D graphics2D) {
        if (this.c.size() > 0) {
            Object object = (i)this.c.get(0);
            TextLayout textLayout = new TextLayout(((i)object).c, this.e.ac(), new FontRenderContext(null, true, false));
            this.k = textLayout.getBounds().getHeight();
            Object object2 = object;
            Graphics2D graphics2D2 = graphics2D;
            object = this;
            BasicStroke basicStroke = new BasicStroke(((Cursor)object).e.ab(), 0, 0);
            graphics2D2.setStroke(basicStroke);
            graphics2D2.setColor(((Cursor)object).e.aa());
            Cloneable cloneable = new Line2D.Double();
            cloneable.setLine(((i)object2).b, ((Cursor)object).d.f.e.a().getY(), ((i)object2).b, ((Cursor)object).d.f.e.a().getY() + ((Cursor)object).d.f.e.a().getHeight());
            graphics2D2.draw((Shape)((Object)cloneable));
            object2 = textLayout;
            graphics2D2 = graphics2D;
            object = this;
            double d2 = ((TextLayout)object2).getBounds().getWidth();
            for (Object object3 : ((Cursor)object).c) {
                object2 = new TextLayout(((i)object3).e + ": " + ((i)object3).d, ((Cursor)object).e.ac(), new FontRenderContext(null, true, false));
                if (!(d2 < ((RectangularShape)(object2 = ((TextLayout)object2).getBounds())).getWidth())) continue;
                d2 = ((RectangularShape)object2).getWidth();
            }
            double d3 = (double)((Cursor)object).e.ac().getSize() + d2 + 15.0;
            double d4 = ((Cursor)object).k * (double)(1 + ((Cursor)object).c.size()) + (double)((2 + ((Cursor)object).c.size()) * 5);
            ((Cursor)object).i = ((Cursor)object).g;
            ((Cursor)object).j = ((Cursor)object).h;
            if (((Cursor)object).g + 15.0 + d3 > ((Cursor)object).d.f.e.a().getX() + ((Cursor)object).d.f.e.a().getWidth()) {
                ((Cursor)object).i = ((Cursor)object).g - d3 - 15.0;
            }
            if (((Cursor)object).h + 15.0 + d4 > ((Cursor)object).d.f.e.a().getY() + ((Cursor)object).d.f.e.a().getHeight()) {
                ((Cursor)object).j = ((Cursor)object).h - d4 - 15.0;
            }
            graphics2D2.setColor(((Cursor)object).e.ae());
            graphics2D2.fillRect((int)((Cursor)object).i + 15, (int)((Cursor)object).j + 15, (int)d3, (int)d4);
            object2 = textLayout;
            graphics2D2 = graphics2D;
            object = this;
            AffineTransform affineTransform = graphics2D2.getTransform();
            cloneable = new AffineTransform();
            ((AffineTransform)cloneable).translate(((Cursor)object).i + 15.0 + 5.0, ((Cursor)object).j + ((Cursor)object).k + 15.0 + 5.0);
            graphics2D2.transform((AffineTransform)cloneable);
            graphics2D2.setColor(((Cursor)object).e.ad());
            graphics2D2.fill(((TextLayout)object2).getOutline(null));
            for (i i2 : ((Cursor)object).c) {
                cloneable = new AffineTransform();
                ((AffineTransform)cloneable).translate(0.0, ((Cursor)object).k + 5.0);
                graphics2D2.transform((AffineTransform)cloneable);
                object2 = (MarkerSeries)((Cursor)object).f.get(i2.e);
                if (object2 == null) continue;
                graphics2D2.setColor(((MarkerSeries)object2).g());
                Ellipse2D.Double double_ = new Ellipse2D.Double(0.0, -((Cursor)object).k, ((Cursor)object).k, ((Cursor)object).k);
                graphics2D2.fill(double_);
                cloneable = new AffineTransform();
                ((AffineTransform)cloneable).translate(((Cursor)object).k + 5.0, 0.0);
                graphics2D2.transform((AffineTransform)cloneable);
                graphics2D2.setColor(((Cursor)object).e.ad());
                object2 = new TextLayout(i2.e + ": " + i2.d, ((Cursor)object).e.ac(), new FontRenderContext(null, true, false));
                graphics2D2.fill(((TextLayout)object2).getOutline(null));
                cloneable = new AffineTransform();
                ((AffineTransform)cloneable).translate(-((Cursor)object).k - 5.0, 0.0);
                graphics2D2.transform((AffineTransform)cloneable);
            }
            graphics2D2.setTransform(affineTransform);
        }
    }
}

