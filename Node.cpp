//
// Created by Steve Wasiswa on 12/2/19.
// Implementation of class Node
//

#include "Node.h"

using namespace std;

/*
 * Constructor: Initializes all the object's values.
 * Input: two parameters of string object.
 */
Node::Node(std::string data, Node *nextPtr):m_data{data},m_nextPtr{nextPtr}
{

}

/*
 * Function: Returns a value that is passed in by the user.
 * Input: string ( passed in value).
 * Output: string m_data.
 */
std::string Node::getData()
{
    return m_data;
}

/*
 * Function: Returns a pointer of the variable it points to.
 * Output: Node m_nextPtr.
 */
Node * Node::getNextPointer() {
    return m_nextPtr;
}

/*
 * Function: Sets a value that is passed in by the user.
 * Input: string ( passed in value).
 */
void Node::setData(std::string data)
{
    m_data = data;
}

/*
 * Function: Sets a value(a pointer) that is passed in.
 * Input: Node ( passed in)
 */
void Node::setNextPointer(Node *nextPtr)
{
    m_nextPtr = nextPtr;
}