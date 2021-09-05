#include <iostream>
using namespace std; 
    
int main(){
    int subjects, i;  
    float marks, total=0.0f, percentage;
    
     
    cout << "Enter number of subjects\n";  
    cin >> subjects;  
    
    cout << "Enter marks of subjects\n";
    
    for(i = 0; i < subjects; i++){
       cin >> marks;
       total += marks; 
    }
       
    percentage = (total/(subjects * 100)) * 100;  
    
    cout << "Total Marks = " << total;  
    cout << "\nPercentage = " << percentage;  
 
    return 0;  
} 
