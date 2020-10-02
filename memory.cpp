#include <iostream>
using namespace std;

struct User
{
    const int id;
    int age;

    User() : id(0001), age(22) {}
};

int main()
{

    // Stack

    int score = 100;
    User mike;

    // Heap Memory

    int *heap_Score = new int;
    *heap_Score = 200;

    User *nike = new User;

    delete heap_Score;
    delete nike;
    return 0;
}