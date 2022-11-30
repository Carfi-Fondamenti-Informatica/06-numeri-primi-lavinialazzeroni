#include<iostream>
using namespace std;
int numeroprimo (int n) {
    int i=1, x=0;
    char w;
if (n>1) {
do {
    i++;
    x = n%i;
}
while (x!=0);
if (n == i) {
    w = true;
}
else {
    w = false;
}
}
}
