#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num1, num2;
    char op;
    cout<<"Enter your number 1"<<endl;
    cin>>num1;
    cout<<"Enter your operator "<<endl;
    cin>>op;
    cout<<"enter your number 2 "<<endl;
    cin>>num2;
    int result;
    if(op=='+'){
        
        result=num1+num2;
    }else if(op=='-'&& num1>num2){
        result=num1-num2;
    }else if(op=='-'&& num2>num1){
        result=num2-num1;
    }else if(op=='^'){
        result=pow(num1,num2);
    }else if(op=='/'&& num1>num2){
        result=num1/num2;
    }else if(op=='/'&& num2>=num1){
        result=num2/num1;
    }else{
        cout<<"Invalid operator";
    }
    cout<<result;
    
    return 0;
    
}
