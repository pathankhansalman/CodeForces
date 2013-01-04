#include <iostream>

using namespace std;

int main(){
	int N,i;
	cin>>N;
	int A[N],B[N];
	
	for(i=0;i<N;i++) cin>>A[i];
	for(i=0;i<N;i++) B[A[i] - 1] = i+1;
	for(i=0;i<N;i++) cout<<B[i]<<" ";

	return 0;
}
