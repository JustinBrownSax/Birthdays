/**
 * birthdays.cpp
 * Project UID: 61f98909a50938c20795ccc85ed93ef5
 * 
 * <#Justin Brown#>
 * <#brjustin#>@umich.edu
 * justinbrownsax@gmail.com
 *
 * EECS 183: Project 2
 *
 * Birthday toolkit
 */

#include <cmath>
#include <iostream>
#include <string>

using namespace std;


/**
 * Requires: nothing
 * Modifies: cout
 * Effects:  prints out the initial heading for the program
 */
void printHeading();


/**
 * Requires: nothing
 * Modifies: cout
 * Effects:  prints out the final greeting for the program
 */
void printCloser();


/**
 * Requires: nothing
 * Modifies: cout 
 * Effects:  prints the menu
 */
void printMenu();

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * Requires: nothing
 * Modifies: cout, cin
 * Effects:  1. Prints the menu
 *           2. Reads the input from the user
 *           3. Checks to make sure the input is within range for the menu
 *              If not prints "Invalid menu choice"
 *           4. Continues to print the menu and read an input until 
 *              a valid one is entered
 *           5. Returns the user's choice of menu options
 * 
 *           This function must call printMenu().
 */
int getMenuChoice();

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * Requires: month, day, year represent a date
 * Modifies: nothing
 * Effects:  returns 'true' if the date is in the limits
 *           of the Gregorian calendar otherwise returns 'false'
 *           See the spec for definition of "limits of the Gregorian calendar"
 */
bool isGregorianDate(int month, int day, int year);

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * Requires: year is a Gregorian year
 * Modifies: nothing
 * Effects:  returns 'true' if the year is a leap year
 *           otherwise returns 'false'.
 *           See the spec for definition of a leap year.
 */
bool isLeapYear(int year);

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * Requires: month, day, year may represent a date
 * Modifies: nothing
 * Effects:  returns 'true' if the date is valid
 *           otherwise returns 'false'
 *           See the spec for definition of "valid"
 */
bool isValidDate(int month, int day, int year);

/**
 * Note:  write your test cases in test.cpp BEFORE you implement this function
 *
 * Requires: month, day, year is a valid date
 *           i.e., the date passed to this function has already passed
 *               isValidDate()
 * Modifies: nothing
 * Effects:  returns the value that Zeller's formula calculates
 */
int determineDay(int month, int day, int year);

void printDayOfBirth( int day );

void determineDayOfBirth();

void print10Birthdays();


void print10LeapYears();


void birthdays() {
    int choice;
    printHeading();

    choice = getMenuChoice();
    while (choice != 4) {
        if (choice == 1) {
             determineDayOfBirth();
        }

        else if (choice == 2) {
             print10LeapYears();
        }
        else if (choice == 3) {
             print10Birthdays();

        }
        choice = getMenuChoice();
    }
        if (choice == 4) {
             printCloser();

        }
    

   
   
    

    return;
}


void printHeading() {
    cout << endl;
    cout << "*******************************" << endl
        << "      Birthday Calculator      " << endl
        << "*******************************" << endl << endl;
    return;
}


void printCloser() {
    cout << endl;
    cout << "****************************************************" << endl
        << "      Thanks for using the Birthday Calculator      " << endl
        << "****************************************************" << endl
        << endl;
    return;
}


void printMenu() {
    cout << endl;
    cout << "Menu Options" << endl
        << "------------" << endl;
    cout << "1) Determine day of birth" << endl;
    cout << "2) Print the next 10 leap years" << endl;
    cout << "3) Determine birthdays for the next 10 years" << endl;
    cout << "4) Finished" << endl << endl;

    cout << "Choice --> ";
    return;
}

// autograder says this is not correct at alll
int getMenuChoice() {
    printMenu();
    int choice;
    
    cin >> choice;

   
    while (choice < 1 || choice > 4) {
        cout << endl;
        cout << "Invalid menu choice" << endl;    
        printMenu();
        cin >> choice;
}   
    return choice;  
}

bool isGregorianDate(int month, int day, int year) {

    if (year > 1752) {
        return true;
    }
    if (year == 1752) {
        if (month == 9) {
            if (day < 14) {
                return false;
            }
            else {
                return true;
            }
        }
        if (month < 9) {
            return false;
        }
        if (month > 9) {
            return true;
        }
    }
    if (year < 1752) {
        return false;
    }
    return 0;
}

    bool isLeapYear(int year) {
        
        if (year % 4 == 0 && year % 100 != 0) {
            return true;
        }
        if (year % 400 == 0) {
            return true;
        }        
        else {
            return false;
        }       
        return 0;
}

