#include<iostream>
using namespace std;
int linear_search(int a[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==x){
        return i;
        }
    }
    return -1;
}
int main(){
    int n;
    int a[20];
    cout<<"enter the size of the array:";
    cin>>n;

    if (n < 1 || n > 20) {
        cerr << "Array size must be between 1 and 20." << endl;
        return 1;
    }

    cout<<"enter"<<n<<"integers:"<<endl;
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cout<<"enter the target element to search for:";
    cin>>x;
    int location = linear_search(a,n,x);

    if(location != -1){
        cout<<"element "<<x<<" found at index: "<<location<<endl;
    } else{
        cout<<"element "<<x<<" not found in the array."<<endl;
    }

    return 0;
}


/*PS C:\Krushna 205.c> cd "c:\Krushna 205.c\" ; if ($?) { g++ Linear_search.cpp -o Linear_search } ; if ($?) { .\Linear_search }
enter the size of the array:5
enter5integers:
10 20 30 40 50
enter the target element to sreach for:40
elements40found at index:3*/
