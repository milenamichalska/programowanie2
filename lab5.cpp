#include <iostream>
using namespace std;

int nwd (int a, int b) {
	while(a!=b)
       if(a>b) a -= b;
       else b -= a;
    return a;
}

class Ulamek {
	int licznik;
	int mianownik;
	public:
	Ulamek(int l, int m) {
		licznik = l;
		mianownik = m;
	}
	
	void wyswietlUlamek() {
		cout << licznik << '-' << mianownik << endl;
	}
	
	Ulamek operator+ (const Ulamek& b) {
		
		int amianownik = this->mianownik;
		int bmianownik = b.mianownik;
		int alicznik = this->licznik;
		int blicznik = b.licznik;
		
		int mianownik = (amianownik * bmianownik) / nwd(amianownik, bmianownik);
		int licznik = alicznik * (mianownik / amianownik) + blicznik * (mianownik / bmianownik);
		
		Ulamek wynik(licznik, mianownik);
		return wynik;
	}
	
	Ulamek operator- (const Ulamek& b) {
		
		int amianownik = this->mianownik;
		int bmianownik = b.mianownik;
		int alicznik = this->licznik;
		int blicznik = b.licznik;
		
		int mianownik = (amianownik * bmianownik) / nwd(amianownik, bmianownik);
		int licznik = alicznik * (mianownik / amianownik) - blicznik * (mianownik / bmianownik);
		
		Ulamek wynik(licznik, mianownik);
		return wynik;
	}
	
	Ulamek operator* (const Ulamek& b) {
		
		int amianownik = this->mianownik;
		int bmianownik = b.mianownik;
		int alicznik = this->licznik;
		int blicznik = b.licznik;
		
		int mianownik = amianownik * bmianownik;
		int licznik = alicznik * blicznik;
		
		Ulamek wynik(licznik, mianownik);
		return wynik;
	}
	
	Ulamek operator/ (const Ulamek& b) {
		
		int amianownik = this->mianownik;
		int bmianownik = b.mianownik;
		int alicznik = this->licznik;
		int blicznik = b.licznik;
		
		int mianownik = amianownik * blicznik;
		int licznik = alicznik * bmianownik;
		
		Ulamek wynik(licznik, mianownik);
		return wynik;
	}
};

int main() {
	Ulamek a(1,2);
	Ulamek b(1,4);
	Ulamek wynik = a / b;
	wynik.wyswietlUlamek();
	return 0;
}