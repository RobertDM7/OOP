#include "Review.h"

using namespace std;

Review::Review(string reviewerName, string review)
{
    this->reviewerName = reviewerName;
    this->review = review;
}

string Review::getreviewerName() const
{
    return reviewerName;
}

string Review::getreview() const
{
    return review;
}
