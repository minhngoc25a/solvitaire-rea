/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.RenderingHints;
import java.awt.Shape;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.font.FontRenderContext;
import java.awt.font.TextLayout;
import java.awt.geom.AffineTransform;
import java.awt.geom.Rectangle2D;
import javax.swing.event.EventListenerList;
import org.knowm.xchart.internal.chartpart.ChartPart;
import org.knowm.xchart.internal.chartpart.h;
import org.knowm.xchart.style.Styler;

public class ChartButton
extends MouseAdapter
implements ChartPart {
    private final Styler c;
    private Rectangle d;
    private String e;
    public boolean a;
    private ActionEvent f;
    private final EventListenerList g;
    private double h;
    private double i;
    private Shape j;

    @Override
    public void mouseClicked(MouseEvent object) {
        if (!this.a) {
            return;
        }
        if (this.j == null) {
            return;
        }
        if (this.j.contains(((MouseEvent)object).getX(), ((MouseEvent)object).getY())) {
            object = this;
            Object[] objectArray = ((ChartButton)object).g.getListenerList();
            for (int i2 = objectArray.length - 2; i2 >= 0; i2 -= 2) {
                if (((ChartButton)object).f == null) {
                    ((ChartButton)object).f = new ActionEvent(object, 1001, ((ChartButton)object).e);
                }
                ((ActionListener)objectArray[i2 + 1]).actionPerformed(((ChartButton)object).f);
            }
        }
    }

    @Override
    public final void a(Graphics2D graphics2D) {
        public Cloneable cloneable;
        public double d2;
        if (!this.a) {
            return;
        }
        this.d = graphics2D.getClipBounds();
        double d3 = this.d.getWidth();
        if (d2 < 30.0) {
            return;
        }
        Object object = graphics2D.getRenderingHint(RenderingHints.KEY_ANTIALIASING);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        graphics2D.setColor(this.c.aG());
        graphics2D.setFont(this.c.aH());
        Object object2 = graphics2D.getFontRenderContext();
        object2 = new TextLayout(this.e, this.c.aH(), (FontRenderContext)object2);
        object2 = ((TextLayout)object2).getOutline(null);
        Rectangle2D rectangle2D = cloneable = object2.getBounds2D();
        Object object3 = this;
        double d4 = rectangle2D.getHeight();
        double d5 = rectangle2D.getWidth();
        double d6 = d5 + (double)(((ChartButton)object3).c.aI() * 3);
        double d7 = d4 + (double)(((ChartButton)object3).c.aI() * 3);
        double d8 = ((ChartButton)object3).d.getWidth();
        double d9 = ((ChartButton)object3).d.getHeight();
        switch (org.knowm.xchart.internal.chartpart.h.a[((ChartButton)object3).c.aJ().ordinal()]) {
            case 1: {
                ((ChartButton)object3).h = ((ChartButton)object3).d.getX() + (double)((ChartButton)object3).c.aI();
                ((ChartButton)object3).i = ((ChartButton)object3).d.getY() + (double)((ChartButton)object3).c.aI();
                break;
            }
            case 2: {
                ((ChartButton)object3).h = ((ChartButton)object3).d.getX() + d8 - d6;
                ((ChartButton)object3).i = ((ChartButton)object3).d.getY() + (double)((ChartButton)object3).c.aI();
                break;
            }
            case 3: {
                ((ChartButton)object3).h = ((ChartButton)object3).d.getX() + d8 - d6;
                ((ChartButton)object3).i = ((ChartButton)object3).d.getY() + d9 - d7;
                break;
            }
            case 4: {
                ((ChartButton)object3).h = ((ChartButton)object3).d.getX() + (double)((ChartButton)object3).c.aI();
                ((ChartButton)object3).i = ((ChartButton)object3).d.getY() + d9 - d7;
                break;
            }
            case 5: {
                ((ChartButton)object3).h = ((ChartButton)object3).d.getX() + d8 / 2.0 - d5 / 2.0 - (double)((ChartButton)object3).c.aI();
                ((ChartButton)object3).i = ((ChartButton)object3).d.getY() + (double)((ChartButton)object3).c.aI();
                break;
            }
            case 6: {
                ((ChartButton)object3).h = ((ChartButton)object3).d.getX() + d8 / 2.0 - d5 / 2.0 - (double)((ChartButton)object3).c.aI();
                ((ChartButton)object3).i = ((ChartButton)object3).d.getY() + d9 - d7;
            }
        }
        double d10 = cloneable.getHeight();
        double d11 = cloneable.getWidth();
        this.j = new Rectangle2D.Double(this.h, this.i, d11 + (double)(this.c.aI() << 1), d10 + (double)(this.c.aI() << 1));
        graphics2D.setColor(this.c.aE());
        graphics2D.fill(this.j);
        graphics2D.setStroke(b);
        graphics2D.setColor(this.c.aF());
        graphics2D.draw(this.j);
        double d12 = this.h + (double)this.c.aI();
        double d13 = this.i + (double)this.c.aI();
        graphics2D.setColor(this.c.aG());
        cloneable = graphics2D.getTransform();
        object3 = new AffineTransform();
        ((AffineTransform)object3).translate(d12, d13 + d10);
        graphics2D.transform((AffineTransform)object3);
        graphics2D.fill((Shape)object2);
        graphics2D.setTransform((AffineTransform)cloneable);
        graphics2D.setRenderingHint(RenderingHints.KEY_ANTIALIASING, object);
    }
}

