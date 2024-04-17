// #include <iostream>
// using namespace std;

// int main() {
//     int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Changed the last value to 10 for uniqueness
//     for (int i = 0; i < 10; ++i) {
//         cout << num[i] << " ";

//     }
// cout<< endl;
//     cout << num[2] <<endl;
//     cout << num[22];
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main() {

// int n[6] = {1,2,2,3,13,1};

// for(int i=0; i<=5; ++i){
//     cout << n[i];
// }
// return 0;
// }

// ----------------------------------------------------------------------------------------------------------------

// #include<iostream>
// using namespace std;

// void arrFunction(char arr[], int size){
// for (int i = 0; i<size; ++i){
//     cout << arr[i];
// };
// };

// int main(){
//     int arrayy[6]={1,1,1,1,1,1};
//     char ch [6]= {'a','d','a','a','s','d'};
//     arrFunction(ch,6);
//     int size = sizeof(arrayy);
//     int sizeOfArray = size/sizeof(size);
//     cout<<endl;
//     cout << size;
//     cout << endl;
//     cout << sizeOfArray;
// }

// -------------------------------------------------------------------------------------------------------------

// Q: Maximum and Minimum number in a array ?

// #include <iostream>
// #include <climits>
// using namespace std;

// // max value function
// int getMaxValue(int arr[], int size)
// {
//     int maxValue = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > maxValue)
//         {
//             maxValue = arr[i];
//         };
//     };
//     return maxValue;
// };

// // Min value fuction
// int getMinValue(int arr[], int size)
// {
//     int minValue = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < minValue)
//         {
//             minValue = arr[i];
//         };
//     }
//     return minValue;
// }

// int main()
// {
//     int size;
//     cin >> size;
//     int myArray[100];

//     // taking value for array
//     for (int i = 0; i < size; i++)
//     {
//         cin >> myArray[i];
//     };

//     if (getMaxValue(myArray, size) == getMinValue(myArray, size))
//     {
//         cout << "There are some dupicate values ";
//     }
//     cout << "Max number in that arr " << getMaxValue(myArray, size) << endl;
//     cout << "Min number in that arr " << getMinValue(myArray, size) << endl;
// }

// ----------------------------------------------------------------------------------------------------------------

//  Q: Sum of all the elements of the array ?

// #include<iostream>
// using namespace std;

// int sum (int arr[], int n){
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum+= arr[i];
//     }
//     return sum;
// }

// int main (){
//     int size;
//     cin >> size;
//     int arr [100];

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

// cout << "Sum of all the elements of array is: " << sum(arr,5);
// }

// -----------------------------------------LINEAR SEARCH------------------------------------------------------------

// Q: Whether 1 preasent in an array or not ?

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int myArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Enter the number you want to search in myArray: " << endl;
    int key;
    cin >> key;

    bool found = search(myArray, 10, key);

    if (!found)
    {
        cout << "key is Absend " << key << endl;
    }
    else
    {
        cout << " key is present "  << key << endl;
    }

    return 0;
}