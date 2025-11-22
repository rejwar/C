void Enqueue(PNode * Front , PNode * Rear , int Item) 

{
    PNode Temp = (PNode)malloc(sizeof(Node));
    Temp -> Item = Item;
    Temp -> Next = Null;

    if ( *Front == Null) {
        *Front = Temp;
    } else {
        (*Rear) -> Next = Temp;

    }

    *Rear = Temp;
}