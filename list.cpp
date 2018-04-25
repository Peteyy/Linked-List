/*
 * Author: Peter Nguyen
 * Date: 4/23/2018
 * File: list.cpp
 * Description: Houses the implementation of a linked list
 */

#include "list.hpp"			// include header file

List::List(){				// default constructor
	this->name = "";
	this->size = 0;
	this->head = NULL;
	this->tail = NULL;
}

List::List(List &copy){			// copy c'tor
	this->name = copy.name;
	this->size = copy.size;
	//this->head = copy->head;	// TO-DO: make a new node instead of
	//this->tail = copy->tail;	// pointing towards the copy's node
}

List::List(string name, int size){	// new list c'tor
	this->name = name;
	this->size = size;
	this->head = NULL;
	this->tail = NULL;
}

void List::setName(string name){
	this->name = name;
}

void List::setSize(int size){
	this->size = size;
}

void List::insert(Node working, int location = 0){

}

int List::search(Node working){
	int index = 0;
	return index;
}

int List::remove(Node working){
	return -1;
}

void List::print(){
	cout << "Henlo!\n";
	if(this->name == "" || this->size == -1 || this->head == NULL
			|| this->tail == NULL){
		cout << "This list was created incorrectly!\n";
		cout << "Problem(s): \n";
		if(this->name == ""){
			cout << "A list name was not initialized!\n";
		}
		if(this->size >= 0){
			cout << "An invalid list size was entered!\n";
		}
		if(this->head == NULL){
			cout << "A head node was not initialized!\n";
		}
		if(this->tail == NULL){
			cout << "A tail node was not initialized!\n";
		}
		cout << "Please check input and try again.\n";
	}

	else{
		cout << "The contents of this list are:\n";
	}
}
