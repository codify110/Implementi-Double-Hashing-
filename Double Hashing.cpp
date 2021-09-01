#include <iostream>
using namespace std;
int hashone(int y)
{
return (y % 13);
}
int hashtwo(int y)
{
return (7 - y % 7);
}
void insertion(int size, int *arr, int index, int key)
{
int j = 0;
index = hashone(key) + j*hashtwo(key);
if (arr[index] == 0)
{

arr[index] = key;
}
else
{
while (arr[index] != 0)
{
j++;
index = hashone(key) + j*hashtwo(key);
}
arr[index] = key;
}
}
int main()
{
int size, key, elements;
int count;
int index;
cout << "Enter size of array:" << endl;
cin >> size;
int *arr = new int[size];
for (int i = 0; i < size; i++)
{
arr[i] = 0;
}
cout << "How many elements you want to enter:" << endl;

cin >> elements;
for (int i = 0; i < elements; i++)
{
cin >> key;
insertion(size, arr, index = 0, key);
}
for (int i = 0; i < size; i++)
{
cout << arr[i] << " ";
}

system("pause");
}
