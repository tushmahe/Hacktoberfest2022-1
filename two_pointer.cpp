#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[7] = {3, 5, 9, 2, 12, 10, 11};
    int val = 17;
    int i=0;
    int j=6;
    bool flag = false;
    sort(arr, arr + 7);
    while(i<j){
        if(arr[i]+arr[j]<val){
            i++;
        }
        else if(arr[i]+arr[j]>val){
            j--;
        }
        else{
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}
