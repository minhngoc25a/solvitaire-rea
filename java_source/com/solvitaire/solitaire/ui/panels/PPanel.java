/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.ui.ModeSelector;
import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JPanel;

public final class PPanel {
    private JButton AboutDialog;
    private /* synthetic */ ModeSelector b;

    PPanel(ModeSelector g_02, JPanel jPanel, String string, String string2) {
        this.b = g_02;
        JPanel jPanel2 = new JPanel(new FlowLayout(0));
        jPanel2.setOpaque(false);
        this.AboutDialog = new JButton(string);
        jPanel2.add(this.AboutDialog);
        this.AboutDialog.setFont(g_02.e);
        this.AboutDialog.setBackground(g_02.f);
        this.AboutDialog.addActionListener(g_02.uPanel);
        this.AboutDialog.setToolTipText(string2);
        jPanel.add(jPanel2);
    }
}

