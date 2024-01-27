// Task 3 Tic-Tac-Toe Game.
#include<iostream>
using namespace std ;

#define size 3


void CreateBoard (char num[size][size]){
    cout << "-------------\n"; 
    int i=0;
   
    while(i<3){
         cout << "| "; 
          int j=0;
         while(j<3){
            cout<<num[i][j];
             cout << "| ";
             j++;
         }
         i++;
          cout << "\n-------------\n"; 
    }
    
   
}
//checking for win
bool checkWin(char num[size][size], char Gamer){

     if (num[0][0] == Gamer && num[1][1] == Gamer
        && num[2][2] == Gamer) 
        return true; 
    if (num[0][2] == Gamer && num[1][1] == Gamer 
        && num[2][0] == Gamer) 
        return true; 
 for (int i = 0; i < size; i++) { 
        if (num[i][0] == Gamer && num[i][1] == Gamer 
            && num[i][2] == Gamer) 
            return true; 
        if (num[0][i] == Gamer && num[1][i] ==Gamer
            && num[2][i] == Gamer) 
            return true; 
    } 
   
    return false;
} 
int main(){
    
    char Gamer = 'X'; 
    int row, col; 
    int i;
    char num[size][size]={ { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' } }; 

      cout << "Hello,Gamers !! Now we are going to play Tic-Tac-Toe Game"<<endl;  
for (i = 0; i< 9; i++) { 
        
        CreateBoard(num); 
        while (1) { 
            cout << "Gamer " << Gamer;
            cout<< ", enter row  and column "<<endl; 
            
            cin >> row >> col; 
  
            if (num[row][col] != ' ' || row < 0 || row > 2 
                || col < 0 || col > 2) { 
                cout << " Wrong move.Please, Try again.\n"; 
            } 
            else { 
                break; 
            } 
        } 
  
        
        num[row][col] = Gamer; 
  
        // Checking for a win after  a move 
        if (checkWin(num, Gamer)) { 
            CreateBoard(num); 
            cout << "Gamer " << Gamer << " wins"<<endl; 
            break; 
        } 
  
        // Choosing another Gamer
        if(Gamer== 'X'){
         Gamer = 'O' ;}
         else {
         Gamer=  'X'; 
         }
    } 

  cout<<"Game Ends Here!!";

    CreateBoard(num); 
  
    // Check for a draw 
    if (i == 9 && !checkWin(num, 'X') 
        && !checkWin(num, 'O')) { 
        cout << "It's a draw!"<<endl; 
    } 
  
    return 0; 
    




}