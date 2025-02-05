#include <iostream>

using namespace std;

int main(){
    int startYr;
	int endYr=3000;
	
	for(startYr=2000;startYr<=endYr;startYr=startYr+4)
	{
		if(startYr%4==0){
		  cout<< startYr <<" ";
		}
	}
  return 0;
}