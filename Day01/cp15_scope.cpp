#include <iostream>
#include "scope.h"

A::A(int aa) {
	a = aa;
}
void A::AInfo() {
	std::cout << "a: " << a << std::endl;
}
int main(void) {
	A a(10);
	a.AInfo();
	return 0;
}