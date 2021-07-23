// Given a 2D character matrix A of size N x M, containing 'X' and 'O', capture all regions surrounded by 'X'.

// A region is captured by flipping all 'O's into 'X's in that surrounded region

// solution 

void dfs1(vector<vector<char> > &A,int i,int j)
{
    int n=A.size(),m=A[0].size();
    int dirx[]={-1,1,0,0};
    int diry[]={0,0,1,-1};
    for(int k=0;k<4;k++)
    {
        int x=i+dirx[k];
        int y=j+diry[k];
        if(x>=0&&y>=0&&x<n&&y<m)
        {
            if(A[x][y]=='O')
            {
                A[x][y]='1';
                dfs1(A,x,y);
            }
        }
    }

}
void Solution::solve(vector<vector<char> > &A) {
    int n=A.size(),m=A[0].size();
    for(int i=0;i<A[0].size();i++)
    {
        if(A[0][i]=='O') {
            dfs1(A,0,i);
            A[0][i]='1';
        }
        if(A[n-1][i]=='O'){
            dfs1(A,n-1,i);
            A[n-1][i]='1';
        }
    }
    for(int i=0;i<A.size();i++)
    {
        if(A[i][0]=='O'){
            dfs1(A,i,0);
             A[i][0]='1';
        }
        if(A[i][m-1]=='O'){
            dfs1(A,i,m-1);
            A[i][m-1]='1';}
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j]=='1') A[i][j]='O';
            else if(A[i][j]=='O') A[i][j]='X';
        }
        
    }
}
