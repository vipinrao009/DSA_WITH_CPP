#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>>v){
    int n = v.size(); //row
    int m = v[0].size(); // column

    for(int col=0; col<m; col++){
        //Even index => top - bottom
        if((col & 1)== 0){
            for(int row=0; row<n; row++){
                cout<<v[row][col]<<" ";
            }
        }
        else {
            for(int row=n-1; row>=0; row--){
                cout<<v[row][col]<<" ";
            } 
        }
    }
}

int main(){
   vector<vector<int>>v {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
   };

   wavePrintMatrix(v);
   return 0;
}