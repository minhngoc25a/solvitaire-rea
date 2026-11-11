/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.al_0;
import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.image.BufferedImage;
import java.io.File;
import javax.imageio.ImageIO;
import javax.swing.JFileChooser;

final class qW
implements ActionListener {
    private /* synthetic */ qb_0 a;

    qW(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        object = new JFileChooser();
        ((JFileChooser)object).setCurrentDirectory(new File(this.a.d.at));
        ((JFileChooser)object).setApproveButtonText("Select Dialog Image");
        int n2 = ((JFileChooser)object).showOpenDialog(this.a.d.aq.g);
        if (n2 == 0) {
            object = ((JFileChooser)object).getSelectedFile().getPath();
            BufferedImage bufferedImage = null;
            try {
                bufferedImage = ImageIO.read(new File((String)object));
            }
            catch (Exception exception) {
                this.a.d.i("Failed to load image file " + (String)object + " exception " + exception.getMessage());
            }
            if (bufferedImage != null) {
                al_0 al_02 = new al_0(this.a.d, bufferedImage);
                this.a.d.b(2, "CaptureDialog");
                if (this.a.d.F.a(al_02)) {
                    this.a.c("Test Dialog", "Found dialog and orange button");
                } else {
                    this.a.c("Test Dialog", "Did not find orange button");
                }
                this.a.d.n();
            }
        }
    }
}

