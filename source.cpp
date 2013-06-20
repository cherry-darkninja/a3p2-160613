/****************************************************************************************************
*       DEVELOPER:      CHERRY_DARKNINJA
*       DATE:   16/JUNE/2013    TIME:   8:30 PM
*       DESCRIPTION:    ASSIGNMENT3-QUESTION2
*       THIS SOURCE IS FOR REFERENCE ONLY. THE DEVELOPER IS NOT RESPONSIBLE FOR ANY MISUSE OF THIS                      *       CODE
****************************************************************************************************/
 
#include<iostream>
#include<sstream>
#include<cctype>
using namespace std;
int getDigit(int number){
// Return this number if it is a single digit, otherwise return the sum of the two digits
        int num1 = (number/10);
        int num2 = number - (num1*10);
        int num = num1+num2;
        return num;
}
int sumOfDoubleEvenPlace(const string& cardNumber){
// Get the result from Step 2
        string sub1 = cardNumber.substr(0,8);
        string sub2 = cardNumber.substr(8,15);
        int num1 = stoi(sub1);
        int num2 = stoi(sub2);
        int number1=(num1/10000000);
        int number2=((((num1/1000000)*1000000)-(number1*10000000))/1000000);
        int number3=((((num1/100000)*100000)-(number1*10000000)-(number2*1000000))/100000);
        int number4=((((num1/10000)*10000)-(number1*10000000)-(number2*1000000)-(number3*100000))/10000);
        int number5=((((num1/1000)*1000)-(number1*10000000)-(number2*1000000)-(number3*100000)-(number4*10000))/1000);
        int number6=((((num1/100)*100)-(number1*10000000)-(number2*1000000)-(number3*100000)-(number4*10000)-(number5*1000))/100);
        int number7=((((num1/10)*10)-(number1*10000000)-(number2*1000000)-(number3*100000)-(number4*10000)-(number5*1000)-(number6*100))/10);
        int number8=((num1-(number1*10000000)-(number2*1000000)-(number3*100000)-(number4*10000)-(number5*1000)-(number6*100)-(number7*10)));
        int number9=(num2/10000000);
        int number10=((((num2/1000000)*1000000)-(number9*10000000))/1000000);
        int number11=((((num2/100000)*100000)-(number9*10000000)-(number10*1000000))/100000);
        int number12=((((num2/10000)*10000)-(number9*10000000)-(number10*1000000)-(number11*100000))/10000);
        int number13=((((num2/1000)*1000)-(number9*10000000)-(number10*1000000)-(number11*100000)-(number12*10000))/1000);
        int number14=((((num2/100)*100)-(number9*10000000)-(number10*1000000)-(number11*100000)-(number12*10000)-(number13*1000))/100);
        int number15=((((num2/10)*10)-(number9*10000000)-(number10*1000000)-(number11*100000)-(number12*10000)-(number13*1000)-(number14*100))/10);
        int number16=((num2-(number9*10000000)-(number10*1000000)-(number11*100000)-(number12*10000)-(number13*1000)-(number14*100)-(number15*10)));
        int dnumber1 = getDigit(2*number1);
        int dnumber3 = getDigit(2*number3);
        int dnumber5 = getDigit(2*number5);
        int dnumber7 = getDigit(2*number7);
        int dnumber9 = getDigit(2*number9);
        int dnumber11 = getDigit(2*number11);
        int dnumber13 = getDigit(2*number13);
        int dnumber15 = getDigit(2*number15);
 
        int num = dnumber1+dnumber3+dnumber5+dnumber7+dnumber9+dnumber11+dnumber13+dnumber15;
        return num;
}
int sumOfOddPlace(const string& cardNumber){
// Return sum of odd-place digits in the card number
        string sub1 = cardNumber.substr(0,8);
        string sub2 = cardNumber.substr(8,15);
        int num1 = stoi(sub1);
        int num2 = stoi(sub2);
        int number1=(num1/10000000);
        int number2=((((num1/1000000)*1000000)-(number1*10000000))/1000000);
        int number3=((((num1/100000)*100000)-(number1*10000000)-(number2*1000000))/100000);
        int number4=((((num1/10000)*10000)-(number1*10000000)-(number2*1000000)-(number3*100000))/10000);
        int number5=((((num1/1000)*1000)-(number1*10000000)-(number2*1000000)-(number3*100000)-(number4*10000))/1000);
        int number6=((((num1/100)*100)-(number1*10000000)-(number2*1000000)-(number3*100000)-(number4*10000)-(number5*1000))/100);
        int number7=((((num1/10)*10)-(number1*10000000)-(number2*1000000)-(number3*100000)-(number4*10000)-(number5*1000)-(number6*100))/10);
        int number8=((num1-(number1*10000000)-(number2*1000000)-(number3*100000)-(number4*10000)-(number5*1000)-(number6*100)-(number7*10)));
 
        int number9=(num2/10000000);
        int number10=((((num2/1000000)*1000000)-(number9*10000000))/1000000);
        int number11=((((num2/100000)*100000)-(number9*10000000)-(number10*1000000))/100000);
        int number12=((((num2/10000)*10000)-(number9*10000000)-(number10*1000000)-(number11*100000))/10000);
        int number13=((((num2/1000)*1000)-(number9*10000000)-(number10*1000000)-(number11*100000)-(number12*10000))/1000);
        int number14=((((num2/100)*100)-(number9*10000000)-(number10*1000000)-(number11*100000)-(number12*10000)-(number13*1000))/100);
        int number15=((((num2/10)*10)-(number9*10000000)-(number10*1000000)-(number11*100000)-(number12*10000)-(number13*1000)-(number14*100))/10);
        int number16=((num2-(number9*10000000)-(number10*1000000)-(number11*100000)-(number12*10000)-(number13*1000)-(number14*100)-(number15*10)));
        int num = number2+number4+number6+number8+number10+number12+number14+number16;
        return num;
 
}
bool startsWith(const string& cardNumber, const string& substr){
// Return true if substr is the prefix for cardNumber
        return true;
}
bool isValid(const string& cardNumber){
// Return true if the card number is valid
        int num1 = sumOfDoubleEvenPlace(cardNumber);
        int num2 = sumOfOddPlace(cardNumber);
        int num = num1 + num2;
        int finaldigit = (num - (num/10)*10);
        if(finaldigit==0){
                return true;
        }
        else{
                return false;
        }
       
}
int main(){
        cout<<"Please enter the credit card number: ";
        string cardNumber;
        cin.clear();
        cin.sync();
        getline(cin,cardNumber);
        int length = cardNumber.length();
        if(length>16||length<16){
                cout<<"The credit card number you have entered has "<<length<<" digits.";
                cout<<"Please make sure that the credit card number has 16 digits.";
                system("PAUSE");
                system("CLS");
                return main();
        }
        bool check = false;
        check = isValid(cardNumber);
        if(check == true){
                cout<<"The credit card you have enterd is valid!!!!\n";
        }
        else if(check == false){
                cout<<"The credit card you have enterd is not valid!!!!\n";
        }
        cout<<"Do you want to continue?[(C)ontinue|(E)xit]";
        char checkme;
        cin>>checkme;
        if(checkme=='c'||checkme=='C'){
                system("cls");
                return main();
        }
        else{
                return 0;
        }
}
