//Cafeteria Menu
 //#include <iostream>
 //using namespace std;
 //int main(){
 // int num;
 // int choice,total_bill = 0;
 //do{
 // cout<<"---Menu---"<<endl;
 // cout<<"Choose the menu"<<endl;
 // cout<<"1.Tea-$5"<<endl;
 // cout<<"2.Coffee-$2"<<endl;
 // cout<<"3.Sandwitch-$6"<<endl;
 // cout<<"4.Burger-$7"<<endl;
 // cout<<"5.Exit"<<endl;
 // cin>>choice;
 //
 // switch(choice){
 // case 1:
 // cout<<"your choise is tea-$2";
 // total_bill+=5;
 // break;
 //
 // case 2:
 // cout<<"Your choice is coffee-$5";
 // total_bill+=2;
 // break;
 //
 // case 3:
 // cout<<"Your choice is sandwitch-$6";
 // total_bill+=6;
 // break;
 //
 // case 4:
 // cout<<"Your choice is burger-$7";
 // total_bill+=7;
 // break;
 //
 // case 5:
 // cout<<"Please exit the restaurant"<<endl;
 // break;
 //
 // default:
 // cout<<"Invalid";
 // }
 // }
 // while(choice!=5);
 // cout<<"Total Bill $:"<<total_bill;
 // return 0;
 // }

 //ATM Machice
 //#include <iostream>
 //using namespace std;
 //int main() {
 //    double balance = 1000;
 //    int choice,amount;
 //
//    do {
 //        cout<<"---ATM Menu---"<<endl;
 //        cout<<"1.Check Balance"<<endl;
 //        cout<<"2.Withdraw Money"<<endl;
 //        cout<<"3.Deposit Money"<<endl;
 //        cout<<"4.Exit"<<endl;
 //        cout<<"Enter your choice:";
 //        cin>>choice;
 //
 //        switch (choice) {
 //            case 1:
 //                cout << "Your balance is: $" << balance << endl;
 //                break;
 //                
//            case 2:
 //                cout << "Enter the amount 1  to withdraw:";
 //                cin >> amount;
 //                if (amount <= balance) {
 //                    balance -= amount;
 //                    cout << "Withdrawal successful. New balance: $" << balance << endl;
 //                } else {
 //                    cout << "Insufficient balance.";
 //                }
 //                break;
 //            case 3:
 //                cout << "Enter the amount to deposit:";
 //                cin >> amount;
 //                balance += amount;
 //                cout << "Deposit successful. New balance:$" << balance << endl;
 //                break;
 //            case 4:
 //                cout << "Exit";
 //                break;
 //            default:
 //                cout<<"Please try again";
 //        }
 //    } while (choice!=4);
 //
 //    return 0;
 //}

    //Even and Odd
 //#include <iostream>
 //using namespace std;
 //int main() {
 //    int num, oddCount = 0, evenCount = 0;
 //
 //    while (true) {
 //        cout << "Enter a number (0 to stop):";
 //        cin >> num;
 //
 //        if (num == 0) {
 //            break;
 //        }
 //
 //if (num % 2 == 0) {
 //            evenCount++;
 //        } else {
//            oddCount++;
 //        }
 //    }
 //    cout << "Total even numbers: " << evenCount << endl;
 //    cout << "Total odd numbers: " << oddCount << endl;
 //
 //    return 0;
 //}

 //Simple Calculator
 //#include <iostream>
 //using namespace std;
 //int main() {
 //    int choice, num1, num2;
 //    double result;
 //
 //    do {
 //        cout << "---Simple Calculator---"<<endl;
 //        cout << "1.Addition"<<endl;
 //        cout << "2.Subtraction"<<endl;
 //        cout << "3.Multiplication"<<endl;
 //        cout << "4.Division"<<endl;
 //        cout << "5.Exit"<<endl;
 //        cout << "Enter your choice:";
 //        cin >> choice;
 //
 //        switch(choice){
 //            case 1:
 //                cout<<"Enter two numbers:";
 //                cin>>num1>>num2;
 //                result = num1 + num2;
 //                cout << "Result:"<<num1<<"+" << num2<<"="<<result<<endl;
 //                break;
 //            case 2:
 //                cout << "Enter two numbers: ";
 //                cin >> num1 >> num2;
 //                result = num1 - num2;
 //                cout << "Result: " << num1 << " - " << num2 << " = " << result <<   endl;
 //                break;
 //            case 3:
 //                cout << "Enter two numbers: ";
 //                cin >> num1 >> num2;
 //                result = num1 * num2;
 //                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
 //                break;
 //            case 4:
 //                cout << "Enter two numbers: ";
 //                cin >> num1 >> num2;
 //                if (num2 == 0) {
 //                    cout << "Error"<<endl;
 //                } else {
 //                    result = num1 / num2;
 //                    cout<<"Result:"<<num1<<"/"<<num2<<"="<<result<<endl;
 //                }
 //                break;
 //            case 5:
