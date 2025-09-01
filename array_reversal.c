/*
 * Problem Statement: Array Reversal
 * 
 * Given an array of integers, reverse the order of the elements in the array.
 * 
 * Example:
 * If the original array is [1, 2, 3, 4, 5], after reversing, it should be [5, 4, 3, 2, 1].
 * 
 * Input Format:
 * - The first line contains an integer, n, denoting the number of elements in the array.
 * - The next line contains n space-separated integers representing the elements of the array.
 * 
 * Constraints:
 * - 1 ≤ n ≤ 1000
 * - 1 ≤ arr[i] ≤ 1000, where arr[i] is the i-th element of the array.
 * 
 * Output Format:
 * The output is handled by the code given in the editor, which would print the array.
 * 
 * Sample Input 0:
 * 6
 * 16 13 7 2 1 12
 * 
 * Sample Output 0:
 * 12 1 2 7 13 16
 * 
 * Explanation 0:
 * The original array is [16, 13, 7, 2, 1, 12]. After reversing, it becomes [12, 1, 2, 7, 13, 16].
 * 
 * Sample Input 1:
 * 7
 * 1 13 15 20 12 13 2
 * 
 * Sample Output 1:
 * 2 13 12 20 15 13 1
 * 
 * Sample Input 2:
 * 8
 * 15 5 16 15 17 11 5 11
 * 
 * Sample Output 2:
 * 11 5 11 17 15 16 5 15
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, start = 0, end = 0, temp = 0, error = 0;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    for(i = 0; i < num; i++) {
        if((arr[i] > 1000) && (arr[i] < 1)) {
            error = 1;
            break;   
        }
    }
    /* Write the logic to reverse the array. */
    
    if((num >= 1) && (num <= 1000) && (error == 0)) {
        end = num - 1;
        while (start < end) {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

