void elf(struct player *Current_Player)
{	
	printf("Please enter a name for this player: ");
	scanf("%s", Current_Player->name);
	Current_Player->life_points = 100;
	srand(time(NULL));
	Current_Player->smartness = (rand() % 31) + 70;
	Current_Player->strength = (rand() % 51);
	Current_Player->magic_skills = (50 + rand() % 31);
	Current_Player->luck = (rand() % 41) + 60;
	Current_Player->dexterity = (rand() % 101);
}

void human(struct player *Current_Player)
{
	int sum;
	printf("Please enter a name for this player: ");
	scanf("%s", Current_Player->name);
	Current_Player->life_points = 100;
	srand(time(NULL));
	Current_Player->magic_skills = (rand() % 101);
	Current_Player->smartness = (rand() % 101);
	Current_Player->strength = (rand() % 101);
	Current_Player->dexterity = (rand() % 101);
	Current_Player->luck = (rand() % 101);
	sum = Current_Player->magic_skills + Current_Player->smartness + Current_Player->strength + Current_Player->dexterity + Current_Player->luck;
	sum <=300;
}

void ogre(struct player *Current_Player)
{
	printf("Please enter a name for this player: ");
	scanf("%s", Current_Player->name);
	Current_Player->life_points = 100;
	srand(time(NULL));
	Current_Player->magic_skills = 0;
	Current_Player->smartness = (rand() % 21);
	Current_Player->strength = (80 + rand() % 21);
	Current_Player->dexterity = (80 + rand() % 21);
	Current_Player->luck = 50 - Current_Player->smartness;
}

void wizard(struct player *Current_Player)
{
	printf("Please enter a name for this player: ");
	scanf("%s", Current_Player->name);
	Current_Player->life_points = 100;
	srand(time(NULL));
	Current_Player->luck = (rand() % 51) + 50;
	Current_Player->smartness = (rand() % 11) + 90;
	Current_Player->strength = (rand() % 21) + 0;
	Current_Player->magic_skills = (80 + rand() % 21);
	Current_Player->dexterity = (rand() % 101);
	Current_Player->life_points = 100;
}
