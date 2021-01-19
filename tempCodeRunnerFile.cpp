void showImage(const bool image[N][M])
{
    for(int i=0 ; i<M+2;i++) cout << "-";
    cout << "\n";
    for(int i =0;i<N;i++){
        cout << "|";
        for(int j = 0; j<M;j++)
        {
            if(image[i][j] == 1) cout << "*";
            else cout << " ";
        }
        cout << "|";
        cout <<"\n";
    }
    for (int i = 0;i<M+2;i++) cout << "-";
}
void updateImage(bool image[N][M],int s ,int x,int y)
{
    for(int i = 0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if (sqrt(pow((i-x),2)+pow((j-y),2)) <= s-1) image[i][j] =1;
        }
    }
}
