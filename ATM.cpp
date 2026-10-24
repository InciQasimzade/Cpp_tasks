
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct User {
    string username;
    string pin;
    double balance;
};

int welcome() {
    int option;
    cout << "\n---- WELCOME TO ATM ----" << endl;

    do {
        cout << "Please choose an option: " << endl;
        cout << "1. Login\n2. Register\n3. Exit\n4. Show users" << endl;
        cin >> option;
    } while (option < 1 || option > 4);

    return option;
}

void register_users(vector<User>& users) {
    User user;

    cout << "Enter your username: ";
    cin >> user.username;

    for (int i = 0; i < users.size(); i++) {
        if (users[i].username == user.username) {
            cout << "We already HAVE this human" << endl;
            return;
        }
    }

    cout << "Enter a pin: ";
    cin >> user.pin;

    user.balance = 0;

    users.push_back(user);
    cout << "Registration successful!" << endl;
}

int login(vector<User>& users) {
    string username;
    cout << "Enter username: ";
    cin >> username;

    for (int i = 0; i < users.size(); i++) {
        if (users[i].username == username) {
            string pin;
            cout << "Enter your pin: ";
            cin >> pin;

            if (users[i].pin == pin) {
                cout << "Login successful!" << endl;
                return i;
            } else {
                cout << "no." << endl;
                return -1;
            }
        }
    }

    cout << "no human is like that" << endl;
    return -1;
}

void check_balance(vector<User>& users, int index) {
    cout << "Your balance: "
         << users[index].balance << endl;
}

void deposit(vector<User>& users, int index) {
    double amount;

    cout << "Enter cash to deposit: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "no." << endl;
        return;
    }

    users[index].balance += amount;

    cout << "Wow, successful!" << endl;
    check_balance(users, index);
}

void withdraw(vector<User>& users, int index) {
    double amount;

    cout << "Enter cash to withdraw: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "no." << endl;
        return;
    }

    if (amount > users[index].balance) {
        cout << "no." << endl;
        return;
    }

    users[index].balance -= amount;

    cout << "Wow, successful!" << endl;
    check_balance(users, index);
}

void atm_menu(vector<User>& users, int index) {
    int choice;

    while (true) {
        cout << "\n---- ATM MENU ----" << endl;
        cout << "Welcome, " << users[index].username << "!" << endl;
        cout << "1. Check balance" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Withdraw money" << endl;
        cout << "4. Logout" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            check_balance(users, index);
        }
        else if (choice == 2) {
            deposit(users, index);
        }
        else if (choice == 3) {
            withdraw(users, index);
        }
        else if (choice == 4) {
            cout << "Logged out successfully!" << endl;
            break;
        }
        else {
            cout << "Invalid option!" << endl;
        }
    }
}

int main() {
    vector<User> users;

    User user1;
    User user2;
    User user3;

    user1.username = "Alex";
    user1.pin = "1234";
    user1.balance = 1000;
    users.push_back(user1);

    user2.username = "John";
    user2.pin = "5678";
    user2.balance = 2500;
    users.push_back(user2);

    user3.username = "Emma";
    user3.pin = "9012";
    user3.balance = 500;
    users.push_back(user3);

    int option;

    while (true) {
        option = welcome();

        if (option == 1) {
            int index = login(users);

            if (index != -1) {
                atm_menu(users, index);
            }
        }
        else if (option == 2) {
            register_users(users);
        }
        else if (option == 3) {
            cout << "bye" << endl;
            break;
        }
        else if (option == 4) {
            for (int i = 0; i < users.size(); i++) {
                cout << "Username: " << users[i].username << "\nBalance: " << users[i].balance <<endl;
            }
            cout << endl;
        }
    }

    return 0;
}
