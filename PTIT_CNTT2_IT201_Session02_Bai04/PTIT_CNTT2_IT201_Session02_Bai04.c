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
    do {
        printf("Nhap vi tri: ");
        scanf("%d",&position);
        if (position>=n) {
            printf("Vi tri khong hop le\n");
        }
    }while (position>=n);


    int valueEdit;
    printf("Nhap gia tri: ");
    scanf("%d",&valueEdit);
    arr[position] = valueEdit;

    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}