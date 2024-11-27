#include <iostream> 

#include <Windows.h> 

using namespace std; 

  

int main() { 

    SetConsoleCP(1251); 

    SetConsoleOutputCP(1251); 

  

    int matrix[4][4] = { 

        {1, 2, 3, 4}, 

        {5, 6, 7, 8}, 

        {9, 10, 11, 12}, 

        {13, 14, 15, 16} 

    }; 

  

    int sum = 0; 

  

    for (int i = 0; i < 4; i++) { 

        for (int j = 0; j < 4; j++) { 

            sum += matrix[i][j]; 

        } 

    } 

  

    cout << "Сума всіх елементів матриці: " << sum << endl; 

  

    return 0; 

} 
