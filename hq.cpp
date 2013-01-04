#include <iostream>

using namespace std;

int main(){
	string str;
	cin>>str;
	int flag = 0,length = str.length(),i;
	for(i=0;i<length;i++){
		if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
			cout<<"YES"<<endl;
			flag++;
			break;
		}
	}
	if(!flag) cout<<"NO"<<endl;
	return 0;
}
