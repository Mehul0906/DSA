#include <iostream>

using namespace std;

int main(){
  int n,i;
  
  cout<<"Enter the value of n : ";
  cin >> n;
  
  cout << "Even Number : ";
  
  for(i=1;n>=i;n--)
	{
		if(n%2==0)
		{
			cout << n << " ";
		}
	}

  return 0;
}