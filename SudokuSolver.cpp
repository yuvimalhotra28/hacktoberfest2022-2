using namespace std;
#define n 9
bool valid(int mat[n][n],int x,int y,int val)
{
    for(int i=0;i<9;i++)
        if(mat[i][y]==val)
            return 0;
    for(int i=0;i<9;i++)
        if(mat[x][i]==val)
            return 0;
    int boxr=x-x%3;
    int boxc=y-y%3;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(mat[i+boxr][j+boxc]==val)
                return 0;
    return 1;
}
bool filled(int mat[n][n],int &x,int &y)
{
    for(x=0;x<n;x++)
        for(y=0;y<n;y++)
            if(mat[x][y]==0)
                return 0;
    return 1;
}
bool sudoku(int mat[n][n])
{
    int x,y;
    if(filled(mat,x,y))
        return 1;
    for(int val=1;val<=9;val++)
    {
        if(valid(mat,x,y,val))
        {
            mat[x][y]=val;
            if(sudoku(mat))
                return 1;
            mat[x][y]=0;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int mat[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        if(sudoku(mat))
        {
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}