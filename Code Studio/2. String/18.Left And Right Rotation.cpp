#include<bits/stdc++.h>
string leftRotate(string str, int d) {
    d=d%str.length();
    return str.substr(d)+str.substr(0,d);
}

string rightRotate(string str, int d) {
    d=d%str.length();
    return str.substr(str.length()-d)+str.substr(0,str.length()-d);
}      