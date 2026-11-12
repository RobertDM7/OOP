#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Book.h"

using namespace std;

class Library
{
public:
    Library(string location);

    void addBook(Book carte);
    Book& getBook(string bookName);

private:
    vector<Book> books;
    string location;
    int numberofbooks = 0;
};
