#include <stdio.h>
#include <string.h>
#include <math.h>

void menu();
void somma();
void sottrai();
void moltiplica();
void dividi();
void ins_string();
void potenza();
void radice();
void percentuale();
void log_dec();
void log_nat();

int main () {
	char scelta = '\0';
	
	//intro
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti!\n");
	
	//scelte
	while (1) {
	    printf ("\n\nCome posso aiutarti?\n\n");
	    menu ();
	
    	    scanf (" %c", &scelta);
	    getchar();
	
	    while (scelta != 'A' && scelta != 'a' && scelta != 'B' && scelta != 'b' && scelta != 'C' && scelta != 'c' && scelta != 'D' &&
	    scelta != 'd' && scelta != 'E' && scelta != 'e' && scelta != 'F' && scelta != 'f' && scelta != 'G' && scelta != 'g' && scelta 
	    != 'H' && scelta != 'h' && scelta != 'I' && scelta != 'i' && scelta != 'L' && scelta != 'l' ) {
            printf("\nSeleziona un'opzione valida.\n");
            menu();
            scanf(" %c", &scelta);
            getchar(); }
	
	    switch (scelta) {
	    case 'A':
	    case 'a':
	    somma();
	    break;
	    case 'B':
	    case 'b':
            sottrai();
            break;
	    case 'C':
	    case 'c':
            moltiplica();
            break;
            case 'D':
	    case 'd':
            dividi();
            break;
            case 'E':
	    case 'e':
            ins_string();
            break;
            case 'F':
	    case 'f':
            potenza();
            break;
            case 'G':
	    case 'g':
            radice();
            break;
            case 'H':
	    case 'h':
            log_dec();
            break;
            case 'I':
	    case 'i':
            log_nat();
            break;
            case 'L':
	    case 'l':
	    printf("Alla prossima!");
	    return 0;
            default:  
            printf("\nSeleziona un'opzione valida.\n");
	    break; }
	    }
    
return 0;

}

//menu scelte
void menu () {
    printf("A >> Sommare due numeri\n");
    printf("B >> Sottrarre due numeri\n");
    printf("C >> Moltiplicare due numeri\n");
    printf("D >> Dividere due numeri\n");
    printf("E >> Lunghezza di una stringa\n");
    printf("F >> Potenza di un numero\n");
    printf("G >> Radice di un numero\n");
    printf("H >> Logaritmo decimale\n");
    printf("I >> Logaritmo naturale\n");
    printf("L >> Esci\n\n");
    printf("Scelta:\n"); }
    
//funzione somma    
void somma () {
    float a, b = 0.0f;
    printf ("\nInserisci i due numeri da sommare:\n");
    scanf ("%f", &a);
    scanf ("%f", &b);
    
    float somma = a + b;
    
    if (fmodf(somma, 1.0) == 0) {
    printf ("\nLa somma tra %.0f e %.0f e': %.0f\n", a, b, somma);
    } else {
    printf("\nLa somma tra %.0f e %.0f è: %.5f\n", a, b, somma); }
    }
    
//funzione sottrazione	
void sottrai () {
    float a, b = 0.0f;
    printf ("\nInserisci i due numeri da sottrarre:\n");
    scanf ("%f", &a);
    scanf ("%f", &b);
    
    float sottrazione = a - b;
    
    if (fmodf(sottrazione, 1.0) == 0) {
    printf ("\nLa differenza tra %.0f e %.0f e': %.0f\n", a, b, sottrazione);
    } else {
    printf ("\nLa differenza tra %.0f e %.0f è: %.5f\n", a, b, sottrazione);}	
    }	
    
//funzione moltiplicazione
void moltiplica () {
    float a, b = 0.0f;
    printf ("\nInserisci i due numeri da moltiplicare:\n");
    scanf ("%f", &a);
    scanf ("%f", &b);
    
    float prodotto = a * b;
    
    if (fmodf(prodotto, 1.0) == 0) {
    printf ("\nIl prodotto tra %.0f e %.0f e': %.0f\n", a, b, prodotto);
    } else {
    printf ("\nIl prodotto tra %.0f e %.0f è: %.5f\n", a, b, prodotto); }
    }
    
