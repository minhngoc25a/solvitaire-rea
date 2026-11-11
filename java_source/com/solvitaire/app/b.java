/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.a;
import java.net.URL;
import javax.swing.event.HyperlinkEvent;
import javax.swing.event.HyperlinkListener;

final class b
implements HyperlinkListener {
    private /* synthetic */ a a;

    b(a a2) {
        this.a = a2;
    }

    @Override
    public final void hyperlinkUpdate(HyperlinkEvent serializable) {
        if (((HyperlinkEvent)serializable).getEventType() == HyperlinkEvent.EventType.ACTIVATED) {
            serializable = ((HyperlinkEvent)serializable).getURL();
            this.a.a.j(((URL)serializable).toString());
        }
    }
}

