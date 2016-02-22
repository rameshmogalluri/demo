#include<stdio.h>
#include</home/bossmool/ss/sort.h>

extern void quicksort(int array[], int firstIndex, int lastIndex);
extern void print(int array[],int n);
int main()
{
    //Declaring variables
    int n,i;
     int array[100];

    //Number of elements in array form user input
    printf("Enter the number of element you want to Sort : ");
    scanf("%d",&n);

    //code to ask to enter elements from user equal to n
    printf("Enter Elements in the list : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    //calling quickSort function defined above
    quicksort(array,0,n-1);
    print(array,n);

    return 0;
}
