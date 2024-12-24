//BÀI TẬP THỰC HÀNH 1
#include <stdio.h>

int main() {
    int n, choice;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap gia tri cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMENU\n");
        printf("1. In gia tri cac phan tu cua mang\n");
        printf("2. Su dung Insertion Sort sap xep mang giam dan va in ra\n");
        printf("3. Su dung Selection Sort sap xep mang tang dan va in ra\n");
        printf("4. Su dung Bubble Sort sap xep mang giam dan va in ra\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // In mảng
                printf("Mang hien tai: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2: {
                for (int i = 1; i < n; i++) {
                    int key = arr[i];
                    int j = i - 1;
                    while (j >= 0 && arr[j] < key) {
                        arr[j + 1] = arr[j];
                        j--;
                    }
                    arr[j + 1] = key;
                }
                printf("Mang sau khi sap xep giam dan (Insertion Sort): ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 3: {
                for (int i = 0; i < n - 1; i++) {
                    int minIndex = i;
                    for (int j = i + 1; j < n; j++) {
                        if (arr[j] < arr[minIndex]) {
                            minIndex = j;
                        }
                    }
                    int temp = arr[minIndex];
                    arr[minIndex] = arr[i];
                    arr[i] = temp;
                }
                printf("Mang sau khi sap xep tang dan (Selection Sort): ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 4: {
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (arr[j] < arr[j + 1]) {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep giam dan (Bubble Sort): ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 5:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

