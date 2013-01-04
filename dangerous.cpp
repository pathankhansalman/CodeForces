#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cin>>str;
	int i,count0 = 0,flag = 0,count1 = 0,length = str.length();

	for(i=0;i<length;i++){
		if(str[i] == '0'){
			count0++;count1 = 0;
		}
		else{
			count1++;count0 = 0;
		}
		if(count0 >= 7 || count1 >=7){
			flag++;
			cout<<"YES"<<endl;
			break;
		}
	}

	if(!flag) cout<<"NO"<<endl;

	return 0;
}
