import math

#Perimetro quadrato
def per_quadrato():
    L = float(input("Inserisci la lunghezza del lato del quadrato: "))
    perimetro = 4 * L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del quadrato è:", perimetro)
    return perimetro
#Perimetro rettangolo
def per_rettangolo():
    b = float(input("Inserisci la base del rettangolo: "))
    h = float(input("Inserisci l'altezza del rettangolo: "))
    perimetro = 2 * (b + h)

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del rettangolo è:", perimetro)
    return perimetro
#Perimetro cerchio
def per_cerchio():
    r = float(input("Inserisci il raggio del cerchio: "))
    perimetro = 2 * math.pi * r

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del cerchio è:", perimetro)
    return perimetro
#Perimetro semicerchio
def per_semicerchio():
    r = float(input("Inserisci il raggio del semicerchio: "))
    d = float(input("Inserisci la lunghezza della corda: "))
    perimetro = math.pi * r + d

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del semicerchio è:", perimetro)
    return perimetro
#Settore circolare
def settore_circolare():
    L = float(input("Inserisci la lunghezza dell'arco del settore circolare: "))
    r = float(input("Inserisci il raggio del settore circolare: "))
    perimetro = 2 * L + r

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il settore circolare è:", perimetro)
    return perimetro
#Segmento circolare
def segmento_circolare():
    c = float(input("Inserisci la lunghezza della corda del segmento circolare: "))
    L = float(input("Inserisci la lunghezza dell'arco del segmento circolare: "))
    perimetro = 2 * c + L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il segmento circolare è:", perimetro)
    return perimetro
#Segmento circolare a due basi
def circolare_2basi():
    c1 = float(input("Inserisci la lunghezza della prima corda del segmento circolare: "))
    c2 = float(input("Inserisci la lunghezza della seconda corda del segmento circolare: "))
    L1 = float(input("Inserisci la lunghezza del primo arco del segmento circolare: "))
    L2 = float(input("Inserisci la lunghezza del secondo arco del segmento circolare: "))
    perimetro = c1 + c2 + L1 + L2

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("La circolare a due basi è:", perimetro)
    return perimetro
#Corona circolare
def corona_circolare():
    r = float(input("Inserisci il raggio interno della corona circolare: "))
    R = float(input("Inserisci il raggio esterno della corona circolare: "))
    perimetro = 2 * math.pi * (r + R)

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("La corona circolare è:", perimetro)
    return perimetro
#Perimetro triangolo qualsiasi
def per_triangolo():
    L1 = float(input("Inserisci la lunghezza del primo lato del triangolo: "))
    L2 = float(input("Inserisci la lunghezza del secondo lato del triangolo: "))
    L3 = float(input("Inserisci la lunghezza del terzo lato del triangolo: "))
    perimetro = L1 + L2 + L3

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del triangolo è:", perimetro)
    return perimetro
#Perimetro triangolo rettangolo
def per_triangolo_rettangolo():
    i = float(input("Inserisci la lunghezza dell'ipotenusa del triangolo rettangolo: "))
    c1 = float(input("Inserisci la lunghezza del primo cateto del triangolo rettangolo: "))
    c2 = float(input("Inserisci la lunghezza del secondo cateto del triangolo rettangolo: "))
    perimetro = i + c1 + c2

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del triangolo rettangolo è:", perimetro)
    return perimetro
#Perimetro triangolo isoscele
def per_triangolo_isoscele():
    b = float(input("Inserisci la base del triangolo isoscele: "))
    L = float(input("Inserisci la lunghezza dei lati obliqui del triangolo isoscele: "))
    perimetro = b + 2 * L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del triangolo isoscele è:", perimetro)
    return perimetro
#PErimetro triangolo equilatero
def per_triangolo_equilatero():
    L = float(input("Inserisci la lunghezza dei lati del triangolo equilatero: "))
    perimetro = 3 * L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del triangolo equilatero è:", perimetro)
    return perimetro
#Perimetro trapezio qualsiasi
def per_trapezio():
    B = float(input("Inserisci la lunghezza della base maggiore del trapezio: "))
    b = float(input("Inserisci la lunghezza della base minore del trapezio: "))
    L1 = float(input("Inserisci la lunghezza del primo lato obliquo del trapezio: "))
    L2 = float(input("Inserisci la lunghezza del secondo lato obliquo del trapezio: "))
    perimetro = B + b + L1 + L2

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del trapezio è:", perimetro)
    return perimetro
#Perimetro trapezio rettangolo
def per_trapezio_rettangolo():
    B = float(input("Inserisci la lunghezza della base maggiore del trapezio rettangolo: "))
    b = float(input("Inserisci la lunghezza della base minore del trapezio rettangolo: "))
    L = float(input("Inserisci la lunghezza di uno dei lati obliqui del trapezio rettangolo: "))
    h = float(input("Inserisci l'altezza del trapezio rettangolo: "))
    perimetro = B + b + L + h

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del trapezio rettangolo è:", perimetro)
    return perimetro
