#include <stdio.h>
/*
implimentation of recursive functions in binary search
bsearch function is used to find the index of an element recursively

*/

int bsearch(int array[], int start, int end, int element);

int bsearch(int array[], int start, int end, int element){
    //to check if the search space is valid
    if (end >= start){ 
        
        int mid = start + (end - start) / 2;
        
        if (array[mid] == element){
            return mid;
        }
        if (array[mid] > element){
            //continously checks if the element is found in
            //either the left or right part of the mid
            // even the left and right parts are broken into 
            // other left or right based on the mid till
            // the index of the element if found
            return bsearch (array,start, mid - 1,element);
            return bsearch (array, mid + 1, end, element);
        }
        return -1;
    }
}

int main (void){
    int array [] = {5,12,23,45,49,67,71, 77,82};
    int n = 9;
    int element = 67;
    int index = bsearch(array, 0, n-1, element);

    if (index == -1){
        printf("Element not found in the array\n");
    }
    else{
        printf("Element found at index: %d\n", index);
    }
    return 0;
}