/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.g_0;
import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JPanel;

public final class P {
    private JButton a;
    private /* synthetic */ g_0 b;

    P(g_0 g_02, JPanel jPanel, String string, String string2) {
        this.b = g_02;
        JPanel jPanel2 = new JPanel(new FlowLayout(0));
        jPanel2.setOpaque(false);
        this.a = new JButton(string);
        jPanel2.add(this.a);
        this.a.setFont(g_02.e);
        this.a.setBackground(g_02.f);
        this.a.addActionListener(g_02.u);
        this.a.setToolTipText(string2);
        jPanel.add(jPanel2);
    }
}

