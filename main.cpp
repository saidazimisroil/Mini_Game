/******************************************************************************
        Mantiqiy fikrlashni rivojlantiruvchi intelektual mini o'yin
*******************************************************************************/
#include <iostream>
#include <stdio.h>
using namespace std;

//  O'yinlar haqida ma'lumot
void info ()
{
  system ("CLS");
  cout << "\n _________________________________________\n";
  cout << " |   O'yinlar 3 ta. 1- va 2-o'yinlarda     |\n";
  cout << " | har topilgan to'g'ri javob uchun 20 XP  |\n";
  cout << " | beriladi. Noto'g'ri javob kiritilganda  |\n";
  cout << " | bu o'yin yopiladi. 3-o'yin ishlashi     |\n";
  cout << " | uchun sizda kamida 150 XP bo'lishi kerak|\n";
  cout << " |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
  cout << " |*O'YIN 1-kurs talabasi Saidazim Isroilov*|\n";
  cout << " |****** tomonidan ishlab chiqilgan *******|\n";
  cout << " *******************************************\n";
}

int score = 0;			// ball (ochko)
// Har qism o'yinning yopilishi
void g_over ()
{
  cout << "\n\t        ______________ ";
  cout << "\n\t       | O'YIN TUGADI |\n";
  if (score > 0)
    {
      cout << "\t   ***********************\n";
      cout << "\t   | MAVJUD BALL: " << score << "XP |\n";
      cout << "\t   ***********************\n";
    }
}

bool plus_check (int a, int b, int x, int which)
{
  switch (which)
    {
    case 1:
      {
	if (a + b == x)
	  return 1;
	else
	  return 0;
      }
      break;

    case 2:
      {
	if (a * b == x)
	  return 1;
	else
	  return 0;
      }
      break;
    }
  return 0;
}

void plus_win ()
{
  cout << "\n   __________________";
  cout << "\n******Tabriklaymiz******";
  cout << "\n*Siz bu o'yinni barcha* \n";
  cout << "*bosqichlaridan o'tdingiz*\n";
}

int k = 0, q = 0;
void plus_play (int which)
{
  if (k == 10 or q == 10)
    {
      cout << "\n< < < Siz bu o'yinni yutib bo'lgansiz > > >\n";
      cout << "\n-- Iltimos, boshqa imkoniyatlarimizdan foydalaning --\n";
    }
  int a, b, x;
  switch (which)
    {
    case 1:
      {
	switch (q)
	  {
	  case 0:
	    {
	      a = rand () % 5 + 1;
	      b = rand () % 5 + 1;
	      cout << "\n>>> Darajangiz >>> " << k + 1 << endl;
	    }
	    break;
	  case 1:
	    {
	      a = rand () % 9 + 5;
	      b = rand () % 9 + 1;
	    }
	    break;
	  case 2:
	    {
	      a = rand () % 20 + 9;
	      b = rand () % 20 + 1;
	    }
	    break;
	  case 3:
	    {
	      a = rand () % 50 + 30;
	      b = rand () % 50 + 1;
	    }
	    break;
	  case 4:
	    {
	      a = rand () % 80 + 60;
	      b = rand () % 80 + 50;
	    }
	    break;
	  case 5:
	    {
	      a = rand () % 120 + 80;
	      b = rand () % 120 + 70;
	    }
	    break;
	  case 6:
	    {
	      a = rand () % 200 + 150;
	      b = rand () % 200 + 100;
	    }
	    break;
	  case 7:
	    {
	      a = rand () % 350 + 300;
	      b = rand () % 300 + 280;
	    }
	    break;
	  case 8:
	    {
	      a = rand () % 500 + 450;
	      b = rand () % 450 + 400;
	    }
	    break;
	  case 9:
	    {
	      a = rand () % 500 + 450;
	      b = rand () % 450 + 400;
	    }
	    break;
	  }
	if (score != 0 and score % 80 == 0)
	  {
	    q++;
	    cout <<
	      "\n< < < -1 ni kiritib o'yinni yakunlashingiz mumkin > > >\n";
	    cout << "^^^^Darajangiz oshdi^> " << q + 1 << " <\n";
	    if (q == 10)
	      {
		plus_win ();
		return;
	      }
	  }
      }
      break;
    case 2:
      {
	switch (k)
	  {
	  case 0:
	    {
	      a = rand () % 9 + 5;
	      b = rand () % 5 + 2;
	      cout << "\n>>> Darajangiz >>> " << k + 1 << endl;
	    }
	    break;
	  case 1:
	    {
	      a = rand () % 15 + 6;
	      b = rand () % 15 + 5;
	    }
	    break;
	  case 2:
	    {
	      a = rand () % 20 + 9;
	      b = rand () % 20 + 2;
	    }
	    break;
	  case 3:
	    {
	      a = rand () % 50 + 30;
	      b = rand () % 50 + 2;
	    }
	    break;
	  case 4:
	    {
	      a = rand () % 80 + 60;
	      b = rand () % 80 + 50;
	    }
	    break;
	  case 5:
	    {
	      a = rand () % 100 + 80;
	      b = rand () % 100 + 70;
	    }
	    break;
	  case 6:
	    {
	      a = rand () % 150 + 100;
	      b = rand () % 150 + 50;
	    }
	    break;
	  case 7:
	    {
	      a = rand () % 200 + 150;
	      b = rand () % 150 + 50;
	    }
	    break;
	  case 8:
	    {
	      a = rand () % 200 + 160;
	      b = rand () % 200 + 80;
	    }
	    break;
	  case 9:
	    {
	      a = rand () % 1000 + 450;
	      b = rand () % 450 + 10;
	    }
	    break;
	  }
	if (score != 0 and score % 80 == 0)
	  {
	    k++;
	    cout <<
	      "\n< < < -1 ni kiritib o'yinni yakunlashingiz mumkin > > >\n";
	    cout << "^^^^Darajangiz oshdi^> " << k + 1 << " <\n";
	    if (k == 10)
	      {
		plus_win ();
		return;
	      }
	  }
      }
      break;
    }
  cout << endl;
  switch (which)
    {
    case 1:
      cout << "\t>| " << a << " + " << b << " = ";
      break;
    case 2:
      cout << "\t>| " << a << " * " << b << " = ";
      break;
    }

  cin >> x;
  if (x == -1)
    {
      g_over ();
      return;
    }
  if (plus_check (a, b, x, which))
    {
      cout << "\t\t\t+20 XP";
      score += 20;
      plus_play (which);
    }
  else
    g_over ();
}

