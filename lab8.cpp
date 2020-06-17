#include <iostream>
using namespace std;

#include <cmath>

template <class T>
class Trojka {
	T a;
	T b;
	T c;
	public:
	Trojka (T x, T y, T z) {
		a = x;
		b = y;
		c = z;
	};
	T znajdzMinimum();
	T znajdzMaximum();
	T znajdzSrodek();
};

template <class T>
T Trojka<T>::znajdzMinimum() {
	if (a > b) {
    	if (b > c) return c;
    	return b;
    } else {
    	if (a > c) return c;
    	return a;
    }
}

template <class T>
T Trojka<T>::znajdzMaximum() {
	if (a < b) {
    	if (b < c) return c;
    	return b;
    } else {
    	if (a < c) return c;
    	return a;
    }
}

template <class T>
T Trojka<T>::znajdzSrodek() {
	if (a < b) {
    	if (b > c) return c;
    	return b;
    } else {
    	if (a > c) return c;
    	return a;
    }
}

int main() {
	Trojka<double> a (10, 4, 6);
	cout << a.znajdzMinimum() << endl;
	cout << a.znajdzMaximum() << endl;
	cout << a.znajdzSrodek() << endl;
	
	Trojka<float> b (6.20, 6.55, 6.65);
	cout << b.znajdzMinimum() << endl;
	cout << b.znajdzMaximum() << endl;
	cout << b.znajdzSrodek() << endl;
	
	Trojka<char> c ('a', 'b', 'c');
	cout << c.znajdzMinimum() << endl;
	cout << c.znajdzMaximum() << endl;
	cout << c.znajdzSrodek() << endl;
	
	Trojka<string> d ("string1", "string2", "string3");
	cout << d.znajdzMinimum() << endl;
	cout << d.znajdzMaximum() << endl;
	cout << d.znajdzSrodek() << endl;
}