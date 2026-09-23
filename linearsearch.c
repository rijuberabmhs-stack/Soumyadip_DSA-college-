/* In a library the books are sorted using their account number which is a whole number that consist of a maximum 3 digits whole number consider an array where the account number of the books are sorted in a organised fashion the library and own circuit for a specific account number in the array who is searching methodology master librarian follow write the program to implement the searching technique sample you input and [101,20, 49, 385,210, 620,85]*/
#include <stdio.h>
void linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Account number %d found at index %d.\n", target, i);
            return;
        }
    }
     printf("Account number %d not found in the array.\n", target);
}
int main() {
    int arr[] = {101, 20, 49, 385, 210, 620, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the account number to search: ");
    scanf("%d", &target);

    linearSearch(arr, n, target);

    return 0;
}