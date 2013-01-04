#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin>>N;
	int i = 0,a = 12,A[12];
	
	while(a--){
		cin>>A[i];
		i++;
	}
	
	sort(A,A+12);
	int count = 0;i = 11;
	
	while(N>0){
		count++;
		N-=A[i];
		i--;
		if(i < 0) break;
	}

	if(N>0) cout<<"-1"<<endl;
	else cout<<count<<endl;

	return 0;
}
