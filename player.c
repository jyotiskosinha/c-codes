#include<stdio.h>
 int main(){
 	int n,d,i;
 	scanf("%d %d",&n,&d);
 	int pl[n];
 	for(i=0;i<n;i++){
 		scanf("%d",&pl[i]);
	 }
	 int c,d1,d2;
	 for(i=0;i<d;i++){
	 	scanf("%d %d %d",&c,&d1,&d2);
	 	if(c==1){
	 		pl[d1-1]+=d2;
		 }
		 else{
		 	
			 if(pl[d1-1]>pl[d2-1]){
			 	pl[d1-1]=pl[d1-1]+pl[d2-1];
			 	pl[d2-1]=0;
			 }
			 else if(pl[d1-1]<pl[d2-1]){
			 	pl[d2-1]+=pl[d1-1];
			 	pl[d1-1]=0;
			 }
		 }
	 printf("%d\n",max(pl,n));
//	 int j;
//	 for(j=0;j<n;j++){
//	 	printf("    %d ",pl[j]);
//	 }
//	 printf("\n");
	 
	 }
	 
	 
	 return 0;
 }
 
 
 int max(int arr[], int n) 
{ 
    int i; 
     
   
    int max = arr[0]; 
  
    
      
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
} 
 
 
 
 
