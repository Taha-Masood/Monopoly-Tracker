#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct player
{
    string name;
    int value;
    int board[40];
    vector < int > position;
    vector < int > money;
};

struct board
{
  int layout[40];
};

void property
{

}

string level_buy()
{
	else {
        
        while(cin >> tmp)
        {
            collective.push_back(tmp);
        }
        
        length = collective.size();
        
        if (C1 == "c")
            
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
                        
                        first_comp = extraspace/2;
                        second_comp = first_comp + (extraspace % 2);
                        
                        for (int j = 0; j < second_comp; j++)
                        {
                            final.push_back(space);
                        }
                        
                        for (int k = 0; k < min; k++)
                        {
                            
                            final.push_back(toprint[k]);
                            final.push_back(space);
                            
                        }
                        
                        final.push_back(toprint[min]);
                        
                        for (int s = 0; s < first_comp; s++)
                        {
                            final.push_back(space);
                        }
                        
                        final.push_back(flag_3);
                        
                        for(int p = 0; p < length_2; p++)
                        {
                            toprint.pop_back();
                        }
                        
                        overall = 0;
                    }
                    
                    else
                    {
                        final.push_back(collective[t]);
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
                        
                        first_comp = extraspace/2;
                        second_comp = first_comp + (extraspace % 2);
                        
                        for (int r = 0; r < first_comp; r++)
                        {
                            final.push_back(space);
                        }
                        
                        for (int k = 0; k < min; k++)
                        {
                            final.push_back(toprint[k]);
                            final.push_back(space);
                            
                        }
                        
                        final.push_back(toprint[min]);
                        
                        for (int w = 0; w < second_comp; w++)
                        {
                            final.push_back(space);
                        }
                        
                        final.push_back(flag_3);
                    }
                    
                    else
                    {
                        final.push_back(collective[t]);
                        final.push_back(flag_3);
                    }
                }
                
            }
        }
        
        else if(C1 == "rl")
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
                        overall++;
                    }
                    
                    else if ((overall <= N) && (total > N))
                    {
                        toprint.push_back(collective[t]);
                        
                        length_2 = toprint.size();
                        extraspace = N - overall;
                        
                        min = length_2 - 1;
                        
                        for (int j = 0; j < extraspace; j++)
                        {
                            final.push_back(space);
                        }
                        
                        for (int k = 0; k < min; k++)
                        {
                            final.push_back(toprint[k]);
                            final.push_back(space);
                            
                        }
                        
                        final.push_back(toprint[min]);
                        final.push_back(flag_3);
                        
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
                        
                        
                        for (int r = 0; r < extraspace; r++)
                        {
                            final.push_back(space);
                        }
                        
                        for (int k = 0; k < min; k++)
                        {
                            final.push_back(toprint[k]);
                            final.push_back(space);
                        }
                        
                        final.push_back(toprint[min]);
                        final.push_back(flag_3);
                        
                    }
                    
                    
                    
                    else
                    {
                        final.push_back(collective[t]);
                        final.push_back(flag_3);
                    }
                }
                
            }
        }
        
        else if(C1 == "j")
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
        
        else if(C1 == "rr")
        {
            for (int t = 0; t < length; t++)
            {
                
                if (t < (length - 1))
                {
                    
                    test_1 = collective[t];
                    test_2 = collective[(t + 1)];
                    
                    overall += test_1.length();
                    determine = test_2.length() + 1;
                    total = overall + determine;
                    
                    if ((overall < N) && (total <= N))
                    {
                        toprint.push_back(collective[t]);
                        overall ++;
                    }
                    
                    else if (overall <= N)
                    {
                        toprint.push_back(collective[t]);
                        
                        length_2 = toprint.size();
                        min = length_2 - 1;
                        
                        for (int k = 0; k < min; k++)
                        {
                            final.push_back(toprint[k]);
                            final.push_back(space);
                        }
                        
                        final.push_back(toprint[min]);
                        final.push_back(flag_3);
                        
                        for(int p = 0; p < length_2; p++)
                        {
                            toprint.pop_back();
                        }
                        
                        overall = 0;
                    }
                    
                    else
                    {
                        final.push_back(collective[t]);
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
                        min = length_2 - 1;
                        
                        for (int k = 0; k < min; k++)
                        {
                            final.push_back(toprint[k]);
                            final.push_back(space);
                        }
                        
                        final.push_back(toprint[min]);
                        final.push_back(flag_3);
                        
                    }
                    
                    else
                    {
                        final.push_back(collective[t]);
                        final.push_back(flag_3);
                    }
                }
                
            }
            
        }
        
        else
        {
            cerr << "Error, command is illegal." << endl;
            return 0;
        }
    }
    
    length = final.size();
    
    if (C2 == "f")
    {
        for (int y = 0; y < length; y++)
        {
            if (final[y] == flag_3) cout << endl;
            else cout << final[y].substr(0, N);
        }
    }
    
    else if (C2 == "g")
    {
        for (int y = 0; y < length; y++)
        {
            while(final[y] != flag_3)
            {
                temporary = final[y];
                print2.push_back(temporary);
                y++;
            }
            
            length_2 = print2.size();
            flag = 0;
            
            for (int j = 0; j < length_2; j++)
            {
                if(print2[j].find("fnord") != std::string::npos)
                {
                    flag = 1;
                }
            }
            
            if(flag == 1)
            {
                for (int y = 0; y < length_2; y++)
                {
                    cout << print2[y].substr(0, N);
                }
                
                cout << endl;
            }
            
            for(int p = 0; p < length_2; p++)
            {
                print2.pop_back();
            }
            
        }
        
    }
    
    else if (C2 == "r")
    {
        for (int y = (length - 2); y >= 0; y--)
        {
            while(final[y] != flag_3)
            {
                temporary = final[y];
                print2.push_back(temporary);
                if (y == 0) break;
                y--;
            }
            
            length_2 = print2.size();
            
            for (int m = (length_2 - 1); m >= 0; m--)
            {
                cout << print2[m].substr(0, N);
            }
            
            cout << endl;
            
            for(int p = 0; p < length_2; p++)
            {
                print2.pop_back();
            }
        }
    }
}