#Perimetro trapezio isoscele
def per_trapezio_isoscele():
    B = float(input("Inserisci la lunghezza della base maggiore del trapezio isoscele: "))
    b = float(input("Inserisci la lunghezza della base minore del trapezio isoscele: "))
    L = float(input("Inserisci la lunghezza dei lati obliqui del trapezio isoscele: "))
    perimetro = B + b + 2 * L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del trapezio isoscele è:", perimetro)
    return perimetro
#Perimetro parallelogramma
def per_parallelogramma():
    b = float(input("Inserisci la lunghezza della base del parallelogramma: "))
    L = float(input("Inserisci la lunghezza di uno dei lati obliqui del parallelogramma: "))
    perimetro = 2 * (b + L)

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del parallelogramma è:", perimetro)
    return perimetro
#Perimetro rombo
def per_rombo():
    L = float(input("Inserisci la lunghezza dei lati del rombo: "))
    perimetro = 4 * L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del rombo è:", perimetro)
    return perimetro
#Perimetro pentagono regolare
def per_pentagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati del pentagono: "))
    perimetro = 5 * L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del pentagono è:", perimetro)
    return perimetro
#Perimetro esagono regolare
def per_esagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati dell'esagono: "))
    perimetro = 6 * L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro dell'esagono è:", perimetro)
    return perimetro
#Perimetro ettagono regolare
def per_ettagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati dell'ettagono: "))
    perimetro = 7 * L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro dell'ettagono è:", perimetro)
    return perimetro
#Perimetro ottagono regolare
def per_ottagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati dell'ottagono: "))
    perimetro = 8 * L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro dell'ottagono è:", perimetro)
    return perimetro
#Perimetro ennagono regolare
def per_ennagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati dell'ennagono: "))
    perimetro = 9 * L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro dell'ennagono è:", perimetro)
    return perimetro
#Perimetro decagono regolare
def per_decagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati del decagono: "))
    perimetro = 10 * L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del decagono è:", perimetro)
    return perimetro
#Perimetro dodecagono regolare
def per_dodecagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati del dodecagono: "))
    perimetro = 12 * L

    if perimetro.is_integer():
        perimetro = int(perimetro)

    print("Il perimetro del dodecagono è:", perimetro)
    return perimetro


#Introduzione
def intro():
    print('Benvenuto, sono un assitente digitale, posso aiutarti a calcolare il perimetro!')
#Menu scelte
def menu():
    print("1 >> Quadrato")
    print("2 >> Rettangolo")
    print("3 >> Cerchio")
    print("4 >> Semicerchio")
    print("5 >> Settore circolare")
    print("6 >> Segmento circolare")
    print("7 >> Circolare 2 basi")
    print("8 >> Corona circolare")
    print("9 >> Triangolo")
    print("10 >> Triangolo rettangolo")
    print("11 >> Triangolo isoscele")
    print("12 >> Triangolo equilatero")
    print("13 >> Trapezio")
    print("14 >> Trapezio rettangolo")
    print("15 >> Trapezio isoscele")
    print("16 >> Parallelogramma")
    print("17 >> Rombo")
    print("18 >> Pentagono regolare")
    print("19 >> Esagono regolare")
    print("20 >> Ettagono regolare")
    print("21 >> Ottagono regolare")
    print("22 >> Ennagono regolare")
    print("23 >> Decagono regolare")
    print("24 >> Dodecagono regolare")
    print("E >> Esci")
    print("Scelta:")

#Dizionario funzioni
scelte = {
    "1": per_quadrato,
    "2": per_rettangolo,
    "3": per_cerchio,
    "4": per_semicerchio,
    "5": settore_circolare,
    "6": segmento_circolare,
    "7": circolare_2basi,
    "8": corona_circolare,
    "9": per_triangolo,
    "10": per_triangolo_rettangolo,
    "11": per_triangolo_isoscele,
    "12": per_triangolo_equilatero,
    "13": per_trapezio,
    "14": per_trapezio_rettangolo,
    "15": per_trapezio_isoscele,
    "16": per_parallelogramma,
    "17": per_rombo,
    "18": per_pentagono_regolare,
    "19": per_esagono_regolare,
    "20": per_ettagono_regolare,
    "21": per_ottagono_regolare,
    "22": per_ennagono_regolare,
    "23": per_decagono_regolare,
    "24": per_dodecagono_regolare
}

#Main
def main():
    intro()
    scelta = ""

    while scelta != "E" and scelta != "e":
        print("\nCome posso aiutarti?\n")
        menu()
        scelta = input().upper()

        if scelta in scelte:
            scelte[scelta]()
        elif scelta == "E" or scelta == "e":
            print("Alla prossima!")
            break
        else:
            print("Seleziona un'opzione valida.")

if __name__ == "__main__":
    main()
