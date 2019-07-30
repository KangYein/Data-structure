#include<stdio.h>
void hanoi_tower(int n,char from, char tmp,char to){
	if(n==1){
		printf("원판 1을 %c에서 %c로 옮긴다. \n",from,to);
	}
	else{
		hanoi_tower(n-1,from,to,tmp);
		printf("원판 %d을 %c에서 %c로 옮긴다. \n",n,from,to);
		hanoi_tower(n-1,tmp,from,to);
	}
}
main(){
	int n;
	printf("원판의 개수를 입력하세요:");
	scanf("%d",&n);
	hanoi_tower(n,'A','B','C');
}
