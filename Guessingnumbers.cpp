
#include <iostream>
using namespace std;

int main() {
    int secretnumber=7;
    int guess;
    int guesscount=0;
    int guesslimit=3;
    
    bool outofguesses= false;
    
    while(secretnumber!=guess&& !outofguesses ){
        if(guesscount<guesslimit){
            cout<<"Enter your guess\n";
            cin>>guess;
            guesscount++;
        }
        else{
            outofguesses=true;
        }
    }
    if(outofguesses){
        cout<<"You Lose";
    }else{
        cout<<"You win!";
    }    

    return 0;
}
