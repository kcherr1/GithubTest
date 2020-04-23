#include <iostream>
using namespace std;

string foo() {
    return "coffee";
}

int bar () {
	return 5;	
}

int main() {
    cout << bar() << ' ' << foo() << 's' << endl;
}
