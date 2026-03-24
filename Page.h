#ifndef PAGE_H
#define PAGE_H

#include <string>

using namespace std;

class Page {
public:
    // default constructor
    Page(string text = "");
    void setText(string text);
    string getText() const;
private:
    string content;
};

#endif
