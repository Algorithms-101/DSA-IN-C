#include <stdio.h>
#include <stdlib.h>

// Function to search for a target value in a sorted array
int search(int *array, int size, int target) {
  // Set the left and right indices
  int left = 0;
  int right = size - 1;

  // Iterate until the left and right indices meet or cross
  while (left <= right) {
    // Calculate the middle index
    int middle = (left + right) / 2;

    // Check if the target is at the middle index
    if (array[middle] == target) {
      // Return the index if found
      return middle;
    }
    // If the target is smaller than the value at the middle index, search the left half of the array
    else if (target < array[middle]) {
      right = middle - 1;
    }
    // Otherwise, search the right half of the array
    else {
      left = middle + 1;
    }
  }

  // Return -1 if the target was not found
  return -1;
}

int main() {
  // Initialize an array and target value
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int target = 5;

  // Search for the target value
  int index = search(array, 9, target);

  // Print the result
  if (index >= 0) {
    printf("Target value found at index %d\n", index);
  }
  else {
    printf("Target value not found\n");
  }

  return 0;
}
