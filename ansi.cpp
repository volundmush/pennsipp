//
// Created by volund on 10/29/20.
//

#include "ansi.h"

bool AnsiString::has_markup(std::string *str) {
    return !(str->find(ESC_CHAR) == -1 && str->find(TAG_START) == -1 && str->find(TAG_END) == -1);
}

AnsiString::AnsiString(const char *src) {
    // If there isn't any markup, there's no need to go further.
    this->source.append(src);
    if(!AnsiString::has_markup(&this->source)) {
        return;
    }

    // String has markup. nuts.
    int c;
    char *tag, type;

    Markup *mi2 = nullptr, *mip = nullptr;

    int idx = NOMARKUP;
    int pidx = NOMARKUP;

    for(auto s = const_cast<char *>(this->source.c_str()); *s;) {

    }


}