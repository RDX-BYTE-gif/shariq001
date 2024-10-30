#include<iostream>
using namespace std;

int main()
{
    // Take array size as input from user
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    // Dynamically allocate an array
    int* arr = new int[size];

    // Assign values to the array elements
    cout<<"Enter numbers"<<endl;
    for(int i=0; i<size; i++)
    {
    	cin>>arr[i];
    	cout<<endl;
	}
	delete[] arr;
	delete &arr[0];
    cout << "Elements of the array are: ";
    for (int i = 0; i < size-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
//    delete []arr;
}
