#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    //segmentation fault means asking for that doesnot exist

    v.push_back(24);
         cout<< sizeof(v)<<endl;
     v.push_back(24);

     cout<< sizeof(v)<<endl;
      v.push_back(24);
           cout<< sizeof(v)<<endl;
    cout << v.capacity();
      
return 0;
}