//FIXME autograder said this is bad
bool isValidDate(int month, int day, int year) {
    if (isGregorianDate(month, day, year) == false) {
        return false;
    }
    if (month == 1) {
        if (day <= 31 && day >=1) {
            return true;
        }
        else {
            return false;
        }
    }
    if (month == 2) {
        if (isLeapYear(year) == true) {
            if (day <= 29 && day >= 1) {
                return true;
            }
            else {
                return false;
            }
        }
        if (isLeapYear(year) == false) {
            if (day <= 28 && day >= 1) {
                return true;
            }
            else {
                return false;
            }
        }   
    }
    if (month == 3) {
        if (day <= 31 && day >= 1) {
            return true;
        }
        else {
            return false;
        }
    }
    if (month == 4) {
        if (day <= 30 && day >= 1) {
            return true;
        }
        else {
            return false;
        }
    }
    if (month == 5) {
        if (day <= 31 && day >= 1) {
            return true;
        }
        else {
            return false;
        }
    }
    if (month == 5) {
        if (day <= 31 && day >= 1) {
            return true;
        }
        else {
            return false;
        }
    }
    if (month == 6) {
        if (day <= 30 && day >= 1) {
            return true;
        }
        else {
            return false;
        }
    }
    if (month == 7) {
        if (day <= 31 && day >= 1) {
            return true;
        }
        else {
            return false;
        }
    }
    if (month == 8) {
        if (day <= 31 && day >= 1) {
            return true;
        }
        else {
            return false;
        }
    }
    if (month == 9) {
        if (day <= 30 && day >= 1) {
            return true;
        }
        else {
            return false;
        }
    }
    if (month == 10) {
        if (day <= 31 && day >= 1) {
            return true;
        }
        else {
            return false;
        }
    }
    if (month == 11) {
        if (day <= 30 && day >= 1) {
            return true;
        }
        else {
            return false;
        }
    }
    if (month == 12) {
        if (day <= 31 && day >= 1) {
            return true;
        }
        else {
            return false;
        }
    } 
    return false;
}

int determineDay(int month, int day, int year) {
    int century = 1;
    if (month == 1) {
        month = 13;
        year = year - 1;
    }
    if (month == 2) {
        month = 14;
        year = year - 1;

    }
    
    int f;
    if (year > 1699 && year < 1800){
        century = 17;
    }
    if (year > 1799 && year < 1900) {
        century = 18;
    }
    if (year > 1899 && year < 2000) {
        century = 19;
    }
    if (year > 1999 && year < 2100) {
        century = 20;
    }
    if (year > 2099 && year < 2200) {
        century = 21;
    }
    if (year > 2199 && year < 2300) {
        century = 22;
    }
    year = year % 100;

     f = (day + static_cast<int>(floor(13 * (month + 1) / 5)) + (year) + static_cast<int>(floor(year / 4)) + static_cast<int>(floor(century / 4)) + 5 * (century)) % 7;
     // returns number 0 - 6, 0 is saturday, 1 is sunday, etc
     // FIX ME function for f is not working, even with floor function and year adjustments

     return f;
     
 
}


void printDayOfBirth(int f) {
    
    if (f == 0) {
        cout << "Saturday" << endl;
    }
    if (f == 1) {
        cout << "Sunday" << endl;
    }
    if (f == 2) {
        cout << "Monday" << endl;
    }
    if (f == 3) {
        cout << "Tuesday" << endl;
    }
    if (f == 4) {
        cout << "Wednesday" << endl;
    }
    if (f == 5) {
        cout << "Thursday" << endl;
    }
    if (f == 6) {
        cout << "Friday" << endl;
    }
    return;
}

// calls isValidDate(), determineDay(), and printDayOfBirth
void determineDayOfBirth() {
    cout << endl;
    cout << "Enter your date of birth" << endl;
    cout << "format: month / day / year  --> ";
    int month;
    int day;
    int year;
        cin >> month;
        char slash = '/' ;
        cin >> slash;
        cin >> day;
        cin >> slash;
        cin >> year;
        isValidDate(month, day, year);
        if (isValidDate(month, day, year) == false) {
            cout << endl;
            cout << "Invalid date" << endl;
           
           // FIXME
            return;
    }
        if (isValidDate(month, day, year) == true) {
            int f = determineDay(month, day, year);
            cout << endl;
            cout << "You were born on a: ";
            printDayOfBirth(f);
            cout << endl;
            cout << "Have a great birthday!!!" << endl;


        }

  
    
    return;   
}

void print10Birthdays() {
    cout << endl;
    cout << "Under Construction" << endl;
 
    return;
  
}

void print10LeapYears() {

    int year;
    cout << endl;
    cout << "Enter year --> ";
    cin >> year;
    if (year < 1752) {
        return;
    }
    else {

        if (isLeapYear(year) == true) {

            for (int x = 0; x < 10; x++) {
                year = year + 4;
                if (year % 100 == 0 && year % 400 != 0) {
                    year = year + 4;
                }
                cout << "Leap year is " << year << endl;
            }
        }
        else {
            if (year % 4 == 1) {
                year = year + 3;
            }
            else if (year % 4 == 2) {
                year = year + 2;
            }
            else if (year % 4 == 3) {
                year = year + 1;
            }
            else if (year % 100 == 0 && year % 400 != 0) {
                year = year + 4;
            }
            cout << "Leap year is " << year << endl;
            for (int x = 0; x < 9; x++) {
                year = year + 4;
                if (year % 100 == 0 && year % 400 != 0) {
                    year = year + 4;
                }
                cout << "Leap year is " << year << endl;
            }
        }
    }

    return;

}
