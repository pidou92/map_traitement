#pragma once

#include <map>
using namespace std;

class MyClass
{
public:
	typedef void(MyClass::*traitement)();
	typedef map<int, traitement> map_traitement;

	MyClass(void);
	~MyClass(void);

	void trait1();
	void trait2();
	void trait3();

	static map_traitement traitements;

};

