#include<stdio.h>

int main(){
	int srr[2][3]={{2,3,4},{5,4,3}};
	int max = srr[0][0];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(max<srr[i][j]){
				max=srr[i][j];
			}
		}
	}
	printf("max = %d",max);
	return 0;
}
