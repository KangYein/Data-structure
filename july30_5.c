#include<stdio.h>
long factorial(int n,int a);

int main(void){
	int n,a,fact;
	printf("���ڸ� �Է��Ͽ��ֽʽÿ�.:");
	scanf("%d",&n);
	a=1;
	
	fact = factorial(n,a);
	printf("%d�� ���: %d \n",n,fact);
	return 0; 
}
long factorial(int n,int a){
	if(n==0){
		return a;
	}
	else{
		return factorial(n-1,n*a);
	}
}
