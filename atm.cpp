#include<iostream>
using namespace std;
double balance=500;

void show_menu(){
    cout<<"\n ********** MENU **********\n\n";
    cout<<"1. Check balance\n";
    cout<<"2. Deposit money\n";
    cout<<"3. Withdraw money\n";
    cout<<"4. Exit\n";
    cout<<"\n **************************\n";
}
int main(){
    int option;
    
    
    do{
    show_menu();
    
    cout<<"what do you want to do ?\nSelect from above options.\n\n";
    cout<<"option : ";
    
    cin>>option;
    system("cls");
    
    if(option<1||option>4)
    {
    cout<<"not a valid option\n";
    continue;
    }


    switch (option)
    {
    case 1:
         cout<<"\nYour current balance is : $"<<balance<<"\n";
        break;
        case 2:
        double deposit_amount;
        cout<<"enter the amount you want to deposit\n";
        cout<<"Deposit amount : ";
        cin>>deposit_amount;
balance=balance+deposit_amount;
        cout<<"Your current balance is : $"<<balance<<"\n";
break;
 case 3:
 double withdraw_amount;
 cout<<"enter the amount you want to withdraw\n";
 cout<<"Withdraw amount : ";
 cin>>withdraw_amount;
 if(withdraw_amount>balance)
 cout<<"insufficient fund\n";
 else{
    balance=balance-withdraw_amount;
 cout<<"Your current balance is : $"<<balance<<"\n";
 }

    
    }
    }while(option!=4);

    

return 0 ;
}