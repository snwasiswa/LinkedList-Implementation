/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Name : Steve Wasiswa
//  Date : 12/13/2019
//  Filename: hw7.cpp
//  Description: The main purpose of this program is to test all methods using hard codes
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "MyList.h"

using namespace std;

int main() {

    // Create the first list
    MyList list1;

    // Testing the empty list
    cout << "-------Doing operation on an empty list-------" << endl;
    cout << endl;

    cout << "Is the list empty? 1(yes)/ 0 (No): " << list1.empty() << endl;
    cout << "Removing \"Mike\"..." << endl;
    list1.remove("Mike");
    cout << "Inserting \"Steve\",\"Grace\",\"Peter\" and \"Jerry\" into the list" << endl;
    list1.insert("Steve");
    list1.insert("Grace");
    list1.insert("Peter");
    list1.insert("Jerry");
    cout << "Print out the elements of the list after inserting them... " << endl;
    list1.print();

    cout << endl;

    // Testing the list at the beginning
    cout << "--------Doing operation at the beginning of the list--------" << endl;
    cout << endl;

    cout << "Is the list empty? 1(yes)/ 0 (No): " << list1.empty() << endl;
    cout << "Removing \"Grace\"..." << endl;
    list1.remove("Grace");
    cout << "Inserting \"Ashley\"..." << endl;
    list1.insert("Ashley");
    cout << "Print out the elements of the list: " << endl;
    list1.print();

    cout << endl;

    // Testing the list at the middle
    cout << "-------Doing operation in the middle of the list------" << endl;
    cout << endl;

    cout << "Is the list empty? 1(yes)/ 0 (No): " << list1.empty() << endl;
    cout << "Removing \"Peter\"..." << endl;
    list1.remove("Peter");
    cout << "Inserting \"Mike\" into the list..." << endl;
    list1.insert("Mike");
    cout << "Print out the elements of the list: " << endl;
    list1.print();

    // Testing the list at the end
    cout << "-------Doing operation at the end of the list------" << endl;
    cout << endl;
    cout << "Is the list empty? 1(yes)/ 0 (No): " << list1.empty() << endl;
    cout << "Removing \"Steve\"..." << endl;
    list1.remove("Steve");
    cout << "Inserting \"Steward\" into the list..." << endl;
    list1.insert("Steward");
    cout << "Print out the elements of the list: " << endl;
    list1.print();

    cout << endl;

    cout << "--------Copy constructor test:--------- " << endl;
    // Create the second list using copy constructor
    MyList list2(list1);

    // Clear the contents of the first list
    cout << "Clear the contents of the latest version of the the first list..." << endl;
    list1.clear();

    cout << endl;

    // Print the contents of the first list
    cout << "Print out the contents of the first list..." << endl;
    list1.print();

    cout << endl;

    // Print contents of the the second list
    cout << "Print out the contents of the second list created from the first list..." << endl;
    list2.print();


    return 0;
}