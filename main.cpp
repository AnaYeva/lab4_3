#include <iostream>
using namespace std;

int main() {
    std::cout << "Enter amount of lines: ";
    int n;
    std::cin >> n;
    std::cout << "Enter amount of columns: ";
    int m;
    std::cin >> m;

    int arr[100][100];

    for(int i = 0; i < n; i++){
        cout<<endl<< "line "<< i+1<<": ";
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    long long c=0;
    int ind=0;
    for(int j = 0; j < m; j++){
        c+=arr[0][j];
    }
    for(int i = 1; i < n; i++){
        long long k=0;
        for(int j = 0; j < m; j++){
            k+=arr[i][j];
        }
        if(k<c){c=k;
            ind =i;}
    }
    for(int j = 0; j < m; j++){
        arr[ind][j]=0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
