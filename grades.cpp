// Name - Arman Majhi 
// PRN - 24070123022
// Batch - EnTC - A1 

#include <iostream>
#include <string>
using namespace std;

int main() {
    float sub1 , sub2 , sub3 , sub4 , sub5 , avg;
    cout << "Please enter marks of subject - 1 : ";
    cin >> sub1;
    cout << "Please enter marks of subject - 2 : ";
    cin >> sub2;
    cout << "Please enter marks of subject - 3 : ";
    cin >> sub3;
    cout << "Please enter marks of subject - 4 : ";
    cin >> sub4;
    cout << "Please enter marks of subject - 5 : ";
    cin >> sub5;
    
    avg = (sub1 +sub2 +sub3 +sub4 +sub5)/5 ;

    if(avg>=90){
        cout<<"Grade is O";
    }else if(avg>=85 && avg<90){
        cout<<"Grade is A+";
    }else if(avg>=75 && avg<85){
        cout<<"Grade is A";
    }else if(avg>=65 && avg<75){
        cout<<"Grade is B+";
    }else if(avg>=55 && avg<65){
        cout<<"Grade is B";
    }else if(avg>=40 && avg<55){
        cout<<"Grade is  C";
    }else if(avg > 0){
        cout << "You have failed";
    }else{
        cout << "Enter valid marks";
    }
    return 0;
}
