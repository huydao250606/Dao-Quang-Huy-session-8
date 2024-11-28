#include<stdio.h>

int main(){
	int numbers[5]={1,2,3,4,5};
	int a;
	printf("nhap phan tu: ");
	scanf("%d",&a);
	for(int i=0;i<5;i++){
		if(a==numbers[i]){
			printf("vi tri cua phan tu la: %d",i+1);
			return 0;
		}
	}
	printf("phan tu khong ton tai!");
	return 0;
}

