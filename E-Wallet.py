def displayMenu():
    print("1. Make a credit card payment\n2. Apply for health insurance\n3. Display summary\n4. Exit")
def makeCreditCardPayment():
    global payment
    payment=int(input("Enter the payment amount"))
    if payment<=balance:
        print("Thank you for payment")
        Nbalance=balance-payment
        print("Your new balance is:",Nbalance)
    else:
        print("Not enough balance")
def applyForHealthInsurance():
    global response
    response=chr(input("Are you interested in applying for health insurance (y/n)? "))
    if response == 'y' | response == 'Y':
        print("Thank you for applying for health insurance.")
    elif response == 'n' | response == 'N':
        print("Thank you for considering health insurance.")
    else:
        print("Invald input")
def displaySummary():
    print("==========================")
    print("======Acount Summary======")
    print("==========================")
    print("Your credit card balance is :",payment)
    if response == 'y' | response == 'Y':
        print("Health insurance: Yes")
    elif response == 'n' | response == 'N':
        print("Health insurance: No")
input("Welcome to E-Wallet")
option= int(input("1.Create an Account 2. Login"))
if option==1:
    name= str(input("Enter your Name:"))
    number=str(input("Enter your Number:"))
    while len(number)!=11:
        number=str(input("Enter valid Number:"))
    print("Proceeding further")
    otp=str(input("We have send you OTP in your given Number please enter it:"))
    while len(otp)!=4:
        otp=int(input("Invalid OTP length Enter Again:"))
    print("OTP Confirmed")
    pin=int(input("Enter your new pin:"))
    while len(str(pin))!=4:
        pin=int(input("Please enter 4 digit pin"))
    pin1=int(input("Confirm your pin:"))
    while pin1!=pin:
        pin=int(input("Your PINs do not match, enter again new pin:"))
        while len(str(pin))!=4:
            pin=int(input("Please enter 4 digit pin"))
        pin1=int(input("Confirm your pin again:"))
        if pin1==pin:
            break
print("Welcome ", name ," your account has been created")
pin2=int(input("Please Enter your pin to login"))
if pin2!=pin1:
    for i in range(3, 0, -1):
        print("You have", i, "tries left")
        pin2 = int(input("Pin is incorrect Enter again"))
        if pin2 == pin1:
            flag = True
            break
        elif i==0:
            print("Your account has been blocked")
            flag = False
            break
else:
    flag = True
