#include <iostream>
using namespace std;

struct node 
{
    int info;
    node *link;
    
};

int main()
{

    node *first,*newNode;
    int num;

    cin >> num;

    newNode = new node;

    newNode ->info = num;

    newNode -> link = first;
    first = newNode ;

  






}