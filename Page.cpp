#include "Page.h"

Page::Page(string text) {
    content = text;
}

void Page::setText(string text) {
    content = text;
}

// simple getter
string Page::getText() const {
    return content;
}
