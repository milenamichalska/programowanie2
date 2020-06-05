#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

class Figura {
	int promienKuli;
    int wysokoscWalca;
    int wysokoscStozka;
  public:
	Figura();
	Figura(int r, int h1, int h2);
	void oblicz_powierzchnie () {
		int l = sqrt( pow(wysokoscStozka, 2) + pow(promienKuli, 2) );
		int pole = (promienKuli * M_PI * l) + (2 * M_PI * promienKuli * wysokoscWalca) + 1/2 * (4 * M_PI * promienKuli * promienKuli);
		cout << "Pole figury: " << pole << endl;
	}
	void oblicz_objetosc () {
		int objetosc = (1/3 * pow(promienKuli, 2) * M_PI * wysokoscStozka) + (M_PI * pow(promienKuli, 2) * wysokoscWalca) + 1/2 * (4/3 * M_PI * pow(promienKuli, 3));
		cout << "Objetosc figury: " << objetosc << endl;
	}
};

Figura::Figura() : promienKuli(15), wysokoscWalca(25), wysokoscStozka(4) {
	cout << "Klasa utworzona, konstruktor bezparametrowy" << endl;
}

Figura::Figura(int r, int h1, int h2) {
	cout << "Klasa utworzona, konstruktor parametrowy" << endl;
	promienKuli = r;
	wysokoscWalca = h1;
	wysokoscStozka = h2;
}

int main() {
	// your code goes here
	Figura a;
	Figura b (15,25,4);
	Figura c (10, 11, 12);
	
	a.oblicz_powierzchnie();
	a.oblicz_objetosc();
	
	b.oblicz_powierzchnie();
	b.oblicz_objetosc();
	
	c.oblicz_powierzchnie();
	c.oblicz_objetosc();
	
	Figura* d = new Figura (21, 19, 17);
	d->oblicz_powierzchnie();
	d->oblicz_objetosc();
	delete d;
	
	return 0;
}