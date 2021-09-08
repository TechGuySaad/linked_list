#include <string>
#include<iostream>
using namespace std;

template <class elemType>
class listType
{
    public:
    bool isEmpty();
    bool isFull();
    void search(const elemType& searchItem, bool& found);
    void insert(const elemType& newElement);
    void remove(const elemType& removeElement);
    void destroyList();
    void printList();
    listType();
    private:
    elemType list[100]; //array to hold the list elements
    int length; //variable to store the number
    //of elements in the list
};

template<class elemType>
void listType<class elemType>:: insert(const elemType& newElement) 
{
    ////the code


}

listType<int> intType; //instantiation
listType<string> stringType;