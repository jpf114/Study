#pragma once

class Product
{
public:
    virtual ~Product() = 0;

    virtual void print() = 0;
protected:
    Product();

private:

};


class ConcreateProduct
:public Product
{
public:
    ConcreateProduct();

    ~ConcreateProduct();

    void print();

protected:

private:
};
