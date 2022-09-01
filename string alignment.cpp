 #include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b, c, d, e;
    cin>>a>>b>>c>>d>>e;
    cout<<"LEFT ALIGNMENT: \n";
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;

    cout<<"\nTOP ALIGNMENT: \n";
    int maxi = max(a.length(), max(b.length(), max(c.length(), max(d.length(), e.length()))));
    for(int i=0; i<maxi; i++){
        if(i < a.length())    cout<<a[i]<<" ";
        else    cout<<"  ";
        if(i < b.length())    cout<<b[i]<<" ";
        else    cout<<"  ";
        if(i < c.length())    cout<<c[i]<<" ";
        else    cout<<"  ";
        if(i < d.length())    cout<<d[i]<<" ";
        else    cout<<"  ";
        if(i < e.length())    cout<<e[i]<<" ";
        else    cout<<"  ";
        cout<<endl;
    }

    string s[5];
    s[0] = a;s[1] = b;s[2] = c;s[3] = d;s[4] = e;
    cout<<"\nRIGHT ALIGNMENT:\n";
    for(int i=0; i<5; i++){
        int space = maxi - s[i].length();
        while(space--)  cout<<" ";
        cout<<s[i]<<endl;
    }

    cout<<"\nBOTTOM ALIGNMENT:\n";
    int space[5];
    for(int i=0; i<5; i++)  space[i] = maxi - s[i].length();
    int p = 0, q = 0, r = 0, u = 0, t = 0;
    for(int i=0; i<maxi; i++){
        for(int k=0; k<5; k++){
            if(i+1 <= space[k])   cout<<"  ";
            else{
                if(k == 0){
                    if(s[k][p]) cout<<s[k][p++]<<" ";
                    else    cout<<"  ";
                }
                else if(k == 1){
                    if(s[k][q]) cout<<s[k][q++]<<" ";
                    else    cout<<"  ";
                }
                else if(k == 2){
                    if(s[k][r]) cout<<s[k][r++]<<" ";
                    else    cout<<"  ";
                }
                else if(k == 3){
                    if(s[k][u]) cout<<s[k][u++]<<" ";
                    else    cout<<"  ";
                }
                else {
                    if(s[k][t]) cout<<s[k][t++]<<" ";
                    else    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
