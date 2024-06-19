#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int n;
    double budget, total = 0;
    string cpu, graphicsCard, monitor, ram;
    cout << "Enter your budget(OMR): "; cin >> budget;
    cout << "-----";

    for(int i = 0; i < 4; i++){
        cout << "\n1 - Graphics Cards" << "\n2 - CPU" << "\n3 - Monitors" << "\n4 - RAM" << "\n5 - Exit";
        cout << "\nEnter your choice(num): "; cin >> n;

        switch (n){
            case 1:
                cout << "Enter Graphics Card name: "; cin >> graphicsCard;
                break;

            case 2:
                cout << "Enter CPU name: "; cin >> cpu;
                break;

            case 3:
                cout << "Enter Monitor name: "; cin >> monitor;
                break;

            case 4:
                cout << "Enter RAM name: "; cin >> ram;
                break;

            case 5:
                cout << "Thank you!";
                break;

            default:
                cout << "Invalid choice";
                break;
            }
        }
    return 0;
}