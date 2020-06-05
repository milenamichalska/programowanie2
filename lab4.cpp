#include <iostream>
using namespace std;

class Pies {
	string imie;
	string plec;
	string rasa;
	int wiek;
	int waga;
	int wielkosc;
	
	public:
	Pies(string i, string p, string r, int wi, int wg, int wlk) {
		setImie(i);
		setPlec(p);
		setRasa(r);
		setWiek(wi);
		setWaga(wg);
		setWielkosc(wlk);
	}
	void setImie(string i) {
		imie = i;
	}
	void setPlec(string p) {
		plec = p;
	}
	void setRasa(string r) {
		rasa = r;
	}
	void setWiek(int w) {
		wiek = w;
	}
	void setWaga(int w) {
		waga = w;
	}
	void setWielkosc(int w) {
		wielkosc = w;
	}
	
	string getImie() {
		return imie;
	}
	
	string getPlec() {
		return plec;
	}
	
	string getRasa() {
		return rasa;
	}
	
	int getWiek() {
		return wiek;
	}
	
	int getWaga() {
		return waga;
	}
	
	int getWielkosc() {
		return wielkosc;
	}
};

int main() {
	Pies * burek = new Pies("burek", "M", "jamnik", 10,10,10);
	cout << burek->getImie() << endl;
	burek->setImie("sznurek");
	cout << burek->getImie() << endl;
	burek->setRasa("owczarek");
	cout << burek->getRasa() << endl;
	return 0;
}