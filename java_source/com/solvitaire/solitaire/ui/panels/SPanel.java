/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.Main;
import com.solvitaire.solitaire.ui.ModeSelector;
import java.awt.Dimension;
import java.awt.FlowLayout;
import javax.swing.JComboBox;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;

public final class SPanel {
    JRadioButton AboutDialog;
    private /* synthetic */ ModeSelector b;

    SPanel(ModeSelector g_02, JPanel jPanel, String string, JComboBox jComboBox) {
        this.b = g_02;
        this.AboutDialog = new JRadioButton(string);
        this.AboutDialog.setFont(g_02.e);
        this.AboutDialog.setOpaque(false);
        this.AboutDialog.addActionListener(g_02.s);
        jPanel.add(this.AboutDialog);
        g_02.c.add(this.AboutDialog);
        this.AboutDialog.setToolTipText("<html><img src=\"" + String.valueOf(Main.class.getResource("/resources/" + string + ".gif")) + "\">");
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
        if (g_02.AboutDialog.bj == null) {
            g_02.AboutDialog.bj = "Klondike";
        }
        g_02.AboutDialog(this, string);
    }
}

