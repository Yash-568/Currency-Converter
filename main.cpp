#include <iostream>
using namespace std;

int new_option;

void Currency_convert(){
    cout << "Options for currency converter";
    cout << "\n1. Convert to USD";
    cout << "\n2. Convert to Euro";
    cout << "\n3. Convert to Yen";
    cout << "\n4. Convert to Ruble";
    cout << "\n";


    int option;
    cout << "Your Option: ";
    cin >> option;
    float inr;

    switch(option){
        case 1:
            cout << "\nEnter INR amount to convert into USD: ";
            cin >> inr;
            inr *= 0.012;

            cout << "\nConverted USD Amount: " << inr << endl;
            cout << "Do you want to convert a new currency?\nPress 1 to 'Proceed' and press 2 to 'exit'"<< endl;

            cout << "Your Option: ";
            cin >> new_option;
            if(new_option == 1){
                Currency_convert();
            }
            break;

        case 2:
            cout << "\nEnter INR amount to convert into Euro: ";
            cin >> inr;
            inr *= 0.011;

            cout << "\nConverted Euro Amount: " << inr << endl;
            cout << "Do you want to convert a new currency?\nPress 1 to 'Proceed' and press 2 to 'exit'"<< endl;

            cout << "Your Option: ";
            cin >> new_option;
            if(new_option == 1){
                Currency_convert();
            }
            break;

        case 3:
            cout << "\nEnter INR amount to convert into Yen: ";
            cin >> inr;
            inr *= 1.85;

            cout << "\nConverted Yen Amount: " << inr << endl;
            cout << "Do you want to convert a new currency?\nPress 1 to 'Proceed' and press 2 to 'exit'"<< endl;

            cout << "Your Option: ";
            cin >> new_option;
            if(new_option == 1){
                Currency_convert();
            }
            break;

        case 4:
            cout << "\nEnter INR amount to convert into Ruble: ";
            cin >> inr;
            inr *= 1.22;

            cout << "\nConverted Yen Amount: " << inr << endl;
            cout << "Do you want to convert a new currency?\nPress 1 to 'Proceed' and press 2 to 'exit'"<< endl;

            cout << "Your Option: ";
            cin >> new_option;
            if(new_option == 1){
                Currency_convert();
            }
            break;
    }
}

int main(){
    cout << "\n";
    Currency_convert();
    cout << "Thankyou";
    return 0;
}