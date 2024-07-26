#include <iostream>

using namespace std;

int main()
{
    int score = 200;

    int *myp = &score;

    printf("Value of score is %d\n", score);
    printf("Value of pointer is %p\n", myp);

    // References

    int &another_score = score;

    another_score = 800;

    printf("Value of score is %d\n", score);
    printf("Value of pointer is %p\n", myp);
    // printf("Value of pointer is %p\n", another_score);

    return 0;
}