#include <iostream>

using namespace std;
int formar_matriz(int M[3][2]);
int mostrar_matriz(int M[3][2]);
int main()
{
    int M[3][2];
    formar_matriz(M);
    mostrar_matriz(M);
    system("PAUSE");
    return 0;
}
int formar_matriz(int M[3][2])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"M["<<i<<"]"<<"["<<j<<"]=" ;
            cin>>M[i][j];
        }
    }
    return 0;
}
int mostrar_matriz(int M[3][2])
{
        for(int i=0;i<3;i++)
    {
        cout<<endl;
        for(int j=0;j<2;j++)
        {
            cout<<M[i][j]<<" ";
        }

    }
    cout<<endl;
    return 0;
}