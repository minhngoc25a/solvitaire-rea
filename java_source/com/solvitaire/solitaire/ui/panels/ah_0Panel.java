/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.ui.handlers.ai_0Handler;
import com.solvitaire.solitaire.ui.w_0Frame;
import java.awt.Component;
import java.awt.Container;
import java.awt.Dimension;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JCheckBox;
import javax.swing.JComponent;
import javax.swing.JLabel;
import javax.swing.JPanel;

/*
 * Renamed from com.solvitaire.app.ah
 */
public final class ah_0Panel {
    private JPanel c = new JPanel();
    public JCheckBox AboutDialog;
    final /* synthetic */ w_0Frame b;

    ah_0Panel(w_0Frame w_02, String object) {
        this.b = w_02;
        this.AboutDialog = new JCheckBox((String)object);
        this.AboutDialog.setFont(w_02.h);
        this.AboutDialog.setBackground(w_02.t);
        this.AboutDialog.addActionListener(new ai_0Handler(this));
        object = new JPanel();
        ((Container)object).setLayout(new BoxLayout((Container)object, 0));
        ((JComponent)object).setBackground(w_02.t);
        w_02.q.add(this.AboutDialog);
        ((Container)object).add(w_02.f);
        w_02.f.setPreferredSize(new Dimension(60, 20));
        w_02.f.setMaximumSize(new Dimension(60, 20));
        w_02.f.setFont(w_02.h);
        JLabel jLabel = new JLabel(" moves");
        jLabel.setFont(w_02.h);
        ((Container)object).add(jLabel);
        ((Container)object).add(Box.createHorizontalGlue());
        w_02.q.add((Component)object);
        w_02.q.add(new JLabel("         "));
        w_02.f.setText("999");
        w_02.f.setEnabled(false);
    }
}

