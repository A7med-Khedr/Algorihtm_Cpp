#include <iostream>
using namespace std;

// Bubble Sort Function
void Bubble_Sort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  { // loop To Array N Times
    for (int j = 0; j < size - i - 1; j++)
    { // Each Loop Minus Size 1 Because Last Element Is Already The Biggest Number
      if (arr[j] > arr[j + 1])
      { // Compare Between Target Element And Element After Target
        int temp = arr[j]; // If Yes Swap Target And Next Element Use 3 Variable
        arr[j] = arr[j + 1]; 
        arr[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < size; i++)
  { // Print Array But If There Repeat Number Don't Print This
    if (arr[i] != arr[i + 1])
    {
      cout << arr[i] << "\n";
    }
  }
}

int main()
{

  int My_Array[]{1, 5, 6, 4, 2, 3, 7, 8, 12, 1, 2, 9, 0, 12};

  int size = sizeof(My_Array) / sizeof(My_Array[0]);

  Bubble_Sort(My_Array, size);

  return 0;
}