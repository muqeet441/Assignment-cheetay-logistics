#include <iostream>
using namespace std;
 
int equilibrium_point(int arr[], int n)
{
    int previous,next;
    for (int i = 0; i < n; ++i)
    {    
        previous = 0;
        for (int j = 0; j < i; j++)
        {
            previous =previous+ arr[j];
 
        }
        next = 0;
        for (int j = i + 1; j < n; j++)
        {
            next =next + arr[j];
        }
        if (previous==next)
            return i;
    }
    return -1;
}
 
int main()
{
    int n=0;
    cout<<"enter the size";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter A ["<<i<<"]";
        cin>>A[i];
    }
    cout << equilibrium_point(A, n);
    return 0;
}
 
