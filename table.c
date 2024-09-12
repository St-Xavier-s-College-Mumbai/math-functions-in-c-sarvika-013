#include <stdio.h>
int main(){
    int n,ll,table;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("enter the limit: ");
    scanf("%d",&ll);
    
        for(int i=0;i<ll+1;i++){
            table=n*i;
            printf("%d * %d = %d\n", n, i, table);  
            }
        
        return 0;
}