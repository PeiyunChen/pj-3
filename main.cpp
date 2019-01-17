class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor){
            //int i=0,j=0;
            //x=i;
            //y=j;
            // Your Code
            int k=0;
            int left =0;
            x=0;
            y=0;
            if(color[x][y]==White && Record[x][y]==0){
                color[x][y]=inputColor;
                Record[x][y]++;
                return;
            }
                        x=0;
            y=5;

            if(color[x][y]==White && Record[x][y]==0){
                color[x][y]=inputColor;
                Record[x][y]++;
                return;
            }
            x=4;
            y=0;
            if(color[x][y]==White && Record[x][y]==0){
                color[x][y]=inputColor;
                Record[x][y]++;
                return;
            }
            x=4;
            y=5;
            if(color[x][y]==White && Record[x][y]==0){
                color[x][y]=inputColor;
                Record[x][y]++;
                return;
            }
            //???拇????摰?閬?隞暻潔?
/*
            for(int i=0;i<5;i++){
                for(int j =0; j<6;j++){
                    if(color[i][j]!=Black)
                        left++;
                }
            }
            
            if(left==6){
                x=3;
                y=2;
                return;
                
            }*/
            /*

            x=0;
            y=0;
            if(Record[x][y]==1 && color[x][y]==inputColor){
                Record[x][y]++;
                return;
            }
            x=4;
            y=0;
            if(Record[x][y]==1 && color[x][y]==inputColor){
                Record[x][y]++;
                return;
            }
            x=0;
            y=5;
            if(Record[x][y]==1 && color[x][y]==inputColor){
                Record[x][y]++;
                return;
            }
            x=4;
            y=5;
            if(Record[x][y]==1 && color[x][y]==inputColor){
                Record[x][y]++;
                return;
            }
*/
//??航???????臬隞仿??貊? 撠梯?


            for(int i =0;i<5 ; i++){
                for(int j = 0; j < 6 ; j++){
                    if(color[i][j]==inputColor || color[i][j]==White){                        
                        if(Record[i][j] == Max[i][j] -1 && ((color[i+1][j]==Blue && Record[i+1][j] == Max[i+1][j] -1) || (color[i-1][j]==Blue&&Record[i-1][j] == Max[i-1][j] -1) || (color[i][j+1]==Blue&&Record[i][j+1] == Max[i][j+1] -1) || (color[i][j-1]==Blue&&Record[i][j-1] == Max[i][j-1] -1))){                        
                            x=i;
                            y=j;
                            return;
                        }
                    }
                }
            }
//??航??脩?
            for(int i =0;i<5 ; i++){
                for(int j = 0; j < 6 ; j++){
                    if(color[i][j]==inputColor || color[i][j]==White){                        
                        if(Record[i][j] == Max[i][j] -1 && (color[i+1][j]==Blue || color[i-1][j]==Blue || color[i][j+1]==Blue || color[i][j-1]==Blue)){                        
                            x=i;
                            y=j;
                            return;
                        }
                    }
                }
            }
            
            for(int i =4;i>=0 ; i--){
                for(int j = 5; j >=0  ; j--){
                    if(color[i][j]==inputColor || color[i][j]==White){
                        
                        if(Record[i][j] == Max[i][j] -2 ){
                        
                            x=i;
                            y=j;
                            
                            return;
                        }
                    }
                }
            }
             for(int i =4;i>=0 ; i--){
                for(int j = 5; j >= 0 ; j--){
                    if(color[i][j]==inputColor || color[i][j]==White){
                        
                        if(Record[i][j] == 1){
                        
                            x=i;
                            y=j;
                            
                            return;
                        }
                    }
                }
            }

            for(int i =4;i>=0 ; i--){
                for(int j = 5; j >= 0 ; j--){
                    if(color[i][j]==inputColor || color[i][j]==White){
                        
                        if(Record[i][j] == 0){
                        
                            x=i;
                            y=j;
                            
                            return;
                        }
                    }
                }
            }

            for(int i =4;i>=0 ; i--){
                for(int j = 5; j >= 0 ; j--){
                    if(color[i][j]==inputColor || color[i][j]==White){
                        
                        if(Record[i][j] < Max[i][j] -1 && (color[i+1][j]!=Blue && color[i-1][j]!=Blue && color[i][j+1]!=Blue && color[i][j-1]!=Blue)){  
                        
                            x=i;
                            y=j;
                            
                            return;
                        }
                    }
                }
            }




/*
            int max=5;
            if(k ==0) max = 4;
            
            for(int i =0;i<5;i++){
                
                for(int j=0;j<6;j++){
                    if(color[i][j]==inputColor || color[i][j]==White){
                        
                        if(Record[i][j]==1 && get_place(i,j)==0){
                        
                            x=i;
                            y=j;
                            
                            return;
                        }
                        
                        
                        
                    }

                }
            }
            for(int i =0;i<max;i++){
                
                for(int j=0;j<6;j++){
                    if(color[i][j]==inputColor || color[i][j]==White){
                        
                        if(Record[i][j]==2 && get_place(i,j)==0){
                        
                            x=i;
                            y=j;
                            
                            return;
                        }
                        
                        
                        
                    }

                }
            }*/
            for(int i =4;i>=0;i--){
                
                for(int j=5;j>=0;j--){
                    if(color[i][j]==inputColor || color[i][j]==White){
                        
                        if(get_place(i,j)==0){
                            if(Record[i][j]<Max[i][j]-1){
                                x=i;
                                y=j;
                                
                                return;
                            }


                        }

                        
                        
                        
                    }

                }
            }
            for(int i =4;i>=0;i--){
                
                for(int j=5;j>=0;j--){
                    if(color[i][j]==inputColor || color[i][j]==White){
                        
                        if(Record[i][j]<Max[i][j]-1){
                            x=i;
                            y=j;
                            
                            return;
                        }  
                            
                       
                    }

                }
            }
            for(int i =4;i>=0;i--){
                
                for(int j=5;j>=0;j--){
                    if(color[i][j]==inputColor || color[i][j]==White){

                            
                            x=i;
                            y=j;
                            
                            return;
                        
                        
                        
                    }

                }
            }
            /*
            for(int i =0;i<max;i++){
                
                for(int j=0;j<6;j++){
                    if(color[i][j]==inputColor || color[i][j]==White){
                        x=i;
                        y=j;
                        
                        color[x][y]=inputColor;
                        Record[x][y]++;
                        
                        return;
                    }

                }
            }
*/
            /*
            for( i=0,j=0;i<5,j<6;i++,j++){
                if(Record)
            }*/
        }
        // Any Code You Want to Add
        int get_place(int i,int j){
            if(i==0||i==4)return 0;
            else if(j==0||j==5)return 0;
            else return 1;
        }
        int getX(){
            // Your Code
            return x;
        }
        int getY(){
            // Your Code
            return y;
        }
    private:
        int x;
        int y;
    };
