#include<stdio.h>

// function call reference

// function for reverse the array
void reverse(int arr[],int n);
//function for print tha array
void printArr(int arr[],int n);
//function for raed the array
void readArr(int arr[],int n);



int main(){
    int n,arr[100];
    
    printf("enter the size of array");
    scanf("%d",&n);
    
    printf("enter the array digits:\n");
    readArr(arr,n);

    reverse(arr,n);
    printf("Reversed array is :\n");
    printArr(arr,n);
    
}
void readArr(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
}
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        //swapping upto (n/2 -1 )th index (i<n/2)
        // if i<n then swapping will take place two  times ie,net effect is zero
    int firstVal=arr[i];
    int secondVal=arr[n-i-1];
    // swapping of ith element and (n-i-1)th element
    arr[i]=secondVal;
    arr[n-i-1]=firstVal;

    }
   
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    
    }
printf("\n");

}