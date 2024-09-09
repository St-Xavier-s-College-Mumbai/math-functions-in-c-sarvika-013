int sum(int a,int b);

int main(){
    int a,b;
    printf("enter first  number: ");
    scanf("%d",&a);
    printf("enter second  number: ");
    scanf("%d",&b);

    int c=sum(a,b);
    printf("the sum is:%d" ,c);
    return 0 ;
}

int sum(int a,int b){
    return a + b;
}