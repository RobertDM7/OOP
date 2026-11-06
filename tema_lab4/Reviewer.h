#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Library.h"
#include "Book.h"
#include "Review.h"
using namespace std;

class Reviewer
{
    public:
    Reviewer(string reviewerName)
    {
        this -> reviewerName = reviewerName;
    }

    void addReview(string reviewtext, string bookName, Library &library)
    {
           
        try {
            Book& carte = library.getBook(bookName);
            carte.addReview(reviewerName, reviewtext);

        } catch (const exception& e) {
            Book carte2(bookName);
            carte2.addReview(reviewerName, reviewtext);
            library.addBook(carte2);
        }
    }

    private:
    string reviewerName;
    vector<Review> reviews;
};
