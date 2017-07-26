#include<bits/stdc++.h>
using namespace std;
int **a;
 
void print(int n){
        cout<<" matrix 1 \n"<<endl;
        for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
          cout<<a[i][j]<<" ";
                }
                cout<<endl;
        }
}

int main(){
        int n;
	    cin>>n;
        a = new int* [n*sizeof(int *)];
        for(int i=0;i<n;i++){
        a[i]=  new int [n*sizeof(int)];
        }
	int lev= n*2;
	int RoHas[n][lev];
	 
	memset(RoHas,0,sizeof(int)*n*lev);
	int CoHas[n][lev];
	memset(CoHas,0,sizeof(int)*n*lev);
	int count=0,alp=0,reFlag=0;
	for(int i=0;i<n;i++){
                                
                                
                for(int j=0;j<n;j++){
                
               int val=rand()%10;
               while(1){
                        
                        if((val!=0)&& (RoHas[i][val]==0 && CoHas[j][val]==0)){
                                RoHas[i][val]=1;
                                CoHas[j][val]=1;
                                count++;
                                break;
                        }
                         /*BackTracking*/
                        int zpe=0;
                        for(int z=1;z<=9;z++){
                                if(RoHas[i][z]==1 ||  CoHas[j][z]==1) {
                                zpe++; 
                                } 
                        
                        }
                        
                        if(zpe==9)
                        {
                            memset(RoHas,0,sizeof(int)*n*lev);
                        	memset(CoHas,0,sizeof(int)*n*lev);
                                reFlag=1;
                                break;
                        }
                             
                         val=rand()%10;
                         
               }
                          //Under verification 
                        if(reFlag==1){
                        reFlag=0;
                        i=-1;
                        break;
                        }
                
               a[i][j]=val;
                }

                      

        }
        cout<<" Sudoku \n"<<endl;
        for(int i=0;i<n;i++){
                if(i%3==0){
                                
                                        for(int i=0;i<n;i++){
                                        cout<<"  ";
                                        }
                                cout<<endl;
                                }
                for(int j=0;j<n;j++){
          if(j%3==0) cout<<"  ";
          cout<<a[i][j]<<" ";
                }
                cout<<endl;
        }
        
       
        
	return 0;
}
