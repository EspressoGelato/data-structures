int
MaxSubsequenceSum(const int A[],int N)
{
    int ThisSum,MaxSum,i,j,k;

    MaxSum=0;
    for(i=0;i<N;i++)
        for(j=i,j<N;j++)
        {
            ThisSum=0;
            for(k=i;k<=j;k++)
                ThisSum+=A[k];

            if(ThisSum > MaxSum)
                MaxSum=ThisSum;
        }
    return MaxSum;
}



int
MaxSubsequenceSum(const int A[],int N)
{
    int ThisSum,MaxSum,i,j,k;

    MaxSum=0;
    for(i=0;i<N;i++)
    {
        ThisSum=0;
        for(j=i,j<N;j++)
        {
            ThisSum+=A[j];
            if(ThisSum > MaxSum)
                MaxSum=ThisSum;
        }
    }
    return MaxSum;
}


static int
MaxSubSum(const int A[],int Left,int Right)
{
    int MaxLeftSum,MaxRightSum;
    int MaxLeftBorderSum,MaxRightBorderSum;
    int LeftBorderSum,RightBorderSum;
    int Center,i;

    if(Left==Right)
        if(A[Left]>0)
            return A[Left];
        else
            return 0;

    Center=(Left+Right)/2;
    
}



int
MaxSubsequenceSum(const int A[],int N)
{
    int ThisSum,MaxSum,j;

    ThisSum=MaxSum=0;
    for(j=0,j<N,j++)
    {
        ThisSum+=A[j];

        if(ThisSum>MaxSum)
            MaxSum=ThisSum;
        
        else if(ThisSum>0)
            ThisSum=0;
    }
    return MaxSum;
        
}