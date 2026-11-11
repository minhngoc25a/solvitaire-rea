/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.awt.event.ActionEvent;
import javax.swing.AbstractAction;
import org.knowm.xchart.XChartPanel;

final class f
extends AbstractAction {
    private /* synthetic */ XChartPanel a;

    public f(XChartPanel xChartPanel) {
        this.a = xChartPanel;
        super("save");
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        XChartPanel.b(this.a);
    }
}

