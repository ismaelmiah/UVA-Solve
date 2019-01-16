#include<bits/stdc++.h>
using namespace std;

int anscount=0, chessboard[10][10], frow, fcolum;

bool isvalid(int row, int colum){
    for(int i=0; i<8; i++)if(chessboard[i][colum])return false;
    for(int i=0; i<8; i++)if(chessboard[row][i])return false;
    for(int i=0; i<8; i++){
        for(int j=0; j<9; j++){
            if(chessboard[i][j] && abs(i-row)==abs(j-colum))return false;
        }
    }
    return true;
}

void backtract(int queen, int colum){
    if(queen==0 && colum==8 && chessboard[frow][fcolum]==1){
        anscount++;
        printf("%2d      ", anscount);
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(chessboard[j][i]==1 && i==0)printf("%d", j+1);
                else if(chessboard[j][i])printf(" %d", j+1);
            }

        }
        printf("\n");
    }
    for(int i=0; i<8; i++){
        if(isvalid(i, colum)){
            chessboard[i][colum]=1;
            backtract(queen-1, colum+1);
            chessboard[i][colum]=0;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>frow>>fcolum;
        frow--;
        fcolum--;
        anscount=0;
        memset(chessboard, 0, sizeof chessboard);
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        backtract(8,0);
        if(i!=t)cout<<endl;
    }
    return 0;
}
