#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string username, password;
    vector<string> library_books = { "Harry Potter", "Animal Farm", "1984" };
    vector<vector<string>> library_users;

    while (true) {
        cout << "Name: ";
        getline(cin, username);

        if (username.empty()) {
            cout << "Try again.\n";
            continue;
        }
        break;
    }

    while (true) {
        cout << "Password: ";
        getline(cin, password);

        if (password.length() < 4) {
            cout << "Password must be at least 4 characters.\n";
            continue;
        }
        break;
    }

    vector<string> user;

    user.push_back(username);
    user.push_back(password);

    library_users.push_back(user);

    cout << "register successful!\n" << endl;

    while (true) {
        string login_name, login_password;
        cout << "name: ";
        cin >> login_name;

        for (vector<string> user : library_users) {
            if (user[0] == login_name) {
                cout << "password: ";
                cin >> login_password;

                if (user[1] == login_password) {
                    cout << "login successful" << endl << endl;

                    while (true) {
                        string option;
                        cout << "Would you like to" << endl
                             << "1) Borrow a book" << endl
                             << "2) Return a book" << endl
                             << "3) Look at your books" << endl
                             << "4) Add a book" << endl
                             << "5) Exit" << endl;

                        getline(cin, option);

                        if (option == "1") {
                            if (user.size() > 2) {
                                cout << "you can't borrow" << endl << endl;
                                continue;
                            }

                            string asking_;
                            cout << "Which book would you like to borrow?" << endl << endl;

                            for (string books : library_books) {
                                cout << books << endl;
                            }

                            getline(cin, asking_);

                            bool isBorrowed = false;

                            for (int i = 0; i < library_books.size(); i++) {
                                if (asking_ == library_books[i]) {
                                    user.push_back(asking_);
                                    library_books.erase(library_books.begin() + i);
                                    cout << "you borrowed a book" << endl << endl;
                                    isBorrowed = true;
                                    break;
                                }
                            }

                            if (!isBorrowed) {
                                cout << "there is no book like that" << endl << endl;
                            }
                        }

                        if (option == "2") {
                            if (user.size() == 2) {
                                cout << "you didn't borrow any book" << endl << endl;
                                continue;
                            }

                            user.pop_back();
                            cout << "You returned the book" << endl << endl;
                        }

                        if (option == "3") {
                            cout << user[-1] << endl << endl;
                        }

                        if (option == "4") {
                            string add_book;
                            cout << "Tell the name: " << endl;
                            getline(cin, add_book);

                            bool isHere = false;

                            for (int i = 0; i < library_books.size(); i++) {
                                if (add_book == library_books[i]) {
                                    cout << "already here" << endl;
                                    isHere = true;
                                    break;
                                }
                            }

                            if (!isHere) {
                                library_books.push_back(add_book);
                            }
                        }

                        if (option == "5") {
                            break;
                        }
                    }
                }
                else {
                    cout << "try again" << endl;
                    continue;
                }
            }
            else {
                cout << "try again" << endl;
                continue;
            }
        }
    }

    return 0;
}
