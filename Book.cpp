#include <iostream>
#include "Book.h"

Book::Book(string title) {
    bookTitle = title;
}

void Book::addPage(Page p) {
    pages.push_back(p);
}

void Book::printBook() {
    cout << "Book: " << bookTitle << endl;
    // basic loop to show pages
    for (int i = 0; i < pages.size(); i++) {
        cout << "Page " << (i + 1) << ": " << pages[i].getText() << endl;
    }
}
