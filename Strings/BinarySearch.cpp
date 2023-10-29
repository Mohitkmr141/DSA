#include<iostream>
using namespace std;

void printArray(int * arr , int start , int end){


    for(int i=start;i<=end;i++){
    cout<<arr[i]<<" ";

    }
    cout<<endl;
}
bool binarySearch(int arr[] , int start , int end , int key){




int mid = start + (end - start)/2;

printArray(arr,start ,end);
//element not found
    if(start > end){
        return false;
    }

if(arr[mid] == key){
// element found;
    return true;
}

    if(arr[mid]< key){
     return    binarySearch(arr,mid+1 , end ,key);
    }

    else{

       return  binarySearch(arr,0,mid-1,key);
    }
}
int main(){


int arr[] = {1,2,3,4,5,6,7,8,9,10};
int key= 5;

if(binarySearch(arr,0,10,55)){
    cout<<"Element found "<<endl;

}else{
    cout<<"Element not found "<<endl;
}


return 0;

}