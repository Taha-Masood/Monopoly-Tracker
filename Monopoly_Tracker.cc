#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void print_board (int current[40])
{
  for (int i = 0; i <= 10; i++)
    {
      cout << current[i] << "   ";
    }

  cout << endl << endl;

  for (int j = 11; j < 20; j++)
    {
      cout << current[(40 - ((j) % 10))];

      for (int t = 0; t < 39; t++)
	{
	  cout << " ";
	}

      cout << current[j] << endl << endl;
    }

  for (int k = 30; k > 19; k--)
    {
      cout << current[k] << "   ";
    }

  cout << endl << endl;
}
struct player_profile
{
    string name;
    int value;
    vector <int> position;
    vector <int> money;
    vector <int> property;
};

struct board
{
  int layout[40];
};

void money_change(vector <player_profile> & current_player, int player_number, int amount_money)
{
  int location, current_money, overall_money;

  location = current_player[player_number].money.size();
  current_money = current_player[player_number].money[(location-1)];

  overall_money = current_money + amount_money;
  current_player[player_number].money.push_back(overall_money);
}

void property_change(struct board prices, int player_number, int property_number, struct board &owned)
{
  if (owned.layout[property_number - 1] == player_number)
  {
    owned.layout[property_number - 1] = 0;
  }

  else if ((owned.layout[property_number - 1] == player_number) && (prices.layout[property_number - 1] != 0))
  {
    owned.layout[property_number - 1] = player_number;
  }
}

