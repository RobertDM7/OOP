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
    Library(string location)
    {
        this -> location = location;
    }

    void addBook(Book carte)
    {
        books.push_back(carte);
        numberofbooks++;
    }

    Book& getBook(string bookName)
    {
        for (auto& book : books)
        {
            if (book.getBookName() == bookName)
                return book;
        }
        throw runtime_error("Cartea nu a fost gasita!");
    }

    private:

    vector <Book> books;
    string location;
    int numberofbooks = 0;
};
