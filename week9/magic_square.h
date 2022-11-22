void isMagicSquare(int **a,int n){
    int n1=2*n+1; // the number of sums
    int sum[n1]; // store the every row, column and main diagonals sum
    int flag=1; // flag=0: the square is not magic
                 // flag=1: the square is magic
    for (int i = 0; i < n1; i++) // t(n)=2n+1
        sum[i]=0;				 // t(n)=2n+1
    for (int k = 0; k < n1/2; k++) // t(n)=n
        for(int j = 0; j < n; j++) // t(n)=n^2
            sum[k]+=*((int *)a +k*n +j ); // store the every row sum // t(n)=n^2
    for (int k = n1/2; k < n1-1; k++) // t(n)=n
        for(int i = 0; i < n; i++)	// t(n)=n^2
            sum[k]+=*((int *)a +i*n +k-n1/2 ); // store the every column sum // t(n)=n^2
    for(int i = 0; i < n; i++)  // t(n)=n
        sum[n1-1]+=*((int *)a +i*n +i ); // store the main diagonals sum // t(n)=n

    for (int i = 0; i < n1-1; i++){ // t(n)=2n
        if(sum[i]!=sum[i+1]) 
            flag=0;					// t(n)=0~2n
    }
    //total t(n)=4n^2+10n+2~4n^2+12n+2 --> Θ(n^2)
    // if every row, column and main diagonals sum are not the same, flag=0
    if(flag)
        printf("the square is magic");
    else
        printf("the square is not magic");
}