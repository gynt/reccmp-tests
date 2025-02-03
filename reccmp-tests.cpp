// reccmp-tests.cpp : Defines the entry point for the application.
//

#include "reccmp-tests.h"

using namespace std;

class A {
public:

	int a = 0;

	A() {

	}

	// FUNCTION RECCMP-TESTS 0x401000
	void method1(int b) {
		this->a += b;
	}
};

static A STATIC_A;

int main(int argc, char**argv)
{
	cout << "Hello CMake." << endl;
	STATIC_A.method1(argc);
	return 0;
}
