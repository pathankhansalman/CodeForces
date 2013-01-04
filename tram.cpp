#include <iostream>

using namespace std;

int main(){
	int N,max = 0,in = 0;
	cin>>N;
	while(N--){
		int a,b;
		cin>>a>>b;
		in = in - a + b;
		if(in > max) max = in;
	}
	cout<<max<<endl;
	return 0;
}
