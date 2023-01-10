#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account myAccount;
    
    cout << "Initial account name is: " << myAccount.getName();

    cout << "\nPlease enter the account name: ";
    string theName;
    getline(cin, theName);
    //cin >> theName;
    myAccount.setName(theName);

    cout << "Name in object myAccount is: " << myAccount.getName() << endl;

    return 0;
}