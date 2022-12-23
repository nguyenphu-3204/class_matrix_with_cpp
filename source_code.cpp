#include<bits/stdc++.h>
#include "matrix.h"
using namespace std;


int main(){
    matrix A, B;
    A.set_matrix();
    B.set_matrix();
    A.print_matrix();
    B.print_matrix();
    (A*3).print_matrix();
    (A+B).print_matrix();
    (A*B).print_matrix();
    (B+A).print_matrix();
    system("pause");
return 0;
}
