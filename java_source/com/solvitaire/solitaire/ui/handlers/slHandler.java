/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.ui.handlers;

import com.solvitaire.solitaire.util.si;
import java.awt.Toolkit;
import java.awt.datatransfer.Clipboard;
import java.awt.datatransfer.StringSelection;
import java.awt.datatransfer.Transferable;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public final class slHandler
implements ActionListener {
    private /* synthetic */ si AboutDialog;

    slHandler(si si2) {
        this.AboutDialog = si2;
    }

    @Override
    public final void actionPerformed(ActionEvent serializable) {
        serializable = new StringBuffer();
        Object object = this.AboutDialog.c.getSelectedValuesList();
        Object object2 = object.iterator();
        while (object2.hasNext()) {
            object = (String)object2.next();
            ((StringBuffer)serializable).append((String)object);
            ((StringBuffer)serializable).append("\n");
        }
        object = new StringSelection(((StringBuffer)serializable).toString());
        object2 = Toolkit.getDefaultToolkit().getSystemClipboard();
        ((Clipboard)object2).setContents((Transferable)object, null);
        this.AboutDialog.b(this.AboutDialog.e);
    }
}