if flag == True:
    input("You have successfully login into your account")
    input("You have 0 balance in your account please load balance in your account")
    balance=int(input("Enter your amount:"))
    print("Now your balance is ", balance)
    input("")
    option2=int(input("Select the service: \n1.Money Transfer\n2.Utility Bills\n3.Mobile Load & Packages\n4.Banking & Finance"))
    if option2==1:
        option3=int(input("1.Bank transfer \n 2.Black cash Transfer"))
        if option3==1:
            bank=int(input("Select Bank: \n 1.HBL\n2.Meezan Bank"))
            if bank==1:
                AccName=str(input("Enter Account Name:"))
                AccNum=str(input("Enter Account Number:"))
                while len(AccNum)!=14:
                    AccNum=str(input("Enter 14 digit Account:"))
                AmountT=int(input("Enter your amount that you have to transfer"))
                while AmountT>balance:
                    AmountT=int(input("Not enough Balance Enter amount again:"))
                phoneN=int(input("Enter Your phone number:"))
                while phoneN==number:
                    phoneN=int(input("Please enter your Phone Number:"))
                Nbalance=balance-AmountT
                print("Your Money has been send to ",AccName," \ntransfer amount is ",AmountT," Your new balance is ",Nbalance)
            elif  bank==2:
                AccName=str(input("Enter Account Name:"))
                AccNum=str(input("Enter Account Number:"))
                while len(AccNum)!=15:
                    AccNum=str(input("Enter 15 digit Account:"))
                AmountT=int(input("Enter your amount that you have to transfer"))
                while AmountT>balance:
                    AmountT=int(input("Not enough Balance Enter amount again:"))
                phoneN=int(input("Enter Your phone number:"))
                while phoneN==number:
                    phoneN=int(input("Please enter your Phone Number:"))
                Nbalance=balance-AmountT
                print("Your Money has been send to ",AccName," \ntransfer amount is ",AmountT," Your new balance is ",Nbalance)
        elif option3==2:
            UserN=str(input("Enter Account Name:"))
            UserNum=str(input("Enter Account Number:"))
            while len(UserNum)!=11:
                UserNum=str(input("Enter 11 digit Account:"))
            AmountT=int(input("Enter your amount that you have to transfer"))
            while AmountT>balance:
                AmountT=int(input("Not enough Balance Enter amount again:"))
            phoneN=int(input("Enter Your phone number:"))
            while phoneN==number:
                phoneN=int(input("Please enter your Phone Number:"))
            Nbalance=balance-AmountT
            print("Your Money has been send to ",UserNum," \ntransfer amount is ",AmountT," Your new balance is ",Nbalance)
        else:
            print("Invalid input")
    elif option2==2:
        opt=int(input("1.Electricity bill\n2.Gas Bill\n3.Water Bill"))
        if opt==1:
            provider=int(input("Select provider Name:\n1.FESCO\n2.GEPCO"))
            if provider==1:
                FescoNum=str(input("Enter 8 digit Fesco Number:"))
                while len(FescoNum)!=8:
                    FescoNum=str(input("Please enter 8 digit Fesco Number"))
                    phoneN=int(input("Enter Your phone number:"))
                    while phoneN==number:
                        phoneN=int(input("Please enter your Phone Number:"))
                    pay=int(input("Pay Rs.2500.00 for 16261620818730\nFESCO due by 2023-2-28\nBill amount is Rs.2500.00\nLate Amount RS.2800.00.\nPlz Enter Pin to confirm.\n"))
                    if pay!=pin1:
                        for i in range(3, 0, -1):
                            print("You have", i, "tries left")
                        pin2 = int(input("Pin is incorrect Enter again"))
                        if pin2 == pin1:
                            flag = True
                            break
                        elif i==3:
                            print("Your account has been blocked")
                            flag = False
                            break
                        else:
                            flag = True
                        if flag == True:
                            print("Your Amount has been paid")
            elif provider==2:
                GepcoNum=str(input("Enter 8 digit Gepco Number:"))
                while len(GepcoNum)!=8:
                    GepcoNum=str(input("Please enter 8 digit GEPco Number"))
                    phoneN=int(input("Enter Your phone number:"))
                    while phoneN==number:
                        phoneN=int(input("Please enter your Phone Number:"))
                    pay=int(input("Pay Rs.2500.00 for 16261620818730\nGEPCO due by 2023-2-28\nBill amount is Rs.2500.00\nLate Amount RS.2800.00.\nPlz Enter Pin to confirm.\n"))
                    if pay!=pin1:
                        for i in range(3, 0, -1):
                            print("You have", i, "tries left")
                        pin2 = int(input("Pin is incorrect Enter again"))
                        if pin2 == pin1:
                            flag = True
                            break
                        elif i==3:
                            print("Your account has been blocked")
                            flag = False
                            break
                        else:
                            flag = True
                        if flag == True:
                            print("Your Amount has been paid")
            else:
                print("Wrong Input")
        elif opt==2:
            print("Service not available")
        elif opt==3:
            print("Service not available")
        else:
            print("Wrong input")
    elif option2==3:
        service=int(input("Select service:\n1.Prepaid Load\n2.Postpaid Load\n3.Mobile Packages\n"))
        if service==1:
            phoneN=str(input("Enter phone number to add balance:"))
            while len(phoneN)!=11:
                phoneN=str(input("Enter correct number"))
            load=int(input("Enter load amount for Number:",phoneN,"\n you can enter amount from 100 to 5000 only."))
            while load<100 | load>5000:
                load=int(input("You can only load amoubt from 100 to 5000"))
            loadp=int(input("Your are transferring",load," to this Number:",phoneN,"plz confirm the pin:"))
            while loadp!=pin1:
               loadp=int(input("Enter pin again:"))
            print("Transaction is successfull")
        elif service==2:
            phoneN=str(input("Enter phone number to add balance:"))
            while len(phoneN)!=11:
                phoneN=str(input("Enter correct number"))
            load=int(input("Enter load amount for Number:",phoneN,"\n you can enter amount from 100 to 5000 only."))
            while load<100 | load>5000:
                load=int(input("You can only load amoubt from 100 to 5000"))
            loadp=int(input("Your are transferring",load," to this Number:",phoneN,"plz confirm the pin:"))
            while loadp!=pin1:
               loadp=int(input("Enter pin again:"))
            print("Transaction is successfull")
        elif service ==3:
            print("Service not availible")
        else:
            print("Invalid input")
    elif option==4:
        bank= int(input(displayMenu()))
        if bank==1:
            makeCreditCardPayment()
        elif bank==2:
            applyForHealthInsurance()
        elif bank==3:
            displaySummary()
        elif bank==4:
            print("Thanks for choosing our service")
        else:
            print("Invalid Input")
