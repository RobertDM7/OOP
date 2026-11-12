#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

class Review
{
public:
    Review(string reviewerName, string review);

    string getreviewerName() const;
    string getreview() const;

private:
    string reviewerName;
    string review;
};
