#include <stdio.h>
.#include <string.h>

void menu();
void nome_giocatore();
void start();

char nome[30];

int main() {
    char scelta;

    //intro
    printf("Benvenuto futuro Ethical Hacker!\n");
    printf("Sei pronto a scoprire il tuo livello attuale?\n\n");
    menu();

    scanf("%c", &scelta);
    getchar();

    //scelta B
    while (scelta == 'B' || scelta == 'b') {
    printf("\nGrazie per aver giocato!\n");
    break; }   
    
    //scelta sbagliata
    while(scelta != 'A' && scelta != 'a' && scelta != 'B'&& scelta != 'b') {
    printf("Risposta non valida. Si prega di inserire A, B o C come risposta:\n");
    menu();
    scanf("%c", &scelta);
    getchar(); }

    //scelta A
    while(scelta == 'A' || scelta == 'a') {
    nome_giocatore();
    printf("\nPartiamo subito %s\n", nome);
    start();
    printf("\nGrazie per aver giocato!\n"); 
    break; }   

return 0;
}

//scelta nome
void nome_giocatore() {
    printf("\nCome ti chiami?\n");
    fgets(nome, 30, stdin); }

//menu iniziale
void menu(){
    printf("Premi A per iniziare una nuova partita\n");
    printf("Premi B per uscire\n");
    printf("Scelta: \n"); }

//start quiz
void start() {
    char risposta;
    int punteggio = 0;

    //domanda 1
    printf("\nCosa usi per il tuo codice?\nA. Visual Studio code \t \t B. Nano \t \t C. Notepad++ \n\n ");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    
    while (risposta != 'A' && risposta != 'a' && risposta != 'B' && risposta != 'b' && risposta != 'C' && risposta != 'c') {
    printf("Risposta non valida. Si prega di inserire A, B o C come risposta.\n");
    printf("Risposta: ");
    scanf(" %c", &risposta); }

    if(risposta == 'B' || risposta == 'b' || risposta == 'C'  || risposta == 'c') 
    punteggio++;
    
    
    
    //domanda 2
    printf("Il Flipper Zero serve per?\nA. Imbucarti dentro casa altrui \t \t B. Creare panico all'Euronics \t \t C. Non far dormire i vicini \n\n ");
    printf("Risposta: ");  
    scanf(" %c", &risposta);
    
    while (risposta != 'A' && risposta != 'a' && risposta != 'B' && risposta != 'b' && risposta != 'C' && risposta != 'c') {
    printf("Risposta non valida. Si prega di inserire A, B o C come risposta.\n");
    printf("Risposta: ");
    scanf(" %c", &risposta); }

    if(risposta == 'A' || risposta == 'a' || risposta == 'B' || risposta == 'b' || risposta == 'C'  || risposta == 'c')
    punteggio++;



    // domanda 3
    printf("Sul dark web utilizzi: \nA. Tor-over-VPN \t \t B. 7 proxy \t \t C. Il wifi del McDonald's \n\n ");
    printf("Risposta: ");  
    scanf(" %c", &risposta);

    while (risposta != 'A' && risposta != 'a' && risposta != 'B' && risposta != 'b' && risposta != 'C' && risposta != 'c') {
    printf("Risposta non valida. Si prega di inserire A, B o C come risposta.\n");
    printf("Risposta: ");
    scanf(" %c", &risposta); }
    
    if(risposta == 'B' || risposta == 'b' || risposta == 'C'  || risposta == 'c') 
    punteggio++;



    //domanda 4
    printf("Dove conservi le password? \nA. Cassaforte \t \t B. Barattolo della maionese \t \t C. Sotto il cuscino \n\n ");
    printf("Risposta: ");  
    scanf(" %c", &risposta);

    while (risposta != 'A' && risposta != 'a' && risposta != 'B' && risposta != 'b' && risposta != 'C' && risposta != 'c') {
    printf("Risposta non valida. Si prega di inserire A, B o C come risposta.\n");
    printf("Risposta: ");
    scanf(" %c", &risposta); }

    if(risposta == 'A' || risposta == 'a' || risposta == 'C'  || risposta == 'c') 
    punteggio++;
   
   

    //domanda 5
    printf("Kevin Mitnick e': \nA. La mia religione \t \t B. Il mio alter-ego \t \t C. Chi? \n\n ");
    printf("Risposta: ");
    scanf(" %c", &risposta);
                
    while (risposta != 'A' && risposta != 'a' && risposta != 'B' && risposta != 'b' && risposta != 'C' && risposta != 'c') {
    printf("Risposta non valida. Si prega di inserire A, B o C come risposta.\n");
    printf("Risposta: ");
    scanf(" %c", &risposta); }      
                
    if(risposta == 'A' || risposta == 'a' || risposta == 'B'  || risposta == 'b') 
    punteggio++;



    //punteggio totale
    printf("\nHai totalizzato %d punti %s\n\n", punteggio, nome);

    if(punteggio >=4) {
 
    printf("Congratulazioni, sei psicopatico!\n");
    printf("Sogni in assembly, vedi in binario, l'eroe che non meritiamo.\n");
  
    }else if(punteggio == 2 || punteggio == 3 ) {

    printf("Congratulazioni, sei uno script kiddie!\n");
    printf("Ogni mese consumi ctrl, c e v, stack overflow lo paghi a rate come il mutuo, i tuoi amici parlano di small dick energy.\n");

    }else if(punteggio == 1) {

    printf("Congratulazioni, sei ancora in tempo per scappare!\n");
    printf("Sorridi ancora quando ti svegli la mattina, paghi nordvpn per andare su calzino vedovo nel cassetto di facebook.\n"); }
    } 
