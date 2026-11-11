/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.util.ErrorDialog;
import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.image.BufferedImage;
import java.io.File;
import javax.imageio.ImageIO;
import javax.swing.JFileChooser;

public final class qWHandler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    qWHandler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        object = new JFileChooser();
        ((JFileChooser)object).setCurrentDirectory(new File(this.AboutDialog.d.at));
        ((JFileChooser)object).setApproveButtonText("Select Dialog Image");
        int n2 = ((JFileChooser)object).showOpenDialog(this.AboutDialog.d.aq.g);
        if (n2 == 0) {
            object = ((JFileChooser)object).getSelectedFile().getPath();
            BufferedImage bufferedImage = null;
            try {
                bufferedImage = ImageIO.read(new File((String)object));
            }
            catch (Exception exception) {
                this.AboutDialog.d.i("Failed to load image file " + (String)object + " exception " + exception.getMessage());
            }
            if (bufferedImage != null) {
                ErrorDialog al_02 = new ErrorDialog(this.AboutDialog.d, bufferedImage);
                this.AboutDialog.d.b(2, "CaptureDialog");
                if (this.AboutDialog.d.FPanel.AboutDialog(al_02)) {
                    this.AboutDialog.c("Test Dialog", "Found dialog and orange button");
                } else {
                    this.AboutDialog.c("Test Dialog", "Did not find orange button");
                }
                this.AboutDialog.d.n();
            }
        }
    }
}

