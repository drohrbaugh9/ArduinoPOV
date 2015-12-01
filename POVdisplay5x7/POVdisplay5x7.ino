#include <avr/pgmspace.h>

PROGMEM byte _ = B0;
PROGMEM byte M = B1;

PROGMEM byte A[7][6] = {{_,M,M,M,_,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,M,M,M,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_}};

PROGMEM byte B[7][6] = {{M,M,M,M,_,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,M,M,M,_,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,M,M,M,_,_}};

PROGMEM byte C[7][6] = {{_,M,M,M,_,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,M,_},
                       {_,M,M,M,_,_}};

PROGMEM byte D[7][6] = {{M,M,M,M,_,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,M,M,M,_,_}};

PROGMEM byte E[7][6] = {{M,M,M,M,M,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,M,M,M,_,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,M,M,M,M,_}};
               
PROGMEM byte F[7][6] = {{M,M,M,M,M,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,M,M,M,_,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_}};

PROGMEM byte G[7][6] = {{_,M,M,M,_,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,_,_},
                       {M,_,M,M,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {_,M,M,M,M},_};

PROGMEM byte H[7][6] = {{M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,M,M,M,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_}};

PROGMEM byte I[7][6] = {{M,M,M,M,M,_},
                       {_,_,M,_,_,_},
                       {_,_,M,_,_,_},
                       {_,_,M,_,_,_},
                       {_,_,M,_,_,_},
                       {_,_,M,_,_,_},
                       {M,M,M,M,M,_}};

PROGMEM byte J[7][6] = {{_,_,M,M,M,_},
                       {_,_,_,M,_,_},
                       {_,_,_,M,_,_},
                       {_,_,_,M,_,_},
                       {_,_,_,M,_,_},
                       {M,_,_,M,_,_},
                       {_,M,M,_,_,_}};

PROGMEM byte K[7][6] = {{M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,M,_,_},
                       {M,M,M,_,_,_},
                       {M,_,_,M,_,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_}};

PROGMEM byte L[7][6] = {{M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,M,M,M,M,_}};

PROGMEM byte M[7][6] = {{M,_,_,_,M,_},
                       {M,M,_,M,M,_},
                       {M,_,M,_,M,_},
                       {M,_,M,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_}};

PROGMEM byte N[7][6] = {{M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,M,_,_,M,_},
                       {M,_,M,_,M,_},
                       {M,_,_,M,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_}};

PROGMEM byte O[7][6] = {{_,M,M,M,_,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {_,M,M,M,_,_}};

PROGMEM byte P[7][6] = {{M,M,M,M,_,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,M,M,M,_,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_}};

PROGMEM byte Q[7][6] = {{_,M,M,M,_,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,M,_,M,_},
                       {M,_,_,M,_,_},
                       {_,M,M,_,M,_}};

PROGMEM byte R[7][6] = {{M,M,M,M,_,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,M,M,M,_,_},
                       {M,_,M,_,_,_},
                       {M,_,_,M,_,_},
                       {M,_,_,_,M,_}};

PROGMEM byte S[7][6] = {{_,M,M,M,M,_},
                       {M,_,_,_,_,_},
                       {M,_,_,_,_,_},
                       {_,M,M,M,_,_},
                       {_,_,_,_,M,_},
                       {_,_,_,_,M,_},
                       {M,M,M,M,_,_}};

PROGMEM byte T[7][6] = {{M,M,M,M,M,_},
                       {_,_,M,_,_,_},
                       {_,_,M,_,_,_},
                       {_,_,M,_,_,_},
                       {_,_,M,_,_,_},
                       {_,_,M,_,_,_},
                       {_,_,M,_,_,_}};

PROGMEM byte U[7][6] = {{M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {_,M,M,M,_,_}};

PROGMEM byte V[7][6] = {{M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {_,M,_,M,_,_},
                       {_,M,_,M,_,_},
                       {_,_,M,_,_,_}};

PROGMEM byte W[7][6] = {{M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,M,_,M,_},
                       {M,_,M,_,M,_},
                       {M,_,M,_,M,_},
                       {_,M,_,M,_,_}};

PROGMEM byte X[7][6] = {{M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {_,M,_,M,_,_},
                       {_,_,M,_,_,_},
                       {_,M,_,M,_,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_}};

PROGMEM byte Y[7][6] = {{M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {M,_,_,_,M,_},
                       {_,M,_,M,_,_},
                       {_,_,M,_,_,_},
                       {_,_,M,_,_,_},
                       {_,_,M,_,_,_}};

PROGMEM byte Z[7][6] = {{M,M,M,M,M,_},
                       {_,_,_,_,M,_},
                       {_,_,_,M,_,_},
                       {_,_,M,_,_,_},
                       {_,M,_,_,_,_},
                       {M,_,_,_,_,_},
                       {M,M,M,M,M,_}};

PROGMEM byte Ex[7][6] = {{_,_,M,_,_,_},
                        {_,_,M,_,_,_},
                        {_,_,M,_,_,_},
                        {_,_,M,_,_,_},
                        {_,_,_,_,_,_},
                        {_,_,M,_,_,_},
                        {_,_,M,_,_,_}};

PROGMEM byte Qu[7][6] = {{_,M,M,M,_,_},
                        {M,_,_,_,M,_},
                        {_,_,_,_,M,_},
                        {_,_,_,M,_,_},
                        {_,_,M,_,_,_},
                        {_,_,_,_,_,_},
                        {_,_,M,_,_,_}};

PROGMEM byte Co[7][6] = {{_,_,_,_,_,_},
                        {_,_,_,_,_,_},
                        {_,_,_,_,_,_},
                        {_,_,_,_,_,_},
                        {M,M,_,_,_,_},
                        {_,M,_,_,_,_},
                        {M,_,_,_,_,_}};

PROGMEM byte Pe[7][6] = {{_,_,_,_,_,_},
                        {_,_,_,_,_,_},
                        {_,_,_,_,_,_},
                        {_,_,_,_,_,_},
                        {_,_,_,_,_,_},
                        {M,M,_,_,_,_},
                        {M,M,_,_,_,_}};

PROGMEM byte Sp[7][6] = {{_,_,_,_,_,_},
                        {_,_,_,_,_,_},
                        {_,_,_,_,_,_},
                        {_,_,_,_,_,_},
                        {_,_,_,_,_,_},
                        {_,_,_,_,_,_},
                        {_,_,_,_,_,_}};

PROGMEM byte One[7][6] = {{_,_,M,_,_,_},
                         {_,M,M,_,_,_},
                         {_,_,M,_,_,_},
                         {_,_,M,_,_,_},
                         {_,_,M,_,_,_},
                         {_,_,M,_,_,_},
                         {_,M,M,M,_,_}};

PROGMEM byte Two[7][6] = {{_,M,M,M,_,_},
                         {M,_,_,_,M,_},
                         {_,_,_,_,M,_},
                         {_,_,_,M,_,_},
                         {_,_,M,_,_,_},
                         {_,M,_,_,_,_},
                         {M,M,M,M,M,_}};

PROGMEM byte Thr[7][6] = {{M,M,M,M,M,_},
                         {_,_,_,M,_,_},
                         {_,_,M,_,_,_},
                         {_,_,_,M,_,_},
                         {_,_,_,_,M,_},
                         {M,_,_,_,M,_},
                         {_,M,M,M,_,_}};

PROGMEM byte Fou[7][6] = {{_,_,_,M,_,_},
                         {_,_,M,M,_,_},
                         {_,M,_,M,_,_},
                         {M,_,_,M,_,_},
                         {M,M,M,M,M,_},
                         {_,_,_,M,_,_},
                         {_,_,_,M,_,_}};

PROGMEM byte Fiv[7][6] = {{M,M,M,M,M,_},
                         {M,_,_,_,_,_},
                         {M,M,M,M,_,_},
                         {_,_,_,_,M,_},
                         {_,_,_,_,M,_},
                         {M,_,_,_,M,_},
                         {_,M,M,M,_,_}};

PROGMEM byte Six[7][6] = {{_,_,M,M,_,_},
                         {_,M,_,_,_,_},
                         {M,_,_,_,_,_},
                         {M,M,M,M,_,_},
                         {M,_,_,_,M,_},
                         {M,_,_,_,M,_},
                         {_,M,M,M,_,_}};

PROGMEM byte Sev[7][6] = {{M,M,M,M,M,_},
                         {_,_,_,_,M,_},
                         {_,_,_,M,_,_},
                         {_,_,M,_,_,_},
                         {_,M,_,_,_,_},
                         {_,M,_,_,_,_},
                         {_,M,_,_,_,_}};

PROGMEM byte Eig[7][6] = {{_,M,M,M,_,_},
                         {M,_,_,_,M,_},
                         {M,_,_,_,M,_},
                         {_,M,M,M,_,_},
                         {M,_,_,_,M,_},
                         {M,_,_,_,M,_},
                         {_,M,M,M,_,_}};

PROGMEM byte Nin[7][6] = {{_,M,M,M,_,_},
                         {M,_,_,_,M,_},
                         {M,_,_,_,M,_},
                         {_,M,M,M,M,_},
                         {_,_,_,_,M,_},
                         {_,_,_,M,_,_},
                         {_,M,M,_,_,_}};

PROGMEM byte Zer[7][6] = {{_,M,M,M,_,_},
                         {M,_,_,_,M,_},
                         {M,_,_,M,M,_},
                         {M,_,M,_,M,_},
                         {M,M,_,_,M,_},
                         {M,_,_,_,M,_},
                         {_,M,M,M,_,_}};

void display(int letter[7][6]) {
  for (int t = 0; t < 6; t++) {
    for (int i = 0; i <7; i++) {
      digitalWrite(i + 2, letter[i][t]);
    }
    delay(10);
  }
  delay(5);
}

void displayLetter(char c) {
  c = toupper(c);
  switch (c) {
    case 'A':
      display(A); break;
    case 'B':
      display(B); break;
    case 'C':
      display(C); break;
    case 'D':
      display(D); break;
    case 'E':
      display(E); break;
    case 'F':
      display(F); break;
    case 'G':
      display(G); break;
    case 'H':
      display(H); break;
    case 'I':
      display(I); break;
    case 'J':
      display(J); break;
    case 'K':
      display(K); break;
    case 'L':
      display(L); break;
    case 'M':
      display(M); break;
    case 'N':
      display(N); break;
    case 'O':
      display(O); break;
    case 'P':
      display(P); break;
    case 'Q':
      display(Q); break;
    case 'R':
      display(R); break;
    case 'S':
      display(S); break;
    case 'T':
      display(T); break;
    case 'U':
      display(U); break;
    case 'V':
      display(V); break;
    case 'W':
      display(W); break;
    case 'Y':
      display(X); break;
    case 'Z':
      display(Z); break;
    case '!':
      display(Ex); break;
    case '?':
      display(Qu); break;
    case ',':
      display(Co); break;
    case '.':
      display(Pe); break;
    case ' ':
      display(Sp); break;
    case '1':
      display(One); break;
    case '2':
      display(Two); break;
    case '3':
      display(Thr); break;
    case '4':
      display(Fou); break;
    case '5':
      display(Fiv); break;
    case '6':
      display(Six); break;
    case '7':
      display(Sev); break;
    case '8':
      display(Eig); break;
    case '9':
      display(Nin); break;
    case '0':
      display(Zer); break;
  }
}

void displayString(String s) {
  for (int i = 0; i < sizeof(s); i++) {
    displayLetter(s[i]);
  }
}

void setup() {
  for (int i = 2; i < 8; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

void loop() {
  displayString("test ");
}
