#include <iostream>
#include "convert.h"
using namespace std;



int main() {
    int ch;
    bool Number;
    string start;
    string end;
    string Endprefix;
    string Startprefix;
    do{
        ch=0;
        menu();
    cin>>ch;
    switch (ch) {

        case 1:
            cout<<"Enter lenght you want to convert and the unit you want to convert to\n"
                  "example(10 cm dm)";
            cin>>Number>>start>>end;
            Endprefix=end[0];
            Startprefix=start[0];



            if(Startprefix.size() == 1 ){
                Number=Number;
            }
            if(Startprefix == "m") {
                Number=Number/1000 ;
            }
            if(Startprefix == "c") {
                Number=Number/100 ;
            }
            if(Startprefix == "d") {
                Number=Number/10 ;
            }
            if(Startprefix == "k") {
                Number=Number*1000 ;
            }
            if(Endprefix.size() == 1){
                Number=Number;
            }
            if(Endprefix == "m"){
                Number=Number*1000;
            }
            if(Endprefix == "c"){
                Number=Number*100;
            }
            if(Endprefix == "d"){
                Number=Number*10;
            }
            if(Endprefix == "k"){
                Number=Number/1000;
            }

            cout<<"Result is: " << Number << " "<< end << "\n";

        break;

        case 2:
            cout<<"Enter weight you want to convert and the unit you want to convert to\n"
                  "example(10 kg dg)";
            cin>>Number>>start>>end;
            Endprefix=end[0];

        break;

        case 3:
            cout<<"Enter time you want to convert and the unit you want to convert to\n"
                  "example(10 min sec)";
            cin>>Number>>start>>end;


        break;

        case 4:
            cout<<"Enter Temperature you want to convert and the unit you want to convert to\n"
                  "example(10 C K)";
            cin>>Number>>start>>end;


        break;

        case 5:
            cout<<"Enter Volume you want to convert and the unit you want to convert to\n"
                  "example(10 cm3 dm3)";
            cin>>Number>>start>>end;
            Endprefix=end[0];

        break;

        default:
        cout<<"Enter Correct value!!\n";
    }

    } while (ch!=0);
    return 0;
}
