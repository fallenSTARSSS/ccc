#include<stdio.h>
int main(){
	char a[10][100]={0};
	int b=0;
	int m=0;
	int n=0;
	int x=0;
	scanf("%d",&n);
	for(x=0;x<n;x++){
		scanf("%s",a[x]);
	}
	for(x=0;x<n;x++){
		if(a[x][0]=='S'&&a[x][1]=='C'&&a[x][2]=='U'){
			printf("YES");
			if(x!=(n-1)){
				printf("\n");
			}
		}
		else for(int y=0;a[x][y]!='\0';y++){
			if(a[x][y]!='A'&&a[x][y]!='S'&&a[x][y]!='C'&&a[x][y]!='U'){
			
				break;
			}
			else if(a[x][y]=='S'&&a[x][y+1]=='C'&&a[x][y+2]=='U'){
				while(a[x][y+3]=='A'){
					y++;
					b++;
				}
				if(b==m){
					printf("YES");
					if(x!=(n-1)){
				printf("\n");
			}m=0; b=0;break;
				} 
			}
			else m++; 
		}
		if(m!=b){
			printf("NO");
			if(x!=(n-1)){
				printf("\n");
			}
			m=0;b=0;
		}
	}
	return 0;
}