///
/// Tic - Tac - Toe
///
int a = 0, b = 0, who = 1;	//ball kimga tegishliligini aniqlash uchun
bool check (char s[])
{
  for (int i = 0; i < 9; i += 3)
    {
      if (s[i] == s[i + 1] and s[i] == s[i + 2])
	{
	  switch (who % 2)
	    {
	    case 1:
	      {
		if (s[i] == 'O')
		  b++;		// player1 ga 1ball
		else
		  a++;
	      }
	      break;
	    case 0:
	      {
		if (s[i] == 'X')
		  b++;		// player1 ga 1ball
		else
		  a++;
	      }
	      break;
	    }
	  return 1;
	}
    }
  for (int i = 0; i < 3; i++)
    {
      if (s[i] == s[i + 3] and s[i] == s[i + 6])
	{
	  switch (who % 2)
	    {
	    case 1:
	      {
		if (s[i] == 'X')
		  a++;
		else
		  b++;
	      }
	      break;
	    case 0:
	      {
		if (s[i] == 'X')
		  b++;
		else
		  a++;
	      }
	      break;
	    }
	  return 1;
	}
    }
  if (s[0] == s[4] and s[0] == s[8])
    {
      switch (who % 2)
	{
	case 1:
	  {
	    if (s[0] == 'X')
	      a++;
	    else
	      b++;
	  }
	  break;
	case 0:
	  {
	    if (s[0] == 'X')
	      b++;
	    else
	      a++;
	  }
	  break;
	}
      return 1;
    }
  if (s[2] == s[4] and s[4] == s[6])
    {
      switch (who % 2)
	{
	case 1:
	  {
	    if (s[2] == 'X')
	      a++;
	    else
	      b++;
	  }
	  break;
	case 0:
	  {
	    if (s[2] == 'X')
	      b++;
	    else
	      a++;
	  }
	  break;
	}
      return 1;
    }
  return 0;
}

//har kiritishdan keyin show qilish uchun
void tic_show (char s[])
{
  cout << "\t " << s[0] << " | " << s[1] << " | " << s[2] << " \n";
  cout << "\t___|___|___\n";
  cout << "\t   |   |   \n";
  cout << "\t " << s[3] << " | " << s[4] << " | " << s[5] << " \n";
  cout << "\t___|___|___\n";
  cout << "\t   |   |   \n";
  cout << "\t " << s[6] << " | " << s[7] << " | " << s[8] << " \n";
}

void tic_begin ()
{
  cout << "\n   *********************\n";
  cout << "    | O'YIN BOSHLANDI | \n";
  cout << "\n 1-o'yinchi: " << a << "\t2-o'yinchi: " << b << endl;
  if (who % 2 == 1)
    cout << "\n  |> X <|        |> O <|\n";
  else
    cout << "\n  |> O <|        |> X <|\n";
  cout << "\t 1 | 2 | 3 \n";
  cout << "\t___|___|___\n";
  cout << "\t   |   |   \n";
  cout << "\t 4 | 5 | 6 \n";
  cout << "\t___|___|___\n";
  cout << "\t   |   |   \n";
  cout << "\t 7 | 8 | 9 \n";

  cout << ">>> 1 va 9 oralig'ida raqam kiriting <<<\n\n";
  cout << " < < <    0 => o'yindan chiqish   > > >\n";
}

