//
// Created by Steve Wasiswa on 12/2/19.
// Implementation of MyList Class

#include "MyList.h"
#include "Node.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

typedef  Node *nNode;

/*
 * Default Constructor: Initializes the object's value.
 */
MyList::MyList()
{
    m_startPtr = nullptr;
}

/*
 * Function: Returns a boolean value based on the state of the list ( empty or not)
 * Output: bool (1 or 0)
 */
bool MyList::empty() const
{

    if ( m_startPtr == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }

}

/*
 * Function: Prints out the data from the list.
 * Output: string ( elements from the list)
 */
void MyList::print() const
{


   for ( Node *currentPtr = m_startPtr; currentPtr != nullptr; currentPtr = currentPtr->getNextPointer())
    {
       std::cout << currentPtr->getData() << " " << std::endl;

    }
}

/*
 * Function: Alphabetically, inserts or adds data that is passed in
 *           by the user to the list
 * Input: string ( value passed in by the user)
 */
void MyList::insert(std::string str) {

    nNode newNode;
    nNode beforeNode, afterNode;

    newNode = new Node; // allocate memory for new node

    if (newNode != nullptr) {

        // The line of code that starts with transform converts the string to lowercase
        // Obtained from https://www.geeksforgeeks.org/conversion-whole-string-uppercase-lowercase-using-stl-c/
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        newNode->setData(str);
        newNode->setNextPointer(nullptr);

        // Determine where node needs to be inserted
        beforeNode = nullptr;
        afterNode = m_startPtr;
        while (afterNode != nullptr && afterNode->getData() < str) {
            beforeNode = afterNode;
            afterNode = afterNode->getNextPointer();
        }

        // Insert at the beginning of the list
        if (beforeNode == NULL) {
            newNode->setNextPointer(m_startPtr);
            m_startPtr = newNode;
        }
        // Insert in the middle or at the end
        else {
            beforeNode->setNextPointer(newNode);
            newNode->setNextPointer(afterNode);
        }
    }
    else
    {
        std::cout <<"Error for allocating memory for new Node" << std::endl;
    }
}

/*
 * Function: Remove the value( data) that is passed in by the user to the list
 *           based on different cases
 * Input: string ( value passed in by the user)
 */
void MyList::remove(std::string str)
{
    // The line of code that starts with transform converts the string to lowercase
    // Obtained from https://www.geeksforgeeks.org/conversion-whole-string-uppercase-lowercase-using-stl-c/
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Empty list
    if ( m_startPtr == nullptr )
    {
        std::cout << "The list is empty and there is nothing to delete" << std::endl;
    }

    Node *priorNode;
    Node *nodeToDelete;

    // Determine which node needs to be deleted
    nodeToDelete = m_startPtr;
    priorNode = nullptr;
    while( nodeToDelete != nullptr && nodeToDelete->getData() != str)
    {
        priorNode = nodeToDelete;
        nodeToDelete = nodeToDelete->getNextPointer();
    }

    // Delete node
    if (nodeToDelete == nullptr) { // Node not found
        std::cout << str << " was not found in the list" << std::endl;
        return;
    }
    // First node should be deleted
    else if (priorNode == nullptr)
    {
        m_startPtr = m_startPtr->getNextPointer();

        delete nodeToDelete;
    }
    // Middle or end node should be deleted
    else
    {
        priorNode->setNextPointer(nodeToDelete->getNextPointer());
        delete nodeToDelete;
    }
}
/*
 * Function: Removes all the elements from the list
 */
void MyList::clear()
{

    for ( Node *currentPtr = m_startPtr; currentPtr != nullptr; currentPtr = currentPtr->getNextPointer())
    {
        Node * tempNode = currentPtr;
        std::cout << currentPtr->getData() << " was deleted... " << std::endl;
        delete tempNode;
    }

    m_startPtr = nullptr;
}
/*
 * Function: Deletes all the nodes from the list
 */
MyList::~MyList()
{
   clear();

}
/*
 * Function: Constructs a list with a copy of each number in listToCopy
 *           creates a deep copy of the first list.
 * Input: const MyList ( first or previous list passed in by the user)
 */
MyList::MyList(const MyList &listToCopy)
{
    for ( Node *currentPtr = listToCopy.m_startPtr; currentPtr != nullptr; currentPtr = currentPtr->getNextPointer())
    {
        insert(currentPtr->getData());

    }

}

