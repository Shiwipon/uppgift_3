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

//Funktioner

int linsok(Person myList[], int amountofpeople, int age) {
	for (int i = 0; i < 10; i++){
		//Om det är personen vi söker: 
		if (myList[i].age == age)
			return i;
	}

	return-1; //Personen hittades ej. 
}


void bubblesort(Person myList[], int n) {

}


int main()
{
	setlocale(LC_ALL, "swedish");

	return 0;
}


// Metoder (Komplett)
void Person::SkrivUt() {
	cout << "Namn: " << this->name << "Ålder: " << this->age << " \n";
}