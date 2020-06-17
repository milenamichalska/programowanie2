#include <iostream>
using namespace std;

#include <cmath>

class Czworokat {
	protected:
	float a;
	float b;
	float c;
	float d;
	public:
	Czworokat(float e, float f, float g, float h) {
		a = e;
		b = f;
		c = g;
		d = h;
	};
	
	void wypisz() {
		cout << "Miary bokow: " << a << ", " << b << ", " << c << ", " << d << endl;
	};
	
	virtual float pole() {
		float s = (a + b + c + d)/2;
		return sqrt((s - a) * (s - b) * (s - c) * (s - d));
	};
};

class Prostokat : public Czworokat {
	public:
	Prostokat(float x, float y) : Czworokat(a, b, c, d) {
		a = x;
		b = x;
		c = y;
		d = y;
	};
	void wymiary(float w1, float w2) {
		a = w1;
		b = w2;
		c = w1;
		d = w2;
	};
	float pole() {
		if (a == b)
		return a * c;
		return a * b;
	}
};

class Kwadrat : public Czworokat {
	public:
	Kwadrat(float x) : Czworokat(a, b, c, d) {
		a = x;
		b = x;
		c = x;
		d = x;
	};
	void wymiar(float w1) {
		a = w1;
		b = w1;
		c = w1;
		d = w1;
	};
	float pole() {
		return a * a;
	}
};

int main() {
	Kwadrat* k = new Kwadrat (12);
	k->wypisz(); 
	cout << "Pole kwadratu: " << k->pole() << endl;
	
	Prostokat* p = new Prostokat (10, 12);
	p->wypisz(); 
	cout << "Pole prostokata: " << p->pole() << endl;
	
	delete p;
	delete k;
	return 0;
}