#include<stdio.h>
long factorial(int n);

int main(void){
	int n,fact;
	printf("���ڸ� �Է��Ͽ��ֽʽÿ�.:");
	scanf("%d",&n);
	
	fact = factorial(n);
	printf("%d�� ���: %d \n",n,fact);
	return 0; 
}
long factorial(int n){
/*	long res;
	if(n>0){
		res = n*factorial(n-1);
	}
	else{
		res = 1;
	}
	return res;
*/
	int k,v=1;
	for(k=n;k>0;k--){
		v=v*k;
	}
	return(v);
}
