#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct player 
{
  int board[40] = {0}
  int money = 0;
};

void output (vector <string> print)
{

  for (int t = 0; t < length; t++)
            {
                
                if (t < (length - 1))
                {
                    
                    overall = overall + collective[t].length();
                    determine = (collective[(t + 1)].length() + 1);
                    total = overall + determine;
                    
                    if ((overall < N) && (total <= N))
                    {
                        toprint.push_back(collective[t]);
                        overall ++;
                    }
                    
                    else if ((overall <= N) && (total > N))
                    {
                        toprint.push_back(collective[t]);
                        
                        length_2 = toprint.size();
                        extraspace = N - overall;
                        
                        min = length_2 - 1;
                        
                        if(min == 0)
                        {
                            final.push_back(toprint[0]);
                            
                            for (int r = 0; r < extraspace; r++)
                            {
                                final.push_back(space);
                            }
                            
                            final.push_back(flag_3);
                        }
                        
                        else {
                            
                            first_comp = extraspace / min;
                            second_comp = extraspace % min;
                            
                            
                            
                            for (int k = 0; k < min; k++)
                            {
                                final.push_back(toprint[k]);
                                final.push_back(space);
                                
                                for (int t = 0; t < first_comp; t++)
                                {
                                    final.push_back(space);
                                }
                                
                                if(second_comp > 0)
                                {
                                    final.push_back(space);
                                    second_comp -= 1;
                                }
                            }
                            
                            final.push_back(toprint[min]);
                            final.push_back(flag_3);
                        }
                        
                        for(int p = 0; p < length_2; p++)
                        {
                            toprint.pop_back();
                        }
                        
                        overall = 0;
                    }
                    
                    else
                    {
                        output = collective[t];
                        
                        final.push_back(output);
                        final.push_back(flag_3);
                        
                        overall = 0;
                    }
                }
                
                else
                {
                    overall = overall + collective[t].length();
                    
                    
                    if (overall <= N)
                    {
                        toprint.push_back(collective[t]);
                        
                        length_2 = toprint.size();
                        extraspace = N - overall;
                        
                        min = length_2 - 1;
                        
                        if(min == 0)
                        {
                            final.push_back(toprint[0]);
                            
                            for (int r = 0; r < extraspace; r++)
                            {
                                final.push_back(space);
                            }
                            
                            final.push_back(flag_3);
                        }
                        
                        else {
                            
                            first_comp = extraspace/min;
                            second_comp = extraspace%min;
                            
                            for (int k = 0; k < min; k++)
                            {
                                final.push_back(toprint[k]);
                                final.push_back(space);
                                
                                for (int t = 0; t < first_comp; t++)
                                {
                                    final.push_back(space);
                                }
                                
                                if(second_comp > 0)
                                {
                                    final.push_back(space);
                                    second_comp --;
                                }
                            }
                            
                            final.push_back(toprint[min]);
                            final.push_back(flag_3);
                            
                        }
                    }
                    
                    
                    else
                    {
                        final.push_back(collective[t]);
                        final.push_back(flag_3);
                    }
                }
                
            }
}

struct cost
{
  int purchase[40] = {0, 60, 0, 60, 0, 200, 100, 0, 100, 120, 140, 150, 140, 160, 200, 180, 0, 180, 200, 0, 220, 0, 220, 240, 200, 260, 260, 150, 280, 0, 300, 300, 0, 320, 200, 0, 350, 0, 400}
 
  int rent[40] = {0, 2, 0, 4, 0, 25, 6, 0, 6, 8, 10, 1, 10, 12, 14, 14, 0, 16, 25, 0, 18, 0, 18, 20, 25, 22, 22, 1, 24, 0, 26, 26, 0, 28, 25, 0, 35, 0, 50}
  
  int rent_double[40] = {0, 4, 0, 8, 0, 0, 12, 0, 12, 16, 20, 0, 20, 24, 28, 28, 0, 32, 0, 0, 36, 0, 36, 40, 0, 44, 44, 0, 48, 0, 52, 52, 0, 56, 0, 0, 70, 0, 100}
  
  int rent_house_1[40] = {0, 4, 0, 8, 0, 50, 12, 0, 12, 16, 20, 1, 20, 24, 28, 28, 0, 32, 50, 0, 36, 0, 36, 40, 50, 44, 44, 1, 48, 0, 52, 52, 0, 56, 50, 0, 70, 0, 100}
  
  int rent_house_2[40] = {0, 60, 0, 60, 0, 200, 100, 0, 100, 120, 140, 150, 140, 160, 200, 180, 0, 180, 200, 0, 220, 0, 220, 240, 200, 260, 260, 150, 280, 0, 300, 300, 0, 320, 200, 0, 350, 0, 400}
  
  int rent_house_3[40] = {0, 60, 0, 60, 0, 200, 100, 0, 100, 120, 140, 150, 140, 160, 200, 180, 0, 180, 200, 0, 220, 0, 220, 240, 200, 260, 260, 150, 280, 0, 300, 300, 0, 320, 200, 0, 350, 0, 400}
  
  int rent_hotel[40] = {0, 60, 0, 60, 0, 200, 100, 0, 100, 120, 140, 150, 140, 160, 200, 180, 0, 180, 200, 0, 220, 0, 220, 240, 200, 260, 260, 150, 280, 0, 300, 300, 0, 320, 200, 0, 350, 0, 400}
};

void buy (int *player, int *main, int *money, int position)
{
  * money -= cost[position];
  * player[position] ++;
  * main[position] ++;
  return;
}

void trade (int *player_1, int *player_2, int *money_1, int *money_2, int position)
{
  *player_1
}

using namespace std;
int main(int argc, char *argv[])
{

  int num_palyer, transfer_num;
  stirng enter_hold, transfer;
  vector <string> player_name;
  vector <double> money_player;


  cout << " Welcome to Monopoly Tracker, you will need to provide the application with some information so that it can advise if a move is great, good, satisfactory, or bad. Have fun!" << endl;
  cout << " Please press the enter key to continue, this applies for the rest of the game as well: " << endl << endl;

  cin >> enter_hold << endl;

  cout << " Please enter in the number of players within this current game, (including yourself): " << endl << endl;

  cin >> num_player << endl;

  cout << " Please enter names for each player, these will be the names you will continue to refer to them with. Example: 1 Name (player number, player name): " << endl;

  for (int i = 1; i <= num_player; i++)
  {
    cout << " Please enter in the name of player " << i << ": " << endl << endl;
    cin >> transfer;
    cout << endl << endl;
    player_name.push_back(transfer);
  }

  cout << " You must now enter in the amount of money each player holds, if you are unsure about how much money a player has enter in 0. " << endl;

  for int(j = 0; j < num_player; j++)
  {
    cout << " Please enter in the amount of money " << player_name[j] << " currently holds:" << endl; endl;
    cin >> transfer_num;
    cout << endl << endl;
    money_player.push_back(transfer_num);
  }

  cout << " You must now enter in the location that each player is currently at : " << endl;
  cout << " If you are playing the "
  for (int r = 0; r < num_playe; r++)
  {

  }
}