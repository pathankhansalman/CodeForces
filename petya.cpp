#include <iostream>
#include <string>

using namespace std;

string filter(string str){
	char c = 'a';
	int length = str.length(),i,index = (int)c;
	string s = "";
	for(i=0;i<length;i++){
		if((int)str[i] >= index) s.push_back(str[i]);
		else s.push_back((char)((int)str[i] + 32));
	}

	return s;
}

int compare(string str1,string str2){
	int i,length = str1.length();
	for(i=0;i<length;i++){
		if(str1[i] > str2[i]) return 1;
		else if(str1[i] < str2[i]) return -1;
 	}

 	return 0;
}

int main(){
	string str1,str2;
	cin>>str1>>str2;
	str1 = filter(str1);
	str2 = filter(str2);

	cout<<compare(str1,str2)<<endl;

	return 0;
}
