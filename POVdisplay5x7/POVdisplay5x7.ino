byte _ = B0;
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
