//
// Created by Steve Wasiswa on 12/2/19.
// Defining Node class

#ifndef HW7_NODE_H
#define HW7_NODE_H

#include <string>

class Node {

private:

    // Declare the two attributes of the class Node
    std::string m_data;
    Node *m_nextPtr;

public:

    // Declare member functions
    void setData(std::string data);
    void setNextPointer(Node *nextPtr);

    std::string getData();
    Node *getNextPointer();

    // Initialize constructor
    explicit Node(std::string data ="", Node *nextPtr = nullptr);

};

#endif //HW7_NODE_H
