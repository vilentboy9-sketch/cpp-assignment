#include<iostream>
using namespace std;
int main()
{
    int  balance = 1000,withdraw,deposit,password=1234;
    cout<<"Welcome to ATM Machine"<<endl;
    cout<<"Please Insert Your Card"<<endl;
    int input_password;
    int attempts=0;
    while(attempts<3)
    {
    cout<<"Please Enter Your Password : ";
    cin>>input_password;
    if(input_password==password){
        cout<<"Password Accepted. Access Granted."<<endl;
        break;
    }
    else
    {
        cout<<"Invalid Password. Please Try Again."<<endl;
        attempts++;
    }
}
if(attempts==3 )
{
    cout<<"Too Many Incorrect Attempts. Your Card has been Blocked."<<endl;
    return 0;}
    cout<<"1. check your current balance.\n";
    cout<<"2.withdraw cash\n";
    cout<<"3.deposit cash\n";
    cout<<"4. exit\n";

    int choice;
    cout<<"Enter Your Choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"Enter Your Paasword : ";
        int input_password;
        cin>>input_password;
        if(input_password==password)
        {
            cout<<"Your Current Balance is : "<<balance<<endl;
        }
        else
        {
            cout<<"Invalid Password"<<endl;
        }
        break;
        case 2:
        cout<<"Enter Your password: ";
        cin>>input_password;
        if(input_password==password)
        {
        cout<<"Enter Amount to Withdraw : ";
        cin>>withdraw;
        if(withdraw<=balance)
        {
            balance=balance-withdraw;
            cout<<"Please Collect Your Cash"<<endl;
            cout<<"Your Remaining Balance is : "<<balance<<endl;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }
    else
    {
        cout<<"Invalid Password"<<endl;
    }
        break;
    case 3:
        cout<<"Enter Your Password :";
        cin>>input_password;
        if(input_password==password)
        {
            cout<<"Enter Amount to deposit: ";
            cin>>deposit;
            balance += deposit;
            cout<<"Your current balance is = "<<balance<<endl;
        }
        else 
        {
            cout<<"Invalid password"<<endl;
        }
        break;
        case 4:
        cout<<"Thank You for using our ATM Machine"<<endl;
        break;
        default:
        cout<<"Invalid Choice"<<endl;
    }
        return 0;           
}
