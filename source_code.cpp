#include<bits/stdc++.h>
#include "matrix.h"
using namespace std;

int main(){
    matrix A, B;
    A.set_matrix();
    A.set_matrix();
    A.print_matrix();
    B.print_matrix();
    cout << "C = A*3\n";
    (A*3).print_matrix();
    cout << "C = A+B\n";
    (A+B).print_matrix();
    cout << "C = A-B\n";
    (A-B).print_matrix();
    cout << "C = A*B\n";
    (A*B).print_matrix();
    cout << "C = B*A\n";
    (B*A).print_matrix();
    system("pause");
return 0;
}
