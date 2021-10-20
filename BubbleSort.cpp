#include <iostream>

using namespace std;

void BubbleSort(int arr[],int n){


  for(int i=0; i<n; i++){

     for(int j=0 ; j<(n-i-1); i++){
        if (arr[j]>arr[j+1]){

            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
     }
  }

}

int main(){

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

    BubbleSort(arr,arrSize);

          cout<<"After Sorting "<<endl;

    for(int k=0; k<arrSize;k++){

        cout<<arr[k]<<" ";

    }




return 0;
}
