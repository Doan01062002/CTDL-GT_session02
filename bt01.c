#include <stdio.h>

int main(){
	int n;
	int arr[100];
	
	do{
		printf("vui long nhap so phan tu 0<n<=100 :");
		scanf("%d",&n);
	}while(n<=0 || n>100);
	
	printf("nhap gia tri cho tung phan tu: \n");
	for(int i = 0; i< n; i++){
		printf("phan tu thu %d: ", i +1);
		scanf("%d", &arr[i]);
	};
	
	int max = arr[0];
	for(int i = 1; i< n; i++ ){
		if(arr[i] > max){
			max = arr[i];
		};
	};
	
	printf("gia tri lon nhat trong mang la: %d", max);
	
	return 0;
}
