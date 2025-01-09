#include <iostream>
#include <cmath>
#include <cctype>                               // converts capitals to lower cases or the other way around to insure case-sensitive inputs.
#include <string>                               // for string and getline function --> (case-sensitive input cases)
const double Pi = 3.14159;
using namespace std;

bool mainMenu();   // Function that display the main menu and take the user choice.
bool other();

double Sum(double num1, double num2) {          // Function receives two double numbers to find the sum and return it.

    double result = num1 + num2;
    return result;
}

double Subtract(double num1, double num2) {     // Function receives two double numbers to Subtract number 2 from number 1 and return it.

    double result = num1 - num2;
    return result;
}

double Multiply(double num1, double num2) {     // function recieves two double numbers to return a result of their multiplication.
    double result = num1 * num2;
    return result;
}

int Factorial(double num1) {                    // Function receives one double number to multiply it with all the numbers less until it reaches 1.

    double result = 1;                          // give it value (1) doesn't effect the operation, (otherwise it will be saved as rubbish or zero)

    while (num1 > 0) {
        result *= num1;
        num1--;
    }

    return (double)result;
}

double Average(double num1, double num2) {      // function receives two double numbers and divided by 2 (total values/number of values)
    return (num1 + num2) / 2;
}

void Max(double num1, double num2) {        // function takes two values, check which one is bigger.

    if (num1 > num2) {                      // if it's bigger, then it's the maximum.
        cout << "The Maximum Value is : " << num1 << endl << endl;
    }
    else if (num1 < num2) {                 // if it's smaller, then the other value is the maximum.
        cout << "The Maximum Value is : " << num2 << endl << endl;
    }
    else                                    // if neither then it must be the same value for both numbers.
    {
        cout << "Both Values are the same! " << endl << endl;
    }
}

void Min(double num1, double num2) {        // function takes two values, check which one is smaller.

    if (num1 > num2) {                      // if it's bigger, then the other is the minimum.
        cout << "The Minimum Value is : " << num2 << endl << endl;
    }
    else if (num1 < num2) {                 // if it's smaller, then it is the minimum.
        cout << "The Minimum Value is : " << num1 << endl << endl;
    }
    else                                    // if neither then it must be the same value for both numbers.
    {
        cout << "Both Values are the same! " << endl << endl;
    }
}

string D2B(int Decimal)
{
    string binary = "";
    if(Decimal == 0)
    {
        return "0";
    }
    else 
    {
        while(Decimal >0)
        {
            binary = to_string(Decimal % 2) + binary;
            Decimal /= 2;
        }
        
    }

    return binary;
}

int B2D(int Binary) //converting binary to decimal
{
    int i = 0, decimal = 0;
    if (Binary == 0) 
    {
        return Binary = 0;
    }
    else {
        while (Binary != 0)
        {
            int digit = Binary % 10; //to check if the bit is either a 1 or a 0 
            decimal += digit * pow(2, i); // i is the position of the bit

            Binary /= 10; 
            i++;
        }
    }
    return decimal;
}

double power(double num1, double num2)
{
    double result = pow(num1, num2);
    return result;
}

double absolute(double num1)
{
    double result = abs(num1);
    return result;
}

double square_root(double num1)
{
    double result = sqrt(num1);
    return result;
}

double cosine(double num1)
{
    double degree = (num1) * (Pi / 180.0);
    double result = cos(degree);
    return result;
}

double sine(double num1)
{
    double degree = (num1) * (Pi / 180.0);
    double result = sin(degree);
    return result;
}

int main()
{
    do {

    } while (mainMenu());       // The Program Keep Running Until The Function Returns False (User chooses to quit).

}

