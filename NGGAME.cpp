#include<iostream>
using namespace std;
int main(){
    cout<<"....................................................WELCOME TO NUMBER GUESSING GAME................................................"<<endl;
    int x;
    int i=-1;
    int ch;
    cout<<"If you want to play then press 1"<<endl;
    cin>>x;
    cout<<"......................YOU have only 8 chances to guess............................"<<endl;
    cout<<"......................BEST OF LUCK!!.............................................."<<endl;
    while(x==1){
        int ran=rand()%100;
        for( i=1;i<=8;i++){
        do{
        cout<<"enter your guess number"<<endl;
        cin>>ch;
        if(ch>ran){
            cout<<"guess is too high"<<endl;
            cout<<8-i<<" chances left"<<endl;
            break;
        }
        else if(ch<ran){
            cout<<"guess is too low"<<endl;
            cout<<8-i<<" chances left"<<endl;
            break;
        }
        }
        while(ch!=ran);
        if(ch==ran){
            cout<<"correct guess"<<endl;
            cout<<".................................YOU WON..............................."<<endl;
            i=0;
            break;
        }
        }
        if(i>8){
            cout<<"................................No more chances you lost!!.................................."<<endl;
            cout<<"................................Better luck next time........................................"<<endl;
        }
        cout<<"Do you want to continue playing ?"<<endl;
        cout<<"If yes then enter 1 , if no then enter 0"<<endl;
        cin>>x;
    }
    cout<<".......................Do come to play again..............."<<endl<<"...............Thanks for visiting................"<<endl<<"....................Hope you liked it....................."<<endl;
return 0;
}