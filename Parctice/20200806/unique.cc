#include <iostream>
#include <memory>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::unique_ptr;

class Point
{
public:
    Point(int x = 0, int y = 0)
    : _x(x)
    , _y(y)
    {
        cout << " Ponint(int, int) " << endl;
    }

    ~Point()
    {
        cout << " ~Point() " << endl;
    }

    friend std::ostream& operator<<( std:;ostream & os, const Point & rhs );

private:
    int _x;
    int _y;
}

std::ostream& operator<<( std::ostream & os, const Point & rhs )
{
    cout << "(" << rhs._x 
         << "," << rhs._y
         << ")";
}

int test0
{
    Point *ptr = new Point(1, 2 );
    unique_ptr<ptr> ax(ptr);
    cout << "*ax = " << *ax << endl;
    cout << "ax.get() = " << ax.get() << endl;
}

int main()
{
    std::cout << "Hello world" << std::endl;
    return 0;
}

