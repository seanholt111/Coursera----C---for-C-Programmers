
// Convert this program to C++

// change to C++ io

// change to one line comments

// change defines of constants to const

// change array to vector<>

// inline any short function


#include <iostream>
//#include <stdio.h>
#include <vector>

using namespace std;

const int N = 40;

inline void sum(int& p, int n, vector<int> d)
{
int i;
//Clear out the accumulator in case it had a value coming in
p = 0;

//Sum contents of vector
for(i = 0; i < n; ++i)
  {
  p = p + d[i];
  }
}

int main()

{

int i;
int accum = 0;

//Declare a vector of length N
vector<int> data(N,0);

//Fill vector with values from 1 to N
for(i = 0; i < N; ++i){
  data[i] = i;
}

//Sum the contents of the vector
sum(accum, N, data);

//Display the result
cout<<"sum is "<<accum<<"\n";

return 0;//adding this comment here

}
