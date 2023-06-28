import math

#Funzione somma
def somma():
    a = float(input("\nInserisci il primo numero da sommare: "))
    b = float(input("Inserisci il secondo numero da sommare: "))

    somma = a + b

    if somma.is_integer():
        print(f"\nLa somma tra {int(a)} e {int(b)} è: {int(somma)}")
    else:
        print(f"\nLa somma tra {int(a)} e {int(b)} è: {somma:.5f}")
#Funzione sottrai
def sottrai():
    a = float(input("\nInserisci il primo numero da sottrarre: "))
    b = float(input("Inserisci il secondo numero da sottrarre: "))

    sottrazione = a - b

    if sottrazione.is_integer():
        print(f"\nLa differenza tra {int(a)} e {int(b)} è: {int(sottrazione)}")
    else:
        print(f"\nLa differenza tra {int(a)} e {int(b)} è: {sottrazione:.5f}")
#Funzione moltiplica
def moltiplica():
    a = float(input("\nInserisci il primo numero: "))
    b = float(input("Inserisci il secondo numero: "))
    
    prodotto = a * b
    
    if prodotto.is_integer():
        print("\nIl prodotto tra", a, "e", b, "è:", int(prodotto))
    else:
        print("\nIl prodotto tra", a, "e", b, "è:", prodotto)
#Funzione dividi
def dividi():
    a = float(input("\nInserisci il numeratore: "))
    b = float(input("Inserisci il denominatore: "))

    if b != 0:
        divisione = a / b
        resto = a % b

        if divisione.is_integer() and resto.is_integer():
            print("\nLa divisione tra", a, "e", b, "è:", int(divisione), "con il resto di", int(resto))
        else:
            print("\nLa divisione tra", a, "e", b, "è:", divisione, "con il resto di", resto)
    else:
        print("\nImpossibile dividere per zero!")
#Funzione radice
def radice():
    radicale = float(input("\nInserisci il radicale: "))
    radice = int(input("Inserisci l'indice della radice: "))

    if radicale >= 0:
        risultato = math.pow(radicale, 1.0 / radice)
        parte_intera = math.floor(risultato)
        parte_decimale = risultato - parte_intera

        if math.isclose(parte_decimale, 0):
            print("\nLa radice", radice, "di", radicale, "è:", int(parte_intera))
        else:
            print("\nLa radice", radice, "di", radicale, "è:", risultato)
    else:
        print("\nImpossibile calcolare la radice di un numero negativo!")
#Funzione potenza
def potenza():
    base = float(input("\nInserisci la base: "))
    esponente = float(input("Inserisci l'esponente: "))

    potenza = math.pow(base, esponente)

    if math.isclose(potenza, int(potenza)):
        print("\nIl risultato di", base, "elevato a", esponente, "è:", int(potenza))
    else:
        print("\nIl risultato di", base, "elevato a", esponente, "è:", potenza)
#Funzione logaritmo decimale
def log_dec():
    numero = float(input("\nInserisci il numero: "))

    if numero > 0:
        logaritmo = math.log10(numero)

        if math.isclose(logaritmo, int(logaritmo)):
            print("\nIl logaritmo decimale di", numero, "è:", int(logaritmo))
        else:
            print("\nIl logaritmo decimale di", numero, "è:", logaritmo)
    else:
        print("\nImpossibile calcolare il logaritmo di un numero non positivo!")
#Funzione logaritmo naturale
def log_nat():
    numero = float(input("\nInserisci il numero: "))

    if numero > 0:
        logaritmo = math.log(numero)

        if math.isclose(logaritmo, int(logaritmo)):
            print("\nIl logaritmo naturale di", numero, "è:", int(logaritmo))
        else:
            print("\nIl logaritmo naturale di", numero, "è:", logaritmo)
    else:
        print("\nImpossibile calcolare il logaritmo di un numero non positivo!")
#Funzione stringa
def ins_string():
    stringa = input("\nInserisci la stringa: ")
    lunghezza = len(stringa)
    print("\nHai inserito una stringa lunga", lunghezza, "caratteri")
#Funzione fattoriale
def fattoriale():
    numero = int(input("\nInserisci un numero per calcolare il fattoriale: "))
    risultato = math.factorial(numero)
    
    if isinstance(risultato, int):
        print(f"Il fattoriale di {numero} è: {risultato:,d}")
    else:
        print(f"Il fattoriale di {numero} è: {risultato}")

#Dizionario funzioni
scelte = {
    "A": somma,
    "B": sottrai,
    "C": moltiplica,
    "D": dividi,
    "E": radice,
    "F": potenza,
    "G": log_dec,
    "H": log_nat,
    "I": ins_string,
    "J": fattoriale,
    "a": somma,
    "b": sottrai,
    "c": moltiplica,
    "d": dividi,
    "e": radice,
    "f": potenza,
    "g": log_dec,
    "h": log_nat,
    "i": ins_string,
    "j": fattoriale
}
#Introduzione
def intro():
    print('Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti!')
#Menu scelte
def menu():
    print("A >> Sommare due numeri")
    print("B >> Sottrarre due numeri")
    print("C >> Moltiplicare due numeri")
    print("D >> Dividere due numeri")
    print("E >> Calcolare la radice quadrata")
    print("F >> Calcolare la potenza")
    print("G >> Calcolare il logaritmo decimale")
    print("H >> Calcolare il logaritmo naturale")
    print("I >> Calcolare lunghezza stringa")
    print("J >> Calcolare il fattoriale")
    print("L >> Esci")
    print("Scelta:")

intro()

scelta = ""
while scelta != "L" and scelta != "l":
    print("\nCome posso aiutarti?\n")
    menu()
    scelta = input().upper()

    if scelta in scelte:
        scelte[scelta]()
    elif scelta == "L" or scelta == "l":
        print("Alla prossima!")
    else:
        print("Seleziona un'opzione valida.")
