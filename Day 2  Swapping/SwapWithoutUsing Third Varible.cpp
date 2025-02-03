#include <iostream>
using namespace std;
int main (){
	int P,Q;
	cout << "Enter P : ";
	cin >> P;
	cout << "Enter Q : ";
	cin >> Q;
	
	P = P + Q;
	Q = P - Q;
	P = P - Q;
	
	cout << "P = " << P << endl;
	cout << "Q = " << Q;
	
	
	return 0;
}
