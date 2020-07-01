//
// Created by Steve Wasiswa on 12/2/19.
// Defining List class

#ifndef HW7_MYLIST_H
#define HW7_MYLIST_H

#include "Node.h"
#include <string>

class MyList {

public:

    // Declare a defaut constructor
    MyList();

    // Declare member functions
    bool empty() const;

    void print() const;

    void insert(std::string str);

    void remove(std::string str);

    void clear();

    // Declare a destructor
    ~MyList();

    // Declare a copy constructor
    MyList(const MyList &listToCopy);

private:
    // Declare the only attribute of the class List
    Node *m_startPtr;

};

#endif //HW7_MYLIST_H
