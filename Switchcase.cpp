#include<iostream>
#include<string.h>
using namespace std;
string Getdayofweek(int daynumber){
    string dayweek;
    switch(daynumber){
        case 0:
        dayweek="Sunday";
        break;
        case 1:
        dayweek="Monday";
        break;
        case 2:
        dayweek="Tuesday";
        break;
        case 3:
        dayweek="Wednesday";
        break;
        case 4:
        dayweek="Thursday";
        break;
        case 5:
        dayweek="Friday";
        break;
        case 6:
        dayweek="Saturday";
        break;
        default:
        dayweek="Invalid number";
        break;
    }
    return dayweek;
}
int main(){
    int d;
    cout<<"Enter your Day Number\n";
    cin>>d;
    cout<<Getdayofweek(d);
    
}
