#include <iostream>
#include <time.h>
using namespace std;

class Przypomnienie {
	int rok;
	int miesiac;
	int dzien;
	string tresc;
	public:
	Przypomnienie() {
		time_t liczba_sekund;
	    struct tm strukt;
	    time(&liczba_sekund);
	    localtime_r(&liczba_sekund, &strukt);
	    
	    rok = 1900 + strukt.tm_year;
	    // cout << "Rok: " << rok << endl;
	    miesiac = strukt.tm_mon+1;
	    // cout << "Miesiac: " << miesiac << endl;
	    dzien = strukt.tm_mday;
	    // cout << "Dzien: " << dzien << endl;
	    tresc = "tresc przypomnienia";
	};
	Przypomnienie(int r, int m, int d) {
		rok = r;
		miesiac = m;
		dzien = d;
		tresc = "tresc przypomnienia";
	};
	Przypomnienie(const Przypomnienie & p) {
		rok = p.rok;
		miesiac = p.miesiac;
		dzien = p.dzien;
		tresc = p.tresc;
	};
	~Przypomnienie() {
		cout << "Tu destruktor! Wiadomosc:" << tresc << endl;
	}
	void zapiszWiadomosc(string wiadomosc) {
		tresc = wiadomosc;
	};
	void dodajDzien(int dni) {
		struct tm * t;
		time_t rawtime;

        time(&rawtime);
        t = localtime(&rawtime);
		t->tm_year = rok;
		t->tm_mon = miesiac;
		t->tm_mday = dzien;
		mktime(t);
		t->tm_mday += dni;
		mktime(t);
		// cout << "Dzien: " << t->tm_mday << endl;
		// cout << "Miesiac: " << t->tm_mon << endl;
		// cout << "Rok: " << t->tm_year << endl;
		rok = t->tm_year;
		miesiac = t->tm_mon;
		dzien = t->tm_mday;
	}
	void wypisz() {
		cout << "Data: " << dzien << "." << miesiac << "." << rok << endl;
		cout << "Wiadomosc:" << tresc << endl;
	}
};

int main() {
	// Przypomnienie a;
	Przypomnienie* b = new Przypomnienie (2020, 5, 11);
	
	// a.wypisz();
	// b->wypisz();
	
	// string x;
	// cout << "Podaj wiadomosc a: ";
	// cin >> x;
	// a.zapiszWiadomosc(x);
	
	// a.zapiszWiadomosc("Hejka");
	b->zapiszWiadomosc("Siemka");
	
	// a.dodajDzien(15);
	// b->dodajDzien(28);
	
	// a.wypisz();
	Przypomnienie* c = new Przypomnienie (*b);
	
	b->wypisz();
	c->wypisz();
	
	delete b;
	delete c;
	
	return 0;
}