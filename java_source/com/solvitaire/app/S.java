/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.Main;
import com.solvitaire.app.g_0;
import java.awt.Dimension;
import java.awt.FlowLayout;
import javax.swing.JComboBox;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;

public final class S {
    JRadioButton a;
    private /* synthetic */ g_0 b;

    S(g_0 g_02, JPanel jPanel, String string, JComboBox jComboBox) {
        this.b = g_02;
        this.a = new JRadioButton(string);
        this.a.setFont(g_02.e);
        this.a.setOpaque(false);
        this.a.addActionListener(g_02.s);
        jPanel.add(this.a);
        g_02.c.add(this.a);
        this.a.setToolTipText("<html><img src=\"" + String.valueOf(Main.class.getResource("/resources/" + string + ".gif")) + "\">");
        if (jComboBox != null) {
            JPanel jPanel2 = new JPanel(new FlowLayout(0, 0, 0));
            jPanel2.setOpaque(false);
            jPanel2.add(jComboBox);
            jComboBox.setPreferredSize(new Dimension(200, 22));
            jComboBox.setMaximumSize(new Dimension(200, 22));
            jComboBox.setFont(g_02.e);
            jComboBox.setActionCommand(string);
            jComboBox.addActionListener(g_02.t);
            jPanel.add(jPanel2);
        } else {
            jPanel.add(new JLabel(" "));
        }
        if (g_02.a.bj == null) {
            g_02.a.bj = "Klondike";
        }
        g_02.a(this, string);
    }
}