void location_change(vector <player_profile> & current_player, struct board & current, int determine_player, int determine_location)
  {
    int size, current_location, value;

    value = current_player[determine_player].value;
    size = current_player[determine_player].position.size();
    current_location = current_player[determine_player].position[size - 1];
    current_player[determine_player].position.push_back(determine_location);

    current.layout[(current_location - 1)] -= value;
    current.layout[(determine_location - 1)] += value;
  }

  int player_number(vector <player_profile> current_player)
  {
    int number_of_players, determine, break_loop, number_player;
    string transfer_name;

    number_of_players = current_player.size();
    break_loop = 0;

    cout << " Please indicate which player you are interested in (enter in 0 if this is not the player you are interested in and 1 if this is the player you are interested in): " << endl << endl;

    while (break_loop == 0)
      {

        if (number_player >= number_of_players)
  	     {
  	        cout << "You have seen all characters in the game!" << endl << endl;
  	        number_player = 0;
  	     }

        transfer_name = current_player[number_player].name;

        cout << "Is " << transfer_name <<  " the player which you are refering to (0 is no, 1 is yes): " << endl << endl;

        cin >> determine;
        cout << endl << endl;

        if (determine == 0)
  	     {
  	        number_player ++;
  	        continue;
  	     }

        else if (determine == 1)
  	     {
  	        break_loop = 1;
  	        break;
  	     }

        else
  	     {
  	        cout << "The value you entered is invalid, try again." << endl << endl;
  	     }
      }

    return number_player;
  }

  struct print_value
  {
      string justification;
      string order;
  };

  struct output
  {
      vector <string> output_line;
      int space;
  };

  void print_function (vector <output> organized, struct print_value current, int N)
  {
      string space = " ";
      int space_1, space_2, length_of_vector, length_of_struct;

      length_of_struct = organized.size();


  if(current.order == "f")
  {
      if(current.justification == "right")
      {
          for (int i = 0; i < length_of_struct; i++)
          {
              if (organized[i].space < 0)
              {
                  organized[i].space = 0;
                  organized[i].output_line[0] = (organized[i].output_line[0].substr(0, N));
              }

              length_of_vector = organized[i].output_line.size();

              for (int t = 0; t < length_of_vector; t++)
              {
                  cout << organized[i].output_line[t];
              }

              for (int j = 0; j < organized[i].space; j++)
              {
                  cout << space;
              }

              cout << endl;
          }
      }

      if(current.justification == "left")
      {
          for (int i = 0; i < length_of_struct; i++)
          {
              if (organized[i].space < 0)
              {
                  organized[i].space = 0;
                  organized[i].output_line[0] = (organized[i].output_line[0].substr(0, N));
              }

              length_of_vector = organized[i].output_line.size();

              for (int j = 0; j < organized[i].space; j++)
              {
                  cout << space;
              }

              for (int t = 0; t < length_of_vector; t++)
              {
                  cout << organized[i].output_line[t];
              }

              cout << endl;
          }
      }

      if(current.justification == "close")
      {
          for (int i = 0; i < length_of_struct; i++)
          {
              if (organized[i].space < 0)
              {
                  organized[i].space = 0;
                  organized[i].output_line[0] = (organized[i].output_line[0].substr(0, N));
              }

              space_1 = (((organized[i].space)/2) + ((organized[i].space)%2));
              space_2 = ((organized[i].space)/2);

              length_of_vector = organized[i].output_line.size();

              for (int j = 0; j < space_1; j++)
              {
                  cout << space;
              }

              for (int t = 0; t < length_of_vector; t++)
              {
                  cout << organized[i].output_line[t];
              }

              for (int s = 0; s < space_2; s++)
              {
                  cout << space;
              }

              cout << endl;
          }
      }

      if(current.justification == "joined")
      {
          for (int i = 0; i < length_of_struct; i++)
          {
              if (organized[i].space < 0)
              {
                  organized[i].space = 0;
                  organized[i].output_line[0] = (organized[i].output_line[0].substr(0, N));
              }

              length_of_vector = organized[i].output_line.size();

              if (length_of_vector == 1)
              {
                cout << organized[i].output_line[0];

                for(int r = 0; r < organized[i].space; r++)
                {
                    cout << space;
                }
              }

              else
              {

              if ((length_of_vector - 1) != 0)
              {
                space_1 = organized[i].space/(length_of_vector - 1);
                space_2 = organized[i].space%(length_of_vector - 1);
              }

              for (int t = 0; t < (length_of_vector - 1); t++)
              {
                  cout << organized[i].output_line[t];

                  for(int r = 0; r < space_1; r++)
                  {
                      cout << space;
                  }

                  if (space_2 > 0)
                  {
                      cout << space;
                      space_2 --;
                  }
              }

              cout << organized[i].output_line[(length_of_vector - 1)] << endl;
            }
          }
      }
  }

  else
  {
      if(current.justification == "right")
      {
          for (int i = (length_of_struct - 1); i >= 0; i--)
          {
              if (organized[i].space < 0)
              {
                  organized[i].space = 0;
                  organized[i].output_line[0] = (organized[i].output_line[0].substr(0, N));
              }

              length_of_vector = organized[i].output_line.size();

              for (int t = 0; t < length_of_vector; t++)
              {
                  cout << organized[i].output_line[t];
              }

              for (int j = 0; j < organized[i].space; j++)
              {
                  cout << space;
              }

              cout << endl;
          }
      }

      if(current.justification == "left")
      {
          for (int i = (length_of_struct - 1); i >= 0; i--)
          {
              if (organized[i].space < 0)
              {
                  organized[i].space = 0;
                  organized[i].output_line[0] = (organized[i].output_line[0].substr(0, N));
              }

              length_of_vector = organized[i].output_line.size();

              for (int j = 0; j < organized[i].space; j++)
              {
                  cout << space;
              }

              for (int t = 0; t < length_of_vector; t++)
              {
                  cout << organized[i].output_line[t];
              }

              cout << endl;
          }
      }

      if(current.justification == "closed")
      {
          for (int i = (length_of_struct-1); i >= 0; i--)
          {
              if (organized[i].space < 0)
              {
                  organized[i].space = 0;
                  organized[i].output_line[0] = (organized[i].output_line[0].substr(0, N));
              }

              space_1 = ((organized[i].space)/2 + (organized[i].space)%2);
              space_2 = ((organized[i].space)/2);

              length_of_vector = organized[i].output_line.size();

              for (int j = 0; j < space_1; j++)
              {
                  cout << space;
              }

              for (int t = 0; t < length_of_vector; t++)
              {
                  cout << organized[i].output_line[t];
              }

              for (int s = 0; s < space_2; s++)
              {
                  cout << space;
              }

              cout << endl;
          }
      }

      if(current.justification == "joined")
      {
          for (int i = (length_of_struct-1); i >= 0; i--)
          {
              if (organized[i].space < 0)
              {
                  organized[i].space = 0;
                  organized[i].output_line[0] = (organized[i].output_line[0].substr(0, N));
              }

              length_of_vector = organized[i].output_line.size();

              if (length_of_vector == 1)
              {
                cout << organized[i].output_line[0];

                for(int r = 0; r < organized[i].space; r++)
                {
                    cout << space;
                }
              }

              else
              {

              if ((length_of_vector - 1) != 0)
              {
                space_1 = organized[i].space/(length_of_vector - 1);
                space_2 = organized[i].space%(length_of_vector - 1);
              }

              for (int t = 0; t < (length_of_vector - 1); t++)
              {
                  cout << organized[i].output_line[t];

                  for(int r = 0; r < space_1; r++)
                  {
                      cout << space;
                  }

                  if (space_2 > 0)
                  {
                      cout << space;
                      space_2 --;
                  }
              }

              cout << organized[i].output_line[(length_of_vector - 1)] << endl;
            }
          }
      }
  }
  }

  int phrase_print_function (vector <output> organized, struct print_value current, string phrase, int N)
  {
      int total_length, contains, counter, length_segment;
      vector <output> updated;

      struct output temporary;
      counter = 0;

      total_length = organized.size();

      for (int i = 0; i < total_length; i++)
      {
          length_segment = organized[i].output_line.size();
          contains = 0;

          for (int t = 0; t < length_segment; t++)
          {
              if ((organized[i].output_line[t].find(phrase)) != std::string::npos)
              {
                  contains ++;
              }
          }

              if (contains > 0)
              {
                  updated.push_back(temporary);
                  updated[counter].output_line = organized[i].output_line;
                  updated[counter].space = organized[i].space;

                  counter ++;
              }

      }

      if (counter == 0)
      {
        return 0;
      }

      else
      {
          print_function(updated, current, N);
          return 0;
      }
  }

  int specific_print_function (vector <output> organized, struct print_value current, int line_number, int N)
  {
      int total_lines;
      struct output temporary;

      vector <output> updated;

      total_lines = organized.size();

      if(line_number < 0)
      {
        return 0;
      }

      else if(line_number >= total_lines)
      {
        return 0;
      }

      if(current.order == "r")
      {
          line_number = (organized.size() - 1) - line_number;
          current.order = "f";
      }

          updated.push_back(temporary);
          updated[0].space = organized[line_number].space;
          updated[0].output_line = organized[line_number].output_line;

          print_function(updated, current, N);
          return 0;
  }

  vector <output> input_sort(int length, vector <string> text)
  {
      vector <output> organized;
      vector <string> transfer;
      struct output temporary;

      int current_length, next_length, length_overall, final_length, counter;
      string space = " ", send;

      counter = 0;

      length_overall = text.size();

      for (int i = 0; i < length_overall; i++)
      {
          current_length = 0;

          while(i < (length_overall - 1))
          {
              current_length = current_length + text[i].size();
              next_length = current_length + text[(i+1)].size() + 1;

              send = text[i];
              transfer.push_back(send);

              if(next_length <= length)
              {
                  transfer.push_back(space);
                  current_length ++;
              }
              else
              {
                  break;
              }

              i++;
          }

          if(i == (length_overall - 1))
          {
              send = text[i];
              transfer.push_back(send);
              current_length = current_length + text[i].size();
              i++;
          }

          final_length = length - current_length;

          organized.push_back(temporary);
          organized[counter].space = final_length;
          organized[counter].output_line = transfer;

          counter ++;
          transfer.clear();
      }

      return organized;
  }

