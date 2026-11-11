/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.k_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.m
 */
final class m_0
implements ActionListener {
    private /* synthetic */ k_0 a;

    m_0(k_0 k_02) {
        this.a = k_02;
    }

    @Override
    public final void actionPerformed(ActionEvent actionEvent) {
        this.a.b.g("BoardDialog got input event");
        this.a.b.F.x = false;
        this.a.b.aO = false;
        this.a.a.dispose();
    }
}

