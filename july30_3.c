#include<stdio.h>
main(){
	int n,result;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d",&n); 
	fib_iter(n);
}
fib_iter(int n){
	if(n<2){
		printf("%d ",n);
		return n;
	}
	else{
		int i,tmp,current =1,last=0;
		for(i=2;i<=n;i++){
			tmp = current;
			current +=last;
			last = tmp;
			printf("%d ",current);
		}
		return current;
	}
}
