#include <stdio.h>
int main() {
    int n;
    int s;
    int count=0;
    printf("Nhap so luong phan tu: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Nhap so can xet: ");
    scanf("%d",&s);
    for(int i=0;i<n;i++) {
        if (s==arr[i]) {
            count++;
        }
    }
    printf("%d",count);
}