//  X yoki O ni kiritilishi
bool tic_cin ()
{
  short qayta[10];		// kiritilgan sonlarni yig'ish va takrorlanmasligini tekshirish uchun
  char s[] = "123456789";	// kataklarni aniqlash uchun
  char x = 'X', o = 'O';	//ekranga chiqish uchun
  short k = 0;			//navbat uchun
  short c = 0;			//katakni tanlash uchun

kiritish:
  cout << "\n >>> ";
  cin >> c;

  if (c < 0 or c > 9)
    {
      cout << " X X > XATOLIK! [1dan 9gacha raqam kiriting] < X X\n";
      goto kiritish;
    }
  else if (c == 0)
    {
      cout << "\n > > ^ O'yin yopildi ^ < <\n";
      return 0;
    }
  if (k == 0)
    {
      qayta[k] = c;
    }
  else if (k > 0)
    for (int i = 0; i < k; i++)
      if (qayta[i] != c)
	qayta[k] = c;
      else
	{
	  cout << "\nx x x x x x x x x x x x";
	  cout << "\n Boshqa katak tanlang!\n";
	  goto kiritish;
	}
  k++;				//keyingi navbat uchun

  if (k % 2 == 1)
    s[c - 1] = x;
  else
    s[c - 1] = o;
  tic_show (s);

  if (k > 8)
    {
      if (check (s) == 1)
	{
	  who++;
	  tic_begin ();
	  tic_cin ();
	}
      else
	{
	  cout << "\n     = = = = = = = = =\n";
	  cout << "     = D U R R A N G =\n";
	  cout << "     = = = = = = = = =\n";
	  who++;
	  tic_begin ();
	  tic_cin ();
	}
    }
  else if (check (s) == 0)
    goto kiritish;
  else
    {
      who++;
      tic_begin ();
      tic_cin ();
    }
  return 0;
}

void plus_start (int which)
{
  system ("CLS");
  switch (which)
    {
    case 1:
      cout << "\n\n\t| To'g'ri qo'shish |\n";
      break;
    case 2:
      cout << "\n\n\t| To'g'ri Ko'paytirish |\n";
      break;
    case 3:
      cout << "\n\n\t| Tic-Tac-Toe |\n";
      break;
    }
plus_game:
  cout << "\n|> 1 => BOSHLASH |> 0 => Chiqish \n";
  cout << ">>> Tanlovni kiriting (1 yoki 0)>>> ";

  short start = 0;
  cin >> start;
  switch (which)
    {
    case 1:
    case 2:
      switch (start)
	{
	case 0:
	  g_over ();
	  break;
	case 1:
	  {
	    cout <<
	      "\n< < < -1 ni kiritib o'yinni yakunlashingiz mumkin > > >\n";
	    plus_play (which);
	    break;
	  }

	default:
	  {
	    cout << "\n     _X_X_X_X_ X A T O L I K _X_X_X_X_\n";
	    goto plus_game;
	  }
	}
      break;

    case 3:
      {
	switch (start)
	  {
	  case 0:
	    g_over ();
	    break;
	  case 1:
	    {
	      tic_begin ();
	      tic_cin ();
	    }
	    break;

	  default:
	    {
	      cout << "\n     _X_X_X_X_ X A T O L I K _X_X_X_X_\n";
	      goto plus_game;
	    }
	  }
      }
      break;
    }
}

int game ()
{
  cout << "\n\t _________________________";
  cout << "\n\t| 1. To'g'ri Qo'shish     |";
  cout << "\n\t| 2. To'g'ri Ko'paytirish |";
  cout << "\n\t| 3. Tic-Tac-Toe          |";
  cout << "\n\t| 4. O'yin haqida         |";
  cout << "\n\t| 0 => O'yinni yopish     |";
  cout << "\n\t ************************* ";

  short g;
  cout << "\n > > Raqam bilan o'yinni tanlang > > ";
  cin >> g;

  return g;
}

int main ()
{
  cout << "\n\t| O'yinimizga xush kelibsiz |\n";

game_start:
  cout << "\n\t> > Sizda " << score << " XP bor < <\n";
  cout << "\n\t> > O'yinlar ro'yxati < <";
  int choise = game ();
  switch (choise)
    {
    case 0:
      {
	g_over ();
	return 0;
	break;
      }
    case 1:
      plus_start (1);
      break;
    case 2:
      plus_start (2);
      break;
    case 3:
      {
	if (score >= 150)
	  plus_start (3);
	else
	  {
	    system ("CLS");
	    cout << "\n    xx>> Siz hali 150 XP yig'madingiz <<xx \n";
	  }
      }
      break;
    case 4:
      info ();
      break;

    default:
      {
	system ("CLS");
	cout << "\n     _X_X_X_X_ X A T O L I K _X_X_X_X_\n";
	goto game_start;
      }
    }
  goto game_start;
  return 0;
}

