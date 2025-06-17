#include <stdio.h>

int main () {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int position;
    printf("Nhap vi tri: ");
    scanf("%d",&position);
    int valueEdit;
    printf("Nhap gia tri: ");
    scanf("%d",&valueEdit);
    arr[position] = valueEdit;

    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}