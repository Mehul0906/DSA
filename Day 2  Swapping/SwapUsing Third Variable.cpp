#include <iostream>
using namespace std;
int main (){
	int P,Q,R;
	cout << "Enter P : ";
	cin >> P;
	cout << "Enter Q : ";
	cin >> Q;
	
	R = P;
	P = Q;
	Q = R;
	
	cout << "P = " << P << endl;
	cout << "Q = " << Q;
	
	
	return 0;
}
