#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void)
{
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 5; i++)
    {
        int num = rand();
        printf("%d\n",num % 100);
    }
}