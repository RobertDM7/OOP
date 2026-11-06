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
    Book(string bookName = "No name yet")
    {
        this -> bookName = bookName;
    }

    void addReview(string reviewerName, string reviewtext)
    {
        Review review(reviewerName, reviewtext);
        reviews.push_back(review);
    }

    string getBookName() const
    {
        return bookName;
    }

    void showReviews()
    {
        cout << "Reviews for: " << bookName << "\n";
        for (const auto review : reviews)
        {
            cout << "Reviewer name: " << review.getreviewerName() << ", review: " << review.getreview() << "\n";
        }
    }

    private:

    string bookName;
    vector<Review> reviews;
};
