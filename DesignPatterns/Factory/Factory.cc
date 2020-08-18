
#include "Factory.h"

#include "Product.h"

#include <iostream>

using namespace std;

Factory::Factory()
{

}

Factory::~Factory()
{

}

ConcreateFactory::ConcreateFactory()
{
    cout << "ConcreteFactory..." << endl;
}

ConcreateFactory::~ConcreateFactory()
{

}

Product* ConcreateFactory::CreateProduct()
{
    return new ConcreateProduct();   
}