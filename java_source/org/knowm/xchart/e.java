/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.event.ActionEvent;
import javax.swing.AbstractAction;
import org.knowm.xchart.XChartPanel;

final class e
extends AbstractAction {
    private /* synthetic */ XChartPanel a;

    public e(XChartPanel xChartPanel) {
        this.a = xChartPanel;
        super("print");
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        XChartPanel.d(this.a);
    }
}

