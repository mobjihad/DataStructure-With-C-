#include <iostream>
using namespace std;

void InsertionSort(int arr[],int n){

   int j=0;
   int key;

   for(int i=1; i<n; i++){

     key=arr[i];
     j=i-1;

        while(j>=0 && arr[j]>key){


                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=key;
        }


   }



int main()
{
   int arrSize,arrValue;
    cout<<"Provide Array Size : ";
    cin>>arrSize;

    int arr[arrSize];

    cout<<"Enter Value For Unsorted Array: "<<endl;
    for(int i=0;i<arrSize; i++){

        cin>>arrValue;
        arr[i]=arrValue;
    }
    cout<<"Before Sorting " <<endl;
    for(int i=0; i<arrSize;i++){

        cout<<arr[i]<<" ";

    }
    cout<<endl;

    InsertionSort(arr,arrSize);

      cout<<"After Sorting "<<endl;

    for(int k=0; k<arrSize;k++){

        cout<<arr[k]<<" ";

    }


    return 0;
}
