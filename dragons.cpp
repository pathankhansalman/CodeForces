#include <iostream>

using namespace std;

int main(){
	int i,k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int counts[d],retval = 0;
	
	for (i = 0; i < d; ++i)
	{
		counts[i] = 0;
	}

	for (i = 1; i <= d; ++i)
	{
		if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0) counts[i-1]++;
	}

	for (i = 0; i < d; ++i)
	{
		if(counts[i] != 0) retval++;
	}

	cout<<retval<<endl;

	return 0;
}
