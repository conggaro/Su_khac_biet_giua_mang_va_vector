#include <iostream>
#define SIZE 100
using namespace std;

int main(){
    // fake nhập n
    int n = 10;

    // tạo mảng 2 chiều
    int arr[SIZE][SIZE];

    int dem = 1;

    // gán dữ liệu cho mảng
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = dem;
            dem = dem + 1;
        }        
    }    

    // in ra mảng
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }        
        cout << "\n\n";
    }   

    return 0;
}