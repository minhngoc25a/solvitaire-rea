/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.w_0Frame;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import javax.swing.JOptionPane;

/*
 * Renamed from com.solvitaire.app.aa
 */
final class aa_0Handler
implements ActionListener {
    private /* synthetic */ w_0Frame AboutDialog;

    aa_0Handler(w_0Frame w_02) {
        this.AboutDialog = w_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        int n2 = JOptionPane.showConfirmDialog(null, "\nYou are asking to clear out all the old challenge solutions       \n\nThis involves deleting all cards* and solution* files from the      \n directory shown.    \n\n                  OK to do this?\n\n", "Clear Competition Directory", 0, 3);
        if (n2 == 0) {
            Object object = this.AboutDialog.b.l.p;
            object = new File((String)object);
            if ((object = ((File)object).listFiles()) != null) {
                File[] fileArray = object;
                int n3 = ((File[])object).length;
                int n4 = 0;
                while (n4 < n3) {
                    object = fileArray[n4];
                    String string = ((File)object).getName().toLowerCase();
                    if (string.startsWith("cards")) {
                        ((File)object).delete();
                    } else if (string.startsWith("solution_")) {
                        ((File)object).delete();
                    }
                    ++n4;
                }
            }
        }
        this.AboutDialog.d();
        this.AboutDialog.c();
    }
}

