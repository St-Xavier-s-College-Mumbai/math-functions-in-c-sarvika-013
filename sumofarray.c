#include <stdio.h>
int main(){
    int array[]={3,5,7,8,5,2};
    int size=sizeof(array)/sizeof(array[0]);
    int *ptr=array;
    int sum1=0;
    for(int i=0;i<size;i++){
        sum1 += *(ptr + i);
    }
    printf("the sum of the digits in the array:%d\n ",sum1);
    return 0;
}
