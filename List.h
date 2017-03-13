#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions
using namespace std;

#ifndef LIST_H
#define LIST_H

class List //begin List definition 
{
  private:
    class Node;//forward declaration (defined in the implementation file)
    
    Node* frontPtr = nullptr;
    int num_elements = 0;
    
  public:
      List();//default constructor
     ~List();//destructor
     void insert(int element, int k);//insert element at location k
     void remove(int k);//remove element at location k
     void display();// display list
     int size();//return the number of elements in the List
     void clear();//epmty the list
     
     
     /** MISSING OPERATIONS */
     //... fill in ....

};//end List definition

#endif
