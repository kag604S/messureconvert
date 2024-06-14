#include <iostream>
#include "convert.h"
using namespace std;
void menu(){
    cout<<"What type of measure you want to convert\n";
    cout<<"1.Lenght\n";
    cout<<"2.Weight\n";
    cout<<"3.Time\n";
    cout<<"4.Temperature\n";
    cout<<"5.Volume\n";
    cout<<"0.Exit\n";
}


int main() {
    int ch;
    do{
    menu();
    cin>>ch;
    switch (ch) {

        case 1:


        break;

        case 2:


        break;

        case 3:


        break;

        case 4:


        break;

        case 5:


        break;

        default:
        cout<<"Enter Correct value!!\n";
    }

    } while (ch!=0);
    return 0;
}
