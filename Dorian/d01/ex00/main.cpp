#include "Pony.hpp"


void PonyOnTheStack(void)
{
    Pony   pony;

    pony.print("On the stack");
    return ;
}

void PonyOnTheHeap(void)
{
    Pony    *pony;

    pony = new Pony();

    pony->print("On the heap");
    delete pony;
    return ;
}

int main(void)
{
    PonyOnTheStack();
    PonyOnTheHeap();
    return (0);
}