elif option==2:
    name='Azan'
    pin1=1234
    balance = 500000
    print("Welcome ")
pin2=int(input("Please Enter your pin to login"))
if pin2!=pin1:
    for i in range(3, 0, -1):
        print("You have", i, "tries left")
        pin2 = int(input("Pin is incorrect Enter again"))
        if pin2 == pin1:
            flag = True
            break
        elif i==3:
            print("Your account has been blocked")
            flag = False
            break
else:
    flag = True
if flag == True:
    input("You have successfully login into your account")
    print("Now your balance is ",balance)
    input("")
    option2=int(input("Select the service: \n1.Money Transfer\n2.Utility Bills\n3.Mobile Load & Packages\n4.Banking & Finance"))
    if option2==1:
        option3=int(input("1.Bank transfer \n 2.Black cash Transfer"))
        if option3==1:
            bank=int(input("Select Bank: \n 1.HBL\n2.Meezan Bank"))
            if bank==1:
                AccName=str(input("Enter Account Name:"))
                AccNum=str(input("Enter Account Number:"))
                while len(AccNum)!=14:
                    AccNum=str(input("Enter 14 digit Account:"))
                AmountT=int(input("Enter your amount that you have to transfer"))
                while AmountT>balance:
                    AmountT=int(input("Not enough Balance Enter amount again:"))
                phoneN=int(input("Enter Your phone number:"))
                while phoneN==number:
                    phoneN=int(input("Please enter your Phone Number:"))
                Nbalance=balance-AmountT
                print("Your Money has been send to ",AccName," \ntransfer amount is ",AmountT," Your new balance is ",Nbalance)
            elif  bank==2:
                AccName=str(input("Enter Account Name:"))
                AccNum=str(input("Enter Account Number:"))
                while len(AccNum)!=15:
                    AccNum=str(input("Enter 15 digit Account:"))
                AmountT=int(input("Enter your amount that you have to transfer"))
                while AmountT>balance:
                    AmountT=int(input("Not enough Balance Enter amount again:"))
                phoneN=int(input("Enter Your phone number:"))
                while phoneN==number:
                    phoneN=int(input("Please enter your Phone Number:"))
                Nbalance=balance-AmountT
                print("Your Money has been send to ",AccName," \ntransfer amount is ",AmountT," Your new balance is ",Nbalance)
        elif option3==2:
            UserN=str(input("Enter Account Name:"))
            UserNum=str(input("Enter Account Number:"))
            while len(UserNum)!=11:
                UserNum=str(input("Enter 11 digit Account:"))
            AmountT=int(input("Enter your amount that you have to transfer"))
            while AmountT>balance:
                AmountT=int(input("Not enough Balance Enter amount again:"))
            phoneN=int(input("Enter Your phone number:"))
            while phoneN==number:
                phoneN=int(input("Please enter your Phone Number:"))
            Nbalance=balance-AmountT
            print("Your Money has been send to ",UserNum," \ntransfer amount is ",AmountT," Your new balance is ",Nbalance)
        else:
            print("Invalid input")
    elif option2==2:
        opt=int(input("1.Electricity bill\n2.Gas Bill\n3.Water Bill"))
        if opt==1:
            provider=int(input("Select provider Name:\n1.FESCO\n2.GEPCO"))
            if provider==1:
                FescoNum=str(input("Enter 8 digit Fesco Number:"))
                while len(FescoNum)!=8:
                    FescoNum=str(input("Please enter 8 digit Fesco Number"))
                    phoneN=int(input("Enter Your phone number:"))
                    while phoneN==number:
                        phoneN=int(input("Please enter your Phone Number:"))
                    pay=int(input("Pay Rs.2500.00 for 16261620818730\nFESCO due by 2023-2-28\nBill amount is Rs.2500.00\nLate Amount RS.2800.00.\nPlz Enter Pin to confirm.\n"))
                    if pay!=pin1:
                        for i in range(3, 0, -1):
                            print("You have", i, "tries left")
                        pin2 = int(input("Pin is incorrect Enter again"))
                        if pin2 == pin1:
                            flag = True
                            break
                        elif i==3:
                            print("Your account has been blocked")
                            flag = False
                            break
                        else:
                            flag = True
                        if flag == True:
                            print("Your Amount has been paid")
            elif provider==2:
                GepcoNum=str(input("Enter 8 digit Gepco Number:"))
                while len(GepcoNum)!=8:
                    GepcoNum=str(input("Please enter 8 digit GEPco Number"))
                    phoneN=int(input("Enter Your phone number:"))
                    while phoneN==number:
                        phoneN=int(input("Please enter your Phone Number:"))
                    pay=int(input("Pay Rs.2500.00 for 16261620818730\nGEPCO due by 2023-2-28\nBill amount is Rs.2500.00\nLate Amount RS.2800.00.\nPlz Enter Pin to confirm.\n"))
                    if pay!=pin1:
                        for i in range(3, 0, -1):
                            print("You have", i, "tries left")
                        pin2 = int(input("Pin is incorrect Enter again"))
                        if pin2 == pin1:
                            flag = True
                            break
                        elif i==3:
                            print("Your account has been blocked")
                            flag = False
                            break
                        else:
                            flag = True
                        if flag == True:
                            print("Your Amount has been paid")
            else:
                print("Wrong Input")
        elif opt==2:
            print("Service not available")
        elif opt==3:
            print("Service not available")
        else:
            print("Wrong input")
    elif option2==3:
        service=int(input("Select service:\n1.Prepaid Load\n2.Postpaid Load\n3.Mobile Packages\n"))
        if service==1:
            phoneN=str(input("Enter phone number to add balance:"))
            while len(phoneN)!=11:
                phoneN=str(input("Enter correct number"))
            load=int(input("Enter load amount for Number:",phoneN,"\n you can enter amount from 100 to 5000 only."))
            while load<100 | load>5000:
                load=int(input("You can only load amoubt from 100 to 5000"))
            loadp=int(input("Your are transferring",load," to this Number:",phoneN,"plz confirm the pin:"))
            while loadp!=pin1:
               loadp=int(input("Enter pin again:"))
            print("Transaction is successfull")
        elif service==2:
            phoneN=str(input("Enter phone number to add balance:"))
            while len(phoneN)!=11:
                phoneN=str(input("Enter correct number"))
            load=int(input("Enter load amount for Number:",phoneN,"\n you can enter amount from 100 to 5000 only."))
            while load<100 | load>5000:
                load=int(input("You can only load amoubt from 100 to 5000"))
            loadp=int(input("Your are transferring",load," to this Number:",phoneN,"plz confirm the pin:"))
            while loadp!=pin1:
               loadp=int(input("Enter pin again:"))
            print("Transaction is successfull")
        elif service ==3:
            print("Service not availible")
        else:
            print("Invalid input")
    elif option==4:
        bank= int(input(displayMenu()))
        if bank==1:
            makeCreditCardPayment()
        elif bank==2:
            applyForHealthInsurance()
        elif bank==3:
            displaySummary()
        elif bank==4:
            print("Thanks for choosing our service")
        else:
            print("Invalid Input")
else:
    print("Invalid Input")
