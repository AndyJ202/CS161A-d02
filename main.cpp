/******************************************************************************
# Author:           Andy Joy
# Assignment:       Discussion 2
# Date:             04/19/2026
# Description:      This program will perform calculations to determine the gas
#                   cost for 20 miles, 75 miles, and 500 miles.
# Input:            Vehicle MPG (double), gas price per gallon (double).
# Output:           Cost of gas for each distance.
# Sources:          N/A
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//main function
int main() {

  //variables declared
  double vehicleMPG = 0.0;
  double gasPrice = 0.0;
  double cost20Miles = 0.0;
  double cost75Miles = 0.0;
  double cost500Miles = 0.0;

  //user input
  cout << "Welcome to Driving Costs Calculator!" << endl << endl;
  cout << "Enter your vehicle's miles per gallon (MPG): ";
  cin >> vehicleMPG;
  cout << "Enter the price per gallon of gas: $";
  cin >> gasPrice;
  cout << endl;

  //calculations
  cost20Miles = (20 / vehicleMPG) * gasPrice;
  cost75Miles = (75 / vehicleMPG) * gasPrice;
  cost500Miles = (500 / vehicleMPG) * gasPrice;

  //output to the user
  cout << fixed << setprecision(2);
  cout << setw(10) << left  << "Miles" << "|";
  cout << setw(12) << right << "Cost of Gas" << endl;
  cout << setfill('-') << setw(23) << "" << endl;
  cout << setfill(' ');
  cout << setw(10) << left  << "20" << "|";
  cout << setw(4) << right << "$" << cost20Miles << endl;
  cout << setw(10) << left  << "75" << "|";
  cout << setw(4) << right << "$" << cost75Miles << endl;   
  cout << setw(10) << left  << "500" << "|";
  cout << setw(4) << right << "$" << cost500Miles << endl;
  cout << setfill('-') << setw(23) << "" << endl;

  return 0;
}