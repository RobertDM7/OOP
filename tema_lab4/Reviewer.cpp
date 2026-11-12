#include "Reviewer.h"

using namespace std;

Reviewer::Reviewer(string reviewerName)
{
    this->reviewerName = reviewerName;
}

void Reviewer::addReview(string reviewtext, string bookName, Library &library)
{
    try
    {
        Book& carte = library.getBook(bookName);
        carte.addReview(reviewerName, reviewtext);
    }
    catch (const exception& e)
    {
        Book carte2(bookName);
        carte2.addReview(reviewerName, reviewtext);
        library.addBook(carte2);
    }
}
