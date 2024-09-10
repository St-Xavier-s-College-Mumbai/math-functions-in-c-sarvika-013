#include <stdio.h>
int main(){
    int count=0;
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
 if(number==0){
 count=1;
 }
  else{
    number=abs(number);
    while (number>0){
        number=number/10;
        count++;
    }
  }
printf("number of digits in teh above number:%d",count);
    return 0;
}
