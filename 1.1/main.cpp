#include "Wallet.h"

int main()
{
    Wallet user1, user2;
    int choice, id;
    double amount;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Create Wallet Accounts\n";
        cout << "2. Load Money\n";
        cout << "3. Transfer Money\n";
        cout << "4. Display Details\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            user1.Create_wallet();
            user2.Create_wallet();
            break;

        case 2:
            cout << "Enter Wallet ID to load money: ";
            cin >> id;

            cout << "Enter amount: ";
            cin >> amount;

            if (id == user1.getID())
                user1.loadMoney(amount);
            else if (id == user2.getID())
                user2.loadMoney(amount);
            else
                cout << "Invalid Wallet ID\n";

            break;

        case 3:
        {
            int senderID, receiverID;

            cout << "Enter Sender Wallet ID: ";
            cin >> senderID;
            cout << "Enter Receiver Wallet ID: ";
            cin >> receiverID;
            cout << "Enter amount: ";
            cin >> amount;

            if (senderID == user1.getID() && receiverID == user2.getID())
                user1.transferMoney(user2, amount);
            else if (senderID == user2.getID() && receiverID == user1.getID())
                user2.transferMoney(user1, amount);
            else
                cout << "Invalid Wallet IDs\n";

            break;
        }

        case 4:
            cout << "\n--- Wallet Details ---";
            user1.displayDetails();
            user2.displayDetails();
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}
