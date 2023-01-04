#include<stdio.h>
// void printArray(int *ptr,int a){
//     for(int i=0;i<a;i++){
//         printf("The value of element %d is %d.\n",i+1,*(ptr+i));
//     }
// }
void printArray(int ptr[],int a){
    for(int i=0;i<a;i++){
        printf("The value of element %d is %d.\n",i+1,ptr[i]);
    }
}
int main(){
    int arr[3] = {23,45,67};
    printArray(arr,3);

    return 0;
}