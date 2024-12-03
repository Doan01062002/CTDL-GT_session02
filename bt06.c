#include <stdio.h>

int main() {
    int n, m;
    int arr1[1000], arr2[1000], result[2000];

    do {
        printf("Nhap so phan tu cua mang 1 (0 < n <= 1000): ");
        scanf("%d", &n);
    } while (n < 0 || n > 1000);

    printf("Nhap cac phan tu cua mang 1:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    do {
        printf("Nhap so phan tu cua mang 2 (0 < m <= 1000): ");
        scanf("%d", &m);
    } while (m < 0 || m > 1000);

    printf("Nhap cac phan tu cua mang 2:\n");
    for (int i = 0; i < m; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int k = 0;
    for (int i = 0; i < n; i++) {
        result[k] = arr1[i];
        k++;
    }
    for (int i = 0; i < m; i++) {
        result[k] = arr2[i];
        k++;
    }

    printf("Mang sau khi gop la:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

