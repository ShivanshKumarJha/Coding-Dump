sort(arr,arr+n);
bool found=false;
for(int i=0;i<n-1;i++){
    int l=i+1;
    int h=n-1;
    int x=arr[i];
    while(l<h){
        if(x+arr[l]+arr[h]==0){
            l++;h--;
            found=true;
            break;
        }
        else if(x+arr[l]+arr[h]<0){
            l++;
        }
        else{
            h--;
        }
    }
}
return found;


//2
sort(arr,arr+n);
bool found=false;
for(int i=0;i<n-1;i++){
    int x=arr[i];
    int H[10000000]={0};
    for(int j=i+1;j<n;j++){
        if(H[-x-arr[i]]!=0 and (-x-arr[i]>0)){
            found=true;
        }
        H[arr[i]]++;
    }
}
return found;