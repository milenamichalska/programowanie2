#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

class Macierz {
	int tab [3][3];
	int wiersze = 3;
	int kolumny = 3;
	public:
	Macierz() {
		for (int i = 0; i < wiersze; i++) {
			for (int j =0; j < kolumny; j++) {
				tab[i][j] = 0;
			}
		}
	};
	void wczytajDane() {
		for (int i = 0; i < wiersze; i++) {
			for (int j = 0; j < kolumny; j++) {
				tab[i][j] = rand() % 100 + 1;
			}
		}
	};
	void wypisz() {
		for (int i = 0; i < wiersze; i++) {
			for (int j =0; j < kolumny; j++) {
				cout << tab[i][j] << " ";
			}
			cout << endl;
		}
	};
	friend Macierz * dodajMacierze(Macierz * a, Macierz * b);
};

Macierz * dodajMacierze(Macierz* a, Macierz* b) {
	Macierz * wynik = new Macierz();
	for (int i = 0; i < wynik->wiersze; i++) {
		for (int j =0; j < wynik->kolumny; j++) {
			wynik->tab[i][j] = a->tab[i][j] + b->tab[i][j];
		}
	}
	return wynik;
};

int main() {
	srand (time(NULL));
	Macierz* a = new Macierz();
	Macierz* b = new Macierz();
	
	a->wczytajDane();
	b->wczytajDane();
	
	a->wypisz();
	cout << endl;
	b->wypisz();
	cout << endl;
	
	Macierz* c = dodajMacierze(a, b);
	c->wypisz();
	
	return 0;
}