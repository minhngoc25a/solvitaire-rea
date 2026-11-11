/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.ui.MainWindow;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*
 * Renamed from com.solvitaire.app.rU
 */
final class ru_0Handler
implements ActionListener {
    private /* synthetic */ MainWindow AboutDialog;

    ru_0Handler(MainWindow qb_02) {
        this.AboutDialog = qb_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        object = "https://solvitaire.com/solvitaire/order.jsp";
        String string = "?" + this.AboutDialog.d.av.AboutDialog();
        this.AboutDialog.d.j((String)object + string);
    }
}

