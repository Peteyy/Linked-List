/*
 * Author: Peter Nguyen
 * Date: 4/23/2018
 * File: list.hpp
 * Description: Houses the class and function definitions for the implementation
 * 	of a linked list.
 */

#include <iostream>				// for input and printing
#include <string>				// to name lists/data
using namespace std;

class Node{
	public:
	private:
	Node* next;				// the next node 
	Node* pre;				// the previous node
	void* data();				// the data to be stored
};

class List{					// information about a List
	public:
	List();					// default list constructor
	List(List &copy);			// copy constructor
	List(string name, int size);		// new list constructor
	void setName(string name);		// set a list name
	void setSize(int size);
	void insert(Node working,int location); // inserts a node @ location
	int search(Node working);		// searches for a node
	int remove(Node working);		// removes a specific node
	void print();				// prints the list contents
	private:
	string name;				// the name of the list
	int size;				// the size of the list
	Node *head;				// the head node of the list
	Node *tail;				// the tail node of the list	
};

