#include<iostream>
using namespace std;

class Animal 
{
public:
	
	virtual void sound() = 0;	//Pure virtual method
};

class Cat : public Animal {
public:
	void sound()
	{
		cout << "ּÿף!" << endl;
	}
};

class Dog : public Animal {
public:
	void sound() {
		cout << "ֳאג!" << endl;
	}
};

void main() {
	setlocale(LC_ALL, "Russian");
	//Animal animal;//Can not instatiate abstract class
	Cat cat;
	cat.sound();
	Dog hot;
	hot.sound();
}