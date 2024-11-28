#include<stdio.h>

int main(){
	int srr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0 || i==3-1 || j==0 || j==3-1){
				sum+=srr[i][j];
			}
		}
	}
	printf("tong = %d",sum);
	return 0;
}
