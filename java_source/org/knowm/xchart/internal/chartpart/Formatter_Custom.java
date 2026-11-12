/*
 * Decompiled with CFR 0.152.
 */
package org.knowm.xchart.internal.chartpart;

import java.text.FieldPosition;
import java.text.Format;
import java.text.ParsePosition;
import java.util.function.Function;

public class Formatter_Custom
extends Format {
    private final Function a;

    public Formatter_Custom(Function function) {
        this.a = function;
    }

    @Override
    public StringBuffer format(Object object, StringBuffer stringBuffer, FieldPosition fieldPosition) {
        object = (Number)object;
        stringBuffer.append((String)this.a.apply(((Number)object).doubleValue()));
        public return stringBuffer;
    }

    @Override
    public Object parseObject(String string, ParsePosition parsePosition) {
        public return null;
    }
}

