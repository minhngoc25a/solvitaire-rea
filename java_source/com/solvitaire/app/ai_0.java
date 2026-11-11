/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.ah_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.ai
 */
final class ai_0
implements ActionListener {
    private /* synthetic */ ah_0 a;

    ai_0(ah_0 ah_02) {
        this.a = ah_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        if (this.a.a.isSelected()) {
            object = this.a;
            ((ah_0)object).b.f.setText("0");
            object = this.a;
            ((ah_0)object).b.f.setEnabled(true);
            return;
        }
        object = this.a;
        ((ah_0)object).b.f.setText("999");
        object = this.a;
        ((ah_0)object).b.f.setEnabled(false);
    }
}

