// Demonstrate p[i] == *(p+i)
#include<iostream>
using namespace std;

int main(){
    int n[5]={1,2,3,4,5};
    int *p = &n[0]; // p points to first element

    for(int i=0; i<5; i++){
        // p[i] and *(p+i) are exactly the same for compiler
        cout << "p[" << i << "] = " << p[i] << " and *(p+" << i << ") = " << *(p+i) << endl;
    }
    return 0;
}
//Output
/*
p[0] = 1 and *(p+0) = 1
p[1] = 2 and *(p+1) = 2
p[2] = 3 and *(p+2) = 3
p[3] = 4 and *(p+3) = 4
p[4] = 5 and *(p+4) = 5*/