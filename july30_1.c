#include<stdio.h>
main(){
	int x, n, result;
	printf("거듭제곱할 수와 횟수를 입력하세요:");
	scanf("%d %d",&x,&n);
	result = power(x,n);
	printf("결과: %d \n",result);
	return 0; 
}
power(int x,int n){
	if(n==0){
		return 1;
	}
	else if(n%2==0){
		return power(x*x,n/2);
	}
	else if(n%2!=0){
		return x*power(x*x,n/2);
	}
}
