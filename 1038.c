#include<stdio.h>
int main()
{

    int X,Y;
    double price,total;

    scanf("%d %d",&X,&Y);

    if(X==1){
        price=4.00;
    }
    if(X==2){
        price=4.50;
    }
    if(X==3){
        price=5.00;
    }
    if(X==4){
        price=2.00;
    }
    if(X==5){
        price=1.50;
    }


    total=price*Y;


    printf("Total: R$ %.2lf\n",total);



    return 0;
}








