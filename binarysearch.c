/* 2. An online Shop keeps its product catalogere Sorted by Product ID Cachole numbere) in asending order, achen a customere SearchesSpecific Product ID, the system retarons true', if the Product ID is present in the Cataloge, else it peturns 'FALSE' while Searching Technique is used to find the Poroduel ID. quickly from the Catalogere? Implement the's searching method using a fesnelion. The function takes Parcarmeteros: Product ID list, Size of the list, and the Poroduct ID to be searched. Sample INPUT: [2,8, 9, 16, 18, 26,38,48,51,90]*/
#include <stdio.h>
void binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            printf("Product ID %d found at index %d.\n", target, mid);
            return;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    printf("Product ID %d not found in the catalog.\n", target);
}
int main() {
    int arr[] = {2, 8, 9, 16, 18, 26, 38, 48, 51, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the Product ID to search: ");
    scanf("%d", &target);

    binarySearch(arr, n, target);

    return 0;
}