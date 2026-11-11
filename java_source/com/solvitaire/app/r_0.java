/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.g_0;
import java.awt.Dimension;
import java.awt.FlowLayout;
import javax.swing.JComponent;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;

/*
 * Renamed from com.solvitaire.app.R
 */
public final class r_0 {
    JRadioButton a;
    private /* synthetic */ g_0 b;

    r_0(g_0 g_02, JPanel jPanel, String string, JComponent jComponent) {
        this.b = g_02;
        this.a = new JRadioButton(string);
        this.a.setFont(g_02.e);
        this.a.setOpaque(false);
        this.a.addActionListener(g_02.v);
        jPanel.add(this.a);
        g_02.d.add(this.a);
        if (jComponent != null) {
            JPanel jPanel2 = new JPanel(new FlowLayout(0, 0, 0));
            jPanel2.setOpaque(false);
            jPanel2.add(jComponent);
            jComponent.setPreferredSize(new Dimension(200, 22));
            jComponent.setMaximumSize(new Dimension(200, 22));
            jComponent.setFont(g_02.e);
            jPanel.add(jPanel2);
        } else {
            jPanel.add(new JLabel(" "));
        }
        g_02.a(this, string);
    }
}

