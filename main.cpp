#include<iostream>
#include"StringList.hpp"
using namespace std;

int main(){
/*
	//checking th default and copy constructor
	StringList check1;
	StringList check2(check1);
	cout<<"the number of elements in the lists is : "<<check1.get_num_elements()<<endl;
	//trying to get an element by its index position and return -1
	//if it is not in the array.
	check1.get_at_index(3);
	cout<<"return 1 if empty or else return 0 : "<<check1.is_empty()<<endl;
	//trying to check the position of an element and
	//return -1 if it is not the array.
	int pos = check1.index_of("rg");
	cout << pos <<endl;
	//trying to remove an element by its index position and return -1 
	//if it is not the array.
	check1.remove_at_index(10);
	//inserting some elements 
	cout<<"the number of elements in the lists is : "<<check1.get_num_elements()<<endl;
	check1.insert("aden");
	cout<<"the number of elements in the lists is : "<<check1.get_num_elements()<<endl;
	check1.insert("hassey");
	cout<<"the number of elements in the lists is : "<<check1.get_num_elements()<<endl;
	check1.insert("khalid");
	cout<<"the number of elements in the lists is : "<<check1.get_num_elements()<<endl;
	check1.insert("barey");
	cout<<"the number of elements in the lists is : "<<check1.get_num_elements()<<endl;
	//printing the contents in the array;
	check1.print_contents();
	check1.insert("wiliam");
	cout<<"the number of elements in the lists is : "<<check1.get_num_elements()<<endl;
	//printing the contents in the array;
	check1.print_contents();
	//trying to get the index of an element
	cout<<"the index of the element that is passed is : "<<check1.index_of("khalid")<<endl;
	cout<<"the element that is in the index passed is : "<<check1.get_at_index(2)<<endl;
	//accessing something that is out of range
	cout<<"the index of the element that is passed is : "<<check1.index_of("lenz")<<endl;
	cout<<"the element that is in the index passed is : "<<check1.get_at_index(-2)<<endl;
	//trying to remove an element by its index position and return -1 
	//if it is not the array.
	cout<<"The element that was removed is : " << check1.remove_at_index(2)<<endl;
	//printing the contents in the array;
	check1.print_contents();
	//after removing
	cout<<"the number of elements in the lists is : "<<check1.get_num_elements()<<endl;
	cout<<"return 1 if empty or else return 0 : "<<check1.is_empty()<<endl;
	
	//testing the constructor and copy constructor
	StringList test1(8);
	StringList test2(test1);
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
	//trying to get an element by its index position and return -1
	//if it is not in the array.
	test1.get_at_index(3);
	cout<<"return 1 if empty or else return 0 : "<<check1.is_empty()<<endl;
	//trying to check the position of an element and
	//return -1 if it is not the array.
	int target = test1.index_of("rg");
	cout << target <<endl;
	//trying to remove an element by its index position and return -1 
	//if it is not the array.
	test1.remove_at_index(3);
	
	
	test1.insert("fartun");
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
	test1.insert("ikrama");
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
	test1.insert("lenz");
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
	test1.insert("matt");
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
	test1.insert("michael");
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
	test1.insert("najib");
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
	test1.insert("shena");
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
	test1.insert("steve");
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
	test1.insert("yaroy");
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
	test1.insert("najib");
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
	
	//printing the contents in the array;
	test1.print_contents();
	//trying to get the index of an element
	cout<<"the index of the element that is passed is : "<<test1.index_of("najib")<<endl;
	cout<<"the element that is in the index passed is : "<<test1.get_at_index(2)<<endl;
	//accessing something that is out of range
	cout<<"the index of the element that is passed is : "<<test1.index_of("crzy")<<endl;
	cout<<"the element that is in the index passed is : "<<test1.get_at_index(14)<<endl;
	//trying to remove an element by its index position and return -1 
	//if it is not the array.
	cout<<"The element that was removed is : " << test1.remove_at_index(4)<<endl;
	//printing the contents in the array;
	test1.print_contents();
	//after removing
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
	cout<<"return 1 if empty or else return 0 : "<<test1.is_empty()<<endl;
	cout<<"The element that was removed is : " << test1.remove_at_index(7)<<endl;
	//printing the contents in the array;
	test1.print_contents();
	//after the second remove.
	cout<<"the number of elements in the lists is : "<<test1.get_num_elements()<<endl;
*/
	StringList fog;
	fog.insert("R");
	fog.insert("S");
	fog.insert("T");
	fog.insert("B");
	fog.insert("G");
	fog.print_contents();
	fog.insert("A");
	fog.insert("Foralll");
	fog.insert("B");
	fog.insert("X");
	fog.insert("Z");
	fog.print_contents();
	//successful completion 
	cout<<"All done!"<<endl;
	
	return 0;
}

