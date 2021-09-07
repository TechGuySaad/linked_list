struct nodeType
{

    int info;

    nodeType *link;

};

int main()
{
    nodeType *head, *p, *q, *newNode;

    // first using only a single pointer p.and newNode.
    //here order of the statement excecution is important

    newNode = new nodeType;
    newNode-> info = 50;
    newNode-> link = p->link;
    p->link = newNode;



    //second using p, q, and newNode
    //we have to insert newNode between p and q so:

    //order of statement execution is not important

    newNode = new nodeType;
    newNode->info = 50;
    p->link = newNode;
    newNode->link = q;



    
}

