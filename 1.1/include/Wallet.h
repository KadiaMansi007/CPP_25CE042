#ifndef WALLET_H
#define WALLET_H

#include <iostream>
#include <string>
using namespace std;

class Wallet
{
private:
    int walletID;
    string userName;
    double balance;

public:
    Wallet();
    void Create_wallet();
    void loadMoney(double amount);
    void transferMoney(Wallet &receiver, double amount);
    void displayDetails();
    int getID();   // ✅ Added to identify wallet
};

#endif
