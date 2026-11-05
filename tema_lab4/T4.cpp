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

class Library
{
    public:
    Library(string location)
    {
        this -> location = location;
    }

    void addBook(string bookName)
    {
        books.push_back(Book (bookName));
        numberofbooks++;
    }

    Book getBook(string bookName)
    {
        for (const auto book : books)
        {
            if (book.getBookName() == bookName)
                return book;
        }
        throw runtime_error("Cartea nu a fost gasita!");
    }

    private:

    vector<Book> books;
    string location;
    int numberofbooks = 0;
};

int main()
{
    Library library("Biblioteca din Craiova");
    library.addBook("Game of thrones");
    library.addBook("Harry Potter");
    library.addBook("Cei trei muschetari");
    library.addBook("Ion");
    
    Book carte;
    try {
        carte = library.getBook("Ion");
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    carte.addReview("Robert", "Mi-a placut");
    carte.addReview("Daniel", "Nu mi-a placut");

    carte.showReviews();
    return 0;
}