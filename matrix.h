#include<bits/stdc++.h>
using namespace std;

struct matrix{
    //var
    int line, col;
    vector< vector<int> > mt;
    //method
    matrix(int l = 0, int c = 0){
        line = l, col = l;
        mt.resize(l, vector<int>(l, 0));
    }
    void resize(){};
    void set_matrix();
    void print_matrix();
    vector<vector<int>> get_matrix();

    matrix operator* (const matrix b);
    matrix operator* (int const num);
    matrix operator= (const matrix b);
    matrix operator+ (const matrix b);
    matrix operator- (const matrix b);
};

void matrix::set_matrix(){
    cout << "Enter line and col of matrix: \n";
    cin >> line >> col;
    cout << "Enter matrix " << line << "*" << col <<":\n";
    mt.resize(line, vector<int>(col));
    for(int i = 0; i < line; i++){
        for( int j = 0; j < col; j++){
            cin>> mt[i][j];
        }
    }
}

void matrix::print_matrix(){
    cout << "Matrix " << line << "*" << col <<":\n";
    for(int i = 0; i < line; i++){
        for( int j = 0; j < col; j++){
            cout << setw(3) << mt[i][j];
        }
        cout << endl;
    }
    cout << endl;
};

vector<vector<int>> matrix::get_matrix(){
    return mt;
};

matrix matrix::operator* (const matrix b){
    if( this->col != b.line){
        cout << "Cannot multiple!\n";
        return matrix(0,0);
    }
    matrix c(this->line, b.col);
    for(int i = 0; i < c.line; i++){
        for(int j = 0; j < c.col; j++){
            for(int k = 0; k < this->col; k++){
                c.mt[i][j] += this->mt[i][k] + b.mt[k][i];
            }
        }
    }
    return c;
};

matrix matrix::operator* (int const num){
    matrix c(line, col);
    for(int i = 0; i < c.line; i++){
        for(int j = 0; j < c.col; j++){
            for(int k = 0; k < this->col; k++){
                c.mt[i][j] = this->mt[i][k]*num;
            }
        }
    }
    return c;
};

matrix matrix:: operator= (const matrix b){
    line = b.line; 
    col = b.col;
    mt = b.mt;
    return *this;
};

matrix matrix:: operator+ (const matrix b){
    if( col != b.col || line != b.line){
        cout << "Cannot add!\n";
        return matrix(0,0);
    }
    matrix c(line, b.col);
    for(int i = 0; i < c.line; i++){
        for(int j = 0; j < c.col; j++){
            c.mt[i][j] = mt[i][j] + b.mt[i][j];
        }
    }
    return c;
}

matrix matrix:: operator- (const matrix b){
    if( col != b.col || line != b.line){
        cout << "Cannot add!\n";
        return matrix(0,0);
    }
    matrix c(line, b.col);
    for(int i = 0; i < c.line; i++){
        for(int j = 0; j < c.col; j++){
            c.mt[i][j] = mt[i][j] - b.mt[i][j];
        }
    }
    return c;
}
