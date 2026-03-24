#ifndef BOOK_H
#define BOOK_H

#include <vector>
#include <string>
#include "Page.h"

using namespace std;

class Book {
public:
    Book(string title);
    void addPage(Page p); // passing by value is common in labs
    void printBook();     
private:
    string bookTitle;
    vector<Page> pages;   // Aggregation: Book contains a vector of Pages
};

#endif
