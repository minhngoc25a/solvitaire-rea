/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.io.File;
import javax.swing.filechooser.FileFilter;

/*
 * Renamed from com.solvitaire.app.qN
 */
final class qn_0
extends FileFilter {
    private /* synthetic */ qb_0 a;

    qn_0(qb_0 qb_02) {
        this.a = qb_02;
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

