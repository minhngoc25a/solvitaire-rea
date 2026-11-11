/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.ui.ModeSelector;
import java.awt.Cursor;
import javax.swing.Icon;
import javax.swing.JButton;
import javax.swing.JPanel;

/*
 * Renamed from com.solvitaire.app.Q
 */
public final class q_0Panel {
    private JButton AboutDialog;
    private /* synthetic */ ModeSelector b;

    q_0Panel(ModeSelector g_02, JPanel jPanel, String string, Icon icon, String string2) {
        this.b = g_02;
        this.AboutDialog = new JButton(string, icon);
        this.AboutDialog.setFont(g_02.e);
        this.AboutDialog.setBackground(g_02.f);
        this.AboutDialog.addActionListener(g_02.uPanel);
        this.AboutDialog.setVerticalTextPosition(3);
        this.AboutDialog.setHorizontalTextPosition(0);
        this.AboutDialog.setCursor(Cursor.getPredefinedCursor(12));
        this.AboutDialog.setToolTipText(string2);
        jPanel.add(this.AboutDialog);
    }
}

