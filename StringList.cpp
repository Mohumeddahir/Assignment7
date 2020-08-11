#include<iostream>
#include"StringList.hpp"
using namespace std;
using std::string;
//creates an empty string object list
StringList :: StringList(int size){
	if (size > INIT_CAPACITY){
		m_capacity = size;
	}
	else {
		m_capacity = INIT_CAPACITY;
	}
		m_list = new string[m_capacity];
		m_num_elements = 0;


}
//creates a copy of the list and all the elements in the list
StringList :: StringList(const StringList &copy){
	m_capacity = copy.m_capacity;
	m_list = new string[m_capacity];
	m_num_elements = copy.m_num_elements;
	for(int i = 0; i < m_num_elements; i++){
		m_list[i] = copy.m_list[i];
	}

}
//for deallocation of dynamically allocated list
StringList :: ~StringList(){
	delete [] m_list;

}

//gettting the number of elements in the list.	
int StringList :: get_num_elements() const{
	return m_num_elements;
}

//access the string at a given position.
string StringList :: get_at_index(int index_pos) const{
	if(index_pos >= m_num_elements || index_pos < 0){
		cout<<"out of pounds"<<endl;
		return "";
	}
	else{
		return m_list[index_pos];
	}		

}
//confirming if the list has elements or not.
bool StringList :: is_empty() const{
	if(m_num_elements == 0)
		return true;
	else
		return false;

}
//finding the location of the target string and if they are duplicated
//it will find a single non determined location.
int StringList :: index_of(string target) const{
	int getcount = -1;
	for(int i = 0; i < m_num_elements; i++){
		if(target == m_list[i])
			getcount = i;
	}
		return getcount;
}
//removes the element at the given index. after removal, all elements
//to the right are shifted one position to the left
string StringList :: remove_at_index(int index_pos){
	string search = m_list[index_pos];
	if(index_pos >= m_num_elements || index_pos < 0){
		cout<<"out of pounds"<<endl;
		return "";
	}
	else {
		for(int i = index_pos; i < m_num_elements-1; i++){
			m_list[i] = m_list[i+1];
		}
			m_num_elements--;
			return search;
		}
	
}
//a helper funtion to insert an element into the list 
//if the m_num_elements is greater than 0;
int Binarysearch(string *m_list, string key, int low, int high){
	while(low <= high){
		int mid = (low+high)/2;
		if(m_list[mid] == key)
			return mid;
		if(low == high){
			if(m_list[low] > key)
				return low;
			else
				return low+1;
		}		
		if(m_list[mid] < key)
		  low = mid + 1;
		else
		   
		   high = mid-1;	
		 
	}
	return low;
	
}
//inserts a string into the list, a position that maintains 
//the list in sorted order.
void StringList :: insert(string new_element){

		if(m_num_elements == m_capacity){
			m_capacity = 2*m_capacity;
			string *updated = new string[m_capacity];
			for(int i = 0; i < m_num_elements; i++){
				updated[i] = m_list[i];
			}
				delete [] m_list;
				m_list = updated;
		}
		if(m_num_elements == 0){
			m_list[m_num_elements] = new_element;
		}
		else{
			int low = 0;
			int high = m_num_elements-1;
			int indexnum;
			indexnum = Binarysearch(m_list, new_element, low, high);
			int t;
			for(t = (m_num_elements-1); t >= indexnum; t--){
				m_list[t+1] = m_list[t];
			}
			
				m_list[indexnum] = new_element;
		}
		m_num_elements++;	
}
void StringList :: print_contents() const{
	for(int i = 0; i < m_num_elements; i++){
		cout <<m_list[i]<<", "; 
	}
		cout<<endl;
}
