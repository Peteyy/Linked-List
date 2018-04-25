/*
 * Author: Peter Nguyen
 * Date: 4/23/2018
 * File: main.cpp
 * Description: File used to test the implementation of a linked list
 */

#include "list.cpp"

 int main(){
	
	List this_list;		// create a list to test on using default c'tor
//	this_list.print();	

	this_list.setName("Foods");
	this_list.print();

	cout << "I'm working here!\n";
	return 1;
 }
