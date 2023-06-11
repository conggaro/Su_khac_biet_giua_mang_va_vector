#include <iostream>
#include <vector>
using namespace std;

int main(){
    // tạo vector 2 chiều
    vector<vector<int>> v(0, vector<int>(0, 0));

    // dòng 1
    vector<int> dong1(3);
    dong1 = {1, 2, 3};

    // dòng 2
    vector<int> dong2(5);
    dong2 = {4, 5, 6, 7, 8};

    // dòng 3
    vector<int> dong3(2);
    dong3 = {9, 10};

    // dòng 4
    vector<int> dong4(6);
    dong4 = {11, 12, 13, 14, 15, 16};

    // dòng 5
    vector<int> dong5(3);
    dong5 = {17, 18, 19};

    // dòng 6
    vector<int> dong6(1);
    dong6 = {20};

    // thêm các vector dòng
    v.push_back(dong1);
    v.push_back(dong2);
    v.push_back(dong3);
    v.push_back(dong4);
    v.push_back(dong5);
    v.push_back(dong6);

    // in ra vector 2 chiều
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << "\t";
        }
        cout << "\n\n";
    }

    return 0;
}