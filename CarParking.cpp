#include <iostream>
#include <cstdlib> // For system("cls")
using namespace std;

int main() {
    int car = 0, bike = 0, truck = 0;       
    int carCost = 50, bikeCost = 20, truckCost = 100;
    int totalCost = 0;                     
    int choice;

    while (true) {
        system("cls");
        cout << "\n========== CAR PARKING SYSTEM ==========\n";
        cout << "1. Add a Car (Cost: " << carCost << " Rs)\n";
        cout << "2. Add a Bike (Cost: " << bikeCost << " Rs)\n";
        cout << "3. Add a Truck (Cost: " << truckCost << " Rs)\n";
        cout << "4. Show Parking Records\n";
        cout << "5. Reset Parking Records\n";
        cout << "6. Exit\n";
        cout << "========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Add Car
                car++;
                totalCost += carCost;
                system("cls");
                cout << "\nCar has been added successfully! (Total Cost: " << carCost << " Rs)\n";
                system("pause");
                break;

            case 2: // Add Bike
                bike++;
                totalCost += bikeCost;
                system("cls");
                cout << "\nBike has been added successfully! (Total Cost: " << bikeCost << " Rs)\n";
                system("pause");
                break;

            case 3: // Add Truck
                truck++;
                totalCost += truckCost;
                system("cls");
                cout << "\nTruck has been added successfully! (Total Cost: " << truckCost << " Rs)\n";
                system("pause");
                break;

            case 4: // Show Parking Records
                system("cls");
                cout << "\n========== PARKING RECORDS ==========\n";
                cout << "Total Cars:    " << car << " (Earnings: " << car * carCost << " Rs)\n";
                cout << "Total Bikes:   " << bike << " (Earnings: " << bike * bikeCost << " Rs)\n";
                cout << "Total Trucks:  " << truck << " (Earnings: " << truck * truckCost << " Rs)\n";
                cout << "-------------------------------------\n";
                cout << "Total Earnings: " << totalCost << " Rs\n";
                cout << "=====================================\n";
                system("pause");
                break;

            case 5: // Reset Parking Records
                system("cls");
                car = 0;
                bike = 0;
                truck = 0;
                totalCost = 0;
                cout << "\nAll parking records have been reset!\n";
                system("pause");
                break;

            case 6: // Exit
                system("cls");
                cout << "\nThank you for using the Car Parking System. Goodbye!\n";
                return 0;

            default: // Invalid Input
                system("cls");
                cout << "\nInvalid input! Please enter a valid choice.\n";
                system("pause");
        }
    }
    return 0;
}
