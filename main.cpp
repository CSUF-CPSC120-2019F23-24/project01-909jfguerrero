// Name: Jared Guerrero
// This program calculates and displays business expenses.

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  std::string location;
  double days, hotel, meal, total;

  //get the location of stay
  std::cout << "What is the location of the business trip?";
  std::cin >> location;

  //get the days the trip will take
  std::cout << "How many days will the trip take?";
  std::cin >> days;

  //get the expenses of the hotel
  std::cout << "What is the total hotel expense?";
  std::cin >> hotel;

  //get the expenses of the meal
  std::cout << "What is the total meal expense?";
  std::cin >> meal;

  //calculate total cost
  total = hotel + meal;

  // print the header row and the results
  std::cout << std::setw(12) << "Location"
    << std::setw(8) << "Days"
    << std::setw(9) << "Hotel"
    << std::setw(8) << "Meal"
    << std::setw(9) << "Total" << std::endl;

  std::cout <<std::setw(12) << location
    << std::setw(8) << days
    << std::setw(9) << hotel
    << std::setw(8) << meal
    << std::setw(9) << total << std::endl;




  return 0;
}
