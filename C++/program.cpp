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

    cout << "\n1 - Desktop Computers"
         << "\n2 - Laptop Computers"
         << "\n3 - Exit";

    cout << "\nEnter your choice(num): "; cin >> n;

    switch(n){
        case 1:
            cout << "\n1 - Standard Desktop"
                 << "\n2 - Gaming Desktop";

            cout << "\nEnter your choice(num): "; cin >> n;

            switch(n){
                case 1:
                    cout << "\n1 - HP 8200 2024";

                    cout << "\nEnter your choice(num): "; cin >> n;

                    switch(n){
                        case 1:
                            cout << "\n - Processor (CPU): Intel Core i5-12400"
                                 << "\n - Memory (RAM): 8GB DDR4"
                                 << "\n - Storage: 512GB SSD"
                                 << "\n - Graphics: Integrated Intel UHD Graphics 730"
                                 << "\n - Motherboard: ASUS Prime B660M-A D4"
                                 << "\n - Power Supply (PSU): Corsair CV450, 450W 80+ Bronze"
                                 << "\n - Case: NZXT H510 Compact Mid-Tower"
                                 << "\n - Operating System: Windows 11 Pro"
                                 << "\n - Price (OMR): 255 OMR";
                            break;
                    }
                    break;

                case 2:
                    cout << "\n1 - Gaming RDY Y40RG201";

                    cout << "\nEnter your choice(num): "; cin >> n;

                    switch(n){
                        case 1:
                            cout << "\n - Processor (CPU): AMD Ryzen 9 7950X3D CPU"
                                 << "\n - Memory (RAM): 32GB DDR5-6000 Kingston RGB RAM"
                                 << "\n - Storage: 2TB M.2 NVMe Gen4 SSD"
                                 << "\n - Graphics: AMD Radeon RX 7900 XTX - 24GB"
                                 << "\n - Motherboard: MSI X670E TOMAHAWK WIFI"
                                 << "\n - Case: iBUYPOWER HYTE Y40 Pro RGB - Black"
                                 << "\n - Operating System: Windows 11 Home"
                                 << "\n - Price (OMR): 1019.87 OMR";
                            break;
                    }
                    break;

                default:
                    cout << "Invalid choice";
                    break;
            }

            break;

        case 2:
            cout << "\n1 - Standard Laptop"
                 << "\n2 - Gaming Laptop";

                            cout << "\n1 - Standard Desktop"
                 << "\n2 - Gaming Desktop";

            cout << "\nEnter your choice(num): "; cin >> n;

            switch(n){
                case 1:
                    cout << "\n1 - HP Probook 430 G8";

                    cout << "\nEnter your choice(num): "; cin >> n;

                    switch(n){
                        case 1:
                            cout << "\n - Processor (CPU): 11th Generation Intel Core i7 processor"
                                 << "\n - Memory (RAM): 8 GB DDR4-3200"
                                 << "\n - Storage: 512GB PCIe NVMe SSD"
                                 << "\n - Graphics: Integrated Intel Iris Xᵉ Graphics"
                                 << "\n - Screen: 3.3″ diagonal, HD (1366 x 768)"
                                 << "\n - Operating System: Windows 11 Home"
                                 << "\n - Price (OMR): 328.24 OMR";
                            break;
                    }
                    break;

                case 2:
                    cout << "\n1 - MSI Launches GP62X & GP72X Leopard Pro Series Gaming Laptop";

                    cout << "\nEnter your choice(num): "; cin >> n;

                    switch(n){
                        case 1:
                            cout << "\n - Processor (CPU): 7th Gen. Intel® Core™ i7 processor"
                                 << "\n - Memory (RAM): DDR4, 2 Slots, Max 32GB"
                                 << "\n - Storage: 1x 2.5″ SATA HDD"
                                 << "\n - Graphics: GeForce® GTX1060 with 3GB GDDR5"
                                 << "\n - Screen: 15.6″ FHD, Wide-view"
                                 << "\n - Operating System: Windows 11 Pro"
                                 << "\n - Price (OMR): 423.12 OMR";
                            break;
                    }

            break;

        case 3:
            cout << "Thank you!";
            break;

        default:
            cout << "Invalid choice!";
            break;
    }






    // switch (n){
    //     case 1:



    // cout << "\n1 - Graphics Cards"
    //  << "\n2 - CPU"
    //  << "\n3 - Monitors"
    //  << "\n4 - RAM"
    //  << "\n5 - Exit";



    //         cout << "\n1 - GeForce RTX 4090 -> 676.06 OMR"
    //              << "\n2 - GeForce RTX 3090 -> 461.23 OMR"
    //              << "\n3 - GeForce RTX 1060 6 GB -> 350.74 OMR";

    //         cout << "\nEnter your choice(num): "; cin >> graphicsCard;
    //         break;  
    //     case 2:
    //         cout << "Enter CPU name: "; cin >> cpu;
    //         break;  
    //     case 3:
    //         cout << "Enter Monitor name: "; cin >> monitor;
    //         break;  
    //     case 4:
    //         cout << "Enter RAM name: "; cin >> ram;
    //         break;  
    //     case 5:
    //         cout << "Thank you!";
    //         break;  
    //     default:
    //         cout << "Invalid choice";
    //         break;
    // }

    // for(int i = 0; i < 4; i++){

    // }
    return 0;
}