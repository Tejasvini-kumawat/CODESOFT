#include<iostream>
using namespace std;

   
int main(){
    int a,b;
    cout<<"Enter two Numbers"<<endl;
    cin>>a>>b;
    int choice;
    while(choice!=5){
        cout<<"Enter a operation to be performed";
        cout<<"1.addition"<<endl<<"2.subtraction"<<endl<<"3.multiplication"<<endl<<"4.division"<<endl<<"5.exit"<<endl;
        cin>>choice;
        switch(choice){

            case 1:
            cout<<"Addition is:"<<a+b<<endl;
            break;
            case 2:
            cout<<"subtraction is:"<<a-b<<endl;
            break;
            case 3:
            cout<<"multiplication is:"<<a*b<<endl;
            break;
            case 4:
            cout<<"division is:"<<a/b<<endl;
            break;
            case 5:
            exit(1);
            break;


        
                    }
                }
    return 0;
    

}