// LTCB-ThapLandmark.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void move(int n, char A, char B, char C)
{
    if (n == 1) {
        cout << A << " ==> " << C << "\n";// n?u n = 1 thì d?ch chuy?n t? A -> C
    }
    else {
        //// N?u n > 1 thì th?c hi?n l?n l??t các b??c
        move(n - 1, A, C, B); // 1. D?ch chuy?n n-1 ??a t? A -> B
        cout << A << " ==> " << C << "\n"; //2. D?ch chuy?n ??a th? n t? A -> C
        move(n - 1, B, A, C); // 3. D?ch chuy?n n-1 ??a t? B -> C
    }
}

int main() {
    int n;
    cout << endl << "Nhap vao so ?ia N ma ban muon tim cach giai: ";
    cin >> n;
    cout << "Thu tu dich chuyen cac vi tri A B C la: \n";
    move(n, 'A', 'B', 'C');

    cout << "\n------------------------------\n";
   
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
