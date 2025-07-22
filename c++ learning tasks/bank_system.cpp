#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string accountName;
    double balance;

public:
    BankAccount(const string &accountNumber, const string &accountName, double balance)
    {
        this->accountName = accountName;
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance for withdrawal.\n";
        }
    }

    double getBalance()
    {
        return balance;
    }

    friend ostream &operator<<(ostream &output, BankAccount &account)
    {
        cout << "Account Name: " << account.accountName << "\n"
            << "Account Number: " << account.accountNumber << "\n"
            << "Balance: " << account.balance << " $ \n"
            << "-----------------------------";
        return output;
    }

    string getAccountNumber() const
    {
        return accountNumber;
    }
};

class Bank
{
private:
    static const int maxAccounts = 100;
    BankAccount *accounts[maxAccounts];
    int numAccounts;

public:
    Bank()
    {
        numAccounts = 0;
    }

    void openAccount(const string &accountNumber, const string &accountName, double firstBalance)
    {
        if (numAccounts < maxAccounts)
        {
            accounts[numAccounts] = new BankAccount(accountNumber, accountName, firstBalance);
            ++numAccounts;
        }
        else
        {
            cout << "Cannot open more accounts.\n Bank is full.\n";
        }
    }

    BankAccount *getAccount(const string &accountNumber)
    {
        for (int i = 0; i < numAccounts; i++)
        {
            if (accounts[i]->getAccountNumber() == accountNumber)
            {
                return accounts[i];
            }
        }
        return nullptr;
    }
};

int main()
{

    return 0;
}
