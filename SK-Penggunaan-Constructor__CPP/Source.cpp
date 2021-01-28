#pragma warning(disable:4996)

#include <conio.h>
#include <iostream>

using namespace std;

/* Modified by Rizky Khapidsyah */

class bilangan {
private:
	int bulat;
	double nyata;

public:
	bilangan(); //konstruktor
	void info();
};

int main() {
	system("cls");

	bilangan a;
	a.info();

	bilangan b;
	b.info();

	_getch();
	return 0;
}
bilangan::bilangan() {
	cout << "\n Konstruktor dijalankan ... " << endl;
	bulat = 5.2;
	nyata = 3.6;
}

void bilangan::info() {
	cout << "\n Jenis Bilangan: " << endl
		<< " Bulat = " << bulat << endl
		<< " Nyata = " << nyata << endl;
}