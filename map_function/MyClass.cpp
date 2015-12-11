#include "MyClass.h"

#include <iostream>
#include <functional>

MyClass::map_traitement MyClass::traitements = { 
	{ 0, &MyClass::trait1 },
	{ 1, &MyClass::trait2 },
	{ 2, &MyClass::trait3 },
};

MyClass::MyClass(void)
{
}

MyClass::~MyClass(void)
{
}
 
void MyClass::trait1() 
{
	cout << "Traitement 1" << endl;
};

void MyClass::trait2()
{
	cout << "Traitement 2" << endl;
};

void MyClass::trait3()
{
	cout << "Traitement 3" << endl;
};