string level_trade()
{

}

bool is_turn (struct player layout, int counter, int total)
{
  int determine = counter % total;
  determine++;

  if (layout.value == determine)
    return true;

  return false;
}

int player_number (vector < player > players)
{
  int number_of_players = players.size ();
  int determine, flag = 0, counter = 0;
  string transfer;

  cout <<
    " Please indicate which player you are interested in (enter in 0 if this is not the player you are interested in and 1 if this is the player you are interested in): "
    << endl << endl;

  while (flag == 0)
    {

      if (counter >= number_of_players)
	{
	  cout << "You have seen all characters in the game!" << endl << endl;
	  counter = 0;
	}

      transfer = players[counter].name;

      cout << "Is " << transfer <<
	" the player which you are refering to (0 is no, 1 is yes): " << endl
	<< endl;

      cin >> determine;

      cout << endl << endl;

      if (determine == 0)
	{
	  counter++;
	  continue;
	}

      else if (determine == 1)
	{
	  flag = 1;
	  break;
	}

      else
	{
	  cout << "The value you entered is invalid, try again." << endl <<
	    endl;
	}
    }

  return counter;
}


void
print_board (int current[40])
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

int
main (int argc, char *argv[])
{
  int num_player, transfer_num, property, flag = 0, end = 0, input = 0, flag_2 = 0, player_1, player_2, properties_1, properties_2, trade = 0, money_one, money_two, location, money;
  vector < string > player_name;
  string enter_hold, transfer, temporary;
  vector < player > players;

  struct player A = { 0 };
  struct player B = { 0 };
  struct player C = { 0 };
  struct player D = { 0 };
  struct player E = { 0 };
  struct player F = { 0 };
  struct player G = { 0 };
  struct player H = { 0 };

  A.value = 1;
  B.value = 2;
  C.value = 3;
  D.value = 4;
  E.value = 5;
  F.value = 6;
  G.value = 7;
  H.value = 8;

  struct board current = { 0 };
  struct board owned = { 0 };
  struct board prices =
    { 0, 60, 0, 60, 0, 200, 100, 0, 100, 120, 140, 150, 140, 160, 200, 180, 0,
180, 200, 0, 220, 0, 220, 240, 200, 260, 260, 150, 280, 0, 300, 300, 0, 320, 200, 0, 350, 0,
400 };
  struct board rent =
    { 0, 2, 0, 4, 0, 25, 6, 0, 6, 8, 10, 1, 10, 12, 14, 14, 0, 16, 25, 0, 18,
0, 18, 20, 25, 22, 22, 1, 24, 0, 26, 26, 0, 28, 25, 0, 35, 0, 50 };

  cout <<
    "Welcome to Monopoly Tracker, you will need to provide the application with some information so that it can advise if a move is great, good, satisfactory, or bad. Have fun!"
    << endl;
  cout <<
    "Please press 'a' and the enter key to continue, this applies for the rest of the game as well: "
    << endl << endl;

  cin >> enter_hold;

  cout << endl <<
    "Please enter in the number of players within this current game (including yourself): "
    << endl << endl;

  cin >> num_player;

  cout << endl <<
    "Please enter names for each player, these will be the names you will continue to refer to them with. Example: 1 Name (player number, player name): "
    << endl << endl;

  for (int i = 1; i <= num_player; i++)
    {
      cout << "Please enter in the name of player " << i << ": " << endl <<
	endl;
      cin >> transfer;
      cout << endl << endl;
      player_name.push_back (transfer);


      struct player transfer;
      players.push_back (transfer);

      players[(i - 1)].value = i;
    }

  cout << "You must now enter in the amount of money each player holds. " <<
    endl << endl;

  for (int j = 0; j < num_player; j++)
    {
      temporary = player_name[j];

      cout << "Please enter in the amount of money " << temporary <<
	" currently holds:" << endl << endl;
      cin >> transfer_num;
      cout << endl << endl;

      players[j].money.push_back (transfer_num);

    }

  cout <<
    "You must now enter in the location that each player is currently at, (1-40, with Go as 1 and Boardwalk as 40) : "
    << endl << endl;


  for (int t = 0; t < num_player; t++)
    {
      temporary = player_name[t];

      cout << "Please enter in the location " << temporary <<
	" is currently at:" << endl << endl;
      cin >> transfer_num;
      cout << endl << endl;

      players[t].position.push_back (transfer_num);

    }

  cout <<
    "You must now enter in the number of properties that each player currently owns: "
    << endl << endl;

  for (int t = 0; t < num_player; t++)
    {
      temporary = player_name[t];

      cout << "Please enter in the number of properties " << temporary <<
	" currently has:" << endl << endl;
      cin >> transfer_num;
      cout << endl << endl;

      for (int i = 0; i < transfer_num; i++)
	{
	  if (flag == 1)
	    {
	      i--;
	      flag = 0;
	    }

	  cout << "Please enter in the location of the number " << (i +
								    1) <<
	    " property that " << temporary << " has: " << endl << endl;

	  cin >> property;
	  cout << endl << endl;

	  if ((0 < property) && (property < 41)
	      && (current.layout[(property - 1)] == 0))
	    {
	      current.layout[(property - 1)] = (t + 1);
	      cout << "Thanks! " << endl << endl;
	    }
	  else
	    {
	        
	      cout <<
		"The entered property is already owned or cannot be owned! Please enter in the value again!"
		<< endl << endl;

	      if (i == 0)
		{
		  flag = 1;
		  continue;
		}

	      else
		{
		  i--;
		  continue;
		}

	    }

	}

    }

  cout <<
    "Thank you for inputting the appropriate data, you may now utilize Monopoly Tracker."
    << endl << endl;

  while (true)
    {
        cout << "Please enter in the number (1 - 4) of what action you would like to take: " << endl << endl;
      cout << "1. Register a move, trade, or other action within the game." << endl;
      cout << "2. Determine wether a buy/trade is a good move." << endl <<
	endl << "3. Print out the current board layout." << endl <<
	"4. Exit the application." << endl << endl;

      flag = 0;

      cin >> input;

      cout << endl << endl;

      if (input == 4)
	{
	  break;
	}

      else if (input == 3)
	{
	  while (flag == 0)
	    {
	      cout << "Would you like to print: " << endl << endl <<
		"1. The position of each player." << endl <<
		"2. The property owned by each player." << endl;
	      cout << "3. The property and development of a specific player."
		<< endl << endl <<
		"Please enter in the corresponding number to the layout you would like to see."
		<< endl << endl;

	      if (input == 1)
		{
		  print_board (current.layout);
		  flag == 1;
		}

	      else if (input == 2)
		{
		  print_board (owned.layout);
		  flag == 1;
		}

	      else if (input == 3)
		{
		  transfer_num = player_number(players);
		  print_board (players[transfer_num].board);
		  flag == 1;

		}

	      else
		{
		  cout << "The option you have indicated is not valid!" <<
		    endl << endl;
		}

	    }
	}

      else if (input == 2)
	{
		flag == 0;

		while (flag == 0)
		{

		cout << "Would you like to evaluate a buy or a trade (enter in 0 for a buy, or 1 for a trade)" << endl << endl;

		cin >> determine;

		cout << endl << endl;

		if (determine == 0)
		{
			vector <int> player_one;
			vector <int> player_two;

			cout << "Who is the first player involved within the trade?" << endl << endl;

			player_1 = player_number(players);

			cout << "Who is the second player involved within the trade?" << endl << endl;

			player_2 = player_number(players);

			temporary = players[player_1];

			cout << "How many properties is " << temporary << "recieving?" << endl << endl;

			cin << properties_1;

			cout << endl << endl;

			for (int i = 0; i < properties_1; i++)
			{
				cout <<  "Please enter in the location of the number " << (i + 1) <<
	    		" property that " << temporary << " is recieving: " << endl << endl;

	    		cin >> transfer_num;

	    		cout << endl << endl;

	    		player_one.push_back(transfer_num);
			}

			cout << "How much money is " << temporary << " recieving?" << endl << endl;

			cin >> money_one;

			cout << endl << endl;

			temporary = players[player_2];

			cout << "How many properties is " << temporary << " recieving?" << endl << endl;

			cin << properties_2;

			cout << endl << endl;

			for (int i = 0; i < properties_2; i++)
			{
				cout <<  "Please enter in the location of the number " << (i + 1) <<
	    		" property that " << temporary << " is recieving: " << endl << endl;

	    		cin >> transfer_num;

	    		cout << endl << endl;

	    		player_two.push_back(transfer_num);
			}

			cout << "How much money is " << temporary << " recieving?" << endl << endl;

			cin >> money_two;

			cout << endl << endl;

			cout << "Which player are we analyzing (1 or 2)" << endl << endl;

			cin >> trade;

			cout << endl << endl;

			transfer = level_trade(player_1, player_2, player_one, player_two, money_one, money_two, trade, current);

			if (trade == 1) temporary = players[player_1];
			else temporary = players[player_2];

			cout << "This is a " << transfer << " trade for " << temporary << "." << endl << endl;
		}

		else if (determine == 1)
		{
			cout << "Who is buying?" << endl << endl;

			player_1 = player_number(players);

			cout << "What number is the proprty (1 - 40): " << endl << endl;

			cin >> location;

			cout << endl << endl;

			cout << "What price are you purchasing at?" << endl << endl;

			cin >> money;

			cout << endl << endl;

			transfer = level_buy(player_1, current, money, location)
			
			temporary = players[player_1];

			cout << "This is a " << transfer << " buy for " << temporary << "." << endl << endl;
		}

		else 
		{
			cout << "You have entered in an invalid option!" << endl << endl;
		}
	}

	}

      else if (input == 1)
	{
		while(true)
		{

		cout << "What would you like to register" << endl << endl << "1. Money Change" << endl << "2.Property Change" << endl << "3.Location Change" << endl << "4.Exit" << endl << endl;

		cin >> determine;

		cout << endl << endl;

		if (determine == 1)
		{
			cout << "Which player is being affected" << endl << endl;

			player_1 =player_number(players);

			cout << "What amount is the money increasing by: " << endl << endl;

			cin >> amount;

			players[player_1].money.push_back(amount);
		}

		else if (determine == 2)
		{
			cout << "Which player is being affected" << endl << endl;

			player_1 =player_number(players);

			cout << "What property are they gaining or loosing (1 - 40): " << endl << endl;

			cin >> property;

			property(property, player_1, players);
		}

		else if (determine == 3)
		{
			cout << "Which player is being affected" << endl << endl;

			player_1 =player_number(players);

			cout << "What location are they moving to (1 - 40): " << endl << endl;

			cin >> location;

			movement(location, player_1, players);
		}
		else if (determine == 4)
		{
			break;
		}
		else
		{
			cout << "The input you provided is invalid!" << endl << endl;
		}
	}
	}

      else
	{
	  cout <<
	    "The option which you have selected does not exist, please select a valid option (1-4)."
	    << endl << endl;
	}
    }

  cout << "Thank you for using Monopoly Tracker!" << endl << endl;

  return 0;

}