bool mainMenu() {           // Display the Menu.

    {
        cout << "+===================== WELCOME TO THE CALCULATOR =============== - O X" << endl;
        cout << "|                                                                     |" << endl;
        cout << "|                      Choose One Of The Options:                     |" << endl;
        cout << "|                                                                     |" << endl;
        cout << "| 1. Sum Operation.                                                   |" << endl;
        cout << "| 2. Subtracting Operation.                                           |" << endl;
        cout << "| 3. Multiplication Operation.                                        |" << endl;
        cout << "| 4. Factorial Operation.                                             |" << endl;
        cout << "| 5. Finding Average.                                                 |" << endl;
        cout << "| 6. Finding (Maximum / Minimum) Value.                               |" << endl;
        cout << "| 7. Converting Decimal To Binary.                                    |" << endl;
        cout << "| 8. Converting Binary To Decimal.                                    |" << endl;
        cout << "| 9. Other (Power, Square Root, Cosine, Absolute Value,... etc).      |" << endl;
        cout << "| 0. Exit.                                                            |" << endl;
        cout << "|                                                                     |" << endl;
        cout << "+=====================================================================+" << endl << endl;
        cout << "Your Choice is : ";
    }

    // Taking the choice as int (choices from 1 to 9)
    string choice;
    cin >> choice;
    for(char&c : choice ) // to make any capital letter into a small letter so that we dont get an error if someone does a capitelr letter for any of the choices
    {
        c = tolower(c);
    }
    double num1, num2;                         

    if (choice == "1" || choice == "addition" || choice == "add" || choice == "+") {                                // if the user chooses 1 (The Sum of two numbers)

        cout << "+=========================== Sum Operation ==========================+" << endl << endl;
        cout << "Please Enter Two numbers To Calculate Their Sum: ";
        cin >> num1 >> num2;
        if (num1 > 0 || num1 <= 0 || num2 > 0 || num2 <= 0)
        {
            cout << num1 << " + " << num2 << " = " << Sum(num1, num2) << endl;
        }
        else
        {
            cout << "Wrong Input" << endl << endl;

        }
    }


    else if (choice == "2" || choice == "subtraction" || choice == "subtract" || choice == "-")
    {
        cout << "+========================= Subtract Operation ========================+" << endl << endl;
        cout << "Please Enter The First Number : ";
        cin >> num1;
        cout << "Please Enter The Second Number : ";
        cin >> num2;
        cout << num1 << " - " << num2 << " = " << Subtract(num1, num2) << endl << endl;
    }


    else if (choice == "3" || choice == "multiplication" || choice == "multiply" || choice == "*" || choice == "X" || choice == "x"){

        cout << "+====================== Multiplication Operation =====================+" << endl << endl;
        cout << "Please Enter The First Number : ";
        cin >> num1;
        cout << "Please Enter The Second Number : ";
        cin >> num2;
        cout << num1 << " X " << num2 << " = " << Multiply(num1, num2) << endl << endl;
    }


   else if(choice == "4" || choice == "factorial" || choice == "fact" || choice == "!") {                             // the factorial only works for non negative integer numbers
        cout << "+========================= Factorial Operation ========================+" << endl << endl;
        cout << "Enter a non negative integer Number: " << endl;
        cin >> num1;
        if (num1 >= 0 && num1 == floor(num1)) {          //make sure it's integer by checking if the floor value of the number equals to the same number 
            cout << num1 << "! = " << Factorial(num1) << endl << endl;
        }
        else {
            cout << "Invalid Input. Redirecting Back To Main Menu ......." << endl << endl;
        }
     
    }


   else if (choice == "5" || choice == "average" || choice == "avg"){
        cout << "+========================== Finding Average =========================+" << endl << endl;
        cout << "Please Enter The First Number : ";
        cin >> num1;
        cout << "Please Enter The Second Number : ";
        cin >> num2;
        cout << "The Average = " << Average(num1, num2) << endl << endl;
  
    }


   else if(choice == "6" || choice == "max" || choice == "maximum" || choice == "minimum" || choice == "min" || choice == "maximum/minimum" || choice == "maximum / minimum" || choice == "max/min" || choice == "max / min" || choice == "min / max" || choice == "min/max" || choice == "minimum/maximum" || choice == "minimum / maximum") {
        cout << "+======================== (Maximum / Minimum) =======================+" << endl << endl;
        cout << "What Value Do You Want To Find? " << endl << "1. Maximum" << endl << "2. Minimum" << endl << "Your choice: ";

        string maxMin;
        cin >> maxMin;

        for (char& c : maxMin) {                    // &c to modify the original character in the user input.
            c = tolower(static_cast<unsigned char>(c));
        }
        if (maxMin == "1" || maxMin == "maximum" || maxMin == "max") {
            cout << "+======================== (Maximum) =======================+" << endl ;
            cout << "Enter The First Value: ";
            cin >> num1;
            cout << "Enter The Second Value: ";
            cin >> num2;
            Max(num1, num2);
        }
        else if (maxMin == "2" || maxMin == "minimum" || maxMin == "min") {
            cout << "+======================== (Minimum) =======================+" << endl;
            cout << "Enter The First Value: ";
            cin >> num1;
            cout << "Enter The Second Value: ";
            cin >> num2;
            Min(num1, num2);
        }
        else {
            cout << "Invalid Input... Redirecting Back To Main Menu ......." << endl;
        }
        
    }


   else if (choice == "7" || choice == "d2b" || choice == "decimal to binary" || choice == "decimal" || choice == "to binary")
    {
        cout << "+========================== Decimal To Binary Converter  =========================+" << endl<<endl;
        int D;
        cout << "Enter the Decimal number to convert it into Binary : ";
        cin >> D;
        cout << "The Value of " << D << " in Binary is : " << D2B(D) << endl << endl;
       
    }


   else if (choice == "8" || choice == "b2d" || choice == "binary to decimal" || choice == "binary" || choice == "to decimal")
    {
        cout << "+========================== Binary To Decimal Converter  =========================+" << endl << endl;
        int B;
        cout << "Enter the Binary number to convert it into Decimal : ";
        cin >> B;
        B2D(B);
        cout << "The Decimal Value of "<<B<<" = " << B2D(B) << endl << endl;
        
    }


   else if (choice == "9" || choice == "other" || choice == "others" || choice == "power" || choice == "pwr" || choice == "square root" || choice == "squareroot" || choice == "sqrt" || choice == "cos" || choice == "cosine" || choice == "absolute value" || choice == "absolute" || choice == "abs" || choice == "square root" || choice == "floor" || choice == "flr" || choice == "ceiling" || choice == "ceil")
    {
        do {

        } while (other());
      
    }


   else if (choice == "0" || choice == "q" || choice == "quit" || choice == "exit" || choice == "e") {
        cout << "Do You want to quit? " << endl << "1. Yes" << endl << "2. No" << endl << "Your Choice: ";     // make sure the user wants to exit the program.

        string quit;
        cin >> quit;                                 // string in case the user type "yes", "no" instead of choosing the numbers.
       
        for (char& c : quit) {                    // &c to modify the original character in the user input.
            c = tolower((c));
        }

        if (quit == "1" || quit == "yes" || quit == "y") {
            cout << "Exiting The Calculator... GoodBye!" << endl;
            return false;
        }
        else if (quit == "2" || quit == "no" || quit == "n") {
            cout << "Redirecting Back To Main Menu ......." << endl << endl;
        }
        else {
            cout << "Invalid Input... Redirecting Back To Main Menu ......." << endl << endl;

        }
    }

   else
    {
        cout << "Wrong Input......Redirecting back to the Main Menu" << endl << endl;
        
    }
    
    
    return true;
}

