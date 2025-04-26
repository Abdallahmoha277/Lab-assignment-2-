#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n;
    printf("Enter the number of the elements of the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int start=0;
    int end=n-1;
    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("Reversed array : \n");
    for(i=0;i<n;i++){
          printf("%d ", arr[i]);
    }


    return 0;
}
