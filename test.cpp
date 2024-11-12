#include <iostream>
using namespace std;

// Define a structure to store the phone number parts
struct PhoneNumber {
    int areaCode;
    int exchange;
    int number;
};

// Function to display the phone number in (area code)-exchange-number format
void displayPhoneNumber(PhoneNumber& phone) {
    cout << "(" << phone.areaCode << ")-" << phone.exchange << "-" << phone.number << endl;
}

int main() {
    // Initialize a phone number with specified values
    PhoneNumber phone1 = {212, 767, 8900};

    // Declare another phone number and read values from the user
    PhoneNumber phone2;
    cout << "Enter area code: ";
    cin >> phone2.areaCode;
    cout << "Enter exchange: ";
    cin >> phone2.exchange;
    cout << "Enter number: ";
    cin >> phone2.number;

    // Display both phone numbers
    cout << "First phone number: ";
    displayPhoneNumber(phone1);

    cout << "Second phone number: ";
    displayPhoneNumber(phone2);

    return 0;
}
