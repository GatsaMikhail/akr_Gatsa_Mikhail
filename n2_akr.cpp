#include<iostream>
#include<vector>
using namespace std;

int main(){
long long a, b;
cin >> a >> b;
for(int i1=a; i1<=b; ++i1){
for(int i2=0; i2<i1; i1+=10){
for(int i3=i2+1; i3<i1; i2+=10){
for(int i4=i3+1; i4<=i1; i3+=10){
if(i1==i2*i3*i4 && i2%10 == i3%10 && i3%10 == i4%10){
cout << i1 << " ";
}
}
}
}
}
}

