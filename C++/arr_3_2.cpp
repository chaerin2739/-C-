#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> vec1 {1,2,3};
    vector<int> vec2 {1,2,3,4,5,6};

    cout << vec1.front() << endl;
    cout << vec1.back() << endl;

    vec1.swap(vec2);
    for (int num : vec1)
    {
        cout << num << ' ';
    }
cout<< endl;

    for (int num : vec2)
    {
        cout << num << ' ';
    }
    cout<< endl;

  //  int arr0[3]{};
  //  int arr1[] = arr0;

    vector<int> vec3;
    vec3 = vec1;
     for (int num : vec2)
    {
        cout << num << ' ';
    }
    cout<< endl;
}
