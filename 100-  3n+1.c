#include<stdio.h>
int main()
{
    int i, n, r, temp, max=0, m, c=1;
    while(scanf("%d %d", &n, &m)!=EOF){
        printf("%d %d ", n, m);
        if(n>m){
            temp=n;
            n=m;
            m=temp;
        }
        for(i=n; i<=m; i++){
            r=i;
            for(; ;){
                if(r==1){
                    break;
                }
                else if(r%2==0){
                    r=r/2;
                }else{
                    r=3*r+1;
                }
                c++;
            }
            if(c>max){
                max=c;
            }
        c=1;
        }
        printf("%d\n", max);
        max=0;
    }
    return 0;
}
