#include<iostream>
#include<cmath>
using namespace std;

int main()
{
      int length,breath,choice=0;
        "\n1 =Area \n";
        "\n2 = Perimeter \n";
        "\n3 =Diagonal \n";
      cout<<"Please Enter Your Choice: \n";
      cin>>choice;
      cout<<"\nEnter Length and Breath of Rectangle: ";
      cin>>length>>breath;
      switch(choice) 
      {
        case 1:
           cout<<"\nArea of Ractangle: "<<length*breath<<endl;
           break;
        case 2:
           cout<<"\nDiagonal of Ractangle: "<<sqrt(((length*length)+(breath*breath)))<<endl;
           break;
        case 3:
          cout<<"\nPerimeter of Rectangle: "<<2*(length+breath)<<endl;
          break;
       default:
          cout<<"Please Enter A Valid Choice. "<<endl;      
     }
return 0;
}
