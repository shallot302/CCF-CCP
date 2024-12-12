#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;cin>>n;
	int a[1001];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int min = 100000000;
	for(int i = 1;i<n;i++){
		int temp = a[i] - a[i-1];
		if(temp<min) min = temp;
		
	}
	printf("%d",min);
	return 0;
}