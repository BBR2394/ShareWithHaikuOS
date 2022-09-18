
#include <iostream>

#include "MyObject.hh"

MyObject::MyObject() {
	std::cout << "creation de My Object" << std::endl;
	this->_c = 36;

}

MyObject::~MyObject() {
	std::cout << "destruction de My Object" << std::endl;

}

int MyObject::getValue() const {
	return this->_c;	
}

void MyObject::setValue(int i) {
	this->_c = i;	
}
