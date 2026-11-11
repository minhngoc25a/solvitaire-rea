/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.w_0;
import java.awt.Component;
import java.awt.Container;
import java.awt.Dimension;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JComponent;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;

/*
 * Renamed from com.solvitaire.app.ag
 */
public final class ag_0 {
    private JPanel b = new JPanel();
    JRadioButton a;
    private int c;
    private /* synthetic */ w_0 d;

    ag_0(w_0 w_02, String object, int n2, JComponent jComponent, String string, JComponent jComponent2, String string2) {
        this.d = w_02;
        this.a = new JRadioButton((String)object);
        this.a.setFont(w_02.h);
        this.a.setBackground(w_02.t);
        this.c = n2;
        object = new JPanel();
        ((Container)object).setLayout(new BoxLayout((Container)object, 0));
        ((JComponent)object).setBackground(w_02.t);
        this.a.addActionListener(w_02.u);
        w_02.q.add(this.a);
        w_02.g.add(this.a);
        if (jComponent != null) {
            ((Container)object).add(jComponent);
            jComponent.setPreferredSize(new Dimension(80, 20));
            jComponent.setMaximumSize(new Dimension(80, 20));
            jComponent.setFont(w_02.h);
        }
        if (string != null) {
            JLabel jLabel = new JLabel(string);
            jLabel.setFont(w_02.h);
            ((Container)object).add(jLabel);
        }
        if (jComponent2 != null) {
            ((Container)object).add(jComponent2);
            jComponent2.setPreferredSize(new Dimension(90, 20));
            jComponent2.setMaximumSize(new Dimension(90, 20));
            jComponent2.setFont(w_02.h);
        }
        if (string2 != null) {
            JLabel jLabel = new JLabel(string2);
            jLabel.setFont(w_02.h);
            ((Container)object).add(jLabel);
        }
        ((Container)object).add(Box.createHorizontalGlue());
        w_02.q.add((Component)object);
        w_02.q.add(new JLabel("         "));
    }
}