int level_threat(vector <player_profile> current_player, int player_number, struct board current)
{
  vector <int> location;
  double ratio, position, other_location, number, difference, value, total, size;

  total = 0;
  size = current_player[player_number].position.size();
  position = current_player[player_number].position[size - 1];
  number = current_player.size();

  for (int i = 0; i < number; i++)
  {
      size = current_player[i].position.size();
      difference = current_player[i].position[size - 1];
      difference = position - difference;

      if (difference < 0)
      {
        difference += 40;
      }

      location.push_back(difference);
  }

  number = location.size();

  for(int i = 0; i < number; i++)
  {
    if((0 < value) && (value < 14))
    {
      total += 5;
    }

    else if((14 < value) && (value < 30))
    {
      total += 2;
    }

    else
    {
      total += 1;
    }
  }

  number = current_player.size();
  ratio = (total / number) / 2.0;

  if((0 < ratio) && (ratio < 0.5))
  {
    return 1;
  }

  else if((0.5 < ratio) && (ratio < 1))
  {
    return 2;
  }

  else if((1 < ratio) && (ratio < 1.5))
  {
    return 3;
  }

  else if((1.5 < ratio) && (ratio < 2))
  {
    return 4;
  }

  else if((2 < ratio))
  {
    return 5;
  }

  else
  {
    return 0;
  }
}

