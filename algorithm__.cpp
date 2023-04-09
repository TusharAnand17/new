#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    // finding 6
    cout << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower BOund " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper Bound" << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;
    int a = 2;
    int b = 5;
    cout << "max " << max(a, b);
    cout << "min " << min(a, b);

    swap(a, b);
    cout << "a " << a << endl;
    cout << "b " << b << endl;
    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "String " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotate " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;
    sort(v.begin(), v.end());
    // sort function based on introsort which is made from combination of 3 sort-
    // 1. Quick sort
    // 2. Heap sort
    // 3. Insertion sort
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}