typedef struct {
    int index;
    char description[100];
} MenuList;

MenuList menuStart[] = {
  {MENU_HEADER, "MENU INICIAL"},
  {1, "Jokenpo Clássico"},
  {2, "Jokenpo The Big Bang Theory"},
  {3, "Regras"},
};

MenuList menuClassic[] = {
    {MENU_HEADER, "MENU JOKENPO CLASSICO "},
    {1, "Para Pedra"},
    {2, "Para Papel"},
    {3, "Para Tesoura"},
};

MenuList menuBigBang[] = {
    {MENU_HEADER, "JOKENPO THE BIG BANG THEORY"},
    {1, "Para Pedra"},
    {2, "Para Papel"},
    {3, "Para Tesoura"},
    {4, "Para Spock"},
    {5, "Para Lagarto"}
};

 