//funzione divisione
void dividi () {
    float a, b = 0.0f;
    printf ("\nInserisci il numeratore:\n");
    scanf ("%f", &a);
    printf ("\nInserisci il denominatore:\n");
    scanf ("%f", &b);

    if (b != 0) {
    float divisione = a / b;
    float resto = fmodf(a, b);
    
    if (fmodf(divisione, 1.0) == 0 && fmodf(resto, 1.0) == 0) {
    printf ("\nLa divisione tra %.0f e %.0f e': %.0f con il resto di %.0f\n", a, b, divisione, resto);
    } else {
    printf ("\nLa divisione tra %.0f e %.0f e': %.5f con il resto di %.5f\n", a, b, divisione, resto); }
    } else {
    printf("\nImpossibile dividere per zero!\n"); }
    }

//funzione lunghezza stringa
void ins_string () {
    char stringa[50];
    printf ("\nInserisci la stringa:\n");
    fgets(stringa, 50, stdin);
    printf("\nHai inserito una stringa lunga %ld caratteri\n", strlen(stringa)); }

//funzione potenza
void potenza() {
    float base, esponente;
    printf("\nInserisci la base:\n");
    scanf("%f", &base);
    printf("\nInserisci l'esponente:\n");
    scanf("%f", &esponente);

    float potenza = pow(base, esponente);
    
    if (fmodf(potenza, 1.0) == 0) {
    printf("\nIl risultato di %.5f elevato a %.5f è: %.0f\n", base, esponente, potenza);
    } else {
    printf("\nIl risultato di %.5f elevato a %.5f è: %.5f\n", base, esponente, potenza); }
    }
    
//funzione radice
void radice() {
    float radicale = 0.0f;
    int radice = 0;
    printf("\nInserisci il radicale:\n");
    scanf("%f", &radicale);
    printf("\nInserisci l'indice della radice:\n");
    scanf("%d", &radice);

    if (radicale >= 0) {
    float risultato = pow(radicale, 1.0 / radice);
    float parte_intera;
    float parte_decimale = modf(risultato, &parte_intera);

    if (parte_decimale == 0) {
    printf("\nLa radice %d di %.5f è: %.0f\n", radice, radicale, parte_intera);
    } else {
    printf("\nLa radice %d di %.5f è: %.5f\n", radice, radicale, risultato); }
    } else {
    printf("\nImpossibile calcolare la radice di un numero negativo!\n"); }
    }

//funzione logaritmo decimale
void log_dec() {
    float numero;
    printf("\nInserisci il numero:\n");
    scanf("%f", &numero);

    if (numero > 0) {
    float logaritmo = log10(numero);

    if (fmodf(logaritmo, 1.0) == 0) {
    printf("\nIl logaritmo decimale di %.5f è: %.0f\n", numero, logaritmo);
    } else {
    printf("\nIl logaritmo decimale di %.5f è: %.5f\n", numero, logaritmo); }
    } else {
    printf("\nImpossibile calcolare il logaritmo di un numero non positivo!\n"); }
    }

//funzione logaritmo naturale
void log_nat() {
    float numero;
    printf("\nInserisci il numero:\n");
    scanf("%f", &numero);

    if (numero > 0) {
    float logaritmo = log(numero);

    if (fmodf(logaritmo, 1.0) == 0) {
    printf("\nIl logaritmo naturale di %.5f è: %.0f\n", numero, logaritmo);
    } else {
    printf("\nIl logaritmo naturale di %.5f è: %.5f\n", numero, logaritmo); }
    } else {
    printf("\nImpossibile calcolare il logaritmo di un numero non positivo!\n"); }
    }
