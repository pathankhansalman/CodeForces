#include <iostream>
#include <vector>
#define DEBUG 0

using namespace std;

int main(){
	int i,j,k,skip,N,sum = 0,isneg = 0;
	cin>>N;
	int A[N];

	for(i=0;i<N;i++){
		cin>>A[i];
		if(A[i] < 0) isneg++;
		sum+=A[i];
	}

	if(!isneg || N<=5) cout<<sum<<endl;

	else{
		std::vector<int> v;
		
		for(i=2;i<N;i++){
			if(N%i == 0 && N/i > 2) v.push_back(i); 
		}

		int max = sum,length = v.size();

		for(i=0;i<length;i++){
			skip = v[i];
			for(k = 0;k<skip;k++){
				isneg = 0;
				sum = 0;
				for(j=k;j<N;j+=skip) sum+=A[j];
				if(sum>max) max = sum;
			}
		}
		cout<<max<<endl;
		v.clear();
	}

	return 0;
}
