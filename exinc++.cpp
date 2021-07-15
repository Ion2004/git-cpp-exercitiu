#include <iostream>
using namespace std;

int main() {
	int time = 22;
	if (time < 10) {
		cout << "Good morining. " <<endl;
	} else if (time < 20) {
		cout << "Good day. " <<endl;
	} else {
		cout << "Good evening. " <<endl;
	}
	return 0;
}
