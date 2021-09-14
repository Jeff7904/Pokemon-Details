#include <iostream>
#include <windows.h>
#include "mmsystem.h"
#include <stdlib.h>
void Start();
void History();
void Version();
void Platform();
void Gameplay();
void Popular();
void Build();
void Battle();
class Music
{
	public:
	void Sound()
	{
		PlaySound(TEXT("Pokemon (A Button).wav"),NULL,SND_ASYNC);
	}
	void Title()
	{
		PlaySound(TEXT("Opening.wav"),NULL,SND_ASYNC);
	}
};

using namespace std;
int main(int argc, char** argv)	 
{
	Music Boom;
	Boom.Sound();
	Start();
	return 0;
}
void History()
{
	system("cls");
	cout<<"Pokemon is a turn-based role-playing video game developed by Game Freak and published by" <<endl;
	cout<<"Nintendo for the Game Boy. The first ever installments of the Pokémon video games series " <<endl;
	cout<<"were Pocket Monster: Red together with Pocket Monster: Green. They were initially released in"<<endl;
 	cout<<"Japan in 1996 as Pocket Monsters: Red. The game was later released as Pokemon Red and" <<endl;
  	cout<<"Pokémon Blue in North America and Australia during 1998 and Europe in 1999. As of now," <<endl;
  	cout<<"there are currently exactly 898 Pokémon."<<endl;	
  	system("pause");
  	Start();
}
void Version()
{
	system("cls");
	cout<<"Nintendo has released over a staggering 122 known Pokémon related games, that includes the"<<endl;
	cout<<"core series games and spin-off games. Generally, the games can be grouped into 8" <<endl;
	cout<<"generations. The defining point of where a new generation begins is when a new core series" <<endl;
	cout<<"Pokemon game is released with a large scale of new and original Pokémon in its Pokedex." <<endl;
	system("pause");
	Start();
}
void Platform()
{
	system("cls");
	cout<<"There are 122 known Pokémon games, though only 35 of them are the core series. "<<endl;
	cout<<"These games are only exclusively on Game Boy, Game Boy Color, Game Boy Advance, Nintendo DS, "<<endl;
	cout<<"Nintendo 3DS and the Nintendo Switch."<<endl;
	system("pause");
  	Start();		
}
void Gameplay()
{
	int Option;
	system("cls");
	cout<<"One of the most consistent aspects of most Pokemon games is the choice of one of"<<endl; 
	cout<<"three different Pokemon at the start of the player's adventure; these three are often labeled as "<<endl;
	cout<<"“starter Pokemon”. Players can choose between a Fire type, Water type or a Grass type Pokemon "<<endl;
	cout<<"indigenous to that particular region as their starter Pokémon. During the player’s adventure, "<<endl;
	cout<<"the player can catch wild Pokemon and train them to battle other trainers. Each successive "<<endl;
	cout<<"generation of Pokemon games build upon this concept by introducing new Pokemon, items and gameplay "<<endl;
	cout<<"mechanics. With 18 different types of Pokémon that include Normal, Fire, Water, Grass, Flying, Fighting, "<<endl;
	cout<<"Poison, Electric, Ground, Rock, Psychic, Ice, Bug, Ghost, Steel, Dragon, Dark and Fairy." <<endl<<endl;
	
	cout<<"1) Pokemon Buildings"<<endl;
	cout<<"2) Pokemon Battle"<<endl;
	cout<<"3) Exit"<<endl;
	cout<<"Please enter a number: ";
	cin>>Option;
	switch(Option)
	{
		case 1:
			{
				Music Boom;
				Boom.Sound();
				system("cls");
				Build();
				break;
			}
		case 2:
			{
				Music Boom;
				Boom.Sound();
				system("cls");
				Battle();
				break;
			}
		case 3:
			{
				Music Boom;
				Boom.Sound();
				Start();
				break;
			}
		default:
			{
				Music Boom;
				Boom.Sound();
				system("cls");
				cout<<"Error. Please enter a number from 1-3"<<endl;
				system("pause");
				Gameplay();
				break;
			}	
	}
}
void Popular()
{
	system("cls");
	cout<<"The first ever Pokemon game Pokémon Fire and Blue became an international sensation as it "<<endl;
	cout<<"has jointly sold over a whooping 300 millions copies worldwide and was declared as the "<<endl;
	cout<<"“Best selling RPG on the Game Boy” and “Best selling RPG of all time” by IGN. Pokemon has since "<<endl;
	cout<<"become the highest-grossing media franchise of all times. The video game series is the fourth "<<endl;
	cout<<"best selling video game franchise, behind Nintendo's own Mario franchise, Tetris and "<<endl;
	cout<<"Call of Duty with more than 380 million copies sold, and it spawned an anime television series that has "<<endl;
	cout<<"become the most successful video game adaptation with over 20 seasons and 1000 episodes in "<<endl;
	cout<<"183 countries. With a revenue of an estimated 105 billions dollars, it is safe to say that Pokemon "<<endl;
	cout<<"is a fairly popular franchise. "	<<endl;	
	system("pause");
  	Start();
}
void Build()
{
	Music Boom;
	system("cls");
	int dk;
	cout<<"The most essential structures in the Pokemon games are Pokemon Gym, Pokemart and the Pokemon center."<<endl;
	cout<<"1) Pokemon Center"<<endl;
	cout<<"2) Pokemart"<<endl;
	cout<<"3) Pokemon Gym"<<endl;
	cout<<"4) Exit"<<endl;
	cout<<"Please enter number for detail of the bulding:"<<endl;
	cin>>dk;
	switch(dk)
	{
		case 1:
			{
				Boom.Sound();
				system("cls");
				cout<<"Pokemon centers are located throughout all the cities and towns in the Pokemon world except "<<endl;
				cout<<"for the player's hometown, these buildings assist the player in healing their Pokemon and "<<endl;
				cout<<"restoring them back to full health. These buildings are usually white with a red rooftop, allowing "<<endl;
				cout<<"the player to easily identify."<<endl;
				system("pause");
				system("cls");
				Build();
				break;
			}
		case 2:
			{
				Boom.Sound();
				system("cls");
				cout<<"Pokémart are structures where it will sell various items to the players, that includes potions to "<<endl;
				cout<<"heal the player’s Pokémon mid battle, repels to avoid getting attacked by wild Pokémon and "<<endl;
				cout<<"et ceteras. These Buildings are usually white with a blue rooftop." <<endl;
				system("pause");
				system("cls");
				Build();
				break;
			}
		case 3:
			{
				Boom.Sound();
				system("cls");
				cout<<"Pokemon Gyms are structures situated throughout the Pokemon world, where players can train "<<endl;
				cout<<"or compete to qualify for the Pokemon League Competition. Although the internal organization "<<endl;
				cout<<"of Pokemon Gym may vary, the majority specialize in one particular type of Pokemon includes "<<endl;
				cout<<"puzzles and are all manned by one Gym Leader, a formidable and strong Pokemon trainer or "<<endl;
				cout<<"the boss of the gym so to speak. Pokemon Gym can be found in many cities or towns in the Pokemon world. "<<endl;
				cout<<"With each successful battle against the Gym Leader, the player is allowed to utilise a new Hidden Move or "<<endl;
				cout<<"HM for short to teach his or her Pokemon. This allows the player to access new areas or regions that were"<<endl; 
				cout<<"previously inaccessible as well as letting them progress in the story."<<endl;
				system("pause");
				system("cls");
				Build();
				break;
			}
		case 4:
			{
				Boom.Sound();
				Gameplay();
				break;
			}
		default:
			{	
				Boom.Sound();
				system("cls");			
				cout<<"Please enter numbers from 1-3"<<endl;
				system("pause");
				Build();
				break;
			}
	}	
}
void Battle()
{
	cout<<"Battles between Pokemon are the central game mechanic of the Pokemon games. "<<endl;
	cout<<"They are utilized to strengthen Pokemon. These battles use turn-based mechanics, where the "<<endl;
	cout<<"goal is to defeat all of their opponent’s Pokemon. During a Pokemon battle, the player can "<<endl;
	cout<<"choose between 4 options which is to fight, use an item, switch Pokemon or to run "<<endl;
	cout<<"(only usable when fighting wild Pokemon). Each Pokemon move is used to reduce their opponent's "<<endl;
	cout<<"Pokemon's HP until it reaches zero, "<<endl;
	cout<<"in which the opponent’s Pokemon faints and is unable to battle further. If the player's Pokemon wins, "<<endl;
	cout<<"it receives experience points or EXP for short. If all the player''s Pokemon fainted, the player would lose the battle. "<<endl;
	cout<<"This causes the player to lose some money and return the player back to the last Pokémon center it visited. "<<endl;
	system("Pause");
	Gameplay();
}
void Start()
{	
	Music Boom;
	Boom.Title();
	int choice;
	system("cls");
	cout<<"Please enter a number "<<endl;
	cout<<"1) History"<<endl;
	cout<<"2) Versions"<<endl;
	cout<<"3) Platform"<<endl;
	cout<<"4) Gameplay"<<endl;
	cout<<"5) Popularity"<<endl;
	cout<<"6) Exit"<<endl;
	cin>>choice;
	switch(choice)
	{		
		case 1:
			{
				Boom.Sound();
				History();
				break;
			}
		case 2:
			{
				Boom.Sound();
				Version();
				break;
			}
		case 3:
			{
				Boom.Sound();
				Platform();
				break;
			}
		case 4:
			{
				Boom.Sound();
				Gameplay();
				break;
			}
		case 5:
			{
				Boom.Sound();
				Popular();
				break;
			}
		case 6:
			{
				Boom.Sound();
				system("cls");
				cout<<"Thank you, for using our program"<<endl;
				system("pause");
				system("exit");
				break;
			}
		default:
		{
			Boom.Sound();
			system("cls");
			cout<<"Error. Please enter a number from 1-5"<<endl;
			system("pause");		
			Start();
			break;	
		}
	}
}

