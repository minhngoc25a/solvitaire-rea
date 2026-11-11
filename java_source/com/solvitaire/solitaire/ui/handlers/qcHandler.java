/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.qbFrame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import javax.swing.JFileChooser;
import javax.swing.JFrame;

final class qcHandler
implements ActionListener {
    private /* synthetic */ qbFrame AboutDialog;
    private final /* synthetic */ JFrame b;

    qcHandler(qbFrame qb2, JFrame jFrame) {
        this.AboutDialog = qb2;
        this.b = jFrame;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        object = new JFileChooser();
        ((JFileChooser)object).setCurrentDirectory(new File(this.AboutDialog.AboutDialog.ag));
        ((JFileChooser)object).setFileSelectionMode(1);
        ((JFileChooser)object).setApproveButtonText("Select Directory");
        int n2 = ((JFileChooser)object).showOpenDialog(this.b);
        if (n2 == 0) {
            object = ((JFileChooser)object).getSelectedFile().getPath();
            this.AboutDialog.AboutDialog.l.AboutDialog((String)object, true);
        }
        this.AboutDialog.e.setText("Challenge directory:" + this.AboutDialog.AboutDialog.l.p + "    ");
        this.AboutDialog.b();
        this.AboutDialog.c();
    }
}