int level_price(struct board prices, int player_price, int property_number)
{
  double ratio, original_price;

  original_price = prices.layout[(property_number - 1)];
  ratio = player_price / original_price;

  if((0 < ratio) && (ratio < 0.5))
  {
    return 5;
  }

  else if((0.5 < ratio) && (ratio < 1))
  {
    return 4;
  }

  else if((1 < ratio) && (ratio < 1.5))
  {
    return 3;
  }

  else if((1.5 < ratio) && (ratio < 2))
  {
    return 2;
  }

  else if((2 < ratio))
  {
    return 1;
  }

  else
  {
    return 0;
  }
}

int level_property(vector <player_profile> current_player, struct board owned, int player_number)
{
  double total, current, equal, size, ratio;

  total = 0;
  current = 0;

  for(int i = 0; i < 40; i++)
  {
    if (owned.layout[i] != 0)
    {
      total ++;
    }
  }

  for(int t = 0; t < 40; t++)
  {
    if (owned.layout[t] == (player_number + 1))
    {
      current ++;
    }
  }

  size = current_player.size();
  equal = total / size;
  ratio = current / total;

  if((0 < ratio) && (ratio < 0.5))
  {
    return 1;
  }

  else if((0.5 < ratio) && (ratio < 1))
  {
    return 2;
  }

  else if((1 < ratio) && (ratio < 1.5))
  {
    return 3;
  }

  else if((1.5 < ratio) && (ratio < 2))
  {
    return 4;
  }

  else if((2 < ratio))
  {
    return 5;
  }

  else
  {
    return 0;
  }
}

int level_money(vector <player_profile> current_player, int player_number)
{
  double sum_of_money, equal_portion, ratio_of_money, current_money, length, size;

  length = current_player.size();
  sum_of_money = 0;

  for (int i = 0; i < length; i++)
  {
    size = current_player[i].money.size();
    sum_of_money += current_player[i].money[size - 1];
  }

  equal_portion = sum_of_money / length;

  size = current_player[player_number].money.size();
  current_money = current_player[player_number].money[size - 1];

  ratio_of_money = (current_money / equal_portion);

  if((0 < ratio_of_money) && (ratio_of_money < 0.5))
  {
    return 1;
  }

  else if((0.5 < ratio_of_money) && (ratio_of_money < 1))
  {
    return 2;
  }

  else if((1 < ratio_of_money) && (ratio_of_money < 1.5))
  {
    return 3;
  }

  else if((1.5 < ratio_of_money) && (ratio_of_money < 2))
  {
    return 4;
  }

  else if((2 < ratio_of_money))
  {
    return 5;
  }

  else
  {
    return 0;
  }
}

int level_buy_value(vector <player_profile> current_player, vector <player_profile> buy_player, struct board current, struct board owned, struct board prices, struct board rent)
{
  double player_number, player_price, money, property, player_property, price, threat, value, size;

  player_number = buy_player[0].value;
  player_price = buy_player[0].money[0];
  player_property = buy_player[0].property[0];

  money = level_money(current_player, player_number);
  property = level_property(current_player, owned, player_number);
  price = level_price(prices, player_price, player_property);
  threat = level_threat(current_player, player_number, current);

  value = money + property + price + threat;
  return value;
}

