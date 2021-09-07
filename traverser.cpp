//traversing the linked list without losing the head pointer
nodeType *current;


current = head; // this pointer is made to not lose nodes and traverse easily

while(current!=NULL)
{
    cout<<current->info<<" ";

    current = current->link; //loop keeps storing address of the next node into the current pointer 
}

