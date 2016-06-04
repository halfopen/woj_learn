#include<stdio.h>
#include<string.h>
main()
{
    int a[13]={930,912,905,910,895,962,365,969,777,0,0,0,0},b,c,i;
    char d[2][15],name[13][15]={"Adam","Seth","Enosh","Kenan","Mahalalel","Jared",
    "Enoch","Methuselah","Lamech","Noah","Shem","Ham","Japheth"};
    while(scanf("%s %s",&d[0],&d[1])!=EOF){
          for(i=0;i<=12;i++){
            if(strcmp(d[0],name[i])==0)
              b=i;
            if(strcmp(d[1],name[i])==0)
              c=i;
      } 
    printf(b<c && b<10?"Yes\n":"No\n");
    printf(a[b]==0 || a[c]==0?"No enough information\n":a[b]>a[c]?"Yes\n":"No\n");
    }               
}
