int X[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
int Y[] = {0, 9, 10, 11, 12, 13, A0, A1, A2};

// Define the static pattern (1 represents LED on, 0 represents LED off)
int staticPattern[8][8] = {
  {0, 1, 1, 0, 0, 1, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {0, 1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0}
};

void setup()
{
  for (int i = 1; i < 9; i++)
  {
    pinMode(X[i], OUTPUT);
    pinMode(Y[i], OUTPUT);
    digitalWrite(X[i], HIGH);
    digitalWrite(Y[i], LOW);
  }
}

void loop()
{
  displayStaticPattern();
}

void displayStaticPattern()
{
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      digitalWrite(X[i + 1], LOW);
      digitalWrite(Y[j + 1], staticPattern[i][j] ? HIGH : LOW);
      effacer();
    }
  }
}

void effacer()
{
  for (int i = 1; i < 9; i++)
  {
    digitalWrite(X[i], HIGH);
    digitalWrite(Y[i], LOW);
  }
}
