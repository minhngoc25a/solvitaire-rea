/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qa_0;
import com.solvitaire.app.qo_0;
import java.awt.Component;
import java.awt.Graphics;
import java.awt.event.MouseListener;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JPanel;
import javax.swing.JTabbedPane;
import org.knowm.xchart.CategoryChart;
import org.knowm.xchart.CategoryChartBuilder;
import org.knowm.xchart.MyCategoryChart;
import org.knowm.xchart.MyCategoryChartBuilder;
import org.knowm.xchart.XChartPanel;
import org.knowm.xchart.internal.chartpart.Chart;
import org.knowm.xchart.internal.chartpart.MyToolTips;
import org.knowm.xchart.style.AxesChartStyler;
import org.knowm.xchart.style.CategoryStyler;
import org.knowm.xchart.style.Styler;
import org.knowm.xchart.style.Styler$LegendPosition;
import org.knowm.xchart.style.Styler$ToolTipType;

public final class qz
extends JPanel {
    qo_0 a;
    JTabbedPane b;
    private JPanel c;
    private JPanel d;
    private JPanel e;
    private JPanel f;

    qz(qo_0 qo_02) {
        this.a = qo_02;
        this.b = new JTabbedPane();
        qz qz2 = this;
        qz2.add(qz2.b);
        this.c = new JPanel();
        this.b.addTab("Easy", this.c);
        this.d = new JPanel();
        this.b.addTab("Moderate", this.d);
        this.e = new JPanel();
        this.b.addTab("Hard", this.e);
        this.b.addChangeListener(new qa_0(this));
    }

    @Override
    public final void paint(Graphics graphics) {
        super.paint(graphics);
        this.a.g("In stats panel paint, difficultylevel " + this.a.br.b);
        qz qz2 = this;
        qz2.a(qz2.a.aq.j, this.a.aq.k);
    }

    final void a(int n2, int n3) {
        n2 = (int)((double)n2 * 0.95);
        n3 = (int)((double)n3 * 0.46) - 100;
        int n4 = this.a.br.e.size() > 1000 ? 30 : 40;
        this.f = this.c;
        switch (this.a.br.b) {
            case "Moderate": {
                this.f = this.d;
                break;
            }
            case "Hard": {
                this.f = this.e;
            }
        }
        this.b.setSelectedComponent(this.f);
        this.f.removeAll();
        this.f.setLayout(new BoxLayout(this.f, 1));
        int n5 = n2;
        Object object = new MyCategoryChartBuilder();
        new MyCategoryChartBuilder().c = n5;
        n5 = n3;
        object = (CategoryChartBuilder)object;
        v0.d = n5;
        object = (MyCategoryChart)((CategoryChartBuilder)object).a("Time/seconds").a();
        ((Chart)object).a("Solve Time (fastest game #" + this.a.br.l + " in " + this.a.br.k + " seconds)");
        ((CategoryChart)object).a("Times", this.a.br.e, this.a.br.f);
        Object object2 = (CategoryStyler)((Chart)object).b();
        ((AxesChartStyler)object2).a(n4);
        ((Styler)object2).a(Styler$LegendPosition.a);
        ((AxesChartStyler)object2).b(false);
        ((AxesChartStyler)object2).a(false);
        ((Styler)object2).a(Styler$ToolTipType.c);
        ((Styler)object2).d(true);
        object2 = new XChartPanel((MyCategoryChart)object);
        MyToolTips myToolTips = new MyToolTips(this.a, (XChartPanel)object2, (MyCategoryChart)object, this.a.br, "Game: %d~Seed: %d~Moves: %d~Undos: %d~Time: %d");
        ((MyCategoryChart)object).a(myToolTips);
        object = ((Component)object2).getMouseListeners();
        Object object3 = object;
        int n6 = ((MouseListener[])object).length;
        int n7 = 0;
        while (n7 < n6) {
            object = object3[n7];
            ((Component)object2).removeMouseListener((MouseListener)object);
            ++n7;
        }
        ((Component)object2).addMouseMotionListener(myToolTips);
        ((Component)object2).addMouseListener(myToolTips);
        this.f.add((Component)object2);
        this.f.add(Box.createVerticalStrut(3));
        int n8 = n2;
        object = new MyCategoryChartBuilder();
        new MyCategoryChartBuilder().c = n8;
        n8 = n3;
        object = (CategoryChartBuilder)object;
        v1.d = n8;
        object = (MyCategoryChart)((CategoryChartBuilder)object).a("Number of moves").a();
        ((Chart)object).a("Number of moves (shortest game #" + this.a.br.n + " in " + this.a.br.m + " moves)");
        ((CategoryChart)object).a("Moves", this.a.br.e, this.a.br.g);
        ((CategoryChart)object).a("Undo's", this.a.br.e, this.a.br.h);
        CategoryStyler categoryStyler = (CategoryStyler)((Chart)object).b();
        categoryStyler.a(n4);
        categoryStyler.a(Styler$LegendPosition.a);
        categoryStyler.c(true);
        categoryStyler.b(false);
        categoryStyler.a(false);
        categoryStyler.d(true);
        categoryStyler.a(Styler$ToolTipType.c);
        XChartPanel xChartPanel = new XChartPanel((MyCategoryChart)object);
        MyToolTips myToolTips2 = new MyToolTips(this.a, xChartPanel, (MyCategoryChart)object, this.a.br, "Game: %d~Seed: %d~Moves: %d~Undos: %d~Time: %d");
        ((MyCategoryChart)object).a(myToolTips2);
        object = xChartPanel.getMouseListeners();
        MouseListener[] mouseListenerArray = object;
        n3 = ((MouseListener[])object).length;
        n2 = 0;
        while (n2 < n3) {
            object3 = mouseListenerArray[n2];
            xChartPanel.removeMouseListener((MouseListener)object3);
            ++n2;
        }
        xChartPanel.addMouseMotionListener(myToolTips2);
        xChartPanel.addMouseListener(myToolTips2);
        this.f.add(xChartPanel);
        this.f.revalidate();
    }
}

