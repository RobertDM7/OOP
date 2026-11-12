#include "Book.h"

using namespace std;

Book::Book(string bookName)
{
    this->bookName = bookName;
}

void Book::addReview(string reviewerName, string reviewtext)
{
    Review review(reviewerName, reviewtext);
    reviews.push_back(review);
}

string Book::getBookName() const
{
    return bookName;
}

void Book::showReviews()
{
    cout << "Reviews for " << bookName << ":\n";
    for (const auto& review : reviews)
    {
        cout << "Reviewer name: " << review.getreviewerName() << ", review: " << review.getreview() << "\n";
    }
}
