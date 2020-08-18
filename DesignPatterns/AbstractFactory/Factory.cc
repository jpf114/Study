
#include "Factory.h"

#include "Product.h"

#include <iostream>

using namespace std;

AbstractFactory::AbstractFactory()
{

}

AbstractFactory::~AbstractFactory()
{

}

ConcreateProduct1::ConcreateProduct1()
{

}

ConcreateProduct1::~ConcreateProduct1()
{

}

AbstarctProductA* ConcreateProduct1::CreateProductA()
{
    return new ProductA1;
}


AbstarctProductB* ConcreateProduct1::CreateProductB()
{
    return new ProductB1;
}


ConcreateProduct2::ConcreateProduct2()
{

}

ConcreateProduct2::~ConcreateProduct2()
{

}

AbstarctProductA* ConcreateProduct2::CreateProductA()
{
    return new ProductA2;
}


AbstarctProductB* ConcreateProduct2::CreateProductB()
{
    return new ProductB2;
}


