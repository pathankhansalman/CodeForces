#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_lucky(int N){
	if(N<4) return 0;

	int curr = N;

	while(curr>=1){
		if(curr%10 != 4 && curr%10 != 7) return 0;
		curr/=10;
	}

	return 1;
}

string is_nearly_lucky(int N){
	if(is_lucky(N)) return "YES";

	std::vector<int> v;
	int i;

	for(i=2;i<N;i++) if(N%i == 0) v.push_back(i);

	int length = v.size();
	
	for(i=0;i<length;i++) if(is_lucky(v[i])) return "YES";

	return "NO";
}

int main(){
	int i,N;
	cin>>N;
	cout<<is_nearly_lucky(N)<<endl;
	return 0;
}
