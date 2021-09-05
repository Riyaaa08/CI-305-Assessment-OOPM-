#include <iostream>
#include<stdlib.h>
#include <cmath>
using namespace std;
 
 
 
int main()
{ 
	double r,area,perimeter;
	cout<<"Input Radius : ";
	cin>>r;
	area=M_PI*r*r;
	perimeter=2*M_PI*r;
	cout<<"Area of Circle : "<<area<<endl;
	cout<<"Perimeter of Circle : "<<perimeter;
}
