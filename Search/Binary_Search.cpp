#include <iostream>
using namespace std;

// Binary Search Function
int Binary_Search(int arr[], int size, int key)
{
  int low = 0;         // Pointer To First Element
  int high = size - 1; // Pointer To Last Element
  while (low <= high)
  {
    int mid = low + (high - low) / 2; // Pointer To Mid Element To Check If Key Equal Mid Or No
    if (key == arr[mid])              // If Mid Equal Key Return Mid
    {
      return mid;
    }
    else if (key < arr[mid]) // If Key Smallest Than Mid
    {
      high = mid - 1; // Pointer To Last Element Update Value To Mid - 1
    }                 // To Remove All Element After Mid And Decrease Elements To Search it
    else
    {                // If Key Bigger Than Mid
      low = mid + 1; // Pointer To First Element Update Value To Mid + 1
    }                // To Remove All Element Before Mid And Decrease Elements To Search it
  }
  return -1; // If Not Found Element Return -1
}

int main()
{
  // Binary Search
  int My_Array[]{10, 2, 30, 5, 4, 8, 9, 4, 7, 6, 4};
  // Array To Search It
  int size = sizeof(My_Array) / sizeof(My_Array[0]);
  // To Calculate Size Of Array
  int key = 8;
  // Key To Search It
  int result = Binary_Search(My_Array, size, key);
  // Store Index To Key

  if (result != -1)
  {
    cout << "Key: " << key << " In Index: " << result << "\n";
  }
  else
  {
    cout << "Key Not Found\n";
  }

  return 0;
}
