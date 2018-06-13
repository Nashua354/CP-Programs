//http://codeforces.com/problemset/problem/520/A
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
int ar[26]={0};
for(int i=0;i<n;i++){
    if(s[i]=='a'||s[i]=='A')
        ar[0]=1;
    if(s[i]=='b'||s[i]=='B')
        ar[1]=1;
    if(s[i]=='c'||s[i]=='C')
        ar[2]=1;
    if(s[i]=='d'||s[i]=='D')
        ar[3]=1;
    if(s[i]=='e'||s[i]=='E')
        ar[4]=1;
    if(s[i]=='f'||s[i]=='F')
        ar[5]=1;
    if(s[i]=='g'||s[i]=='G')
        ar[6]=1;
    if(s[i]=='h'||s[i]=='H')
        ar[7]=1;
    if(s[i]=='i'||s[i]=='I')
        ar[8]=1;
    if(s[i]=='j'||s[i]=='J')
        ar[9]=1;
    if(s[i]=='k'||s[i]=='K')
        ar[10]=1;
    if(s[i]=='l'||s[i]=='L')
        ar[11]=1;
    if(s[i]=='m'||s[i]=='M')
        ar[12]=1;
    if(s[i]=='n'||s[i]=='N')
        ar[13]=1;
    if(s[i]=='o'||s[i]=='O')
        ar[14]=1;
    if(s[i]=='p'||s[i]=='P')
        ar[15]=1;
    if(s[i]=='q'||s[i]=='Q')
        ar[16]=1;
    if(s[i]=='r'||s[i]=='R')
        ar[17]=1;
    if(s[i]=='s'||s[i]=='S')
        ar[18]=1;
    if(s[i]=='t'||s[i]=='T')
        ar[19]=1;
    if(s[i]=='u'||s[i]=='U')
        ar[20]=1;
    if(s[i]=='v'||s[i]=='V')
        ar[21]=1;
    if(s[i]=='w'||s[i]=='W')
        ar[22]=1;
    if(s[i]=='x'||s[i]=='X')
        ar[23]=1;
    if(s[i]=='y'||s[i]=='Y')
        ar[24]=1;
    if(s[i]=='z'||s[i]=='Z')
        ar[25]=1;
}int sum=0;
for(int i=0;i<26;i++)
    sum+=ar[i];
if(sum>25)
    cout<<"YES";
else
    cout<<"NO";
return 0;
}
