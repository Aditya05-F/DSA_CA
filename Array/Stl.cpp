// #include<iostream>
// #include<vector>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     vector<int>arr;
//     cout<<arr.size()<<endl<<arr.capacity()<<endl;
//     arr.push_back(3);
//     arr.push_back(34);
//     arr.push_back(34);
//     cout<<arr.size()<<endl<<arr.capacity()<<endl;
//     cout<<arr.at(2);
//     for (auto i = arr.begin(); i <arr.end();i++)
//     {
//         cout<<*i<<endl;
//     }
    
//     return 0;
// }
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector (10);   // 10 zero-initialized ints

  // assign some values:
  for (unsigned i=0; i<myvector.size(); i++)
    myvector.at(i)=i;

  std::cout << "myvector contains:";
  for (unsigned i=0; i<myvector.size(); i++)
    std::cout << ' ' << myvector.at(i);
  std::cout << '\n';

  return 0;
}