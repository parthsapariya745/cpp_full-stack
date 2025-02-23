#include <iostream>
using namespace std;

int main(){

    cout << "Press 1 for English" << endl;
    cout << "Hindi ke liye 2 dabayein" << endl;
    cout << "gujarati mate 3 dabao" << endl;

    cout << "-----------------------------------------------------------" << endl;

    int user;

    cout << "Enter the number: ";
    cin >> user;

    switch (user)
    {
    case 1: // english
        cout << "press 1 for Internet recharge" << endl;
        cout << "press 2 for create your new account" << endl;
        cout << "press 3 for contact" << endl;

        cout << "-----------------------------------------------------------" << endl;

        int customer1;

        cout << "Press your number: ";
        cin >> customer1;

        switch (customer1)
        {
        case 1:
            cout << "press 1 for recharge validiy(month)" << endl;
            cout << "press 2 for recharge type(limited & unlimited)" << endl;
            cout << "press 3 for recharge 4G & 5G" << endl;

            cout << "-----------------------------------------------------------" << endl;

            int user2;

            cout << "Press your number: ";
            cin >> user2;

            switch (user2)
            {
            case 1:
                cout << "1 year plan 3600rs 2.5GB/per day" << endl;
                cout << "6 month plan 1800rs 2.5GB/per day" << endl;
                cout << "3 month plan 900rs 2.5GB/per day" << endl;
                cout << "1 month plan 200rs 2GB/per day" << endl;
                break;

            case 2:
                cout << "Limited" << endl;
                cout << "Unlimited" << endl;
                break;

            case 3:
                cout << "4G" << endl;
                cout << "5G" << endl;
                break;

            default:
                cout << "INVALID NUMBER!";
                break;
            }
            break;

        case 2:
            cout << "press 1 for Fixed Deposit(FD)" << endl;
            cout << "press 2 for Saving account" << endl;
            cout << "press 3 for Current account" << endl;

            cout << "-----------------------------------------------------------" << endl;

            int user3;

            cout << "Press your number: ";
            cin >> user3;

            switch (user3)
            {
            case 1:
                long long int Aadhaar,amount,code;

                cout << "Enter your Aadhaar card number: ";
                cin >> Aadhaar;

                cout << "Enter your Ammount: ";
                cin >> amount;

                cout << "Enter your IFSC Code: ";
                cin >> code;
                break;

            case 2:
                long long int amount2,code2,Aadhaar2;
    
                cout << "Enter your Aadhaar card number: ";
                cin >> Aadhaar2;

                cout << "Enter your Ammount: ";
                cin >> amount2;

                cout << "Enter your IFSC Code: ";
                cin >> code2;
                break;

            case 3:
                long long int amount3,code3,Aadhaar3;
                
                cout << "Enter your Aadhaar card number: ";
                cin >> Aadhaar3;

                cout << "Enter your Ammount: ";
                cin >> amount3;

                cout << "Enter your IFSC Code: ";
                cin >> code3;
                break;
            
            default:
                cout << "INVALID NUMBER!";
                break;
            }
            break;

        case 3:
            cout << "press 1 for Whatsapp number" << endl;
            cout << "press 2 for mail account" << endl;

            cout << "-----------------------------------------------------------" << endl;

            int user4;

            cout << "Press your number: ";
            cin >> user4;

            switch (user4)
            {
            case 1:
                cout << "98792 26001";
                break;

            case 2:
                cout << "parth123@gmail.com";
                break;
            
            default:
                cout << "INVALID NUMBER!";
                break;
            }
            break;
        
        default:
            cout << "INVALID NUMBER!" << endl;
            break;
        }
        break;

    case 2: // hindi
        cout << "Internet recharge ke liye 1 dabayein" << endl;
        cout << "naya account banane ke liye 2 dabayein" << endl;
        cout << "hamare sath batchit ke liye 3 dabayein" << endl;

        cout << "-----------------------------------------------------------" << endl;

        int customer2;

        cout << "yaha pe apka number dabayein: ";
        cin >> customer2;

        switch (customer2)
        {
        case 1:
            cout << "recharge ki validity(month) ke liye 1 dabayein" << endl;
            cout << "recharge type(limited & unlimited) ke liye 2 dabayein" << endl;
            cout << "4G ya 5G select karne ke liye 3 dabayein" << endl;

            cout << "-----------------------------------------------------------" << endl;

            int user5;

            cout << "yaha pe apka number dabayein: ";
            cin >> user5;

            switch (user5)
            {
            case 1:
                cout << "1 year plan 3600rs 2.5GB/per day" << endl;
                cout << "6 month plan 1800rs 2.5GB/per day" << endl;
                cout << "3 month plan 900rs 2.5GB/per day" << endl;
                cout << "1 month plan 200rs 2GB/per day" << endl;
                break;

            case 2:
                cout << "Limited" << endl;
                cout << "Unlimited" << endl;
                break;

            case 3:
                cout << "4G" << endl;
                cout << "5G" << endl;
                break;

            default:
                cout << "aap ne dial kiya hua number invalid hai!" << endl;
                break;
            }
            break;

        case 2:
            cout << "Fixed Deposit(FD) ke liye 1 dabayein" << endl;
            cout << "Saving account ke liye 2 dabayein" << endl;
            cout << "Current account ke liye 3 dabayein" << endl;

            cout << "-----------------------------------------------------------" << endl;

            int user6;

            cout << "yaha pe apka number dabayein: ";
            cin >> user6;

            switch (user6)
            {
            case 1:
                long long int amount,code,Aadhaar;
                
                cout << "aapka Aadhaar card number: ";
                cin >> Aadhaar;

                cout << "aapki Ammount: ";
                cin >> amount;

                cout << "aapka IFSC Code: ";
                cin >> code;
                break;

            case 2:
                long long int amount2,code2,Aadhaar2;
                
                cout << "aapka Aadhaar card number: ";
                cin >> Aadhaar2;

                cout << "aapki Ammount: ";
                cin >> amount2;

                cout << "aapka IFSC Code: ";
                cin >> code2;
                break;

            case 3:
                long long int amount3,code3,Aadhaar3;
                
                cout << "aapka Aadhaar card number: ";
                cin >> Aadhaar2;

                cout << "aapki Ammount: ";
                cin >> amount3;

                cout << "aapka IFSC Code: ";
                cin >> code3;
                break;
            
            default:
                cout << "aap ne dial kiya hua number invalid hai!" << endl;
                break;
            }
            break;

        case 3:
            cout << "Whatsapp number ke liye 1 dabayein" << endl;
            cout << "mail account ke liye 2 dabayein" << endl;

            cout << "-----------------------------------------------------------" << endl;

            int user7;

            cout << "Press your number: ";
            cin >> user7;

            switch (user7)
            {
            case 1:
                cout << "98792 26001";
                break;

            case 2:
                cout << "parth123@gmail.com";
                break;
            
            default:
                cout << "aap ne dial kiya hua number invalid hai!" << endl;
                break;
            }
            break;
        
        default:
            cout << "aap ne dial kiya hua number invalid hai!" << endl;
            break;
        }
        break;

    case 3: // gujarati
        cout << "Internet recharge karva mate 1 dabao" << endl;
        cout << "navu account banavva mate 2 dabao" << endl;
        cout << "amari sathe vatchit karva mate 3 dabao" << endl;

        cout << "-----------------------------------------------------------" << endl;

        int customer3;

        cout << "tamaro number aya dabao: ";
        cin >> customer3;

        switch (customer3)
        {
        case 1:
            cout << "recharge ni validity(month) mate 1 dabao" << endl;
            cout << "recharge type(limited & unlimited) mate 2 dabao" << endl;
            cout << "4G kato 5G select karva mate 3 dabao" << endl;

            cout << "-----------------------------------------------------------" << endl;

            int user8;

            cout << "tamaro number aya dabao: ";
            cin >> user8;

            switch (user8)
            {
            case 1:
                cout << "1 year plan 3600rs 2.5GB/per day" << endl;
                cout << "6 month plan 1800rs 2.5GB/per day" << endl;
                cout << "3 month plan 900rs 2.5GB/per day" << endl;
                cout << "1 month plan 200rs 2GB/per day" << endl;
                break;

            case 2:
                cout << "Limited" << endl;
                cout << "Unlimited" << endl;
                break;

            case 3:
                cout << "4G" << endl;
                cout << "5G" << endl;
                break;

            default:
                cout << "tamaro dial karelo number invalid che!" << endl;
                break;
            }
            break;

        case 2:
            cout << "Fixed Deposit(FD) mate 1 dabao" << endl;
            cout << "Saving account mate 2 dabao" << endl;
            cout << "Current account mate 3 dabao" << endl;

            cout << "-----------------------------------------------------------" << endl;

            int user9;

            cout << "tamaro number aya dabao: ";
            cin >> user9;

            switch (user9)
            {
            case 1:
                long long int Aadhaar,amount,code;

                cout << "tamaro Aadhaar card number: ";
                cin >> Aadhaar;

                cout << "tamari Ammount: ";
                cin >> amount;

                cout << "tamaro IFSC Code: ";
                cin >> code;
                break;

            case 2:
                long long int Aadhaar2,amount2,code2;

                cout << "tamaro Aadhaar card number: ";
                cin >> Aadhaar2;

                cout << "tamari Ammount: ";
                cin >> amount2;

                cout << "tamaro IFSC Code: ";
                cin >> code2;
                break;

            case 3:
                long long int Aadhaar3,amount3,code3;

                cout << "tamaro Aadhaar card number: ";
                cin >> Aadhaar3;

                cout << "tamari Ammount: ";
                cin >> amount3;

                cout << "tamaro IFSC Code: ";
                cin >> code3;
                break;
            
            default:
                cout << "tamaro dial karelo number invalid che!" << endl;
                break;
            }
            break;

        case 3:
            cout << "Whatsapp number mate 1 dabao" << endl;
            cout << "mail account mate 2 dabao" << endl;

            cout << "-----------------------------------------------------------" << endl;

            int user10;

            cout << "Press your number: ";
            cin >> user10;

            switch (user10)
            {
            case 1:
                cout << "98792 26001";
                break;

            case 2:
                cout << "parth123@gmail.com";
                break;
            
            default:
                cout << "tamaro dial karelo number invalid che!" << endl;
                break;
            }
            break;
        
        default:
            cout << "tamaro dial karelo number invalid che!" << endl;
            break;
        }
        break;
        
    default:
        cout << "INVALID NUMBER!" << endl;
        break;
    }
}