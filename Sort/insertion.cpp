#include <iostream>
using namespace std;

// Insertion Sort
void Insertion_Sort(int arr[], int size)
{
  for (int i = 1; i < size; ++i)
  {
    int current = arr[i]; // Here current At First Equal Second Element
    int perv = i - 1;     // Element Before I To Compare Them
    while (perv >= 0 && arr[perv] > current)
    {
      arr[perv + 1] = arr[perv]; // To Check All Element In Sorted Part
      perv = perv - 1;           // Decrement Because Check All Element
    }
    arr[perv + 1] = current; // After Sort Put I When Right Position
  }
}

void PrintArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] != arr[i + 1])
    {
      cout << arr[i] << "\n";
    }
  }
}

int main()
{

  int Array[]{5, 2, 1, 8, 6, 3, 10, 2, 7, 6, 20, 11};
  int size = sizeof(Array) / sizeof(Array[0]);

  PrintArray(Array, size);

  cout << "===========\n";

  Insertion_Sort(Array, size);

  PrintArray(Array, size);
  return 0;
}