//                cout << "Exit"<<endl;
 //                break;
 //            default:
 //                cout << "Invalid choice. Please try again"<<endl;
 //        }
 //    } while (choice != 5);
 //
 //    return 0;
 //} 

 //Password Checker
 //#include <iostream>
 //using namespace std;
 //int main() {
 //    string Password="2200",userPassword;
 //    int attempts=3;
 //
 //    for (int i = 0; i < attempts; i++) {
 //        cout << "Enter password (Attempt " << i + 1 << " of " << attempts << "):";
 //        cin >> userPassword;
 //
 //        if (userPassword == Password) {
 //            cout << "Correct Password" << endl;
 //            break;  
//        } else {
 //            cout << "Incorrect password." << endl;
 //        }
 //    }
 //
 //    if (userPassword != Password) {
 //        cout << "Access denied." << endl;
 //    }
 //
 //    return 0;
 //}
 //

 //Grade Calculator
 //#include <iostream>
 //using namespace std;
 //
 //int main() {
 //    float marks;
 //    char choice;
 //
 //    do {
 //        //user enter the students marks
 //        cout << "Enter the student's marks (0-100): ";
 //        cin >> marks;
 //
 //        // Validate the input
 //        if (marks < 0 || marks > 100) {
 //            cout << "Invalid input. Marks must be between 0 and 100." << endl;
 //            continue; 
//        }
 //
 // Assign grade based on marks using if-else conditions
 //        if (marks >= 90 && marks <= 100) {
//            cout << "The students grade is: A+" << endl;
 //        }
 //        else if (marks >= 80 && marks < 90) {
 //            cout << "The student's grade is: A" << endl;
 //        }
 //        else if (marks >= 70 && marks < 80) {
 //            cout << "The student's grade is: B" << endl;
 //        }
 //        else if (marks >= 60 && marks < 70) {
 //            cout << "The student's grade is: C" << endl;
 //        }
 //        else {
 //            cout << "The student's grade is: D" << endl;
 //        }
 //
 //        cout << "Do you want to calculate the grade for another student? (Y/N): ";
 //        cin >> choice;
 //
 //    } while (choice == 'Y' || choice == 'y'); 
//
 //    cout << "Thank You" << endl;
 //    return 0;
 //}

 //Number Divisor
 //#include <iostream>
 //using namespace std;
 //
 //int main() {
 //    int num;
 //
 //    //user enter a positive integer
 //    cout << "Enter a positive integer: ";
 //    cin >> num;
 //
 //    // Check if number is positive
 //    if (num <= 0) {
 //        cout << "Please enter a positive integer." << endl;
 //        return 1; 
//    }
 //
 //    // Display the divisors
 //    cout << "The divisors of " << num << " are: ";
 //
 //    // Use a for loop to find and display all divisors
 //    for (int i = 1; i <= num; i++) {
 //        if (num % i == 0) {
 //            cout << i << " ";
 //        }
 //    }
 //
 //    cout << endl; 
//
 //    return 0;
 //}

//Reverse number pattern
 //#include <iostream>
 //using namespace std;
 //
 //int main() {
 //    int n;
 //
 //
 //user enter a positive integer
 //    cout << "Enter a positive integer: ";
 //    cin >> n;
 //
 //    // Validate the input
 //    if (n <= 0) {
 //        cout << "Please enter a positive integer." << endl;
 //        return 1; 
//    }
 //
 //    // Generate the reverse number pattern using nested for loops
 //    for (int i = n; i >= 1; i--) {
 //        for (int j = i; j >= 1; j--) {
 //            cout << j << " ";  
//        }
 //        cout << endl;  
//    }
 //
 //    return 0;
 //}

 //Square and cube table
 //#include <iostream>
 //#include <iomanip> 
//using namespace std;
 //
 //int main() {
 //    int n;
 //
 //    //user enter a positive integer
 //    cout << "Enter a positive integer: ";
 //    cin >> n;
 //
 //    // Validate the input
 //    if (n <= 0) {
 //        cout << "Please enter a positive integer." << endl;
 //        return 1; 
//    }
 //
 //    // Display table header
 //    cout << "Number\tSquare\tCube" << endl;
 //    cout << "-----------------------" << endl;
 //
 //    // Use a for loop to calculate and display squares and cubes
 //    for (int i = 1; i <= n; i++) {
 //        int square = i * i;  
//        int cube = i * i * i;  
//        
//        // Display the number,square and cube
 //        cout << i << "\t" << square << "\t" << cube << endl;
//    }
 //
 //    return 0;
 //}
