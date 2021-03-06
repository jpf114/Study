 ///
 /// @file    overload.c
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-06-17 17:43:49
 ///
 
#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

//C++语言支持函数重载
//实现原理: 名字改编(name mangling)
//具体步骤: 当函数名称相同时，会根据
//函数参数的类型、个数、顺序进行改编
int add(int x, int y)
{
	return x + y;
}

int add(int x, int y, int z)
{
	return x + y + z;
}

double add(double x, double y)
{
	return x + y;
}

double add(int x, double y)
{
	return x + y;
}

double add(double x, int y)
{
	return x + y;
}

int main(void)
{
	int a = 3, b = 4, c = 5;
	double d1 = 1.1, d2 = 2.2;
	cout << "add(a, b) = " << add(a, b) << endl;
	cout << "add(a, b, c) = " << add(a, b, c) << endl;
	cout << "add(d1, d2) = " << add(d1, d2) << endl;

	printf("a = %d, b = %d\n", a, b);

	return 0;
}
