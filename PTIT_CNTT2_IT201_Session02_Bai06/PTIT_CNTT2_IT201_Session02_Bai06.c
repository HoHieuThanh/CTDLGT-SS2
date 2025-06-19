#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
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
    int valueAdd;
    scanf("%d",&valueAdd);
    int* new_arr = (int*) realloc(arr, (n+1) * sizeof(int));
    arr= new_arr;

    for(int i=n+1;i>position;i--) {
        arr[i] = arr[i-1];
    }
    arr[position] = valueAdd;
    for(int i=0;i<=n;i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}