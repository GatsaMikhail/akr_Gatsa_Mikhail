#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
string a;
char b = 0, maxb=0;
int max=-1, k=-1, l=-1, r=-1;
//ifstream fin("input.txt");
//ofstream fout("output.txt");
cin >> a;
for(int i='A'; i<='Z'; ++i){
for(int j=0; j<a.length(); ++j){
if(i==a[j]){
if(r==-1){
r=j;
} else {
l=j;
}
}
}
k=l-r-1;
if(max==k){
if(b>a[i]){
b=a[i];
}
}
if(max<k){
max=k;
b = a[i];
}
k=0;
}
cout << b << " " << max;
return 0;
}
