#include<stdio.h>

int main()
{
    int arr[3][3]= {{1,2,3},{4,5},6};
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}