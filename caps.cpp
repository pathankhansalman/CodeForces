#include <iostream>
#include <string>

using namespace std;

bool type_one(string str){
	char c = 'a';
	int i,index = (int)c;

	for(i=0;i<str.length();i++) if((int)str[i] >= index) return 0;

	return 1;
}

bool type_two(string str){
	char c = 'a';
	int i,index = (int)c;

	if((int)str[0] < index) return 0;

	for(i=1;i<str.length();i++) if((int)str[i] >= index) return 0;

	return 1;
}

int main(){
	string str;
	cin>>str;
	string s = "";
	char c = 'a';
	int i,index = (int)c;

	if(type_one(str) || type_two(str)){
		
		for(i=0;i<str.length();i++){
			if((int)str[i] < index) s.push_back((char)((int)str[i] + 32));

			else s.push_back((char)((int)str[i] - 32));
		}

		cout<<s<<endl;
	}

	else cout<<str<<endl;

	return 0;
}