void level_buy(vector <player_profile> current_player, vector <player_profile> buy_player, struct board current, struct board owned, struct board prices, struct board rent)
{
  int value;

  value = level_buy_value(current_player, buy_player, current, owned, prices, rent);

  if ((0 <= value) && (value < 5))
  {
    cout << "This is a bad purchase!" << endl << endl;
  }

  else if ((5 <= value) && (value < 10))
  {
    cout << "This is a satisfactory purchase!" << endl << endl;
  }

  else if ((10 <= value) && (value < 15))
  {
    cout << "This is a good purchase!" << endl << endl;
  }

  else if ((15 <= value) && (value < 20))
  {
    cout << "This is a great purchase!" << endl << endl;
  }
}

void level_trade(vector <player_profile> current_player, vector <player_profile> trade_player, struct board current, struct board owned, struct board prices, struct board rent, int player_number)
{
  double ratio;
  int size, current_score, sum, value, number;
  vector <int> score;
  vector <player_profile> buy_player;
  string name;

  size = trade_player.size();

  for (int i = 0; i < size; i++)
  {
    buy_player.push_back(trade_player[i]);
    buy_player[0].value = trade_player[i].value;
    buy_player[0].name = trade_player[i].name;
    buy_player[0].position = trade_player[i].position;
    buy_player[0].money = trade_player[i].money;
    buy_player[0].property = trade_player[i].property;

    current_score = level_buy_value(current_player, buy_player, current, owned, prices, rent);
    score.push_back(current_score);

    buy_player.clear();
  }

  size = score.size();
  sum = 0;

  for(int t = 0; t < size; t++)
  {
    sum += score[t];
    if (trade_player[t].value == player_number)
    {
      number = t;
    }
  }

  value = score[number];
  ratio = (value / (sum / size));

  if((0 < ratio) && (ratio < 0.5))
  {
    cout << "This is a bad trade!" << endl << endl;
  }

  else if((0.5 < ratio) && (ratio < 1))
  {
    cout << "This is a satisfactory trade!" << endl << endl;
  }

  else if((1 < ratio) && (ratio < 1.5))
  {
    cout << "This is a good trade!" << endl << endl;
  }

  else if((1.5 < ratio) && (ratio < 2))
  {
    cout << "This is a great trade!" << endl << endl;
  }

  else if((2 < ratio))
  {
    cout << "If this trade goes through, you will probably win the game!" << endl << endl;
  }

}

