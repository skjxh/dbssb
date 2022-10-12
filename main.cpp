#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    double E;
    int class1[90][20]={0};
    int class2[90][20]={0}; 
	int class3[90][20]={0};
	int class4[90][20]={0};
    int class5[90][20]={0};
    FILE* fpread=fopen("data1.txt","r");  //打开文件
    if (fpread == NULL)
	{
		printf("file is error.");
		return -1;
	}
    for(int i=0;i<90;i++){
        for(int j=0;j<20;j++){
            fscanf(fpread, "%d", &class1[i][j]);    //读取数据放置class1中
        }
        fscanf(fpread, "\n");
    }
    
    for(int i=0;i<90;i++){
        for(int j=0;j<20;j++){
            fscanf(fpread, "%d", &class2[i][j]);    //读取数据放置class2中
        }
        fscanf(fpread, "\n");
    }
    
    for(int i=0;i<90;i++){
        for(int j=0;j<20;j++){
            fscanf(fpread, "%d", &class3[i][j]);    //读取数据放置class3中
        }
        fscanf(fpread, "\n");
    }
    
    for(int i=0;i<90;i++){
        for(int j=0;j<20;j++){
            fscanf(fpread, "%d", &class4[i][j]);    //读取数据放置class4中
        }
        fscanf(fpread, "\n");
    }
    
    for(int i=0;i<90;i++){
        for(int j=0;j<20;j++){
            fscanf(fpread, "%d", &class5[i][j]);    //读取数据放置class5中
        }
        fscanf(fpread, "\n");
    }
    fclose(fpread);

    int k=1; 
	int a1=0,a2=0,a3=0,a4=0,a5=0;
	int dian=0; 
	int n=0,s1=0,s2=0,s3=0,s4=0,s5=0;
	int q1[90]={0};
	int q2[90]={0};
	int q3[90]={0};
	int q4[90]={0};
	int q5[90]={0}; 
    for(int i=0;i<90;i++){         //第一次全点 
    	if(class1[i][k]==1) {
    		q1[a1]=i;
    		a1++;
		}
	}	
    for(int x=1;x<20;x++){
        for(int t=0;t<=a1;t++){
            s1=q1[a1];
        	if(class1[s1][x]=1){
        		n++;
        		dian++;
			}	
			else dian++;
			}
		}
	
	for(int i=0;i<90;i++){         //第一次全点 
    	if(class2[i][k]==1) {
    		q2[a2]=i;
    		a2++;
		}
	}	
    for(int x=1;x<20;x++){
        for(int t=0;t<=a2;t++){
            s2=q2[a2];
        	if(class2[s2][x]=1){
        		n++;
        		dian++;
			}	
			else dian++;
			}
		}
		
	for(int i=0;i<90;i++){         //第一次全点 
    	if(class3[i][k]==1) {
    		q3[a3]=i;
    		a3++;
		}
	}	
    for(int x=1;x<20;x++){
        for(int t=0;t<=a3;t++){
            s3=q3[a3];
        	if(class3[s3][x]=1){
        		n++;
        		dian++;
			}	
			else dian++;
			}
		}
		
	for(int i=0;i<90;i++){         //第一次全点 
    	if(class4[i][k]==1) {
    		q4[a4]=i;
    		a4++;
		}
	}	
    for(int x=1;x<20;x++){
        for(int t=0;t<=a4;t++){
            s4=q4[a4];
        	if(class4[s4][x]=1){
        		n++;
        		dian++;
			}	
			else dian++;
			}
		}
		
	for(int i=0;i<90;i++){         //第一次全点 
    	if(class5[i][k]==1) {
    		q5[a5]=i;
    		a5++;
		}
	}	
    for(int x=1;x<20;x++)
        for(int t=0;t<=a5;t++){
            s5=q5[a5];
        	if(class5[s5][x]=1){
        		n++;
        		dian++;
			}	
			else dian++;
			}
		
    E=n*1.0/(dian+450);
    printf("%.6lf",E);
    return 0; 
}

