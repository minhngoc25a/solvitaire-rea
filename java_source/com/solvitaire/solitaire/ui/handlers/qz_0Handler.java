/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.lang.management.ManagementFactory;
import java.lang.management.MemoryUsage;

/*
 * Renamed from com.solvitaire.app.qZ
 */
final class qz_0Handler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    qz_0Handler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        object = ManagementFactory.getMemoryMXBean().getHeapMemoryUsage();
        System.gc();
        MemoryUsage memoryUsage = ManagementFactory.getMemoryMXBean().getHeapMemoryUsage();
        object = String.format("Memory before gc: %d / %d\nMemory after gc: %d / %d", ((MemoryUsage)object).getUsed(), ((MemoryUsage)object).getMax(), memoryUsage.getUsed(), memoryUsage.getMax());
        this.AboutDialog.c("Garbage Collection", (String)object);
    }
}

