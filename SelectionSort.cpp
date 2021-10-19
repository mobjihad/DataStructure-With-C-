#include <iostream>
using namespace std;


void SelectionSort(int Myarr[],int arrSize){


    for(int i=0; i<arrSize-1; i++){

        int minimum=i;
        for(int j=i+1; j<arrSize; j++){

            if(Myarr[j]<Myarr[minimum]){

                minimum=j;
            }

        }

        if(minimum!= i){

            int temp= Myarr[minimum];
            Myarr[minimum]=Myarr[i];
            Myarr[i]=temp;
        }

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


    SelectionSort(arr,arrSize);
    cout<<"After Sorting "<<endl;

    for(int k=0; k<arrSize;k++){

        cout<<arr[k]<<" ";

    }


    return 0;
}
