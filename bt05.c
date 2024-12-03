#include<stdio.h>

int main(){
	int n;
	int arr[100];
	int *ptr = arr;
	int k;
	
	do{
		printf("nhap so phan tu voi 0<n<=100: ");
		scanf("%d", &n);
	}while(n<=0 || n>100);
	
	printf("nhap gia tri cho cac phan tu: \n");
	for(int i=0; i<n; i++){
		printf("gia tri phan tu thu %d = ", i+1);
		scanf("%d",(ptr + i));
	}
	
	printf("mang chua xoa la:");
	for(int i=0; i<n; i++){
		printf("%d",*(ptr +i));
	}
	printf("\n");
	
	printf("Nhap phan tu muon xoa: ");
	scanf("%d",&k);
	
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            found = 1;
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
    }

    if (found) {
        printf("Mang sau khi xoa phan tu %d:\n", k);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Khong co phan tu %d trong mang", k);
    }

	
	return 0;
}
