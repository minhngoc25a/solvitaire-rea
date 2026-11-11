/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.ui.ModeSelector;
import java.awt.Dimension;
import java.awt.FlowLayout;
import javax.swing.JComponent;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;

/*
 * Renamed from com.solvitaire.app.R
 */
public final class r_0Panel {
    JRadioButton AboutDialog;
    private /* synthetic */ ModeSelector b;

    r_0Panel(ModeSelector g_02, JPanel jPanel, String string, JComponent jComponent) {
        this.b = g_02;
        this.AboutDialog = new JRadioButton(string);
        this.AboutDialog.setFont(g_02.e);
        this.AboutDialog.setOpaque(false);
        this.AboutDialog.addActionListener(g_02.v);
        jPanel.add(this.AboutDialog);
        g_02.d.add(this.AboutDialog);
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
        g_02.AboutDialog(this, string);
    }
}

