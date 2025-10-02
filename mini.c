#include<stdio.h>
int main(){
    int first,second;
    
    printf("enter first no.");
    scanf("%d",&first);
    
    char op;
    printf("enter oprator no.");
    scanf(" %c",&op);

     printf("enter second no.");
    scanf("%d",&second);

    if(op=='+'){
        printf("%d",first+second);
    }
    
    else if(op=='-'){
        printf("%d",first-second);
    }
    
    else if(op=='*'){
        printf("%d",first*second);
    }
    
    else if(op=='/'){
        printf("%d",first/second);
    }
    
    else if(op=='%'){
        printf("%d",first%second);
    }
    
    else{
        printf("not valid");
    }

    return 0;
}
