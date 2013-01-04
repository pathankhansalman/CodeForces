#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>

using namespace std;

int main(){
	int count,max = 0,a,b,i,N;
	cin>>N;
	multiset<pair<int,int> > m;
	set<pair<int,int> > s;

	for(i=0;i<N;i++){
		cin>>a>>b;
		m.insert(make_pair(a,b));
		s.insert(make_pair(a,b));
	}

	set<pair<int,int> >::iterator it;

	for(it = s.begin();it!=s.end();it++){
		count = m.count(*it);
		if(count > max) max = count;
	}

	cout<<max<<endl;
 
	return 0;
}
