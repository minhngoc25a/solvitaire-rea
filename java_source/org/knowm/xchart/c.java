/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.event.ActionEvent;
import javax.swing.AbstractAction;
import org.knowm.xchart.XChartPanel;

final class c
extends AbstractAction {
    private /* synthetic */ XChartPanel a;

    public c(XChartPanel xChartPanel) {
        this.a = xChartPanel;
        super("export");
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        XChartPanel.c(this.a);
    }
}

