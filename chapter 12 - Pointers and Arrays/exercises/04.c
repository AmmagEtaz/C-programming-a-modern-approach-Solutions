/***************************************************************************
Rewrite the make_empty, is_empty, and is_full functions of Section 10.2 
to use the pointer variable top_ptr instead of the integer variable top.
***************************************************************************/

#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

/*external variables*/
int contents[STACK_SIZE];
int *top_ptr;

void make_empty(void)
{
    top_ptr = &contents[0];
}

bool is_empty(void)
{
    return top_ptr == &contents[0];
}

bool is_full(void)
{
    return top_ptr == &contents[STACK_SIZE];
}

void push(int i)
{
    if(is_full())
        stack_overflow();
    else
        *top_ptr++ = i;
}

int pop(void)
{
    if(is_empty())
        stack_underflow();
    else
        return *--top_ptr;
}
