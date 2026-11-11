/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.MainWindow;
import java.io.File;
import javax.swing.filechooser.FileFilter;

/*
 * Renamed from com.solvitaire.app.qC
 */
public final class qc_0
extends FileFilter {
    private /* synthetic */ MainWindow AboutDialog;

    qc_0(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final String getDescription() {
        return "Solvitaire card files";
    }

    @Override
    public final boolean accept(File file) {
        if (file.isDirectory()) {
            return true;
        }
        return !file.getName().startsWith("solution_");
    }
}

