#include<stdio.h>

int main(){
	 int c,t[5],i;
	for (int i=0;i<5;i++){
 		printf("la valeur %d : ",i+1);
 		scanf("%d",&t[i]);
	 }
	 
	 do {
		c=0;
	 	for(int i=0;i<4;i++){
	 		if(t[i]>t[i+1]){
	 			int tp;
	 			tp=t[i];
	 			t[i]=t[i+1];
	 			t[i+1]=tp;
	 			c++;
			 }
		 }
	 }while(c>0);
	 for(i=0;i<5;i++){
	 	printf("%d\t",t[i]);
	 }
	 
	 return 0;
	 
	 /*
	 int a[N],i,nb,tmp;do
        {
        nb=0;
        for(i=0;i<N-1;i++)
                if(a[i]>a[i+1])
                        {
                        tmp=a[i];a[i]=a[i+1];a[i+1]=tmp;
                        nb++;
                        }
        }while(nb!=0);*/
}
