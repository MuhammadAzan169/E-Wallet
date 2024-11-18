#include <iostream>
#include <string>
using namespace std;
void displayMenu();
void makeCreditCardPayment(float&);
void applyForHealthInsurance(bool&);
void displaySummary(float, bool);
void displayMenu()
{
    cout << "1. Make a credit card payment" << endl;
    cout << "2. Apply for health insurance" << endl;
    cout << "3. Display summary" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice (1-4): ";
}
void makeCreditCardPayment(float& balance)
{
    float payment = 50000;
    cout << "Enter the payment amount: Rs";
    cin >> payment;
    if (payment <= balance) {
        balance -= payment;
        cout << "Thank you for your payment of Rs" << payment << "." << endl;
    } else {
        cout << "Error: Payment amount exceeds balance." << endl;
    }
}
void applyForHealthInsurance(bool& hasHealthInsurance) 
{
    char response;
    cout << "Are you interested in applying for health insurance (y/n)? ";
    cin >> response;
    if (response == 'y' || response == 'Y') {
        hasHealthInsurance = true;
        cout << "Thank you for applying for health insurance." << endl;
    } else {
        hasHealthInsurance = false;
        cout << "Thank you for consid2ering health insurance." << endl;
    }
}
void displaySummary(float balance, bool hasHealthInsurance)
{
    cout << "===================" << endl;
    cout << " ACCOUNT SUMMARY " << endl;
    cout << "===================" << endl;
    cout << "Credit card balance: Rs." << balance << endl;
    if (hasHealthInsurance) {
        cout << "Health insurance: Yes" << endl;
    } else {
        cout << "Health insurance: No" << endl;
    }
}
int main() 
{
    int pin3=1234,option,pin,pin1,pin2,AccountNumber,amount,OTP,load,pin4;
    string input,name,num,AccNum,Number;
    double balance = 0.0;
    double depositAmount;
    double Ramount;
    cout<<"Welcome to Black Cash (Press Enter To Continue)";
    cin.get();
    cout<<"1.Create New Account\n2.Login\n";
    cin>>option;
    if(option==1)
    {
        cout<<"Plz Enter your name\n";
        cin>>name;
        do
        {
            cout<<"Enter your 11 digits Mobile Number\n";
            cin>>input;
        }
        while(input.length()!=11);
        cout<<"Your Entered Number is:"<<input<<endl;
        do
        {
            cout<<"We have send you OTP\nPlz Enter your 4 digit OTP\n";
            cin>>input;
        }
        while(input.length()!=4);
        cout<<"Create your pin\n";
        cin>>pin;
        cout<<"Confirm your pin\n";
        cin>>pin2;
        if(pin2!=pin)
        {
            for(int i=1; i<=3; i++)
            {
                cout<<"Pin did not matched try again "<<3-i<<" tries left\n";
                cin>>pin2;
                if(pin2==pin)
                {
                    break;
                }
                else if(i==3)
                {
                    cout<<"You have exceed your limit plz try again later";
                    return 0;
                }
            }
        }
        cout<<"Welcome " << name << " Your account has been created (Press Enter to Continue)";
        cin.ignore();
        cin.get();
        cout<<"Plz enter your pin to Login\n";
        cin>>pin1;
        if(pin1!=pin)
        {
            for(int i=1;i<=3;i++)
            {
                cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                cin>>pin1;
                if(pin1==pin)
                {
                    break;
                }
                else if(i==3)
                {
                    cout<<"Your account has been blocked";
                    return 0;
                }
            }
        }
        cout<<"You have 0 balance in your account Plz Add Balance in your acount (Press Enter Key to Continue)";
        cin.ignore();
        cin.get();
        cout<<"Enter Deposite Amount Rs:";
        cin>>depositAmount;
        balance += depositAmount;
        cout<<"Your Balance is Rs:"<<balance<<"(Press Enter To continue)";
        cin.ignore();
        cin.get();
        cout<<"Select option from below:\n1.Money Transfer\n2.Utility Bills\n3.Mobile Load & Packages\n4.Banking & Finance";
        cin>>option;
        if(option==1)
        {
            cout<<"1.Bank Transfer\n2.BlackCash Transfer";
            cin>>option;
            if(option==1)
            {
                cout<<"Select Bank:\n1.Habib Bank Limited\n2.Meezan Bank";
                cin>>option;
                if(option==1)
                {
                    cout<<"Enter Account Name\n";
                    cin>>name;
                    do
                    {
                        cout<<"Enter 14 Digit Account Number\n";
                        cin>>AccNum;
                    }
                    while(AccNum.length()!=14);
                    cout<<"Your Entered Account Number is:"<<AccNum<<endl;
                    cout<<"Enter Amount Rs:";
                    cin>>amount;
                    if(amount>depositAmount)
                    {
                        for(int i=1; i<=3; i++)
                        {
                            cout<<"You do not have Enough Balance,Enter you amount again "<<3-i<<" tries left\n";
                            cin>>amount;
                            if(amount<=depositAmount)
                            {
                                break;
                            }
                             else if(i==3)
                            {
                                cout<<"You Do not Have Enough Balance Try Again Later\n";
                            }
                        }
                    }
                    do
                    {
                        cout<<"Enter 11 Digit Phone number\n";
                        cin>>input;
                    }
                    while(input.length()!=11);
                    cout<<"Your Money Have been Send to\nAccount Name:"<<name<<"\nAccountNumber:"<<AccNum<<"\nPhone Number:"<<input<<"\nAmount:"<<amount<<"Rs\n";
                    Ramount=depositAmount-amount;
                    cout<<"Now Your Balance is Rs:"<<Ramount<<"\nThank You";
                    return 0;
                }
                else;
                {
                     cout<<"Enter Account Name\n";
                    cin>>name;
                    do
                    {
                        cout<<"Enter 14 Digit Account Number\n";
                        cin>>AccNum;
                    }
                    while(AccNum.length()!=14);
                    cout<<"Your Entered Account Number is:"<<AccNum<<endl;
                    cout<<"Enter Your Amount Rs:";
                    cin>>amount;
                    if(amount>depositAmount)
                    {
                        for(int i=1; i<=3; i++)
                        {
                            cout<<"You do not have Enough Balance,Enter you amount again "<<3-i<<" tries left\n";
                            cin>>amount;
                            if(amount<=50000)
                            {
                                break;
                            }
                             else if(i==3)
                            {
                                cout<<"You Do not Have Enough Balance Try Again Later\n";
                            }
                        }
                    }
                    do
                    {
                        cout<<"Enter 11 Digit Phone number\n";
                        cin>>input;
                    }
                    while(input.length()!=11);
                    cout<<"Your Money Have been Send to\nAccount Name:"<<name<<"\nAccount Number:"<<AccNum<<"\nPhone Number:"<<input<<"\nAmount:"<<amount<<"Rs\n";
                    Ramount=depositAmount-amount;
                    cout<<"Now Your Balance is Rs:"<<Ramount<<"\nThank You";
                    return 0;
                }
            }
            else;
            {
                cout<<"Enter Reciever Name\n";
                cin>>name;
                do
                {
                    cout<<"Enter Reciever Mobile Number\n";
                    cin>>input;
                }
                while(input.length()!=11);
                cout<<"Enter Your Amount Rs:";
                cin>>amount;
                if(amount>depositAmount)
                {    
                    for(int i=1; i<=3; i++)
                    {
                        cout<<"You do not have Enough Balance,Enter you amount again "<<3-i<<" tries left\n";
                        cin>>amount;
                        if(amount<=depositAmount)
                        {
                            break;
                        }
                        else if(i==3)
                        {
                            cout<<"You Do not Have Enough Balance Try Again Later\n";
                        }
                    }
                }
                cout<<"Your Amount Rs."<<amount<<" Has been send to "<<name<<endl;
                Ramount=depositAmount-amount;
                cout<<"Now Your Balance is Rs:"<<Ramount<<"\nThank You";
            }
        }
        else if(option==2)
        {
            cout<<"1.Electricity bill\n2.Gas Bill\n3.Water Bill";
            cin>>option;
            switch(option)
            {
                case 1:
                cout<<"Select service provider:\n1.FESCO\n2.GEPCO\n3.HESCO";
                cin>>option;
                if(option==1)
                {
                do
                {
                    cout<<"Enter 8 digit FESCO Number\n";
                    cin>>input;
                }
                while(input.length()!=8);
                cout<<"Your Entered Number is:"<<input<<endl;
                cout << "Reference Number You Entered: " << input <<endl;
                cout<<"Pay Rs.2500.00 for 16261620818730\nFESCO due by 2023-2-28\nBill amount is Rs.2500.00\nLate Amount RS.2800.00.\nPlz Enter Pin to confirm.\n";
                    cin>>pin1;
                if(pin1!=pin)
                    {
                        for(int i=1;i<=3;i++)
                        {
                            cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                            cin>>pin1;
                            if(pin1==pin)
                            {
                                break;
                            }
                            else if(i==3)
                                {
                                    cout<<"Your account has been blocked";
                                    return 0;
                                }
                        }
                    }
                    cout<<"TID: 006915447177\nFESCO Bill:16261620818730 of Rs. 2500.00\n Due by 2023-2-28 has been paid on 28/2/2023.\n Thank You";
                    return 0;
                }
                else if(option==2)
                {
                do
                {
                    cout<<"Enter 8 digit GEPCO Number\n";
                    cin>>input;
                }
                while(input.length()!=8);
                cout<<"Your Entered Number is:"<<input<<endl;
                cout << "Reference Number You Entered: " << input << std::endl;
                cout<<"Pay Rs.2500.00 for 16261620818730 to GEPCO due by 2023-2-28. Bill amount is Rs.2500.00, Late Amount RS.2800.00.\nPlz Enter Pin to confirm.\n";
                cin>>pin1;
                if(pin1!=pin)
                    {
                        for(int i=1;i<=3;i++)
                        {
                        cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                        cin>>pin1;
                        if(pin1==pin)
                            {
                                break;
                            }
                            else if(i==3)
                            {
                                cout<<"Your account has been blocked";
                                return 0;
                            }
                        }
                     }
                    cout<<"TID: 006915447177.GEPCO Bill:16261620818730 of Rs. 2500.00 due by 2023-2-28 has been paid on 28/2/2023.\nThank You";
                    return 0;
                }
                else if(option==3)
                {
                    cout<<"Sorry for inconvinience this service is temporary closed";
                    return 0;
                }
            case 2:
                {
                    cout<<"Select service provider:\n1.SNGPL\n2.SSGC\n";
                    cin>>option;
                    if(option==1)
                    {
                    do
                        {
                            cout<<"Enter 11 digit SNGPL Account ID\n";
                            cin>>input;
                        }
                    while(input.length()!=11);
                    cout<<"Your Entered Account ID is:"<<input<<endl;
                    cout << "Reference Number You Entered: " << input <<endl;
                    cout<<"Pay Rs.5000.00 for 16261620818730 to SNGPL due by 2023-2-28. Bill amount is Rs.5000.00, Late Amount RS.6900.00.\nPlz Enter Pin to confirm\n";
                    cin>>pin1;
                     if(pin1!=pin)
                        {
                            for(int i=1;i<=3;i++)
                            {
                                cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                                cin>>pin1;
                                if(pin1==pin)
                                {
                                    break;
                                }
                                else if(i==3)
                                {
                                    cout<<"Your account has been blocked";
                                    return 0;
                                }
                            }
                        }
                    cout<<"TID: 006915447177.SNGPL Bill:16261620818730 of Rs. 5000.00 due by 2023-2-28 has been paid on 28/2/2023.\nThank You";
                    return 0;
                    }
                    else(option==2);
                    {
                        cout<<"Enter 10 Digit SSGC Customer Number\n";
                        cin>>num;
                        if(num.length()!=10)
                        {
                            cout<<"Plz Enter 10 Digit Number\n";
                            return 1;
                        }
                        cout<<"Cutomer Number is:"<< num <<endl;
                        cout<<"Pay Rs.5000.00 for 16261620818730 to SSGC due by 2023-2-28. Bill amount is Rs.5000.00, Late Amount RS.6900.00.\nPlz Enter Pin to confirm\n";
                        cin>>pin1;
                        if(pin1!=pin)
                        {
                            for(int i=1;1<=3;i++)
                            {
                                    cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                                    cin>>pin1;
                                    if(pin1==pin)
                                    {
                                        break;
                                    }
                                    else if(i==3)
                                    {
                                         cout<<"Your account has been blocked";
                                        return 0;
                                    }
                            }
                        }
                         cout<<"TID: 006915447177.SSGC Bill:16261620818730 of Rs. 5000.00 due by 2023-2-28 has been paid on 28/2/2023.\nThank You";
                    }
                }
                case 3:
                {
                    cout<<"Select water services provider:\n1.BWASA\n2.KWSB\n";
                    cin>>option;
                    if(option==1)
                    {
                        do
                        {
                            cout<<"Enter BWASA 10 digits Account Number\n";
                            cin>>input;
                            if(input.length()!=10)
                            {
                                cout<<"Plz Enter 10 digit number\n";
                                return 0;
                            }
                        }
                        while(input.length()!=10);
                        cout<<"Your Account Number is:"<<input<<endl;
                        cout<<"Bill Amount Rs:10000.00\nFees Rs:50.00\nBill Company:BWASA\nBill Month:February-2023\nDue Date:28/02/2023\nBill Amount after Due Date Rs:10500.00\nPlz Enter Pin to confirm Payment:\n";
                        cin>>pin1;
                         if(pin1!=pin)
                        {
                            for(int i=1;1<=3;i++)
                            {
                                cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                                cin>>pin1;
                                if(pin1==pin)
                                {
                                    break;
                                }
                                 else if(i==3)
                                {
                                    cout<<"Your account has been blocked";
                                    return 0;
                                }
                            }
                        }
                        cout<<"TID:009083397676 have been payed\nBWASA Bill:16261620818730\nFees Rs:50.00\nAmount payed Rs. 10000.00\nDue date:2023-2-28\nPayed Date:28/2/2023.\nThank You";
                        return 0;
                    }
                    else if(option==2)
                    {
                        do
                        {
                            cout<<"Enter 11 digit KWSB consumer No.";
                            cin>>input;
                            if(input.length()!=11)
                            {
                                cout<<"Plz Enter 11 digit number\n";
                                return 0;
                            }
                        }
                        while(input.length()!=11);
                        cout<<"Your Account Number is:"<<input<<endl;
                        cout<<"Bill Amount Rs:10000.00\nFees Rs:50.00\nBill Company:KWSB\nBill Month:February-2023\nDue Date:28/02/2023\nBill Amount after Due Date Rs:10500.00\nPlz Enter Pin to confirm Payment:\n";
                         cin>>pin1;
                         if(pin1!=pin)
                         {
                             for(int i=1;1<=3;i++)
                            {
                                cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                                cin>>pin1;
                                if(pin1==pin)
                                {
                                    break;
                                }
                                 else if(i==3)
                                {
                                    cout<<"Your account has been blocked";
                                    return 0;
                                }
                            }
                         }
                          cout<<"TID:009083397676 have been payed\nKWSB Bill:16261620818730\nFees Rs:50.00\nAmount payed Rs. 10000.00\nDue date:2023-2-28\nPayed Date:28/2/2023.\nThank You";
                          return 0;
                    }
                    else;
                    {
                        cout<<"Invalid Option";
                    }
                }
            }
        }
        else if(option==3)
        {
            cout<<"Select service:\n1.Prepaid Load\n2.Postpaid Load\n3.Mobile Packages\n";
            cin>>option;
            switch(option)
            {
                case 1:
                 do
                {
                    cout<<"Enter Mobile Number\n";
                    cin>>input;
                }
                while(input.length()!=11);
                cout<<"Your Entered Mobile Number is:"<<input<<endl;
                cout<<"Enter load amount for "<< input <<endl;
                cout<<"You can load between Rs.100 - Rs.5,000.00\nRs.";
                cin>>load;
                if(load<100 || load>5000)
                {
                    cout<<"You can load between Rs.100 - Rs.5,000.00\n";
                    return 0;
                }
                else;
                {
                    cout<<"You are transfering Rs. "<<load<<" to "<< input <<" Plz Enter Pin to confirm\n";
                    cin>>pin1;
                    if(pin1!=pin)
                    {
                        for(int i=1;1<=3;i++)
                        {
                            cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                            cin>>pin1;
                            if(pin1==pin)
                            {
                                break;
                            }
                            else if(i==3)
                            {
                                cout<<"Your account has been blocked";
                                return 0;
                            }
                        }
                    }
                    cout<<"Transaction Successfull\nTID:024911880295\nPrepaid Load Purchased Rs."<<load<<"\nThank You"<<endl;
                    return 0;
                }
                case 2:
                do
                {
                    cout<<"Enter Mobile Number\n";
                    cin>>input;
                }
                while(input.length()!=11);
                cout<<"Your Entered Mobile Number is:"<<input<<endl;
                cout<<"Enter load amount for "<< input <<endl;
                cout<<"You can load between Rs.100 - Rs.5,000.00\nRs.";
                cin>>load;
                if(load<100 || load>5000)
                {
                    cout<<"You can load between Rs.100 - Rs.5,000.00\n";
                    return 0;
                }
                else;
                {
                    cout<<"You are transfering Rs. "<<load<<" to "<< input <<" Plz Enter Pin to confirm\n";
                    cin>>pin1;
                    if(pin1!=pin)
                    {
                        for(int i=1;1<=3;i++)
                        {
                            cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                            cin>>pin1;
                            if(pin1==pin)
                            {
                                break;
                            }
                            else if(i==3)
                            {
                                cout<<"Your account has been blocked";
                                return 0;
                            }
                        }
                    }
                    cout<<"Transaction Successfull\nTID:024911880295\nPostpaid Load Purchased Rs."<<load<<"\nThank You"<<endl;
                    return 0;
                }
                case 3:
                cout<<"This service is not availible";
                break;
            }
        }
        else if(option==4)
        {
           float balance = depositAmount;
            bool hasHealthInsurance = false;
            int choice = 0;
            do 
            {
                displayMenu();
                cin >> choice;
                switch (choice) 
            {
                case 1: // Make credit card payment
                    makeCreditCardPayment(balance);
                    break;
                case 2: // Apply for health insurance
                    applyForHealthInsurance(hasHealthInsurance);
                    break;
                case 3: // Display summary
                    displaySummary(balance, hasHealthInsurance);
                    break;
                case 4: // Exit program
                    cout << "Thank you for using our banking and finance program!" << endl;
                    break;
                default: // Invalid choice
                    cout << "Invalid choice. Please try again." << endl;
            }
        } 
        while (choice != 4);
        return 0;
        }
        else;
        {
            cout<<"Invalid Option";
            return 0;
        }
    }
    else if(option==2)
    {   
        pin4 = 1234;
    	cout<<"Plz enter your pin to Login\n";
        cin>>pin4;
        if(pin4!=pin3)
        {
            for(int i=1;i<=3;i++)
            {
                cout<<"Wrong Pin Please Try Again,you have "<<4-i<<" tries left\n";
                cin>>pin4;
                if(pin4==pin3)
                {
                    break;
                }
                else if(i==3)
                {
                    cout<<"Your account has been blocked";
                    return 0;
                }
            }
        }
        cout<<"Your Balance is:50000 (Press Enter Key to Continue)";
        cin.ignore();
        cin.get();
        cout<<"Select option from below:\n1.Money Transfer\n2.Utility Bills\n3.Mobile Load & Packages\n4.Banking & Finance";
        cin>>option;
        if(option==1)
        {
            cout<<"1.Bank Transfer\n2.BlackCash Transfer";
            cin>>option;
            if(option==1)
            {
                cout<<"Select Bank:\n1.Habib Bank Limited\n2.Meezan Bank";
                cin>>option;
                if(option==1)
                {
                    cout<<"Enter Sender Name";
                    cin>>name;
                    do
                    {
                        cout<<"Enter Sender 11 digit Account Number\n";
                        cin>>AccNum;
                    }
                    while(AccNum.length()!=14);
                    do
                    {
                        cout<<"Enter Sender Mobile Number";
                        cin>>input;
                    }
                    while(input.length()!=11);
                    cout<<"Enter Your Amount\nRs.";
                    cin>>amount;
                    if(amount>50000)
                    {
                        for(int i=1; i<=3; i++)
                        {
                            cout<<"You do not have Enough Balance,Enter you amount again "<<3-i<<" tries left\n";
                            cin>>amount;
                            if(amount<=50000)
                            {
                                break;
                            }
                             else if(i==3)
                            {
                                cout<<"Account Blocked\n";
                            }
                        }
                    }
                    do
                    {
                        cout<<"Enter your Phone number\n";
                        cin>>Number;
                    }
                    while(Number.length()!=11);
                    cout<<"Your Money Have been Send to "<<name<<" \nAmount Rs:"<<amount<<"\nThank You";
                    return 0;
                }
                else;
                {
                    cout<<"Enter Sender Name";
                    cin>>name;
                    do
                    {
                        cout<<"Enter Sender 11 digit Account Number\n";
                        cin>>AccNum;
                    }
                    while(AccNum.length()!=14);
                    do
                    {
                        cout<<"Enter Sender Mobile Number";
                        cin>>input;
                    }
                    while(input.length()!=11);
                    cout<<"Enter Your Amount\nRs.";
                    cin>>amount;
                    if(amount>50000)
                    {
                        for(int i=1; i<=3; i++)
                        {
                            cout<<"You do not have Enough Balance,Enter you amount again "<<3-i<<" tries left\n";
                            cin>>amount;
                            if(amount<=50000)
                            {
                                break;
                            }
                             else if(i==3)
                            {
                                cout<<"Account Blocked\n";
                            }
                        }
                    }
                    do
                    {
                        cout<<"Enter your Phone number\n";
                        cin>>Number;
                    }
                    while(Number.length()!=11);
                    cout<<"Your Money Have been Send to "<<name<<" \nAmount Rs:"<<amount<<"\nThank You";
                    return 0;
                }
            }
            else;
            {
               cout<<"Enter Sender Name\n";
                cin>>name;
                do
                {
                    cout<<"Enter Sender Mobile Number\n";
                    cin>>input;
                }
                while(input.length()!=11);
                cout<<"Enter Your Amount Rs:";
                cin>>amount;
                if(amount>50000)
                {    
                    for(int i=1; i<=3; i++)
                    {
                        cout<<"You do not have Enough Balance,Enter you amount again "<<3-i<<" tries left\n";
                        cin>>amount;
                        if(amount<=50000)
                        {
                            break;
                        }
                        else if(i==3)
                        {
                            cout<<"You Do not Have Enough Balance Try Again Later\n";
                        }
                    }
                }
                cout<<"Your Amount Rs."<<amount<<" Has been send to "<<name<<endl;
            }
        }
        else if(option==2)
        {
            cout<<"1.Electricity bill\n2.Gas Bill\n3.Water Bill";
            cin>>option;
            switch(option)
            {
                case 1:
                cout<<"Select service provider:\n1.FESCO\n2.GEPCO\n3.HESCO";
                cin>>option;
                if(option==1)
                {
                do
                {
                    cout<<"Enter 8 digit FESCO Number\n";
                    cin>>input;
                }
                while(input.length()!=8);
                cout<<"Your Entered Number is:"<<input<<endl;
                cout << "Reference Number You Entered: " << input << std::endl;
                cout<<"Pay Rs.2500.00 for 16261620818730 to FESCO due by 2023-2-28. Bill amount is Rs.2500.00, Late Amount RS.2800.00.\nPlz Enter Pin to confirm.\n";
                    cin>>pin4;
                if(pin4!=pin3)
                    {
                        for(int i=1;i<=3;i++)
                        {
                            cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                            cin>>pin4;
                            if(pin4==pin3)
                            {
                                break;
                            }
                            else if(i==3)
                                {
                                    cout<<"Your account has been blocked";
                                    return 0;
                                }
                        }
                    }
                    cout<<"TID: 006915447177.FESCO Bill:16261620818730 of Rs. 2500.00 due by 2023-2-28 has been paid on 28/2/2023.\n Thank You";
                    return 0;
                }
                else if(option==2)
                {
                do
                {
                    cout<<"Enter 8 digit GEPCO Number\n";
                    cin>>input;
                }
                while(input.length()!=8);
                cout<<"Your Entered Number is:"<<input<<endl;
                cout << "Reference Number You Entered: " << input <<endl;
                cout<<"Pay Rs.2500.00 for 16261620818730 to GEPCO due by 2023-2-28. Bill amount is Rs.2500.00, Late Amount RS.2800.00.\nPlz Enter Pin to confirm.\n";
                cin>>pin4;
                if(pin4!=pin3)
                    {
                        for(int i=1;i<=3;i++)
                        {
                        cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                        cin>>pin4;
                        if(pin4==pin3)
                            {
                                break;
                            }
                            else if(i==3)
                            {
                                cout<<"Your account has been blocked";
                                return 0;
                            }
                        }
                     }
                    cout<<"TID: 006915447177.GEPCO Bill:16261620818730 of Rs. 2500.00 due by 2023-2-28 has been paid on 28/2/2023.\nThank You";
                    return 0;
                }
                else(option==3);
                {
                    cout<<"Sorry for inconvinience this service is temporary closed";
                    return 0;
                }
                case 2:
                {
                    cout<<"Select service provider:\n1.SNGPL\n2.SSGC\n";
                    cin>>option;
                    if(option==1)
                    {
                    do
                        {
                            cout<<"Enter 11 digit SNGPL Account ID\n";
                            cin>>input;
                        }
                        while(input.length()!=11);
                    cout<<"Your Entered Account ID is:"<<input<<endl;
                    cout << "Reference Number You Entered: " << input << std::endl;
                    cout<<"Pay Rs.5000.00 for 16261620818730 to SNGPL due by 2023-2-28. Bill amount is Rs.5000.00, Late Amount RS.6900.00.\nPlz Enter Pin to confirm\n";
                    cin>>pin4;
                     if(pin4!=pin3)
                        {
                            for(int i=1;i<=3;i++)
                            {
                                cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                                cin>>pin4;
                                if(pin4==pin3)
                                {
                                    break;
                                }
                                else if(i==3)
                                {
                                    cout<<"Your account has been blocked";
                                    return 0;
                                }
                            }
                        }
                    cout<<"TID: 006915447177.SNGPL Bill:16261620818730 of Rs. 5000.00 due by 2023-2-28 has been paid on 28/2/2023.\nThank You";
                    return 0;
                    }
                    else(option==2);
                    {
                        cout<<"Enter 10 Digit SSGC Customer Number\n";
                        cin>>num;
                        if(num.length()!=10)
                        {
                            cout<<"Plz Enter 10 Digit Number\n";
                            return 1;
                        }
                        cout<<"Cutomer Number is:"<< num <<endl;
                        cout<<"Pay Rs.5000.00 for 16261620818730 to SSGC due by 2023-2-28. Bill amount is Rs.5000.00, Late Amount RS.6900.00.\nPlz Enter Pin to confirm\n";
                        cin>>pin4;
                        if(pin4!=pin3)
                        {
                            for(int i=1;1<=3;i++)
                            {
                                    cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                                    cin>>pin4;
                                    if(pin4==pin3)
                                    {
                                        break;
                                    }
                                    else if(i==3)
                                    {
                                         cout<<"Your account has been blocked";
                                        return 0;
                                    }
                            }
                        }
                         cout<<"TID: 006915447177.SSGC Bill:16261620818730 of Rs. 5000.00 due by 2023-2-28 has been paid on 28/2/2023.\nThank You";
                         return 0;
                    }
                }
                case 3:
                {
                    cout<<"Select water services provider:\n1.BWASA\n2.KWSB\n";
                    cin>>option;
                    if(option==1)
                    {
                        do
                        {
                            cout<<"Enter BWASA 10 digits Account Number\n";
                            cin>>input;
                        
                            if(input.length()!=10)
                            {
                                cout<<"Plz Enter 10 digit number\n";
                                return 0;
                            }
                        }
                        while(input.length()!=10);
                        cout<<"Your Account Number is:"<<input<<endl;
                        cout<<"Bill Amount Rs:10000.00\nFees Rs:50.00\nBill Company:BWASA\nBill Month:February-2023\nDue Date:28/02/2023\nBill Amount after Due Date Rs:10500.00\nPlz Enter Pin to confirm Payment:\n";
                        cin>>pin4;
                         if(pin4!=pin3)
                        {
                            for(int i=1;1<=3;i++)
                            {
                                cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                                cin>>pin4;
                                if(pin4==pin3)
                                {
                                    break;
                                }
                                 else if(i==3)
                                {
                                    cout<<"Your account has been blocked";
                                    return 0;
                                }
                            }
                        }
                        cout<<"TID:009083397676 have been payed\nBWASA Bill:16261620818730\nFees Rs:50.00\nAmount payed Rs. 10000.00\nDue date:2023-2-28\nPayed Date:28/2/2023.\nThank You";
                        return 0;
                    }
                    else if(option==2)
                    {
                        do
                        {
                            cout<<"Enter 11 digit KWSB consumer No.";
                            cin>>input;
                            if(input.length()!=11)
                            {
                                cout<<"Plz Enter 11 digit number\n";
                                return 0;
                            }
                        }
                        while(input.length()!=11);
                        cout<<"Your Account Number is:"<<input<<endl;
                        cout<<"Bill Amount Rs:10000.00\nFees Rs:50.00\nBill Company:KWSB\nBill Month:February-2023\nDue Date:28/02/2023\nBill Amount after Due Date Rs:10500.00\nPlz Enter Pin to confirm Payment:\n";
                         cin>>pin4;
                         if(pin4!=pin3)
                         {
                             for(int i=1;1<=3;i++)
                            {
                                cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                                cin>>pin4;
                                if(pin4==pin3)
                                {
                                    break;
                                }
                                 else if(i==3)
                                {
                                    cout<<"Your account has been blocked";
                                    return 0;
                                }
                            }
                         }
                          cout<<"TID:009083397676 have been payed\nKWSB Bill:16261620818730\nFees Rs:50.00\nAmount payed Rs. 10000.00\nDue date:2023-2-28\nPayed Date:28/2/2023.\nThank You";
                          return 0;
                    }
                    else;
                    {
                        cout<<"Invalid Option";
                    }
                }
            }
        }
        else if(option==3)
        {
            cout<<"Select service:\n1.Prepaid Load\n2.Postpaid Load\n3.Mobile Packages\n";
            cin>>option;
            switch(option)
            {
                case 1:
                 do
                {
                    cout<<"Enter Mobile Number\n";
                    cin>>input;
                }
                while(input.length()!=11);
                cout<<"Your Entered Mobile Number is:"<<input<<endl;
                cout<<"Enter load amount for "<< input <<endl;
                cout<<"You can load between Rs.100 - Rs.5,000.00\nRs.";
                cin>>load;
                if(load<100 || load>5000)
                {
                    cout<<"You can load between Rs.100 - Rs.5,000.00\n";
                    return 0;
                }
                else;
                {
                    cout<<"You are transfering Rs. "<<load<<" to "<< input <<" Plz Enter Pin to confirm\n";
                    cin>>pin4;
                    if(pin4!=pin3)
                    {
                        for(int i=1;1<=3;i++)
                        {
                            cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                            cin>>pin4;
                            if(pin4==pin3)
                            {
                                break;
                            }
                            else if(i==3)
                            {
                                cout<<"Your account has been blocked";
                                return 0;
                            }
                        }
                    }
                    cout<<"Transaction Successfull\nTID:024911880295\nPrepaid Load Purchased Rs."<<load<<"\nThank You"<<endl;
                    return 0;
                }
                case 2:
                do
                {
                    cout<<"Enter Mobile Number\n";
                    cin>>input;
                }
                while(input.length()!=11);
                cout<<"Your Entered Mobile Number is:"<<input<<endl;
                cout<<"Enter load amount for "<< input <<endl;
                cout<<"You can load between Rs.100 - Rs.5,000.00\nRs.";
                cin>>load;
                if(load<100 || load>5000)
                {
                    cout<<"You can load between Rs.100 - Rs.5,000.00\n";
                    return 0;
                }
                else;
                {
                    cout<<"You are transfering Rs. "<<load<<" to "<< input <<" Plz Enter Pin to confirm\n";
                    cin>>pin4;
                    if(pin4!=pin3)
                    {
                        for(int i=1;1<=3;i++)
                        {
                            cout<<"Wrong Pin Please Try Again,you have "<<3-i<<" tries left\n";
                            cin>>pin4;
                            if(pin4==pin3)
                            {
                                break;
                            }
                            else if(i==3)
                            {
                                cout<<"Your account has been blocked";
                                return 0;
                            }
                        }
                    }
                    cout<<"Transaction Successfull\nTID:024911880295\nPostpaid Load Purchased Rs."<<load<<"\nThank You"<<endl;
                    return 0;
                }
                case 3:
                cout<<"This service is not availible";
                return 0;
                break;
            }
        }
        else if(option==4)
        {
            float balance = 50000;
            bool hasHealthInsurance = false;
            int choice = 0;
            do 
            {
                displayMenu();
                cin >> choice;
                switch (choice) 
                {
                case 1: // Make credit card payment
                    makeCreditCardPayment(balance);
                    break;
                case 2: // Apply for health insurance
                    applyForHealthInsurance(hasHealthInsurance);
                    break;
                case 3: // Display summary
                    displaySummary(balance, hasHealthInsurance);
                    break;
                case 4: // Exit program
                    cout << "Thank you for using our banking and finance program!" << endl;
                    break;
                default: // Invalid choice
                    cout << "Invalid choice. Please try again." << endl;
                }
            } 
            while (choice != 4);
            return 0;
        }
        else;
        {
            cout<<"Invalid Option";
            return 0;
        }
	}
	    else;
	    {
	        cout<<"Invalid Option";
	    }  
}
