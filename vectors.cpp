#include <iostream>

using namespace std;

int main(){
	int i,N,sum1 = 0,sum2 = 0,sum3 = 0;
	cin>>N;
	int X[N],Y[N],Z[N];
	
	for(i=0;i<N;i++){
		cin>>X[i]>>Y[i]>>Z[i];
		sum1 += X[i];
		sum2 += Y[i];
		sum3 += Z[i];
	}

	if(!sum1 && !sum2 && !sum3) cout<<"YES"<<endl;

	else cout<<"NO"<<endl;

	return 0;
}
