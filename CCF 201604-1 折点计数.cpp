#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[1001];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	int cnt = 0;
	for(int i = 1;i<n-1;i++){
		if((a[i+1]-a[i]>0&a[i-1]-a[i]>0)||(a[i+1]-a[i]<0&a[i-1]-a[i]<0)){
			cnt++;
		}
	}
	
	cout<<cnt;
	return 0;
}