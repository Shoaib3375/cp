#include <bits/stdc++.h>
using namespace std;
void reverseStack(int arr[], int size){
    stack<int> st;
    for (int i = 0; i < size; i++)
    {
        st.push(arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = st.top();
        st.pop();

    }
    
    
}

int main()
{
    int arr[5] = {0};
    
    int size = sizeof(arr)/ sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverseStack(arr, size);
    for (int i = 0; i < size; i++)
    {
       cout <<  arr[i] << " ";
    }
    

}