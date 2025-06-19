#include <stdio.h>
int main() {
    int n;
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
    for(int i=position;i<n;i++) {
        arr[i] = arr[i+1];
    }
    for(int i=0;i<n-1;i++) {
        printf("%d ",arr[i]);
    }
}