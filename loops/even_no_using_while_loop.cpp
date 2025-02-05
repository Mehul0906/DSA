#include <iostream>

using namespace std;

int main(){
  int n,i=1;
  
  cout<<"Enter the value of n : ";
  cin >> n;
  
  cout << "Even Number : ";
  
   while(n>=i){
   	
  	if(n%2==0)
		{
			cout << n << " ";
		}
		n--;
  }

  return 0;
}