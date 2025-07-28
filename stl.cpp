#include <iostream>
using namespace std;

void explanPoint() {
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};

    cout << arr[1].second;

   
}



#include <iostream>
#include <vector>
using namespace std;

void explanVector() {
    vector<int> v1;

    v1.push_back(1);
    v1.emplace_back(1);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v2(5, 10); 
    vector<int> v3(5);     

    vector<int> v4(5, 10);
    vector<int> v5(v4);

    vector<int>::iterator it = v1.begin(); 
    it++;
    cout << *it << endl;

    it = it + 2;
    cout << *it << endl;

    vector<int>::iterator it = v1.end();
    vector<int>::iterator it1 = v1.begin();
    vector<int>::iterator int2 = v1.end();

    cout << v1[0] << " "<< v1.at(0);
    cout << v1.back() << endl; 
}

int main() {
    explanVector();
    explanPoint();
    return 0;
}



