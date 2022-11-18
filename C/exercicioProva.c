#include <stdio.h>
int main(){
	int n=5;
	printf("%d ", func(n));
	return 0;
	}
	int func(int n){
		if(n==0)
		return 10;
	else
	return 1+func(n-1);	
	}
