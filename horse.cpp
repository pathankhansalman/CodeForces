#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
	int curr;
	vector<int> v;
	set<int> s;
	while(cin>>curr){
		v.push_back(curr);
		s.insert(curr);
	}
	cout<<v.size() - s.size()<<endl;
	return 0;
}
