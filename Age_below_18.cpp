#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try {
        if(age < 18)
            throw age;
        cout << "You are eligible to vote!" << endl;
    } 
    catch(int a) {
        cout << "Error: Age " << a << " is below 18. Not eligible to vote." << endl;
    }
}
