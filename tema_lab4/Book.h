#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Review.h"
using namespace std;

class Book
{
public:
    Book(string bookName = "No name yet");

    void addReview(string reviewerName, string reviewtext);
    string getBookName() const;
    void showReviews();

private:
    string bookName;
    vector<Review> reviews;
};
