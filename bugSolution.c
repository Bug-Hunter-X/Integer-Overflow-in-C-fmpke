#include <stdio.h>
#include <limits.h>

int main() {
  int x = 10;
  int *ptr = &x;

  // Check for potential overflow before assignment
  if (20 > INT_MAX - x) {
    fprintf(stderr, "Error: Integer overflow would occur.\n");
    return 1; // Indicate an error
  }

  *ptr = 20; 
  printf("%d\n", x);
  return 0;
} 