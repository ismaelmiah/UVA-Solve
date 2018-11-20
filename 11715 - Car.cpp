#include<bits/stdc++.h>

using namespace std;

int main()
{
    int g, ca=0;
    double u, v, t, s, a, aa, bb, cc;
    while(1){
        scanf("%d", &g);
        if(g==0) break;
        scanf("%lf %lf %lf", &aa, &bb, &cc);
         cout <<setprecision(3)<<fixed;
        if(g==1){
            a=(bb-aa)/cc;
            s=((bb*bb)-(aa*aa))/(2*a);
            cout<<"Case "<<++ca<<": "<<s<<" "<<a<<endl;
        }
        else if(g==2){
            t=(bb-aa)/cc;
            s=((bb*bb)-(aa*aa))/(2*cc);
            cout<<"Case "<<++ca<<": "<<s<<" "<<t<<endl;
        }
        else if(g==3){
            v=((aa*aa)+2*bb*cc);
            v=sqrt(v);
            t=(v-aa)/bb;
            cout<<"Case "<<++ca<<": "<<v<<" "<<t<<endl;
        }
        else{
            u=((aa*aa)-(2*bb*cc));
            u=sqrt(u);
            t=(aa-u)/bb;
            cout<<"Case "<<++ca<<": "<<u<<" "<<t<<endl;
        }
    }
    return 0;
}
