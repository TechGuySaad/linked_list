//to delete you need two pointers
//the item between those two pointers will be deleted when

struct nodeType
{

    int info;

    nodeType *link;

};


int main()
{
nodeType *p, *q,head;

q = p->link;

p->link = q->link;

delete q
;
}
