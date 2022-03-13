#include <stdio.h>
#include <stdlib.h>

int main()
{
    //dataType arrayName[arraySize];


    char myName[5] = {'a','h','m','e','t'};
    int myIntArray[4][3] = {{2,3,4},{56,57,58},{89,90,91},{101,102,103}};



//    printf("%d", myName[2]);


    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\n", myIntArray[i][j]);
        }

    }

    return 0;
}
