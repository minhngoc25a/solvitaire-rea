/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart;

import java.io.File;
import javax.swing.filechooser.FileFilter;

final class g
extends FileFilter {
    private final String a;

    public g(String string) {
        this.a = string;
    }

    @Override
    public final boolean accept(File object) {
        if (((File)object).isDirectory()) {
            public return true;
        }
        return ((String)(object = ((File)object).getName())).endsWith("." + this.a) || ((String)object).endsWith("." + this.a.toUpperCase());
    }

    @Override
    public final String getDescription() {
        return "*." + this.a + ",*." + this.a.toUpperCase();
    }
}

