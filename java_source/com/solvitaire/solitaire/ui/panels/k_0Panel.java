/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.panels;

import com.solvitaire.solitaire.util.l_0;
import com.solvitaire.solitaire.ui.handlers.m_0Handler;
import com.solvitaire.solitaire.ui.handlers.n_0Handler;
import com.solvitaire.solitaire.ui.panels.p_0Panel;
import com.solvitaire.solitaire.engine.SolitaireGameEngine;
import java.awt.Component;
import java.awt.Container;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.Frame;
import java.awt.image.BufferedImage;
import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JComponent;
import javax.swing.JDialog;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;

/*
 * Renamed from com.solvitaire.app.k
 */
public final class k_0Panel {
    public JDialog AboutDialog;
    public SolitaireGameEngine b;
    private JButton c = new JButton("OK");
    private JButton d = new JButton("More");
    private l_0 e = new l_0(this);

    k_0Panel(SolitaireGameEngine object, BufferedImage object2, String string) {
        this.b = object;
        object = this.b.aq.g;
        this.AboutDialog = new JDialog((Frame)object, "Board Analysis");
        object = this.AboutDialog.getContentPane();
        ((Container)object).setLayout(new BoxLayout((Container)object, 0));
        k_0Panel k_02 = this;
        p_0Panel p_02 = new p_0Panel(k_02, (int)(k_02.b.FPanel.rPanel.c() / this.b.H), (int)((this.b.FPanel.rPanel.d() - this.b.FPanel.t.AboutDialog()) / this.b.I));
        BufferedImage bufferedImage = object2;
        object2 = p_02;
        p_02.AboutDialog = bufferedImage;
        object2 = new JScrollPane(p_02);
        ((Container)object).add((Component)object2);
        object2 = new JPanel();
        ((Container)object2).setLayout(new BoxLayout((Container)object2, 1));
        ((Container)object).add(Box.createHorizontalStrut(5));
        ((Container)object).add((Component)object2);
        ((Container)object).add(Box.createHorizontalStrut(5));
        ((Container)object2).add(Box.createVerticalStrut(this.b.b(this.b.FPanel.rPanel.d() / 4.0)));
        object = new JPanel();
        ((Container)object).setLayout(new BoxLayout((Container)object, 1));
        ((JComponent)object).setPreferredSize(new Dimension(200, this.b.b(this.b.FPanel.rPanel.d() / 3.0)));
        ((JComponent)object).setMaximumSize(new Dimension(200, this.b.b(this.b.FPanel.rPanel.d() / 3.0)));
        ((JComponent)object).setBorder(BorderFactory.createEtchedBorder());
        ((Container)object2).add((Component)object);
        ((Container)object2).add(Box.createVerticalStrut(this.b.b(this.b.FPanel.rPanel.d() / 4.0)));
        ((Container)object).add(Box.createVerticalGlue());
        object2 = new JTextArea(string);
        ((JTextArea)object2).setLineWrap(true);
        ((JTextArea)object2).setWrapStyleWord(true);
        ((JComponent)object2).setEnabled(false);
        ((JTextArea)object2).setFont(new Font("Arial", 1, 16));
        ((Container)object).add((Component)object2);
        ((Container)object).add(Box.createVerticalGlue());
        object2 = new JPanel();
        ((JComponent)object2).setPreferredSize(new Dimension(this.b.AboutDialog(200.0), this.b.b(40.0)));
        ((Container)object2).add(this.d);
        ((Container)object2).add(this.c);
        ((Container)object).add((Component)object2);
        ((Container)object).add(Box.createVerticalStrut(2));
        p_02.addMouseListener(this.e);
        this.c.addActionListener(new m_0Handler(this));
        this.d.addActionListener(new n_0Handler(this));
        int n2 = p_02.b + 250;
        int n3 = p_02.c + (int)this.b.FPanel.t.AboutDialog() + 5;
        this.AboutDialog.setLocation(0, 0);
        this.AboutDialog.setSize(n2, n3);
        this.AboutDialog.setVisible(true);
    }
}

