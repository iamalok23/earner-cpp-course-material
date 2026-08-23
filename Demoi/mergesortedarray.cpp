#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[] = {10, 11, 12 ,13, 14, 15};
    int b[] = {20, 30, 40, 50,60};
    int m = sizeof(a)/sizeof(a[0]) , n = sizeof(b)/sizeof(b[0]); 
    int c[m+n]; 
    // int i=0, j=0,  k=0;

    // while(i<m && j<n){
    //     if(a[i] < b[j]){
    //         c[k] = a[i];
    //         k++;
    //         i++;
    //     }
    //     else{
    //         c[k] = b[j];
    //         j++;
    //         k++;
    //     }
    // }
    // while (i < 5)
    //     c[k++] = a[i++];  // isk mtlb hai c[k] = a[i]
    //                       //k++, i++; ye ho raha hai iska sortform hai 

    
    // while (j < 4)
    //     c[k++] = b[j++];

    // for(int i=0; i<(m+n); i++){
    //     cout<<c[i]<<" ";
    // }
    // int a[] = {10, 11, 12 ,13, 14, 15};
    // int b[] = {20, 30, 40, 50,60};

    int i=m-1, j=n-1,  k=(m+n)-1;

    while(i>=0 && j>=0){
        if(a[i] > b[j]){
            c[k] = a[i];
            k--;
            i--;
        }
        else{
            c[k] = b[j];
            j--;
            k--;
        }
    }
    while (i >= 0){
        c[k--] = a[i--];
    }
                            // isk mtlb hai c[k] = a[i]
                          //k++, i++; ye ho raha hai iska sortform hai 

    
    while (j >= 0){
        c[k--] = b[j--];
    }
        

    for(int i=0; i<(m+n); i++){
        cout<<c[i]<<" ";
    }
}