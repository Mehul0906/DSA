#include <iostream>

using namespace std;

int main(){
    int startYr=2000;
	int endYr=3000;
	
	while(startYr<=endYr){
		if(startYr%4==0){
			cout<< startYr <<" ";
		}
	
		startYr++;
	}
	
  return 0;
}