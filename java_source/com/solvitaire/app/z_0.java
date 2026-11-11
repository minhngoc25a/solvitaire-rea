/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.w_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import javax.swing.JFileChooser;
import javax.swing.JFrame;

/*
 * Renamed from com.solvitaire.app.Z
 */
final class z_0
implements ActionListener {
    private /* synthetic */ w_0 a;
    private final /* synthetic */ JFrame b;

    z_0(w_0 w_02, JFrame jFrame) {
        this.a = w_02;
        this.b = jFrame;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        object = new JFileChooser();
        ((JFileChooser)object).setCurrentDirectory(new File(this.a.b.ag));
        ((JFileChooser)object).setFileSelectionMode(1);
        ((JFileChooser)object).setApproveButtonText("Select Directory");
        int n2 = ((JFileChooser)object).showOpenDialog(this.b);
        if (n2 == 0) {
            object = ((JFileChooser)object).getSelectedFile().getPath();
            this.a.b.l.a((String)object, true);
        }
        this.a.r.setText("Challenge directory:" + this.a.b.l.p + "    ");
        this.a.d();
        this.a.c();
    }
}

