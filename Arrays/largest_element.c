#include <stdio.h>
int main(){
    int arr[] = {10,20,5,40,15};
    int largest = arr[0];

    for(int i = 1; i<5; i++){
        if(arr[i] > largest)
        largest = arr[i];
    }
    printf("largest elment = %d/n", largest);
    return 0;
}