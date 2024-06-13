#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
using namespace std;

class Account
{
private:
    long accountnumber;
    string firstname;
    string lastname;
    float balance;
    static long nextaccountnumber;
public:
    Account(){}
    Account(string fname,string lname,float balance);
    long getaccno(){return accountnumber;}
    string getfirstname(){return firstname;}
    string getlastname(){return lastname;}
    float getbalance(){return balance;}

    void deposit(float amount);
    void withdraw(float amount);
    static void setlastaccountnumber(long accountnumber);
    static long getlastaccountnumber();
    friend ofstream & operator<<(ofstream &ofs, Account &acc);
    friend ifstream & operator>>(ifstream &ifs, Account &acc);
    friend ostream & operator<<(ostream &os, Account &acc);
};
long Account::nextaccountnumber=0;

class bank
{
private:
    map<long,Account> accounts;
public:
    bank();
    Account openaccount(string fname, string lname, float balance);
    Account balanceenquiry(long accountnumber);
    Account deposit(long accountnumber, float amount);
    Account withdraw(long accountnumber, float amount);
    void closeaccount(long accountnumber);
    void showallaccounts();
    ~bank();
};

int main()
{
    bank b;
    Account acc;

    int choice;
    string fname,lname;
    long accountnumber;
    float balance;
    float amount;
    cout<<"***BANKING SYSTEM***"<<endl;
    do
    {
        cout<<"\n Select one option below";
        cout<<"\n Open an account";
        cout<<"\n Balance Enquiry";
        cout<<"\n Deposit";
        cout<<"\n Withdrawal";
        cout<<"\n Close an account";
        cout<<"\n Show all accounts";
        cout<<"\n Quit";
        cout<<"\n Enter your choice";
        cin>> choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter first name: ";
                cin>>fname;
                cout<<"Enter last name: ";
                cin>>lname;
                cout<<"Enter initial balance: ";
                cin>>balance;
                acc=b.openaccount(fname,lname,balance);
                cout<<"Congratulations account is created"<<endl;
                cout<<acc;
                break;
            case 2:
                cout<<"Enter account number";
                cin>>accountnumber;
                acc=b.balanceenquiry(accountnumber);
                cout<<" Your Account Details"<<endl;
                cout<<acc;
                break;
            case 3:
                cout<<"Enter Account Number";
                cin>>accountnumber;
                cout<<"Enter Balance";
                cin>>amount;
                acc=b.deposit(accountnumber, amount);
                cout<<"Amount is Deposited";
                cout<<acc;
                break;
            case 4:
                cout<<"Enter Account Number";
                cin>>accountnumber;
                cout<<"Enter Balance";
                cin>>amount;
                acc=b.withdraw(accountnumber, amount);
                cout<<"Amount Withdrawn"<<endl;
                cout<<acc;
                break;
            case 5:
                cout<<"Enter Account Number";
                cin>>accountnumber;
                b.closeaccount(accountnumber);
                cout<<"Account is Closed"<<endl;
                cout<<acc;
            case 6:
                b.showallaccounts();
                break;
            case 7: break;
            default:
            cout<<"Enter correct choice\n";
            exit(0);
        }
    }
    while(choice!=7);
    return 0;
    }








    