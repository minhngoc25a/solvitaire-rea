/*
 * Decompiled with CFR 0.152.
 */
package com.solvitaire.app;

import com.solvitaire.app.g_0;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.EventObject;
import javax.swing.JButton;

/*
 * Renamed from com.solvitaire.app.J
 */
final class j_0
implements ActionListener {
    private /* synthetic */ g_0 a;

    j_0(g_0 g_02) {
        this.a = g_02;
    }

    @Override
    public final void actionPerformed(ActionEvent object) {
        block12: {
            block11: {
                block14: {
                    block13: {
                        String string = ((JButton)((EventObject)object).getSource()).getText();
                        object = string;
                        object = string;
                        switch (string.hashCode()) {
                            case -218124269: {
                                if (((String)object).equals("<html>Solve games from<br>Microsoft Solitaire Collection</html>")) break;
                                return;
                            }
                            case 366277983: {
                                if (!((String)object).equals("Solve existing cards...")) {
                                    return;
                                }
                                break block11;
                            }
                            case 506887308: {
                                if (!((String)object).equals("Play existing solution...")) {
                                    return;
                                }
                                break block12;
                            }
                            case 1637478375: {
                                if (!((String)object).equals("<html>Play<br>Solitaire</html>")) {
                                    return;
                                }
                                break block13;
                            }
                            case 2010619095: {
                                if (!((String)object).equals("<html>Read games in<br>from file</html>")) {
                                    return;
                                }
                                break block14;
                            }
                        }
                        g_0.a(this.a.a, "msft", null);
                        return;
                    }
                    g_0.a(this.a.a, "play", null);
                    return;
                }
                g_0.a(this.a.a, "file", null);
                return;
            }
            g_0.a(this.a.a, "readcards", null);
            return;
        }
        g_0.a(this.a.a, "readsolution", null);
    }
}

