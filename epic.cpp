#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <cstdlib>

using namespace std;

int last_played = 0;

int gcd(int a,int b){
	if(a==b) return a;
	if(a<b){
		int temp = a;
		a = b;
		b = temp;
	}
	if(b==0) return a;
	else{
		return gcd(b,a%b);
	}
}

bool who_wins(int a,int b,int n){
	if(n==0) return 1-last_played;

	if(!last_played){
		last_played++;
		int g = gcd(a,n);
		if(n<g) return 1;
		else{
			n-=g;
			return who_wins(a,b,n);
		}
	}

	else{
		last_played--;
		int g = gcd(b,n);
		if(n<g) return 0;
		else{
			n-=g;
			return who_wins(a,b,n);
		}
	}
}

int main(){
	int a,b,n;
	cin>>a>>b>>n;
	cout<<who_wins(a,b,n)<<endl;
	return 0;
}
