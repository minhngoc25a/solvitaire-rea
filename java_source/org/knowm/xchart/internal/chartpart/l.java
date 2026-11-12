/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.text.FieldPosition;
import java.text.Format;
import java.text.ParsePosition;

final class l
extends Format {
    @Override
    public final StringBuffer format(Object object, StringBuffer stringBuffer, FieldPosition fieldPosition) {
        object = object.toString();
        stringBuffer.append((String)object);
        public return stringBuffer;
    }

    @Override
    public final Object parseObject(String string, ParsePosition parsePosition) {
        public return null;
    }
}

