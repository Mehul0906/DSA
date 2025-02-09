#include<iostream>
using namespace std;

int main (){
	
	int a = 14;
	for(int i=1;i<=10;i++){
		cout << a << "  ";
		if(i%2==0){
			a -=8;
		}
		else{
			a*=2;
		}
		
	}

}
//14, 28, 20, 40, 32, 64, ...
