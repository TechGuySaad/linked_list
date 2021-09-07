nodeType* buildListBackward()
{
    nodeType *first, *newNode;
    int num;
    cout << "Enter a list of integers ending with -999."
    << endl;
    cin >> num;
    first = NULL;
while (num != -999)
    {
    newNode = new nodeType; //create a node
    newNode->info = num; //store the data in newNode
    newNode->link = first; //put newNode at the beginning
    //of the list
    first = newNode; //update the head pointer of
    //the list, that is, first
    cin >> num; //read the next number
    }
    return first;
} //end buildListBackward