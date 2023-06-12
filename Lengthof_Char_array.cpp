#include <iostream>
using namespace std;

int getlen(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main() {
    char name[20];
    cout<<"Enter your name string array\n";
    cin>>name;
    cout<<"Name is array is "<<name<<endl;
    
    cout<<"Length of array is :"<<getlen(name);
    
    

    return 0;
}
