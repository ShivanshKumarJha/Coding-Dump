#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

//UNION OPERATION
struct Array* Union(struct Array *arr1,struct Array *arr2){
    int i=0,j=0,k=0;
    Array *arr3=new Array;
    while(i<arr1->length and j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else if(arr2->A[j]<arr1->A[i]){
            arr3->A[k++]=arr2->A[j++];
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    } 
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i++];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j++];
    arr3->length=k;
    arr3->size=arr1->size+arr2->size;
    return arr3;
}

// INTERSECTION OPERATION
struct Array* Intersection(struct Array *arr1,struct Array *arr2){
    int i=0,j=0,k=0;
    Array *arr3=new Array;
    while(i<arr1->length and j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            i++;
        }
        else if(arr2->A[j]<arr1->A[i]){
            j++;
        }
        else if(arr1->A[i]==arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    } 
    arr3->length=k;
    arr3->size=arr1->size+arr2->size;
    return arr3;
}

//SET DIFFERENCE OPERATION(A-B)
struct Array* Difference(struct Array *arr1,struct Array *arr2){
    int i=0,j=0,k=0;
    Array *arr3=new Array;
    while(i<arr1->length and j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else if(arr2->A[j]<arr1->A[i]){
            j++;
        }
        else{
            i++;
            j++;
        }
    } 
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i++];
    arr3->length=k;
    arr3->size=arr1->size+arr2->size;
    return arr3;
}

int main(){
    Array arr1{{2,6,10,15,25},10,5};
    Array arr2{{3,6,7,15,20},10,5};
    Display(arr1);
    Display(arr2);
    Array *arr3=Union(&arr1,&arr2);
    cout<<"Union Operation: ";
    Display(*arr3);
    Array *arr4=Intersection(&arr1,&arr2);
    cout<<"Intersection Operation: ";
    Display(*arr4);
    Array *arr5=Difference(&arr1,&arr2);
    cout<<"Set Difference Operation: ";
    Display(*arr5);
    return 0;
}