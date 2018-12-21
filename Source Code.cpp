#include<iostream>
#include<random>
#include<functional>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int main()
{
	std::mt19937 rng;
	rng.seed(std::random_device()());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(0, 194); // distribution in range [0, 194]

	char a, b, movies[195][50] = {
		"Interstellar",
		"A Wednesday",
		"The Ghost Writer",
		"RaOne",
		"Mr India",
		"Oblivion",
		"Zombieland",
		"Fast and Furious",
		"Mr Bean",
		"Men In Black",
		"The Shawshank Redemption",
		"The Godfather",
		"Pulp Fiction",
		"Schindlers List ",
		"One Flew Over the Cuckoos Nest ",
		"The Dark Knight ",
		"The Lord of the Rings The Return of the King ",
		"Star Wars ",
		"Casablanca ",
		"Goodfellas ",
		"Raiders of the Lost Ark ",
		"Rear Window",
		"The Matrix ",
		"Its a Wonderful Life ",
		"Dr Strangelove",
		"North by Northwest ",
		"Citizen Kane",
		"Forrest Gump ",
		"Monty Python and the Holy Grail ",
		"Back to the Future ",
		"All About Eve",
		"The Wizard of Oz ",
		"Ratatouille",
		"Monsters Inc",
		"Psycho",
		"Rosemarys Baby",
		"Dont Look Now",
		"The Wicker Man",
		"The Shining",
		"The Exorcist",
		"Nosferatu",
		"Let the Right One In",
		"Vampyr",
		"Peeping Tom",
		"The Innocents",
		"Ringu",
		"The Haunting",
		"Texas Chainsaw Massacre",
		"Dead of Night",
		"The Cabinet of Dr Caligari",
		"Halloween",
		"Bride of Frankenstein",
		"Les Diaboliques",
		"Audition",
		"Dracula",
		"The Blair Witch Project",
		"Carrie",
		"Les Vampires",
		"Metropolis",
		"Blade Runner",
		"Alien",
		"Extra Terrestrial",
		"Solaris",
		"Spirited Away",
		"Close Encounters",
		"King Kong",
		"Alphaville",
		"Back to the Future",
		"Planet of the Apes",
		"Brazil",
		"The Lord of the Rings trilogy",
		"Dark Star",
		"Day the Earth Stood Still",
		"Edward Scissorhands",
		"Akira",
		"Princess Bride",
		"Pans Labyrinth",
		"Starship Troopers",
		"Andrei Rublev",
		"Mulholland Dr",
		"Tokyo Story",
		"Citizen Kane",
		"A Clockwork Orange",
		"Days of Heaven",
		"Wild Strawberries",
		"White Ribbon",
		"The Gospel According to St Matthew",
		"Aguirre Wrath of God",
		"Pather Panchali",
		"The Conformist",
		"Death in Venice",
		"The Graduate",
		"There Will Be Blood",
		"Battleship Potemkin",
		"Rules of the Game",
		" Shadows",
		"Distant Voices Still Lives",
		"Passion of Joan of Arc",
		"La Dolce Vita",
		"Breaking the Waves",
		"Spirit of the Beehive",
		"Apocalypse Now",
		"North by Northwest",
		"Once Upon a Time in the West",
		"The Wild Bunch",
		"Deliverance",
		"City of God",
		"Paths of Glory",
		"The Wages of Fear",
		"Crouching Tiger Hidden Dragon",
		"The Thin Red Line",
		"Raiders of the Lost Ark",
		"Bullitt",
		"Ran",
		"Die Hard",
		"The Adventures of Robin Hood",
		"The Searchers",
		"Goldfinger",
		"Full Metal Jacket",
		"Last of the Mohicans",
		"Deer Hunter",
		"Gladiator",
		"Rome Open City",
		"Butch Cassidy",
		"Where Eagles Dare",
		"The Incredibles",
		"Annie Hall",
		"Borat",
		"Some Like it Hot",
		"Team America",
		"Dr Strangelove",
		"The Ladykillers",
		"Duck Soup",
		"Rushmore",
		"Airplane!",
		"Election",
		"His Girl Friday",
		"The Big Lebowski",
		"This Is Spinal Tap",
		"Bringing Up Baby",
		"Dazed and Confused",
		"MASH",
		"Groundhog Day",
		"Clueless",
		"The Great Dictator",
		"Clerks",
		"The Jerk",
		"Shaun of the Dead",
		"Chinatown",
		"Touch of Evil",
		"Vertigo",
		" Badlands",
		"Rashomon",
		"Double Indemnity",
		"Get Carter",
		"Pulp Fiction",
		"Hidden",
		"Goodfellas",
		"The Conversation",
		"The Killing",
		"French Connection",
		"The Big Sleep",
		"La Ceremonie",
		"Point Blank",
		"Hard Boiled",
		"Long Good Friday",
		"A Prophet",
		"Heat",
		"Scarface",
		"Millers Crossing",
		"Postman Always Rings Twice",
		"Jour Se Leve",
		"Brief Encounter",
		"Casablanca",
		"Before Sunrise",
		"Before Sunset",
		"Breathless",
		"In the Mood for Love",
		"The Apartment",
		"Eternal Sunshine of the Spotless Mind",
		"Room With a View",
		"Jules et Jim",
		"All That Heaven Allows",
		"Gone with the Wind",
		"An Affair to Remember",
		"Umbrellas of Cherbourg",
		"Lost in Translation",
		"Roman Holiday",
		"Wall E",
		"My Night With Maud",
		"Voyage to Italy",
		"Dr Zhivago",
		"Harold & Maude",
		"When Harry Met Sally",
		"Fabulous Baker Boys"
	}
	, moviesA[196][50];

o: //Use of Goto not recommended but tried for fun XD....


	int r = 0, j = 0, c = 0, life = 5, check = 0, i = 0, l = 0, string = 0, alphcount = 0, ll = 0;
	char alphabet[26];
	int kk = 0;

	while (kk<26)                          //Replacing garbage value by space
	{
		alphabet[kk++] = ' ';
	}

	for (i = 0;i<196;++i)
	{
		for (j = 0;j<50;++j)                 //To store '_' in whole array moviesA
		{
			moviesA[i][j] = '_';
		}
	}

	r = dist6(rng);

	c = strlen(movies[r]);
	cout<< "                    $$ ITS TIME FOR MOVIES $$\n\n\n" << "Guess the movie\n\n";

	for (j = 0;j<c;++j)
	{
		if ((movies[r][j] == 'a') || (movies[r][j] == 'e') || (movies[r][j] == 'i') || (movies[r][j] == 'o') || (movies[r][j] == 'u') || (movies[r][j] == ' ') || (movies[r][j] == 'A') || (movies[r][j] == 'E') || (movies[r][j] == 'I') || (movies[r][j] == 'O') || (movies[r][j] == 'U'))       //Auto filling of spaces and vowels
		{
			moviesA[r][j] = movies[r][j];
		}
	}

	while (life>0)                                //Loop to run game till life left

	{
		for (j = 0;j<c;++j)
		{
			cout << moviesA[r][j] << " ";
		}

		cout << "\n\nEnter an alphabet\n\n";
		cin >> b;
		a = tolower(b);

		ll = 0;
		for (l = 0;l<26;++l)
			if (alphabet[l] == a)                            //Check if input is repeated
			{
				cout << "\nYou already tried this and it is incorrect.\n\n";
				ll = 1;
			}
		if (ll == 1)
		{
			continue;
		}

		if (!isalpha(a))                               //Check whether input is an alphabet
		{
			cout << "\nIts not an alphabet\n\n";
			continue;
		}

		if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')    //Condition to skip if an user types an vowel
		{
			cout << "\nIts a vowel\n\n";
			continue;
		}

		for (j = 0;j<c;++j)                         //Loop helping to deduct life if user gives an incorrect value
		{
			if ((movies[r][j] != a) && (movies[r][j] != toupper(a)))
			{
				++check;
			}
		}

		if (check == c)
		{
			alphabet[alphcount++] = a;--life;

			cout << "\n\nYou have " << life << " life left\n\n";

			if (life == 0)
			{
				cout << "\n\nYou lost.\n\n" << "Name of the movie is " << movies[r] << ".";
				break;
			}
		}

		check = 0;

		for (j = 0;j<c;++j)
		{
			if ((movies[r][j] == a) || (movies[r][j] == toupper(a)))                     //If user gives correct value spaces will get filled up
			{
				moviesA[r][j] = movies[r][j];
			}
		}

		for (j = 0;j<c;++j)
		{
			if (movies[r][j] == moviesA[r][j])         //Loop to check if all spaces are filled
			{
				++string;
			}
		}

		if (string == c)
		{
			cout << "\n";
			for (j = 0; j<c; ++j)
			{
				cout << moviesA[r][j] << " ";
			}
			cout << "\n\n\n";
			cout << "                                       ";
			cout << "\n";
			cout << "                                             ";
			cout << "\n";
			cout << "                                             ";
			cout << "\n";
			cout << "                                            ";
			cout << "\n";
			cout << "                                        ";
			break;
		}

		string = 0;


	}
	char ans;
	cout << "\n\nWanna play again(y/n)\n\n";
	cin >> ans;
	if (tolower(ans) == 'y')
		goto o;
	_getch();


}


