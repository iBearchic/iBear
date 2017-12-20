#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    int n;
     srand(time(NULL));
n=rand()%11+40;
    int randomDigits[n] = {};
    for(int i=0;i<n;i++){
randomDigits[i] = rand()%900+100;
cout<<randomDigits[i]<< endl;
    }

return 0;
}
