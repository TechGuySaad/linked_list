//to create a linked list in forward direction we need three pointer variables
//one will not move and constantly point at the first node of the list(head)
//one will be used to create new nodes (newNode)
//one will be used to link the new node to the main list(last)

//data : 2, 15, 8,24,34

struct nodeType
{

    int info;

    nodeType *link;

};

int main()
{
    nodeType *first, *last,*newNode;

    int num;

    //setting first and last to NULL 

    first = NULL;
    last = NULL;

    cin>>num;

    newNode = new nodeType;

    newNode->info = num;
    newNode->link = NULL;

    if (first = NULL)
    {
        first = newNode;
        last = newNode;
    }

    else
    {
        last -> link = newNode;
        last = newNode;

    }


}
