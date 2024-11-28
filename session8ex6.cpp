#include<stdio.h>

int main(){
	int srr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum;
	for(int i=0;i<3;i++){
			printf("%3d",srr[i][i]);
			sum+=srr[i][i];
	}
	printf("\ntong=%d\n",sum);
	return 0;
}
