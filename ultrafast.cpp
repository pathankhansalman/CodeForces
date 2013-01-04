#include <iostream>
#include <string>

using namespace std;

int main(){
	string str1,str2,output = "";
	cin>>str1>>str2;
	int i,length = str1.length();
	for(i=0;i<length;i++) output.push_back(((str1[i] - '0') ^ (str2[i] - '0')) + '0');
	cout<<output<<endl;
	return 0;
}
