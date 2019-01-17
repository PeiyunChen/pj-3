#include <bits/stdc++.h>

enum PlayStatus
{
    // not important
};

enum Color
{
    White, // Initital 0
    Blue,  // Player One
    Red,   // Player Two
    Black  //Explosion
};

namespace playerTwo
{



class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor){
            //int i=0,j=0;
            //x=i;
            //y=j;
            // Your Code
            int k=0;
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
//四周是藍色 而且藍色是可以連環炸的 就詐


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
//四周是藍色的
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

                        if(Record[i][j] == Max[i][j] -3 ){

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

}; // namespace playerOne

namespace playerOne
{
class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor){
            //int i=0,j=0;
            //x=i;
            //y=j;
            // Your Code
            int k=0;
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

            for(int i =0;i<5 ; i++){
                for(int j = 0; j < 6 ; j++){
                    if(color[i][j]==inputColor || color[i][j]==White){

                        if(Record[i][j] == Max[i][j] -2 && get_place(i,j)==0){

                            x=i;
                            y=j;

                            return;
                        }
                    }
                }
            }


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
            }
            for(int i =0;i<max;i++){

                for(int j=0;j<6;j++){
                    if(color[i][j]==inputColor || color[i][j]==White){

                        if(Record[i][j]==3){

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
                        x=i;
                        y=j;

                        color[x][y]=inputColor;
                        Record[x][y]++;

                        return;
                    }

                }
            }

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
}; // namespace playerTwo

//////////////// GAME ////////////////

void init(int record[][6], Color color[][6], int Max[][6])
{
    const int Rows = 5;
    const int Cols = 6;

    for (int i = 0; i < Rows; i++)
        for (int j = 0; j < Cols; j++)
        {
            color[i][j] = White;
            record[i][j] = 0;

            // MAX
            if ((i == 0 || i == Rows - 1) && (j == 0 || j == Cols - 1))
                Max[i][j] = 2;
            else if (i == 0 || i == Rows - 1 || j == 0 || j == Cols - 1)
                Max[i][j] = 3;
            else
                Max[i][j] = 4;
        }
}

void explode(Color myColor, int record[][6], int Max[][6], Color color[][6], int I, int J)
{
    const int Rows = 5;
    const int Cols = 6;

    // if not white or mycolor
    if (color[I][J] == Black)
        return;

    // if out of range
    if (I < 0 || Rows <= I || J < 0 || Cols <= J)
        return;

    color[I][J] = myColor;
    record[I][J] += 1;

    if (record[I][J] == Max[I][J])
    {
        color[I][J] = Black;
        explode(myColor, record, Max, color, I - 1, J);
        explode(myColor, record, Max, color, I, J - 1);
        explode(myColor, record, Max, color, I + 1, J);
        explode(myColor, record, Max, color, I, J + 1);
    }
}

int takeStep(Color myColor, int record[][6], int Max[][6], Color color[][6], int I, int J)
{
    const int Rows = 5;
    const int Cols = 6;

    // if not white or mycolor
    if (color[I][J] != myColor && color[I][J] != White)
        return -1;

    // if out of range
    if (I < 0 || Rows <= I || J < 0 || Cols <= J)
        return -2;

    color[I][J] = myColor;
    record[I][J] += 1;

    if (record[I][J] == Max[I][J])
    {
        color[I][J] = Black;
        explode(myColor, record, Max, color, I - 1, J);
        explode(myColor, record, Max, color, I, J - 1);
        explode(myColor, record, Max, color, I + 1, J);
        explode(myColor, record, Max, color, I, J + 1);
    }

    return 0;
}

void print_err_msg(int player_num, int err, int I, int J)
{
    switch (err)
    {
    case -1:
        std::cout << "player " << player_num << " not your color or is already black!\n";
        break;
    case -2:
        std::cout << "player " << player_num << " out of range!\n";
        break;
    }
}

void print(int record[][6], Color color[][6], int I, int J)
{
    const int Rows = 5;
    const int Cols = 6;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (i == I && j == J)
            {
                char c = (color[i][j] == Red) ? 'O' : (color[i][j] == Blue) ? 'X' : (color[i][j] == White) ? '.' : '-';
                if (color[i][j] != Black && color[i][j] != White)
                    printf("'%c%d'", c, record[i][j]);
                else
                    printf("'%c' ", c);
            }
            else
            {
                char c = (color[i][j] == Red) ? 'O' : (color[i][j] == Blue) ? 'X' : (color[i][j] == White) ? '.' : '-';
                if (color[i][j] != Black && color[i][j] != White)
                    printf(" %c%d ", c, record[i][j]);
                else
                    printf(" %c  ", c);
            }
        }
        printf("\n");
    }
    printf("\n");
}

bool ifGameOver(Color color[][6])
{
    const int Rows = 5;
    const int Cols = 6;

    bool gameOver1 = true;
    for (int i = 0; i < Rows; i++)
        for (int j = 0; j < Cols; j++)
        {
            if (color[i][j] == White || color[i][j] == Blue)
            {
                gameOver1 = false;
                break;
            }
        }

    bool gameOver2 = true;
    for (int i = 0; i < Rows; i++)
        for (int j = 0; j < Cols; j++)
        {
            if (color[i][j] == White || color[i][j] == Red)
            {
                gameOver2 = false;
                break;
            }
        }

    return gameOver1 | gameOver2;
}

int main()
{
    int record[5][6];
    Color color[5][6];
    int Max[5][6];

    init(record, color, Max);

    playerOne::Student player1;
    playerTwo::Student player2;

    while (1)
    {
        player1.makeMove(record, Max, color, Blue);
        printf("X -- I: %d, J: %d\n", player1.getX(), player1.getY());
        print(record, color, player1.getX(), player1.getY());
        int err_msg = takeStep(Blue, record, Max, color, player1.getX(), player1.getY());
        if (err_msg != 0)
        {
            print_err_msg(1, err_msg, player1.getX(), player1.getY());
            break;
        }

        if (ifGameOver(color))
        {
            break;
        }

        player2.makeMove(record, Max, color, Red);
        printf("O -- I: %d, J: %d\n", player2.getX(), player2.getY());
        print(record, color, player2.getX(), player2.getY());
        err_msg = takeStep(Red, record, Max, color, player2.getX(), player2.getY());
        if (err_msg != 0)
        {
            print_err_msg(2, err_msg, player2.getX(), player2.getY());
            break;
        }

        if (ifGameOver(color))
        {
            break;
        }
    }

    print(record, color, 100, 100);
}






