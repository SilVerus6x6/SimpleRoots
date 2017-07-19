#include <iostream>
#include <conio.h>
#include <math.h>
int skroc(int &l1) {
	for (int i = sqrt(l1); i > 0; i--) {
		if (l1%i == 0) {
			if (sqrt(i)*sqrt(i) == i)return i;
		}
	}
	return 1;
}
int nwd(int a, int b) {
	int tmp = 0;
	while (a != 0) {
		tmp = a;
		a = b%a;
		b = tmp;
	}
	return b;
}
void main() {
	int a = 45, b = 1465, c = 26, d = 15;
	std::wcout << "a*root(b) / c*root(d)"<<std::endl;
	std::cout << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "c: ";
	std::cin >> c;
	std::cout << "d: ";
	std::cin >> d;
	a = a*a*b;
	c = c*c*d;
	b = nwd(a, c);
	a /= b;
	c /= b;
	d=skroc(a);
	b = a/d;
	a = sqrt(d);
	c = sqrt(c);
	std::cout << "a="<<a << " \nb=" << b << " \nc=" << c << std::endl;
	_getch();
}