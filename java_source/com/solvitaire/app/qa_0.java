/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.qz;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;

/*
 * Renamed from com.solvitaire.app.qA
 */
final class qa_0
implements ChangeListener {
    private /* synthetic */ qz a;

    qa_0(qz qz2) {
        this.a = qz2;
    }

    @Override
    public final void stateChanged(ChangeEvent changeEvent) {
        int n2 = this.a.b.getSelectedIndex();
        this.a.a.g("Tabbed pane index " + n2);
        switch (n2) {
            case 0: {
                this.a.a.br.a("Easy");
                return;
            }
            case 1: {
                this.a.a.br.a("Moderate");
                return;
            }
            case 2: {
                this.a.a.br.a("Hard");
            }
        }
    }
}

