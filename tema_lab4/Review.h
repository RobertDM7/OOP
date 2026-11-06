#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

class Review
{
    public:

    Review(string reviewerName, string review)
    {
        this -> reviewerName = reviewerName;
        this -> review = review;
    }

    string getreviewerName() const
    {
        return reviewerName;
    }

    string getreview() const
    {
        return review;
    }

    private:
    string reviewerName;
    string review;
};