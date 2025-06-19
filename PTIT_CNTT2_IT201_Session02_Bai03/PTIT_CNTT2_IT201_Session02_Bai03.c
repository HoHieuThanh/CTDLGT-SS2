#include <stdio.h>

int main () {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<n/2; i++) {
        int a= arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = a;
    }
    for (int i=0; i<n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}