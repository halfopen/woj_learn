main()
{
    long  k,l,n,i,j, f[300][210];
    scanf("%ld",&n);
    while (n!=-1){
      n*=2;    
      for (i=0;i<=n;i++)
        for (j=0;j<=200;j++) f[i][j]=0;
      f[0][1]=1;f[2][1]=1;
      for (i=4;i<=n;i=i+2){
        for (j=0;j<=i-2;j=j+2)        
            for (k=1;k<60;k++)
            for (l=1;l<60;l++)
            f[i][l+k-1]+=f[i-j-2][k]*f[j][l];
        for (k=1;k<60;k++)
          if (f[i][k]>9){
            f[i][k+1]+=f[i][k]/10;
            f[i][k]=f[i][k]%10;          
                        }        
      }  
	  k=200;  
      while (f[n][k]==0) k--; 
      for (i=k;i>0;i--)printf("%ld",f[n][i]);    
      printf("\n");
      scanf("%ld",&n);
    }          
}
