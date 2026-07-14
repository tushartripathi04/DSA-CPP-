#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    cout << "Size of vector: " << v.size() << endl;
    cout << "capacity of vector: " << v.capacity() << endl;
    return 0;
}
