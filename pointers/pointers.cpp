#include <iostream>

using namespace std;

int main()
{
    int life;
    life = 4;

    int card;
    card = 40;
    int my_card = card;

    int *myp;

    myp = &card;

    printf("Value of card is: %d\n", my_card);
    printf("Value of myp is: %d\n", myp); // -902509620
    printf("Value of myp is: %p\n", myp); // 0x7ffc713eeaec

    my_card = *myp; // pointer dereference

    printf("Value of my_card is: %d\n", my_card);

    return 0;
}
