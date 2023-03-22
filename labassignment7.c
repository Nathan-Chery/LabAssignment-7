#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arr[], int n)
{
    int swapcounter;

    for (int i = 0; i < n - 1; i++) {

        //Make zero at each loop to accurately count the swaps at each interation of the loop
        swapcounter = 0;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                ++swapcounter;
            }
        }
        //Displays the out of the swapcounter after each iteration of the loop
        printf("Pass %d: %d Swaps\n", i+1, swapcounter);

    }

    printf("\nSorted Array: \n");

    printf("| ");
    for (int i = 0; i<n-1; i++)
    {
        printf("%d | ",arr[i]);
    }

    printf("\n");

    
}

int main()
{
    int arr[] = {97,16,45,63,13,22,7,58,72};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Before BubbleSort: \n");
    

    printf("| ");
    for (int i = 0; i<n-1; i++)
    {
        printf("%d | ",arr[i]);
    }
    printf("\n");
    printf("\n");
    
    bubblesort(arr, n);

    return 0;
}