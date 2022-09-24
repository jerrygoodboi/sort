#include<stdlib.h>
#include <stdio.h>
int main()
{
int n,i,j=0,temp;

	        printf("Enter the size of array: ");
		    scanf("%d",&n);
		        int *ar=(int *)malloc(n*sizeof(int));
			    for(i=0;i<n;++i){
				            
				            scanf("%d",ar+i);
					        }
			        while(j<=n){
					     for(i=0;i<n;++i){
						              if(*(ar+i)<*(ar+i+1)){
								                   continue;
										            }
							               else{
									                    temp=*(ar+i);
											                 *(ar+i)=*(ar+i+1);
													              *(ar+i+1)=temp;
														               }
								            }   
					         ++j;
						         
						     }
				    for(i=1;i<=n;++i){
					            printf("%d ",*(ar+i));
						        }
free(ar);
}

