#include<bits/stdc++.h>
using namespace std;
int r, c;
int x, y;
char **gF;
int dataSet();
void MakeCaller(vector<pair<int, int>> &Hp){
        for(int i=0;i<5;i++){
            x = Hp[i].first;
            y = Hp[i].second;
            x++;
            y++;
            dataSet();
        }
}
int dataSet(){
     vector<pair<int, int>> Hp; 
     static int FP=1;
    /* for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                    cout<<gF[i][j]<<" ";
            }cout<<endl;
        }
        /* the storing flages */
           // int vC=0;
            //cout<<x<<" x "<<y<<" "<<endl;
            while(true){
                       x--;
                y--;
                bool fl=true;
                       for(int i=x-1;i<=x+1;i++){
                                for(int j= y-1;j<=y+1;j++){
                                    if((i>=0 && i<r) && (j>=0 && j<c)){
                                        //Checking trees     
                                        if(gF[i][j]=='T'){
                                        Hp.push_back(make_pair(i,j));
                                            //cout<<" i "<<i <<" j "<<j<<endl;
                                            gF[i][j]='F';
                                            fl=false;
                                        }    
                                    }
                                    
                                }
                         }
                         if(fl){
                             //cout<<FP<<endl;
                             //" mintues taken "<<endl;
                             break;
                         }
                         else {
                          // cout<<" called "<<endl;
                           FP++;
                           MakeCaller(Hp);
                          
                         } 
                         
                //break;
              
        }
        
    
      return FP;
}
int main() {
        
         cin>>r>>c;
        //initial fire
         cin>>x>>y;
        gF = new char* [r];  
    for(int i=0;i<r;i++){
        gF[i] = new char [c];
    }    
    for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                    cin>>gF[i][j];
            }
        }
        // calling dataSet()
       int count=  dataSet();
    cout<<count<<endl;
    
      for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                    cout<<gF[i][j]<<" ";
            }cout<<endl;
        }
    
    
        
    return 0;
}
