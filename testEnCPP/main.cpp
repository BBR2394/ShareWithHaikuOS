
#include <iostream>

#include "MyObject.hh"

int main() {
	std::cout << "bonjour" << std::endl;
	
	MyObject *monObjet = new MyObject();
	
	std::cout << "la valeur de l'objet : " << monObjet->getValue() << std::endl;

	
	monObjet->setValue(42);
	
	std::cout << "la valeur de l'objet : " << monObjet->getValue() << std::endl;
	
	delete(monObjet);
	
	return 0;
}
