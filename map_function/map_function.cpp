#include <locale>
#include <iostream>
#include <utility>
using namespace std;

#include "MyClass.h"

int main(int argc, char * argv[])
{
		// Afficheage des accents dans la console
	locale::global(locale(""));

	MyClass trait;

	MyClass::map_traitement::iterator it = trait.traitements.begin();
	MyClass::map_traitement::iterator end = trait.traitements.end();
	while (it != end) {
		(trait.*(it->second))();
		++it;
	}

	(trait.*(MyClass::traitements[2]))();
	(trait.*(MyClass::traitements[0]))();
	(trait.*(MyClass::traitements[1]))();

	MyClass trait2;
	it = MyClass::traitements.begin();
	end = MyClass::traitements.end();
	while (it != end) {
		(trait2.*(it->second))();
		++it;
	}


	// Fin
	cout << "Appuyer sur une touche : ";
	cin.ignore();

	return EXIT_SUCCESS;
}
