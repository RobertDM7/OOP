#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Library.h"
#include "Review.h"
#include "Reviewer.h"
#include "Book.h"
using namespace std;


int main()
{
    Library library("Biblioteca din Craiova");
    library.addBook(Book("Game of thrones"));
    library.addBook(Book("Harry Potter"));
    library.addBook(Book("Cei trei muschetari"));
    library.addBook(Book("Ion"));

    Reviewer Robert("Robert");
    Robert.addReview("Mi-a placut", "Ion", library);
    Reviewer Daniel("Daniel");
    Daniel.addReview("Nu mi-a placut", "Ion", library);
    Book carte = library.getBook("Ion");
    carte.showReviews();
    return 0;
}