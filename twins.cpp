#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin>>N;
	int i,A[N],sum[N];
	for(i=0;i<N;i++) cin>>A[i];
	sort(A,A+N);
	sum[0] = A[0];
	for(i=1;i<N;i++) sum[i] = sum[i-1] + A[i];
	for(i=N-1;i>=0;i--){
		if(sum[i] < sum[N-1] - sum[i]){
			cout<<N - i - 1<<endl;
			break;
		}
	}
	if(i<0) cout<<N<<endl;
	return 0;
}
