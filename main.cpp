#include <iostream>
#include <string>

using namespace std;

//Klasser
class Person {
public:
	string name;
	int age; 

//Metoder (Prototyp)
	void SkrivUt();
};


int main()
{
	setlocale(LC_ALL, "swedish");



	return 0;
}


// Metoder (Komplett)
void Person::SkrivUt() {
	cout << "Namn: " << this->name << "Ålder: " << this->age << " \n";
}