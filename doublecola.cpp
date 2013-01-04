#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(){
	string names[] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
	long long curr,N;
	cin>>N;
	curr = N;
	int sum = 0,j,i = 1;

	while(curr>0){
		curr -= (5*i);
		i*=2;
	}

	int power = 0;

	while(i>1){
		i/=2;
		power++;
	}
	
	for(j=0;j<power-1;j++) sum+=(5*(int)pow(2,j));

	N-=sum;
	N = (N - 1)/(long long)pow(2,power - 1);
	cout<<names[N]<<endl;
	return 0;
}