bool other()
{
    string choice;
    double num1, num2;
    cout << "+================================================================ - O X" << endl;
    cout << "|                                                                     |" << endl;
    cout << "|                      Choose One Of The Options:                     |" << endl;
    cout << "|                                                                     |" << endl;
    cout << "| 1. Power.                                                           |" << endl;
    cout << "| 2. square root.                                                     |" << endl;
    cout << "| 3. absolute value.                                                  |" << endl;
    cout << "| 4. Celling / Floor.                                                 |" << endl;
    cout << "| 5. Cosine.                                                          |" << endl;
    cout << "| 6. Sine.                                                            |" << endl;
    cout << "| 0. Exit.                                                            |" << endl;
    cout << "|                                                                     |" << endl;
    cout << "+=====================================================================+" << endl << endl;
    cout << "Your Choice is : ";
    cin >> choice;
    
    if(choice=="power" || choice == "1" || choice =="pow")
    {
        cout << "================================ Power ===============================" << endl << endl;
        cout << "Enter your number you want to find the power of : ";
        cin >> num1;
        cout << "Enter the power : ";
        cin >> num2;
        cout << num1 << " To the power of " << num2 <<" Is Equal to = " << power(num1, num2) << endl << endl;
       
    }
    else if(choice == "2" || choice == "squareroot" || choice == "sqrt")
    {
        cout << "============================= square root =============================" << endl << endl;
        cout << "Enter your number you want to find the square root of : "; 
        cin >> num1;
        if (num1 >= 0) {
            cout << "The square root of " << num1 << " is equal to = " << square_root(num1) << endl << endl;
        }
        else 
        {
            cout << "Invalid Input... Redirecting Back To Main Menu ......." << endl <<endl;
            return true;
        }
        
    }
    else if(choice == "3" || choice == "absolutevalue" || choice == "abs")
    {
        cout << "=========================== absolute value ===========================" << endl << endl;
        cout << "Enter your number you want to find the absolute value of :";
        cin >> num1;
        cout << "|" << num1 << "|" << " = " << absolute(num1) << endl << endl;
    }
    else if (choice == "4" || choice == "celling" || choice == "floor" || choice =="cell"||choice =="flo")
    {
        cout << "+======================== (Celling / Floor) =======================+" << endl << endl;
        cout << "What Value Do You Want To Find? " << endl << "1. Celling" << endl << "2. Floor" << endl << "Your choice: ";

        string cf;
        cin >> cf;
        for (char& c : cf) {                    // &c to modify the original character in the user input.
            c = tolower(c);
        }
        if (cf == "1" || cf == "celling" || cf == "ceil") {
            cout << "+======================== (Celling) =======================+" << endl;
            cout << "Enter a Value To find its celling: ";
            cin >> num1;
            cout << "The Celling of " << num1 << " is : " << ceil(num1) << endl << endl;
        }
        else if (cf == "2" || cf == "floor") {
            cout << "+======================== (Floor) =========================+" << endl;
            cout << "Enter a Value To find its floor: ";
            cin >> num1;
            cout << "The floor of " << num1 << " is : " << floor(num1) << endl<<endl;
        }
        else {
            cout << "Invalid Input... Redirecting Back To Main Menu ......." << endl;
        }
     
    }
    else if (choice == "5" || choice == "Cosine" || choice == "cos"||choice=="cosine")
    {
        cout << "================================ Cosine ===============================" << endl << endl;        
        cout << "Enter the Degree : ";
        cin >> num1;
        cout << "cos(" << num1 << ") = " << cosine(num1) << endl << endl;
       
    }
    else if(choice == "6" || choice == "Sine" || choice == "sin"||choice=="sine")
    {
        cout << "================================ Sine ===============================" << endl << endl;
        cout << "Enter the Degree : ";
        cin >> num1;
        cout << "sin(" << num1 << ") = " << sine(num1) << endl<<endl;
     
    }
    else if (choice == "0" || choice == "q" || choice == "quit" || choice == "exit" || choice == "e")
    {
        cout << "Do You want to return to main menu ? " << endl << "1. Yes" << endl << "2. No" << endl << "Your Choice: ";     // make sure the user wants to exit the program.

        string quit;
        cin >> quit;                                 // string in case the user type "yes", "no" instead of choosing the numbers.
        for (char& c : quit) {                    // &c to modify the original character in the user input.
            c = tolower((c));
        }

        if (quit == "1" || quit == "yes" || quit == "y") {
            cout << "Redirecting Back To Main Menu ......." << endl;
            return false;
        }
        else if (quit == "2" || quit == "no" || quit == "n") {
            cout << "Redirecting Back To Other Menu ......." << endl << endl;
            return true;
        }
        else {
            cout << "Invalid Input... Redirecting Back To Other Menu ......." << endl << endl;
        }
       
    }
    else
    {
        cout << "Wrong Input......Redirecting back to the menu"<<endl<<endl;
    }

}
