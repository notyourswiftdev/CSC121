//
//  exercise1.cpp
//  CSC121
//
//  Created by Aaron Cleveland on 10/4/21.
//
/*
 Exercise#1 (20 Points)
 Write a program that calculates and displays the take-home pay for a commissioned sales employee along with all of the deductions.
 Input: Prompt the user for the weekly sales.
 Process: Perform the calculations. The employee receives 8% of his or her total sales as his or her gross pay. His or her federal tax rate is 16%. He or she contributes 8% to his or her retirement program and 6% to Social Security.
 Output: Display the results
 Sample Output:
 Enter Weekly Sales:
 Total Sales:
 Gross pay (8%):
 Federal tax paid:
 Social security paid: Retirement contribution:
 Total deductions: Take home pay:
 Pseudo Code:
 32000 32000.00
 2560.00 409.60 153.60 204.80
 768.00 1792.00
 1. 2. 3.
 Declare variables
 Accept Input - weeklySales
 Calculate Gross Pay = Weekly Sales * .08
 Assignment 1
 Prof. Fatima
 4. Calculate Federal Tax = Gross Pay * .16
 5. Calculate Social Security = Gross Pay * .06
 6. Calculate Retirement = Gross Pay * .08
 7. Calculate Total Deductions = Federal Tax + Social Security + Retirement
 8. Calculate Total Take Home Pay = Gross Pay - Total Deductions
 9. Display the following on separate lines and format variables with $ and decimal.
 a. Total Sales Amount:
 b. Gross Pay (.08):
 c. Federal Tax paid (.16):
 d. Social Security paid (.06): value of social security
 e. Retirement contribution (.08): value of retirement
 f. Total Deductions: value of total deductions
 g. Take Home Pay: value of take home pay
 Note: Use Set Precision (2) to format the output. The statements should look something like the following:
 //include the iomanip header file at the top of the file #include <iomanip>
 //use fixed and setprecision(2) to format the number //use setw(8) to control the width of the field
 //use \t to control the spacing between fields
 cout << fixed << setprecision(2);
 cout << "Gross Pay (0.08):\t $" << setw(8) << grossPay << endl;
 */

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

const double GROSSPAY = 8.0;
const double TAXRATE = 16.0;
const double RETIREMENT = 8.0;
const double SOCIALSECURITY = 6.0;

//int main()
//{
//
//    double weeklySales;
//    double totalDeductions;
//    double totalGrossPay;
//    double totalTaxRate;
//    double totalSocialSecurity;
//    double totalRetirement;
//    double totalTakeHome;
//
//    cout << "Hello! Please enter in the weekly sales: " << endl;
//    cin >> weeklySales;
//
//    // Grab the gross pay first.
//    totalGrossPay = weeklySales * (GROSSPAY / 100);
//    totalTaxRate = totalGrossPay * (TAXRATE / 100);
//    totalSocialSecurity = totalGrossPay * (SOCIALSECURITY / 100);
//    totalRetirement = totalGrossPay * (RETIREMENT / 100);
//
//    totalDeductions = totalTaxRate + totalSocialSecurity + totalRetirement;
//    totalTakeHome = totalGrossPay - totalDeductions;
//    cout << "Weekly Sales: " << weeklySales << endl;
//    cout << "Gross: " << totalGrossPay << endl;
//    cout << "Tax: " << totalTaxRate << endl;
//    cout << "Total Deductions: " << totalDeductions << endl;
//    cout << "Total Take Home: " << totalTakeHome << endl;
//    return 0;
//}