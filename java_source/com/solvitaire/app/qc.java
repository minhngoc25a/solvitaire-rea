/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import javax.swing.JFileChooser;
import javax.swing.JFrame;

final class qc
implements ActionListener {
    private /* synthetic */ qb a;
    private final /* synthetic */ JFrame b;

    qc(qb qb2, JFrame jFrame) {
        this.a = qb2;
        this.b = jFrame;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        object = new JFileChooser();
        ((JFileChooser)object).setCurrentDirectory(new File(this.a.a.ag));
        ((JFileChooser)object).setFileSelectionMode(1);
        ((JFileChooser)object).setApproveButtonText("Select Directory");
        int n2 = ((JFileChooser)object).showOpenDialog(this.b);
        if (n2 == 0) {
            object = ((JFileChooser)object).getSelectedFile().getPath();
            this.a.a.l.a((String)object, true);
        }
        this.a.e.setText("Challenge directory:" + this.a.a.l.p + "    ");
        this.a.b();
        this.a.c();
    }
}