int main (int argc, char *argv[])
{
  int number_player, transfer_number, property_number, determine, invalid_entry, break_loop, determine_print, determine_player, amount_money, determine_location, player_1, player_2, determine_number, transfer_price;
  string name_of_game, transfer_name, transfer_string;

  vector <player_profile> current_player;
  vector <player_profile> trade_player;
  vector <player_profile> buy_player;

  vector <int> player_one;
  vector <int> player_two;

struct player_profile transfer_struct;
  struct board current =  {0};
  struct board owned =    {0};
  struct board prices =   {0, 60, 0, 60, 0, 200, 100, 0, 100, 120, 140, 150, 140, 160, 200, 180, 0,
                          180, 200, 0, 220, 0, 220, 240, 200, 260, 260, 150, 280, 0, 300, 300, 0,
                          320, 200, 0, 350, 0, 400 };

  struct board rent =     {0, 2, 0, 4, 0, 25, 6, 0, 6, 8, 10, 1, 10, 12, 14, 14, 0, 16, 25, 0, 18,
                          0, 18, 20, 25, 22, 22, 1, 24, 0, 26, 26, 0, 28, 25, 0, 35, 0, 50 };

cout << "Welcome to Monopoly Tracker, you will need to provide this application with some information so that it can advise your next move. Have fun!" << endl;

cout << "Please enter in the name of the game: " << endl << endl;

    cin >> name_of_game;

cout << endl << "Please enter in the number of players within this current game (including yourself): " << endl << endl;

    cin >> number_player;

cout << endl << "Please enter names for each player, these will be the names you will continue to refer to them with. Example: 1 Name (player number, player name): " << endl << endl;

  for (int i = 1; i <= number_player; i++)
      {
          cout << "Please enter in the name of player " << i << ": " << endl << endl;
          cin >> transfer_name;
          cout << endl << endl;

          current_player.push_back(transfer_struct);
          current_player[(i - 1)].name = transfer_name;
          current_player[(i - 1)].value = i;
      }

cout << "You must now enter in the amount of money each player holds. " << endl << endl;

  for (int j = 0; j < number_player; j++)
      {
        transfer_name = current_player[j].name;

        cout << "Please enter in the amount of money " << transfer_name << " currently holds:" << endl << endl;
        cin >> transfer_number;
        cout << endl << endl;

        current_player[j].money.push_back(transfer_number);
      }

cout << "You must now enter in the location that each player is currently at, (1-40), with GO at 1 and Boardwalk at 40) : " << endl << endl;

  for (int t = 0; t < number_player; t++)
        {
          transfer_name = current_player[t].name;

          cout << "Please enter in the location " << transfer_name << " is currently at:" << endl << endl;
          cin >> transfer_number;
          cout << endl << endl;

          current_player[t].position.push_back(transfer_number);
        }

cout << "You must now enter in the number of properties that each player currently owns: " << endl << endl;

  for (int t = 0; t < number_player; t++)
          {
            transfer_name = current_player[t].name;

            cout << "Please enter in the number of properties " << transfer_name << " currently has:" << endl << endl;
            cin >> transfer_number;
            cout << endl << endl;

              for (int i = 0; i < transfer_number; i++)
                {
                  if (invalid_entry != 0)
                  {
                      i--;
                      invalid_entry = 0;
                  }

                  cout << "Please enter in the location of the number " << (i + 1) << " property that " << transfer_name << " has: " << endl << endl;
                  cin >> transfer_number;
                  cout << endl << endl;

                  if ((transfer_number > 0) && (transfer_number < 41) && (owned.layout[(transfer_number - 1)] == 0) && (prices.layout != 0))
                    {
                      owned.layout[(transfer_number - 1)] = (t + 1);
                      cout << "Thanks! " << endl << endl;
                    }

                  else
                    {
                      cout << "The entered property is already owned or cannot be owned! Please enter in the value again!" << endl;
                      cout << endl;
                      invalid_entry ++;
                    }

                }
          }


cout << "Thank you for inputting the appropriate data, you may now utilize Monopoly Tracker." << endl << endl;

while (true)
            {
                  break_loop = 0;

                  cout << "Please enter in the number (1 - 4) of what action you would like to take: " << endl << endl;
                  cout << "1. Register a move, trade, or other action within the game." << endl;
                  cout << "2. Determine wether a buy/trade is a good move." << endl;
                  cout << "3. Print out the current board layout." << endl;
                  cout << "4. Exit the application." << endl << endl;

                  cin >> determine_number;
                  cout << endl << endl;

                  if (determine_number == 4)
                  {
                      break;
                  }

                  else if (determine_number == 3)
                  {
                      while (break_loop == 0)
                      {
                        cout << "Would you like to print: " << endl << endl;
                        cout << "1. The position of each player." << endl;
                        cout << "2. The property owned by each player." << endl;
                        cout << "3. The property and development of a specific player." << endl << endl;
                        cout << "Please enter in the corresponding number to the layout you would like to see." << endl << endl;

                        cin >> determine_print;
                        cout << endl << endl;

                        if (determine_print == 1)
                        {
                          print_board(current.layout);
                          break_loop == 1;
                        }

                        else if (determine_print == 2)
                        {
                          print_board (owned.layout);
                          break_loop == 1;
                        }

                        else if (determine_print == 3)
                        {
                          transfer_number = player_number(current_player);
                          print_board(owned.layout);
                          break_loop == 1;
                        }

                        else
                        {
                          cout << "The option you have indicated is not valid!" << endl << endl;
                        }

                      }
                    }

                  else if (determine_number == 1)
                  {
                    while(true)
                    {
                      cout << "What would you like to register" << endl << endl;
                      cout << "1. Money Change" << endl;
                      cout << "2. Property Change" << endl;
                      cout << "3. Location Change" << endl;
                      cout << "4. Exit" << endl << endl;

                      cin >> determine_number;
                      cout << endl << endl;

                      if (determine_number == 1)
                      {
                        cout << "Which player is being affected" << endl << endl;
                        determine_player = player_number(current_player);

                        cout << "What amount is the money increasing by (negative if decreasing): " << endl << endl;
                        cin >> amount_money;

                        money_change(current_player, determine_player, amount_money);
                      }

                      else if (determine_number == 2)
                      {
                        cout << "Which player is being affected" << endl << endl;
                        determine_player = player_number(current_player);

                        cout << "What property are they gaining or loosing (1 - 40): " << endl << endl;
                        cin >> property_number;

                        property_change(prices, determine_player, property_number, owned);
                      }

                      else if (determine_number == 3)
                      {
                        cout << "Which player is being affected" << endl << endl;
                        determine_player = player_number(current_player);

                        cout << "What location are they moving to (1 - 40): " << endl << endl;
                        cin >> determine_location;

                        location_change(current_player, current, determine_player, determine_location);
                      }

                      else if (determine_number == 4)
                      {
                        break;
                      }

                      else
                      {
                        cout << "The input you provided is invalid!" << endl << endl;
                      }
                    }
                }

            else if (determine_number == 2)
              {
                break_loop = 0;

                while (break_loop == 0)
                {

                  cout << "Would you like to evaluate a buy or a trade (enter in 0 for a buy, or 1 for a trade)" << endl << endl;
                  cin >> transfer_number;
                  cout << endl << endl;

                  if (transfer_number == 1)
                  {
                    cout << "How many players are involved within this trade?" << endl << endl;
                    cin >> transfer_number;
                    cout << endl << endl;

                    for(int i = 0; i < transfer_number; i++)
                    {
                      trade_player.push_back(transfer_struct);

                      cout << "Who is the " << i + 1 << " player involved within the trade?" << endl << endl;
                      determine_number = player_number(current_player);

                      trade_player[i].value = (determine_number + 1);
                      transfer_string = current_player[determine_number].name;
                      trade_player[i].name = transfer_string;
                    }

                    for(int t = 0; t < transfer_number; t++)
                    {
                      transfer_name = trade_player[t].name;

                      cout << "How many properties is " << transfer_name << "giving?" << endl << endl;
                      cin >> determine_number;
                      cout << endl << endl;

                      trade_player[t].property.push_back(determine_number);

                      for(int r = 0; r < determine_number; r++)
                      {
                        cout << "What is the location (1 - 40) of the " << t + 1 << " property" << transfer_name << " is giving?" << endl << endl;
                        cin >> determine_location;
                        cout << endl << endl;

                        trade_player[t].property.push_back(determine_location);
                      }

                    cout << "How much money is " << transfer_name << " recieving?" << endl << endl;
                    cin >> determine_number;
                    cout << endl << endl;

                    trade_player[t].money.push_back(determine_number);
                  }

                  cout << "Which player are we analyzing: " << endl << endl;
                  transfer_number = player_number(trade_player);
                  cout << endl << endl;

                  level_trade(current_player, trade_player, current, owned, prices, rent, transfer_number);
                  break_loop ++;
                }

                else if (transfer_number == 1)
                {
                  buy_player.clear();

                  cout << "Which player is looking to buy?" << endl << endl;
                  transfer_number = player_number(current_player);

                  buy_player.push_back(transfer_struct);
                  buy_player[0].value = transfer_number;

                  transfer_name = current_player[transfer_number].name;
                  cout << "What location is the proprty (1 - 40), that " << transfer_name << " is buying?" << endl << endl;

                  cin >> determine;
                  cout << endl << endl;

                  buy_player[0].property.push_back(determine);

                  cout << "What is the price that " << transfer_name << " is purchasing at?" << endl << endl;
                  cin >> transfer_price;
                  cout << endl << endl;

                  buy_player[0].money.push_back(transfer_price);

                  level_buy(current_player, buy_player, current, owned, prices, rent);
                  break_loop ++;
                }

                else
                {
                  cout << "Invalid entry!" << endl << endl;
                }
            }
        }
             else
                {
                  cout << "The option which you have selected does not exist, please select a valid option (1-4)." << endl << endl;
                }

          }

          cout << "Thank you for using Monopoly Tracker!" << endl << endl;
          return 0;

}
