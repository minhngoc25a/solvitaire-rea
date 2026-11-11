/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.g_0;
import java.awt.Cursor;
import javax.swing.Icon;
import javax.swing.JButton;
import javax.swing.JPanel;

/*
 * Renamed from com.solvitaire.app.Q
 */
public final class q_0 {
    private JButton a;
    private /* synthetic */ g_0 b;

    q_0(g_0 g_02, JPanel jPanel, String string, Icon icon, String string2) {
        this.b = g_02;
        this.a = new JButton(string, icon);
        this.a.setFont(g_02.e);
        this.a.setBackground(g_02.f);
        this.a.addActionListener(g_02.u);
        this.a.setVerticalTextPosition(3);
        this.a.setHorizontalTextPosition(0);
        this.a.setCursor(Cursor.getPredefinedCursor(12));
        this.a.setToolTipText(string2);
        jPanel.add(this.a);
    }
}

