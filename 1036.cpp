#include<bits/stdc++.h>
using namespace std;

int main(){

double A,B,C;
cin>>A>>B>>C;

double del=(B*B)-4*A*C;

if (A==0 || del<0)
{
    cout<<"Ïmpossivel calcular"<<endl;
}
else{

double R1=(-B+sqrt(del))/(2*A);
double R2=(-B+sqrt(del))/(2*A);
cout<<fixed<<setprecision(5);
cout<<"R1= "<<R1<<endl;
cout<<"R2= "<<R2<<endl;
}


return 0;
}






