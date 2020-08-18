
#include "Factory.h"

#include <iostream>

using namespace std;

int main(void)
{
    AbstractFactory* cf1 = new ConcreateProduct1;

    cf1->CreateProductA();
    cf1->CreateProductB();

    AbstractFactory* cf2 = new ConcreateProduct2;

    cf2->CreateProductA();
    cf2->CreateProductB();

    return 0;
}

