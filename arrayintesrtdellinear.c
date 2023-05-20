#include <stdio.h>

// Function to perform linear search in an array
int linear_search(int a[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      return i; // Return index if element is found
    }
  }
  return -1; // Return -1 if element is not found
}

int main() {
  int a[] = {1, 2, 3, 4};
  int n = sizeof(a[10]);
  int x;
  printf("Enter a number to search in the array: ");
  scanf("%d", &x); // Take input from user

  int result = linear_search(a, n, x); // Call linear_search function

  if (result == -1) {
    printf("Element is not present in the array\n");
  } else {
    printf("Element is present at index %d\n", result);
 }
 return 0;
}