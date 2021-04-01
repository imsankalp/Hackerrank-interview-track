#include<bits/stdc++.h>
using namespace std;

int minimumSwaps(vector<int> arr) {
    int n = arr.size();
    int swap_count = 0, temp;
    for(int i = 0; i < n; i++){
        while(arr[i] != i+1){
            temp = arr[i];
            arr[i] = arr[temp - 1];
            arr[temp - 1] = temp;
            swap_count++;
        }
    }
    return swap_count;

}

int main()
{
  int n,x;
  cin>> n;
  vector<int> arr;
  for(int i = 0; i < n; i++){
    cin>>x;
    arr.push_back(x);
  }
  cout<<"MINIMUM SWAPS = "<<minimumSwaps(arr)<<endl;
return 0;
}
