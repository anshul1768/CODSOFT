#include<iostream>
using namespace std;
class list{
    public:
    string a[100];
    int i=1;
    int d=-1;
    void add(){
        string tname;
        cout<<"enter your task name: ";
        getline(cin>>ws,tname);
        a[i]=tname;
        i++;
        display();
    }
    
    void display(){
        if(i==1){
            cout<<"task list is empty";
        }
        else if(i==d){
            d=-1;
        }
        else{
        for(int j=1;j<=i-1;j++){
            if(d>0 && a[j]==a[d]){
                cout<<j<<"."<<a[j]<<" (completed)"<<endl;
            }
            else{
                cout<<j<<"."<<a[j]<<" (pending)"<<endl;
            }
        }
    }
    }
    void del(){
        int n;
        cout<<"enter task no you want to delete"<<endl;
        cin>>n;
        for(int k=n;k<=i;k++){
            a[k]=a[k+1];
        }
        i--;
        if(i==d || (i>d && d!=1)){
            d=-1;
        }
        if(i==1){
            cout<<"no task left"<<endl;
        }
        else{
            display();
        }
    }
    void mark(){
        cout<<"enter task no to be marked as completed"<<endl;
        cin>>d;
        display();
    }
};
int main(){
    cout<<"WELCOME TO CONSOLE BASED TO-DO LIST APPLICATION"<<endl;
    list obj;
    int w=0;
    do{
    int z;
    cout<<"enter your choice "<<"1.for adding a task 2.marking a task  3.for deleting a task 4.for displaying a task"<<endl;
    cin>>z;
    switch(z){
        case 1:
        obj.add();
        break;
        case 2:
        obj.mark();
        break;
        case 3:
        obj.del();
        break;
        case 4:
        obj.display();
        break;
        default :
        cout<<"invalid choice"<<endl;
    }
    cout<<"enter 1 to continue 0 to exit."<<endl;
    cin>>w;
    }
    while(w==1);
    


    

return 0;
}