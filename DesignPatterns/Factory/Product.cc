
#include "Product.h"

#include <iostream>

using namespace std;

Product::Product()
{

}

Product::~Product()
{

}

ConcreateProduct::ConcreateProduct()
{
    cout << "ConcreateProduct... " << endl;
}

ConcreateProduct::~ConcreateProduct()
{

}

void ConcreateProduct::print()
{
    cout << "This is print()." << endl;
}
