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
    Reviewer(string reviewerName);

    void addReview(string reviewtext, string bookName, Library &library);

private:
    string reviewerName;
    vector<Review> reviews;
};
