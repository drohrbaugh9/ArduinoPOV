/*byte _ = B0;
byte M = B1;

byte A[7][6] =
{{_,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,M,M,M,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_}};

byte B[7][6] =
{{M,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,M,M,M,_,_}};

byte C[7][6] =
{{_,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {M,_,_,_,M,_},
 {_,M,M,M,_,_}};

byte D[7][6] =
{{M,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,M,M,M,_,_}};

byte E[7][6] =
{{M,M,M,M,_,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {M,M,M,M,_,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {M,M,M,M,M,_}};
 
byte F[7][6] =
{{M,M,M,M,M,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {M,M,M,M,_,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_}};

byte G[7][6] =
{{_,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,_,_},
 {M,_,M,M,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,M,M,M,_}};

byte H[7][6] =
{{M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,M,M,M,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_}};

byte I[7][6] =
{{M,M,M,M,M},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {M,M,M,M,M,_}};

byte J[7][6] =
{{_,_,M,M,M,_},
 {_,_,_,M,_,_},
 {_,_,_,M,_,_},
 {_,_,_,M,_,_},
 {_,_,_,M,_,_},
 {M,_,_,M,_,_},
 {_,M,M,_,_,_}};

byte K[7][6] =
{{M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,M,_,_},
 {M,M,M,_,_,_},
 {M,_,_,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_}};

byte L[7][6] =
{{M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {M,M,M,M,M,_}};

byte lM[7][6] =
{{M,_,_,_,M,_},
 {M,M,_,M,M,_},
 {M,_,M,_,M,_},
 {M,_,M,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_}};

byte N[7][6] =
{{M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,M,_,_,M,_},
 {M,_,M,_,M,_},
 {M,_,_,M,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_}};

byte O[7][6] =
{{_,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,M,M,_,_}};

byte P[7][6] =
{{M,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,M,M,M,_,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_}};

byte Q[7][6] =
{{_,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,M,_,M,_},
 {M,_,_,M,_,_},
 {_,M,M,_,M,_}};

byte R[7][6] =
{{M,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,M,M,M,_,_},
 {M,_,M,_,_,_},
 {M,_,_,M,_,_},
 {M,_,_,_,M,_}};

byte S[7][6] =
{{_,M,M,M,M,_},
 {M,_,_,_,_,_},
 {M,_,_,_,_,_},
 {_,M,M,M,_,_},
 {_,_,_,_,M,_},
 {_,_,_,_,M,_},
 {M,M,M,M,_,_}};

byte T[7][6] =
{{M,M,M,M,M,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_}};

byte U[7][6] =
{{M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,M,M,_,_}};

byte V[7][6] =
{{M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,_,M,_,_},
 {_,M,_,M,_,_},
 {_,_,M,_,_,_}};

byte W[7][6] =
{{M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,M,_,M,_},
 {M,_,M,_,M,_},
 {M,_,M,_,M,_},
 {_,M,_,M,_,_}};

byte X[7][6] =
{{M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,_,M,_,_},
 {_,_,M,_,_,_},
 {_,M,_,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_}};

byte Y[7][6] =
{{M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,_,M,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_}};

byte Z[7][6] =
{{M,M,M,M,M,_},
 {_,_,_,_,M,_},
 {_,_,_,M,_,_},
 {_,_,M,_,_,_},
 {_,M,_,_,_,_},
 {M,_,_,_,_,_},
 {M,M,M,M,M,_}};

byte Ex[7][6] =
{{_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,_,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_}};

byte Qu[7][6] =
{{_,M,M,M,_,_},
 {M,_,_,_,M,_},
 {_,_,_,_,M,_},
 {_,_,_,M,_,_},
 {_,_,M,_,_,_},
 {_,_,_,_,_,_},
 {_,_,M,_,_,_}};

byte Co[7][6] =
{{_,_,_,_,_,_},
 {_,_,_,_,_,_},
 {_,_,_,_,_,_},
 {_,_,_,_,_,_},
 {M,M,_,_,_,_},
 {_,M,_,_,_,_},
 {M,_,_,_,_,_}};

byte Pe[7][6] =
{{_,_,_,_,_,_},
 {_,_,_,_,_,_},
 {_,_,_,_,_,_},
 {_,_,_,_,_,_},
 {_,_,_,_,_,_},
 {M,M,_,_,_,_},
 {M,M,_,_,_,_}};

byte Sp[7][6] =
{{_,_,_,_,_,_},
 {_,_,_,_,_,_},
 {_,_,_,_,_,_},
 {_,_,_,_,_,_},
 {_,_,_,_,_,_},
 {_,_,_,_,_,_},
 {_,_,_,_,_,_}};

byte One[7][6] =
{{_,_,M,_,_,_},
 {_,M,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,_,M,_,_,_},
 {_,M,M,M,_,_}};

byte Two[7][6] =
{{_,M,M,M,_,_},
 {M,_,_,_,M,_},
 {_,_,_,_,M,_},
 {_,_,_,M,_,_},
 {_,_,M,_,_,_},
 {_,M,_,_,_,_},
 {M,M,M,M,M,_}};

byte Thr[7][6] =
{{M,M,M,M,M,_},
 {_,_,_,M,_,_},
 {_,_,M,_,_,_},
 {_,_,_,M,_,_},
 {_,_,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,M,M,_,_}};

byte Fou[7][6] =
{{_,_,_,M,_,_},
 {_,_,M,M,_,_},
 {_,M,_,M,_,_},
 {M,_,_,M,_,_},
 {M,M,M,M,M,_},
 {_,_,_,M,_,_},
 {_,_,_,M,_,_}};

byte Fiv[7][6] =
{{M,M,M,M,M,_},
 {M,_,_,_,_,_},
 {M,M,M,M,_,_},
 {_,_,_,_,M,_},
 {_,_,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,M,M,_,_}};

byte Six[7][6] =
{{_,_,M,M,_,_},
 {_,M,_,_,_,_},
 {M,_,_,_,_,_},
 {M,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,M,M,_,_}};

byte Sev[7][6] =
{{M,M,M,M,M,_},
 {_,_,_,_,M,_},
 {_,_,_,M,_,_},
 {_,_,M,_,_,_},
 {_,M,_,_,_,_},
 {_,M,_,_,_,_},
 {_,M,_,_,_,_}};

byte Eig[7][6] =
{{_,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,M,M,_,_}};

byte Nin[7][6] =
{{_,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,M,M,M,_},
 {_,_,_,_,M,_},
 {_,_,_,M,_,_},
 {_,M,M,_,_,_}};

byte Zer[7][6] =
{{_,M,M,M,_,_},
 {M,_,_,_,M,_},
 {M,_,_,M,M,_},
 {M,_,M,_,M,_},
 {M,M,_,_,M,_},
 {M,_,_,_,M,_},
 {_,M,M,M,_,_}};

void display(byte letter[7][6]) {
  for (int t = 0; t < 6; t++) {
    for (int i = 0; i < 7; i++) {
      digitalWrite(i + 2, letter[i][t]);
    }
    delay(2);
  }
  delay(1);
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
      display(lM); break;
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
  //for (int i = 0; i < sizeof(s); i++) {
  for (int i = 0; i < 6 || i < sizeof(s); i++) {
    displayLetter(s[i]);
  }
}

void setup() {
  for (int i = 2; i < 10; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(13, OUTPUT);
  digitalWrite(9, LOW);
  digitalWrite(13, LOW);
}

void loop() {
  displayString("test ");
}
*/

void setup()
{
  for (int i=2; i<=9; i++){
    pinMode(i, OUTPUT);
  }
  
    digitalWrite(9, LOW);
pinMode(13, OUTPUT);
digitalWrite(13, LOW);
}

/*void loop()
{
  for (int i=2; i<9; i=i+2){
     digitalWrite(i, HIGH);
  }
     for (int i=3; i<8; i=i+2){
     digitalWrite(i, LOW);}
}*/

void loop() {
  for (int i = 2; i < 9; i++) {
    digialWrite(i, HIGH);
    delay(25);
    digitalWrite(i, LOW);
  }
}
