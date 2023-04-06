/**
 * test.cpp
 * Project UID: 61f98909a50938c20795ccc85ed93ef5
 * 
 * Justin Brown
 * brjustin@umich.edu
 * justinbrownsax@gmail.com
 *
 * EECS 183: Project 2
 *
 * Testing functions for your birthdays.cpp implementation.
 * Holds the definitions of required testing functions.
 * We have stubbed all required functions for you.
 */

#include <cassert>
#include <cctype>
#include <iostream>
#include <limits>
#include <string>

using namespace std;


//************************************************************************
// You should have implemented the following functions in birthdays.cpp
//************************************************************************
int getMenuChoice();
bool isLeapYear (int year);
bool isGregorianDate(int month, int day, int year);
bool isValidDate(int month, int day, int year);
int determineDay (int month, int day, int year);
void printDayOfBirth(int day);
void determineDayOfBirth();
void print10Birthdays();
void print10LeapYears();

//************************************************************************
// Testing function declarations. Function definition is below main.
// Tests not run by these functions will not be run by the autograder.
//************************************************************************
void test_getMenuChoice();
void test_isGregorianDate();
void test_isLeapYear();
void test_isValidDate();
void test_determineDay();
void test_printDayOfBirth();
void test_determineDayOfBirth();
void test_print10Birthdays();
void test_print10LeapYears();

void startTests()
{
    // Write calls to your test functions here, e. g.,
    test_getMenuChoice();
    test_isGregorianDate();
    test_isValidDate();
    test_determineDay();
    test_printDayOfBirth();
    test_isLeapYear();
    test_determineDayOfBirth();
    test_print10Birthdays();
    test_print10LeapYears();
    
    // Add more calls as you implement more functions.
    // While you're working on a function, it can be useful to comment
    //  out the calls to other functions' tests.

    // Make sure the only function you test in a test function
    //  like test_isGregorianDate is that function (isGregorianDate),
    //  or it may cause issues with the autograder.
}

void test_getMenuChoice()
{
    // getMenuChoice reads from cin, so you will need to
    // provide directions to the user for each test case
    cout << "Now testing funtion getMenuChoice()\n";
    cout << "Please enter 3:" << endl;
    int choice1 = getMenuChoice();
    cout << "Test result: expected: 3, actual: " << choice1 << endl;

    cout << "Please enter 5 then 1:";
    int choice2 = getMenuChoice();
    cout << "Test result: " << endl;
    cout << "Expected: \"Invalid menu choice\", then 1." << endl;
    cout << "Actual: " << choice2 << endl;

    // Write additional tests here
}

void test_isGregorianDate()
{
    // isGregorianDate does not read from cin, so
    // all its tests can be run automatically
    cout << "Now testing function isGregorianDate()\n";
    cout << "9/2/2019:  Expected: 1, Actual: " << isGregorianDate(9, 2, 2019) << endl;
    cout << "1/31/1001: Expected: 0, Actual: " << isGregorianDate(1, 31, 1001) << endl;
    cout << "8/19/2016:  Expected: 1, Actual: " << isGregorianDate(8, 19, 2016) << endl;
    cout << "1/1/1700: Expected: 0, Actual: " << isGregorianDate(1, 1, 1700) << endl;
    cout << "9/13/1752:  Expected: 0, Actual: " << isGregorianDate(9, 13, 1752) << endl;
    cout << "9/14/1752: Expected: 1, Actual: " << isGregorianDate(9, 14, 1752) << endl;
    cout << "9/14/1751: Expected: 0, Actual: " << isGregorianDate(9, 14, 1751) << endl;
    cout << "8/22/1752:  Expected: 0, Actual: " << isGregorianDate(8, 22, 1752) << endl;
    cout << "10/1/1752: Expected: 1, Actual: " << isGregorianDate(10, 14, 1752) << endl;

}

void test_isLeapYear()
{
    cout << "Now testing function isLeapYear\n";
    cout << isLeapYear(2000) << " correct value is: 1" << endl;
    cout << isLeapYear(1999) << " correct value is: 0" << endl;
    cout << isLeapYear(2100) << " correct value is: 0" << endl;
    cout << isLeapYear(1804) << " correct value is: 1" << endl;
    cout << isLeapYear(2237) << " correct value is: 0" << endl;



}

void test_isValidDate()
{
    cout << "Now testing function isValidDate()\n";
    cout << isValidDate(1, 32, 1954) << " correct value is: 0" << endl;
    cout << isValidDate(3, 32, 2019) << " correct value is: 0" << endl;
    cout << isValidDate(4, 31, 1926) << " correct value is: 0" << endl;
    cout << isValidDate(4, 1, 2000) << " correct value is: 1" << endl;
    cout << isValidDate(2, 29, 2008) << " correct value is: 1" << endl;
    cout << isValidDate(2, 29, 2009) << " correct value is: 0" << endl;
    cout << isValidDate(12, 31, 2015) << " correct value is: 1" << endl;
    cout << isValidDate(9, 14, 1752) << " correct value is: 1" << endl;
    cout << isValidDate(9, 13, 1752) << " correct value is: 0" << endl;
    cout << isValidDate(5, 32, 1100) << " correct value is: 0" << endl;
}

void test_determineDay()
{
    cout << "Now testing function determineDay()\n";
    cout << determineDay(2, 14, 1978) << " correct value is 3" << endl;
    cout << determineDay(2, 29, 2000) << " correct value is 3" << endl;
    cout << determineDay(1, 30, 2000) << " correct value is 1" << endl;
    cout << determineDay(1, 31, 1900) << " correct value is 4" << endl;
    cout << determineDay(3, 6, 2005) << " correct value is 0" << endl;
    cout << determineDay(5, 15, 1992) << " correct value is 6" << endl;
    cout << determineDay(6, 10, 1862) << " correct value is 3" << endl;
    cout << determineDay(4, 23, 2022) << " correct value is 0" << endl;
    cout << determineDay(10, 1, 2015) << " correct value is 5" << endl;
    cout << determineDay(12, 30, 2019) << " correct value is 2" << endl;
    
}

void test_printDayOfBirth()
{
    // printDayOfBirth prints to cout rather than
    // returning a value.
    cout << "Now testing function printDayOfBirth()\n";
    cout << "1: Expected: Sunday, Actual: ";
    printDayOfBirth(1);
    cout << "2: Expected: Monday, Actual: ";
    printDayOfBirth(2);
    cout << "3: Expected: Tuesday, Actual: ";
    printDayOfBirth(3);
    cout << "4: Expected: Wednesday, Actual: ";
    printDayOfBirth(4);
    cout << endl;

    // Write your tests here
}

void test_determineDayOfBirth()
{
    cout << "Now testing function determineDayOfBirth()\n";
    cout << "enter birthday";
    determineDayOfBirth();

}

//FIXME how do i test this function
void test_print10Birthdays()
{
   




}

void test_print10LeapYears()
{
    cout << "Now testing function print10LeapYears()\n";
    cout << "enter year";
    print10LeapYears();
    //print10LeapYears(1978) << " expected "
}
