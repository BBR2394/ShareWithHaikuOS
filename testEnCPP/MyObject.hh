

#ifndef My_OBJECT_HH_
# define My_OBJECT_HH_

class MyObject {

public:
	MyObject();
	~MyObject();
	
private :
	int _c;

public:
	int getValue() const;
	void setValue(int i);	
	
};

#endif
