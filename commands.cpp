#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

vector<string> tokenize(string str){
	int init = 0,i,length = str.length();
	string curr;
	vector<string> retval;

	for(i=0;i<length;i++){
		if(str[i] == '/'){
			curr = str.substr(init,i - init);
			if(curr != "") retval.push_back(curr);
			init = i+1;
		}
	}

	if(init <= length - 1) retval.push_back(str.substr(init));

	return retval;
}

int main(){
	string inp,path,pwd;
	std::vector<string> v;
	pwd = "/";
	int j,N,length,i,len;
	cin>>N;

	while(N--){
		cin>>inp;
		if(inp == "pwd") cout<<pwd<<endl;
		else{
			cin>>path;
			if(path[0] == '/') pwd = "/";
			v = tokenize(path);
			length = v.size();
			for(i=0;i<length;i++){
				if(v[i] == ".."){
					len = pwd.length();
					if(len > 1){
						pwd = pwd.substr(0,len - 1);
						len = pwd.length();
						for(j=len-1;j>=0;j--){
							if(pwd[j] == '/') break;
						}
						pwd = pwd.substr(0,j+1);
					}
				}
				else{
					pwd = pwd + v[i];
					pwd = pwd + "/";
				}
			}
		}
		v.clear();
	}

	return 0;
}
