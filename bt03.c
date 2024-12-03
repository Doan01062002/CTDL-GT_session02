#include <stdio.h>

int main(){
	int n;
	int arr[100];
	
	do{
		printf("nhap so phan tu 0< n <= 100: ");
		scanf("%d", &n);
	}while(n<=0 || n>100);
	
	printf("nhap gia tri cho cac phan tu \n");
	for(int i=0; i < n; i++){
		printf("phan tu thu %d :", i + 1);
		scanf("%d", &arr[i]);
	};
	
	printf("Mang chua dao nguoc: ");
	for (int i = 0; i < n; i++) {
    	printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	
	for (int i = 0; i < n / 2; i++) {
    	int temp = arr[i];
    	arr[i] = arr[n - 1 - i];
    	arr[n - 1 - i] = temp;
	}
	
	printf("Mang sau khi dao nguoc: ");
	for (int i = 0; i < n; i++) {
    	printf("%d ", arr[i]);
	};
	
	return 0;
}
