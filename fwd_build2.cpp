nodeType* buildListForward()
{
    nodeType *first, *newNode, *last;
    int num;
    cout << "Enter a list of integers ending with -999."
    << endl;
    cin >> num;
    first = NULL;
    while (num != -999)
    {
    newNode = new nodeType;
    newNode->info = num;
    newNode->link = NULL;
    if (first == NULL)
    {
    first = newNode;
    last = newNode;
    }
    else
    {
    last->link = newNode;
    last = newNode;
    }
    cin >> num;
    } //end while
    return first;
} //end buildListForward