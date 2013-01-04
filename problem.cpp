#include <iostream>

using namespace std;

int main(){
	int i,j,count1 = 0,count2,N;
	cin>>N;
	int A[3][N];
	
	for(j=0;j<N;j++){
		for(i=0;i<3;i++) cin>>A[i][j];
	}

	for(j=0;j<N;j++){
		count2 = 0;
		for(i=0;i<3;i++){
			if(A[i][j] == 1) count2++;
		}
		if(count2>=2) count1++;
	}
	cout<<count1<<endl;
	return 0;
}
