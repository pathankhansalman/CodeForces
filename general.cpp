#include <iostream>

using namespace std;

int main(){
	int N;
	cin>>N;
	int i = 0,A[N];

	for(i=0;i<N;i++) cin>>A[i];

	int min = 1000,max = 0,maxin = 0,minin = 0;

	for(i=0;i<N;i++){
		if(A[i] > max){
			max = A[i];
			maxin = i;
		}
		if(A[i] <= min){
			min = A[i];
			minin = i;
		}
	}

	if(minin<maxin) cout<<maxin+(N - minin - 2)<<endl;
	else cout<<maxin + N - minin - 1<<endl;

	return 0;
}
