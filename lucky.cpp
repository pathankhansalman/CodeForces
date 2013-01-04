#include <iostream>
#include <math.h>

using namespace std;

int main(){
	long long count = 0,count2 = 0,N;
	cin>>N;

	while(N){
		if(N%10 == 4 || N%10 == 7) count++;
		N/=10;
	}

	if(!count) cout<<"NO"<<endl;

	else{
		while(count){
			if(count%10 != 4 && count%10 != 7){
				count2++;
				break;
			}
			count/=10;
		}

		if(count2) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	
	return 0;
}
