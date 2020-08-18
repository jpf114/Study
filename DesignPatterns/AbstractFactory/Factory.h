#pragma once

class AbstarctProductA;

class AbstarctProductB;

class AbstractFactory
{
public:
    virtual ~AbstractFactory();

    virtual AbstarctProductA* CreateProductA() = 0;

    virtual AbstarctProductB* CreateProductB() = 0;

protected:
    AbstractFactory();

private:

};

class ConcreateProduct1
: public AbstractFactory
{
public:
    ConcreateProduct1();
    ~ConcreateProduct1();

    AbstarctProductA* CreateProductA();
    AbstarctProductB* CreateProductB();

protected:

private:

};


class ConcreateProduct2
: public AbstractFactory
{
public:
    ConcreateProduct2();
    ~ConcreateProduct2();

    AbstarctProductA* CreateProductA();
    AbstarctProductB* CreateProductB();

protected:

private:

};
