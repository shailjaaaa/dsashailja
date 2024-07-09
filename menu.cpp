#include <iostream>
#include <iomanip>
using namespace std;

// Structure to represent a menu item
struct MenuItem {
    string name;
    float price;
    int quantity;

    // Constructor
    MenuItem(string n = "", float p = 0.0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    // Function to display the item details
    void displayItem() {
        cout <<  name;
        cout <<  quantity;
        cout <<  price << endl;
    }

    // Function to calculate total price for the item
    float getTotal() {
        return quantity * price;
    }
};

// Function prototypes
void displayMenuOptions();
void displayMenu(MenuItem menu[], int numItems);
void orderItem(MenuItem menu[], int numItems);
void generateBill(MenuItem menu[], int numItems);

int main() {
    const int MAX_ITEMS = 10;
    MenuItem menu[MAX_ITEMS] = {
        MenuItem("Burger", 150),
        MenuItem("Pizza", 250),
        MenuItem("Pasta", 200),
        MenuItem("Salad", 200),
        MenuItem("Sandwich", 150),
        MenuItem("Fries", 151),
        MenuItem("Coke", 80),
        MenuItem("Coffee", 200),
        MenuItem("Tea", 10),
        MenuItem("Ice Cream", 60)
    };
    int numItems = 10;
    int choice;

    do {
        displayMenuOptions();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                // Display menu
                displayMenu(menu, numItems);
                break;
            case 2:
                // Order item
                orderItem(menu, numItems);
                break;
            case 3:
                // Generate bill
                generateBill(menu, numItems);
                break;
            case 4:
                // Exit
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while(choice != 4);

    return 0;
}

// Function to display menu options
void displayMenuOptions() {
    cout << "\n===== MENU OPTIONS =====" << endl;
    cout << "1. Display Menu" << endl;
    cout << "2. Order Item" << endl;
    cout << "3. Generate Bill" << endl;
    cout << "4. Exit" << endl;
    cout << "========================" << endl;
}

// Function to display the menu items
void displayMenu(MenuItem menu[], int numItems) {
    cout << "\n===== MENU =====" << endl;
    cout <<  "Item Name";
    cout <<  "Price";
    cout << endl;
    cout << "=================" << endl;

    for (int i = 0; i < numItems; ++i) {
        cout <<  menu[i].name;
        cout <<  menu[i].price;
        cout << endl;
    }
    cout << "=================" << endl;
}

// Function to order an item
void orderItem(MenuItem menu[], int numItems) {
    int itemIndex;
    int quantity;

    cout << "Enter item number to order (1-" << numItems << "): ";
    cin >> itemIndex;

    if (itemIndex < 1 || itemIndex > numItems) {
        cout << "Invalid item number." << endl;
        return;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    menu[itemIndex - 1].quantity += quantity;
    cout << "Order placed successfully." << endl;
}

// Function to generate bill
void generateBill(MenuItem menu[], int numItems) {
    cout << "\n===== BILL =====" << endl;
    cout <<  "Item Name";
    cout << "Quantity";
    cout <<  "Price" << endl;
    cout << "=================" << endl;

    float totalAmount = 0.0;
    for (int i = 0; i < numItems; ++i) {
        if (menu[i].quantity > 0) {
            menu[i].displayItem();
            totalAmount += menu[i].getTotal();
        }
    }

    cout << "=================" << endl;
    cout << "Total Amount: " << totalAmount << endl;
    cout << "=================" << endl;
}