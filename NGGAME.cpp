#include<iostream>
using namespace std;
int main(){
    cout<<"WELCOME TO NUMBER GUESSING GAME"<<endl;
    int x;
    int ch;
    cout<<"If you want to play then press 1"<<endl;
    cin>>x;
    while(x==1){
        int ran=rand()%100;
        do{
        cout<<"enter your guess number"<<endl;
        cin>>ch;
        if(ch>ran){
            cout<<"guess is too high"<<endl;
        }
        else if(ch<ran){
            cout<<"guess is too low"<<endl;
        }
        }
        while(ch!=ran);
        if(ch==ran){
            cout<<"correct guess"<<endl;
        }
        cout<<"Do you want to continue playing ?"<<endl;
        cout<<"If yes then enter 1 , if no then enter 0"<<endl;
        cin>>x;
    }
    cout<<"Do come to play again"<<endl<<"Thanks for visiting"<<endl<<"Hope you liked it"<<endl;
return 0;
}