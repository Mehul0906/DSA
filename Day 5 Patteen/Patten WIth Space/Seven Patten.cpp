#include<iostream>
using namespace std;

int main ()
{
	
	for(int i=5;i>=1;i--)
	{
	
		for(int j=1;j<=i;j++)
		{
			cout << j << " ";
		}
		cout << endl;
		for(int k=5-i;k>=0;k--)
		{
			cout << "  ";
		}
	}
	
	
}

