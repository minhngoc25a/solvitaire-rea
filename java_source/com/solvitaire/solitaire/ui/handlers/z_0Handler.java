/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.w_0Frame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import javax.swing.JFileChooser;
import javax.swing.JFrame;

/*
 * Renamed from com.solvitaire.app.Z
 */
public final class z_0Handler
implements ActionListener {
    private /* synthetic */ w_0Frame AboutDialog;
    private final /* synthetic */ JFrame b;

    public z_0Handler(w_0Frame w_02, JFrame jFrame) {
        this.AboutDialog = w_02;
        this.b = jFrame;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        object = new JFileChooser();
        ((JFileChooser)object).setCurrentDirectory(new File(this.AboutDialog.b.ag));
        ((JFileChooser)object).setFileSelectionMode(1);
        ((JFileChooser)object).setApproveButtonText("Select Directory");
        int n2 = ((JFileChooser)object).showOpenDialog(this.b);
        if (n2 == 0) {
            object = ((JFileChooser)object).getSelectedFile().getPath();
            this.AboutDialog.b.l.AboutDialog((String)object, true);
        }
        this.AboutDialog.rPanel.setText("Challenge directory:" + this.AboutDialog.b.l.p + "    ");
        this.AboutDialog.d();
        this.AboutDialog.c();
    }
}

