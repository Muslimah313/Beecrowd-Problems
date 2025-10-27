#include<stdio.h>
int main(){
double N;
scanf("%lf",&N);

int total=N*100+0.5;

int n100,n50,n20,n10,n5,n2;
int c1,c050,c025,c010,c005,c001;

n100=total/10000; total%=10000;
n50=total/5000; total%=5000;
n20=total/2000; total%=2000;
n10=total/1000; total%=1000;
n5=total/500; total%=500;
n2=total/200; total%=200;

c1=total/100; total%=100;
c050=total/50; total%=50;
c025=total/25; total%=25;
c010=total/10; total%=10;
c005=total/5; total%=5;
c001=total/1;

printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",n100);
printf("%d nota(s) de R$ 50.00\n",n50);
printf("%d nota(s) de R$ 20.00\n",n20);
printf("%d nota(s) de R$ 10.00\n",n10);
printf("%d nota(s) de R$ 5.00\n",n5);
printf("%d nota(s) de R$ 2.00\n",n2);


printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",c1);
printf("%d moeda(s) de R$ 0.50\n",c050);
printf("%d moeda(s) de R$ 0.25\n",c025);
printf("%d moeda(s) de R$ 0.10\n",c010);
printf("%d moeda(s) de R$ 0.05\n",c005);
printf("%d moeda(s) de R$ 0.01\n",c001);

return 0;
}
