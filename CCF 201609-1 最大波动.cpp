#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n ;cin>>n;
	int a[1001];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	int max = -1;
	for(int i = 1;i<n;i++){
		int temp = abs(a[i]-a[i-1]);
		if(temp>max){
			max = temp;
		}
	}
	printf("%d",max);
	return 0;
}