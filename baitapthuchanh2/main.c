#include <stdio.h>

int main() {
    int n, m;
    int array[10][10];

    printf("Nhap so dong cua mang: ");
    scanf("%d", &n);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &m);
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
    printf("Nhap phan tu [%d][%d]: ", i, j);
    scanf("%d", &array[i][j]);
        }
    }

    while (1) {
        printf("\nMENU\n");
        printf("1. In gia tri mang theo ma tran\n");
        printf("2. Sap xep mang theo  theo dong tang dan\n");
        printf("3. Sap xep mang theo cot giam dan\n");
        printf("4. Thoat \n");

        int choice;
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
    case 1:
            for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
            printf("%d ", array[i][j]);
                    }
            printf("\n");
                }
            break;
    case 2:
            for (int i = 0; i < n; i++) {
            for (int j = 0; j < m - 1; j++) {
            for (int k = j + 1; k < m; k++) {
            if (array[i][j] > array[i][k]) {
            int temp = array[i][j];
            array[i][j] = array[i][k];
            array[i][k] = temp;
                            }
                        }
                    }
                }
            printf(":Mang sau khi sap xep mang theo  theo dong tang dan\n");
            for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
            printf("%d ", array[i][j]);
                    }
            printf("\n");
                }
            break;
    case 3:
            for (int j = 0; j < m; j++) {
            for (int i = 0; i < n - 1; i++) {
            for (int k = i + 1; k < n; k++) {
            if (array[i][j] < array[k][j]) {
            int temp = array[i][j];
            array[i][j] = array[k][j];
            array[k][j] = temp;
                            }
                        }
                    }
                }
            printf("Mang sau khi sap xep mang theo cot giam dan:\n");
            for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
            printf("%d ", array[i][j]);
                    }
            printf("\n");
                }
            break;
    case 4:
            return 0;
            default:
            printf("Lua cho khong hop le.\n");
            break;
        }
    }

    return 0;
}

