#include <stdio.h>

void selectionSort(int arr[],int n){
	for(int i=0; i<n; i++){
		int minIndex = i;
		for(int j= i+1; j<n; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		int temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}
}

int main(){
	int n;
	int arr[100];
	int *ptr = arr;
	
	do{
		printf("nhap so phan tu voi 0<n<=100: ");
		scanf("%d", &n);
	}while(n<=0 || n>100);
	
	printf("nhap gia tri cho cac phan tu: \n");
	for(int i=0; i<n; i++){
		printf("gia tri phan tu thu %d = ", i+1);
		scanf("%d",(ptr + i));
	}
	
	printf("mang chua xap xep la:");
	for(int i=0; i<n; i++){
		printf("%d",*(ptr +i));
	}
	printf("\n");
	
	selectionSort(arr, n);
	
	printf("mang sau khi sap xep: ");
	for(int i=0; i<n; i++){
		printf("%d",*(ptr +i));
	}
	
	return 0;
}
