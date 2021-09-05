#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int length,breath,area_rec=0,parameter=0;
cout<<"Enter Length and Breath of Rectangle: ";
cin>>length>>breath;
area_rec=length*breath;
parameter=2*(length+breath);
float diagonal_rec=sqrt(((length*length)+(breath*breath)));
cout<<"\nArea of Ractangle: "<<area_rec;
cout<<"\nDiagonal of Ractangle: "<<diagonal_rec;
cout<<"\nParameters of Rectangle: "<<parameter;
return 0;
}
