/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.MainWindow;
import java.io.File;
import javax.swing.filechooser.FileFilter;

/*
 * Renamed from com.solvitaire.app.qN
 */
public final class qn_0
extends FileFilter {
    private /* synthetic */ MainWindow AboutDialog;

    qn_0(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final String getDescription() {
        return "Solvitaire solution files(solution_*.txt)";
    }

    @Override
    public final boolean accept(File file) {
        if (file.isDirectory()) {
            return true;
        }
        return file.getName().startsWith("solution_");
    }
}

