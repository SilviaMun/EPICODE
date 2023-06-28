import math
from U1_W3_1.1 import *

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
