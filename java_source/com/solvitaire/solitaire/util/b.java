/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.solitaire.util;

import com.solvitaire.solitaire.ui.AboutDialog;
import java.net.URL;
import javax.swing.event.HyperlinkEvent;
import javax.swing.event.HyperlinkListener;

final class b
implements HyperlinkListener {
    private /* synthetic */ AboutDialog AboutDialog;

    b(AboutDialog a2) {
        this.AboutDialog = a2;
    }

    @Override
    public final void hyperlinkUpdate(HyperlinkEvent serializable) {
        if (((HyperlinkEvent)serializable).getEventType() == HyperlinkEvent.EventType.ACTIVATED) {
            serializable = ((HyperlinkEvent)serializable).getURL();
            this.AboutDialog.AboutDialog.j(((URL)serializable).toString());
        }
    }
}

