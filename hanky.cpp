#include <iostream>
#include <string>

using namespace std;

int main(){
	int i,j,count,N;
	cin>>N;
	string str[2*N + 1],curr;

	for(i=0;i<=N;i++){
		count = 2*(N - i);
		curr = "";

		while(count--) curr = curr + " ";

		for(j=0;j<=i;j++){
			curr.push_back(j+'0');
			curr = curr + " ";
		}

		for(j=i;j>0;j--){
			curr.push_back(j-1 + '0');
			curr = curr + " ";
		}

		int length = curr.length();
		curr = curr.substr(0,length - 1);
		str[i] = curr;
	}
	
	for(i=N+1;i<2*N + 1;i++) str[i] = str[2*N - i];

	for(i=0;i<2*N + 1;i++) cout<<str[i]<<endl;

	return 0;
}
