#include<iostream>
using namespace std;

int main ()
{
	
	for(int i=1;i<=5;i++)
	{
		for(int k=i;k<=4;k++)
		{
			cout << "  ";
		}
		for(int j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				cout << "0 ";
			}
			else
			{
				cout << "1 ";
			}
		}
		cout << endl;
	}
	
	
}
