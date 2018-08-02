//KMP O(n + m)
const int N = 1000000 + 6;
char P[N], T[N];
int b[N], n, m;

void kmpPreprocess (){
    int i = 0, j = -1;
    b[0] = -1;
    while (i < m){
        while (j >= 0 and P[i] != P[j])
            j = b[j];
        i++; j++;
        b[i] = j;
    }
}

void kmpSearch (){
    int i = 0, j = 0;
    while (i < n){
        while (j >= 0 and T[i] != P[j])
            j = b[j];
        i++; j++;
        if (j == m){
            // pattern found at index i - j
        }
    }
}
