#include<stdio.h>
int main()
{
    int variable=10;
    int *pointer;
    pointer=&variable;
    printf("value hold by pointer=>%p\n",pointer);
    printf("value hold by variable=>%d\n",variable);
    printf("value hold by adress %p=>%d\n",pointer,*pointer);
    printf("actual adress of variable=>%p\n",&variable);
    return 0;

}
