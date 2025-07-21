/ Name - Arman Majhi
// PRN - 24070123022
// Batch - EnTC - A1 

#include <iostream>
using namespace std;

int main() {
    float x , y;
    cout << "Please enter x cordinate : ";
    cin >> x;
    cout << "Please enter y cordinate : ";
    cin >> y;

    cout<<"Coordinates x = "<< x <<" , y = " << y << " is located in : ";
    
    if(x > 0 && y > 0){
        cout << "1st Quadrant";
    }else if(x<0 && y>0){
        cout<<"2nd Quadrant";
    }else if(x < 0 && y < 0){
        cout<<"3rd Quadrant";
    }else if(x > 0 && y<0){
        cout<<"4th Quadrant";
    }else if(x == 0 || y == 0){
        cout<<"The axis";
    }else{
        cout << "Origin";
    }
    return 0;
}
