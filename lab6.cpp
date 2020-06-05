#include <iostream>
#include <math.h>
using namespace std;

class Wieloscian {
	protected:
	int dlugosc_podstawy;
	int szerokosc_podstawy;
	int wysokosc;
	public:
	void set(int a, int b, int h) {
		dlugosc_podstawy = a;
		szerokosc_podstawy = b;
		wysokosc = h;
	}
};

class Prostopadloscian : public Wieloscian {
	public:
	int objetosc() {
		return dlugosc_podstawy * szerokosc_podstawy * wysokosc;
	}
	int pole_powierzchni() {
		return 2 * dlugosc_podstawy * szerokosc_podstawy + 2 * dlugosc_podstawy * wysokosc + 2 * szerokosc_podstawy * wysokosc;
	}
};

class Ostroslup : public Wieloscian {
	public:
	int objetosc() {
		return dlugosc_podstawy * szerokosc_podstawy * wysokosc / 3;
	}
	int pole_powierzchni() {
		int h1 = sqrt(pow(dlugosc_podstawy/2, 2) + pow(wysokosc, 2));
		int h2 = sqrt(pow(szerokosc_podstawy/2, 2) + pow(wysokosc, 2));
		return dlugosc_podstawy * szerokosc_podstawy + (h1 * dlugosc_podstawy)/2 + (h2 * szerokosc_podstawy)/2;
	}
};

int main() {
	Prostopadloscian a;
	a.set(10, 5, 7);
	cout << a.objetosc() << endl;
	Ostroslup b;
	b.set(6, 4, 8);
	cout << b.pole_powierzchni() << endl;
	return 0;
}