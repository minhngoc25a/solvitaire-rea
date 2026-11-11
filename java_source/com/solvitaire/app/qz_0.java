/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qb_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.lang.management.ManagementFactory;
import java.lang.management.MemoryUsage;

/*
 * Renamed from com.solvitaire.app.qZ
 */
final class qz_0
implements ActionListener {
    private /* synthetic */ qb_0 a;

    qz_0(qb_0 qb_02) {
        this.a = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        object = ManagementFactory.getMemoryMXBean().getHeapMemoryUsage();
        System.gc();
        MemoryUsage memoryUsage = ManagementFactory.getMemoryMXBean().getHeapMemoryUsage();
        object = String.format("Memory before gc: %d / %d\nMemory after gc: %d / %d", ((MemoryUsage)object).getUsed(), ((MemoryUsage)object).getMax(), memoryUsage.getUsed(), memoryUsage.getMax());
        this.a.c("Garbage Collection", (String)object);
    }
}

