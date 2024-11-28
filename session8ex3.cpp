#include<stdio.h>

int main(){
	int a;
	printf("nhap 1 so nguyen: ");
	scanf("%d",&a);
	int numbers[a][a];
	for(int i=0;i<a;i++){
		for(int i=0;i<a;i++){
			printf("%d ",numbers[i][i]);
		}
		printf("\n");
	}
	return 0;
}
