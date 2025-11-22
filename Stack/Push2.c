void push ( int item) {
    if (isFull()){
        printf("Stack Overflow\n");
        return 0;
    } 
        
    top ++;
    stack[top] = item;
    printf("pushed %d/n" , item);
}
