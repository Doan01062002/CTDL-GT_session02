#include<stdio.h>

int main(){
	int n;
	int arr[100];
	int x;
	int count;
	
	
	do{
		printf("nhap so phan tu 0< n <= 100: ");
		scanf("%d", &n);
	}while(n<=0 || n>100);
	
	printf("nhap gia tri cho cac phan tu \n");
	for(int i=0; i < n; i++){
		printf("phan tu thu %d :", i + 1);
		scanf("%d", &arr[i]);
	};
	
	printf("vui long nhap gia tri x de kiem tra so lan xuat hien: ");
	scanf("%d", &x);
	for(int i=0; i< n; i++){
		if(x == arr[i]){
			count ++;
		};
	};
	
	printf("so lan xuat hien cua %d là: %d", x, count);
}
