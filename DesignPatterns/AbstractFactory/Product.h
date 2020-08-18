#pragma once

class AbstarctProductA
{
public:

    virtual ~AbstarctProductA();

protected:

    AbstarctProductA();

private:

};

class AbstarctProductB
{
public:

    virtual ~AbstarctProductB();

protected:

    AbstarctProductB();

private:

};

class ProductA1
: public AbstarctProductA
{
public:

    ProductA1();
    ~ProductA1();

protected:

private:

};

class ProductA2
: public AbstarctProductA
{
public:

    ProductA2();
    ~ProductA2();

protected:

private:

};


class ProductB1
: public AbstarctProductB
{
public:

    ProductB1();
    ~ProductB1();

protected:

private:

};

class ProductB2
: public AbstarctProductB
{
public:

    ProductB2();
    ~ProductB2();

protected:

private:

};




