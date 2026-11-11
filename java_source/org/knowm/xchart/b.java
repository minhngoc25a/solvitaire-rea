/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.io.File;
import javax.swing.filechooser.FileFilter;
import org.knowm.xchart.XChartPanel;

final class b
extends FileFilter {
    private /* synthetic */ XChartPanel a;

    b(XChartPanel xChartPanel) {
        this.a = xChartPanel;
    }

    @Override
    public final boolean accept(File file) {
        return file.isDirectory();
    }

    @Override
    public final String getDescription() {
        return "Any Directory";
    }
}

