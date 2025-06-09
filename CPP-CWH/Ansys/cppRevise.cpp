// #include<bits/stdc++.h>
#include <iostream>
using namespace std;

// base class
class Account
{
private:
    string accNo;
    long balance;

public:
    Account(string accNo, long balance)
    {
        cout<<"Account constructor are called" <<endl;
        this->accNo = accNo;
        this->balance = balance;
    }
    // getter
    string getAccNo()
    {
        return accNo;
    }
    long getBalance(){
        return balance;
    }

    //setter
    void setBalance(long balance){
        this->balance=balance;
    }
    void deposite(int money)
    {
        balance += money;
        cout << "your have deposite amount is " << money << endl;
    }
    virtual void withDraw(int money)
    {
        balance -= money;
        cout << "your have account withDraw amount is " << money << endl;
    }
    int checkBalance()
    {
        return balance;
    }
    void printDetail(){
        cout<< "AccountNo:- " << accNo <<endl;
        cout<< "balance:- " << balance <<endl;
    }
};

//child-1
class currentAccount : virtual public Account
{
public:
    currentAccount(string accNo, long balance) : Account(accNo, balance){
        cout<<"currentAccount constructor are called" <<endl;
    };
    void withDraw(int money){
        setBalance(getBalance()-money);
        cout << "your have currentAccount withDraw amount is " << money << endl;
    }
};


//child-2
class SavingAccount : virtual public Account
{
private:
    int InterestRate;

public:
    SavingAccount(int InterestRate, string accNo, long balance) : Account(accNo, balance)
    {
        cout<<"SavingAccount constructor are called" <<endl;
        this->InterestRate = InterestRate;
    }
    void applyForInterest()
    {
        cout << "For Account number " << getAccNo() << endl;
    }
    void withDraw(int money){
        setBalance(getBalance()-money);
        cout << "your have currentAccount withDraw amount is " << money << endl;
    }
};


//mixtur
class Temp : public SavingAccount, public currentAccount
{
public:
    Temp(string accNo, long balance):SavingAccount(2,accNo,balance),currentAccount(accNo,balance),Account(accNo,balance){
        cout<<"Temp constructor are called" <<endl;
    };
    void withDraw(int money){
        SavingAccount::withDraw(money);
    }
};

int main()
{
    // Account a("12110462", 1000);
    // a.deposite(100);
    // cout << "your current balance is " << a.checkBalance() << endl;
    // a.withDraw(500);
    // cout << "your current balance is " << a.checkBalance() << endl;

    // SavingAccount sa(2, "121104", 2000);
    // sa.applyForInterest();
    // cout << "your current balance is " << sa.checkBalance() << endl;

    // currentAccount ac("12110",1000);
    // ac.printDetail();
    // ac.withDraw(100);
    // cout << "your current balance is " << ac.checkBalance() << endl;

    // Temp tp("4215",789456);
    // tp.checkBalance();
    // tp.printDetail();
    // tp.withDraw(100);

    // SavingAccount* sa = new SavingAccount(2,"121104",1000);
    // sa->printDetail();
    // sa->withDraw(1000);

    // Account* a = new Account("121104",1000);
    // a->printDetail();
    // a->withDraw(1000);
    // sa.printDetail();

    // Account* a = new SavingAccount(2,"121104",1000);
    // a->printDetail();
    // a->withDraw(1000);

    // SavingAccount* a = new Account("121104",1000); -->invalid
    // a->printDetail();
    // a->withDraw(1000);
    unique_ptr<Account> a = new Account("1214",1000);
    

    return 0;
}
