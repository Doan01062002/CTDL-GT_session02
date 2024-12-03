#include <stdio.h>

int main(){
	int n;
	int arr[1000];
	int k;
	int found =0;
	
	do {
        printf("Nhap so phan tu cua mang (0 < n <= 1000): ");
        scanf("%d", &n);
    } while (n < 0 || n > 1000);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    };
    
    printf("nhap gia tri tong k: ");
    scanf("%d", &k);
    printf("\n");
    
    for(int i=0; i<n; i++){
    	int a = arr[i];
    	for(int j= i +1; j<n;j++){
    		int b = arr[j];
    		if(a+b == k){
    			printf("cap so can tim la: %d, %d \n", a,b);
    			found = 1;
			}
		}
	}
	
	if (!found) {
        printf("Khong co cap so nao co tong bang: %d\n", k);
    }
    
    return 0;
}
