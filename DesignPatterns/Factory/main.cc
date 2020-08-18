
#include "Factory.h"

#include "Product.h"

#include <iostream>

using namespace std;

int main(void)
{
    Factory* fac = new ConcreateFactory();

    Product* pro = fac -> CreateProduct();
    
    pro->print();

    return 0;
    
}
