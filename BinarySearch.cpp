#include <iostream>
using namespace std;



int BinarySearch(int Search , int arr[],int right, int left){

 while (left<= right){

    int mid=(right+left)/2;

    if ( arr[mid] == Search)
    {

        return mid;
    }
    else if (Search>arr[mid] ){

        left=mid+1;
    }
    else{

       right=mid-1;
    }


 }


return -1;
}

int main(){

 int num;
 int maxSize =10;
 int arr[10];
 int right = maxSize-1;
 int output;
 int searched;


 cout<<"Please Provide 10 numbers In Ascending Order : "<<endl;

 for(int i =0; i<10; i++){
    cin>>num;
    arr[i]=num;
 }

 cout <<"Provide A Number To Search  : "<<endl;
 cin>> searched;

output=BinarySearch(searched,arr,right ,0);
if(output==-1){

    cout<<"Elements Not Found "<<endl;

}
else{


    cout<<"Element Found At Index No : "<<output<<endl;
}








}
