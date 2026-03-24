#include <iostream>
#include "Book.h"
#include "Page.h"

using namespace std;

int main() {
    // start the book
    Book myJournal("Vacation Log");

    // create pages
    Page p1("Day 1: We arrived at the hotel.");
    Page p2("Day 2: Visited the local museum.");

    // link them
    myJournal.addPage(p1);
    myJournal.addPage(p2);

    // output
    myJournal.printBook();

    return 0;
}
