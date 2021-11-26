#include<iostream>
using namespace std;
int main(){
    int num1,odd = 0,even = 0;
    do{
        cout << "Enter an integer: ";
        cin >> num1; 
        if (num1%2 == 0 && num1 != 0)
        {
         even ++; 
         }else if(num1%2 != 0){
        odd ++;
         } 
    }while (num1 != 0);
        
     cout << "#Even numbers = " << even << endl;
     cout << "#Odd numbers = " <<odd;
    return 0;
}
