#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,cnt = 0;
	cin>>n;
	while(n){
		if(n>=50){
			int a = n/50;
			cnt= cnt + a*7;
			n%=50;
		}
		if(n>=30){
			int b = n/30;
			cnt = cnt + b*4;
			n%=30;
		}
		if(n>=10){
			n = n-10;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}