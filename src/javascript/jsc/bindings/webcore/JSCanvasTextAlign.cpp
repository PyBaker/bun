/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSCanvasTextAlign.h"

#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSString.h>
#include <wtf/NeverDestroyed.h>


namespace WebCore {
using namespace JSC;

String convertEnumerationToString(CanvasTextAlign enumerationValue)
{
    static const NeverDestroyed<String> values[] = {
        MAKE_STATIC_STRING_IMPL("start"),
        MAKE_STATIC_STRING_IMPL("end"),
        MAKE_STATIC_STRING_IMPL("left"),
        MAKE_STATIC_STRING_IMPL("right"),
        MAKE_STATIC_STRING_IMPL("center"),
    };
    static_assert(static_cast<size_t>(CanvasTextAlign::Start) == 0, "CanvasTextAlign::Start is not 0 as expected");
    static_assert(static_cast<size_t>(CanvasTextAlign::End) == 1, "CanvasTextAlign::End is not 1 as expected");
    static_assert(static_cast<size_t>(CanvasTextAlign::Left) == 2, "CanvasTextAlign::Left is not 2 as expected");
    static_assert(static_cast<size_t>(CanvasTextAlign::Right) == 3, "CanvasTextAlign::Right is not 3 as expected");
    static_assert(static_cast<size_t>(CanvasTextAlign::Center) == 4, "CanvasTextAlign::Center is not 4 as expected");
    ASSERT(static_cast<size_t>(enumerationValue) < WTF_ARRAY_LENGTH(values));
    return values[static_cast<size_t>(enumerationValue)];
}

template<> JSString* convertEnumerationToJS(JSGlobalObject& lexicalGlobalObject, CanvasTextAlign enumerationValue)
{
    return jsStringWithCache(lexicalGlobalObject.vm(), convertEnumerationToString(enumerationValue));
}

template<> std::optional<CanvasTextAlign> parseEnumeration<CanvasTextAlign>(JSGlobalObject& lexicalGlobalObject, JSValue value)
{
    auto stringValue = value.toWTFString(&lexicalGlobalObject);
    if (stringValue == "start")
        return CanvasTextAlign::Start;
    if (stringValue == "end")
        return CanvasTextAlign::End;
    if (stringValue == "left")
        return CanvasTextAlign::Left;
    if (stringValue == "right")
        return CanvasTextAlign::Right;
    if (stringValue == "center")
        return CanvasTextAlign::Center;
    return std::nullopt;
}

template<> const char* expectedEnumerationValues<CanvasTextAlign>()
{
    return "\"start\", \"end\", \"left\", \"right\", \"center\"";
}

} // namespace WebCore