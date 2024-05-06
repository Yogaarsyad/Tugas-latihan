
#include <stdio.h>
#include <stdlib.h>

// Pencarian + pengurutan
/* 1. Program akan mengurutkan angka terlebih dahulu
   2. Setelah itu, angka akan diurutkan sesuai dengan input user/target yang sudah ditentukan
   3. Menggunakan pencarian + pengurutan
*/

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Menukar arr[j] dan arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = { 4, 5, 7, 9, 2 , 12};
    int N = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, N);
    printf("Array setelah diurutkan: ");
    printArray(arr, N);

    int target;
    printf("Masukkan angka yang ingin dicari: ");
    scanf("%d", &target);

    int index = linearSearch(arr, N, target);
    if (index != -1) {
        printf("%d ditemukan pada indeks %d\n", target, index);
    } else {
        printf("%d tidak ditemukan dalam array\n", target);
    }

    return 0;
}

