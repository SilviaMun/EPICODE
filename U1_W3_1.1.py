import math

#Converti int
def converti_int(perimetro):
    if perimetro.is_integer():
        perimetro = int(perimetro)
    return perimetro
#Perimetro quadrato
def per_quadrato():
    L = float(input("Inserisci la lunghezza del lato del quadrato: "))
    perimetro = 4 * L
    perimetro = converti_int(perimetro)
    print("Il perimetro del quadrato è:", perimetro)
    return perimetro
#Perimetro rettangolo
def per_rettangolo():
    b = float(input("Inserisci la base del rettangolo: "))
    h = float(input("Inserisci l'altezza del rettangolo: "))
    perimetro = 2 * (b + h)
    perimetro = converti_int(perimetro)
    print("Il perimetro del rettangolo è:", perimetro)
    return perimetro
#Perimetro cerchio
def per_cerchio():
    r = float(input("Inserisci il raggio del cerchio: "))
    perimetro = 2 * math.pi * r
    perimetro = converti_int(perimetro)
    print("Il perimetro del cerchio è:", perimetro)
    return perimetro
#Perimetro semicerchio
def per_semicerchio():
    r = float(input("Inserisci il raggio del semicerchio: "))
    d = float(input("Inserisci la lunghezza della corda: "))
    perimetro = math.pi * r + d
    perimetro = converti_int(perimetro)
    print("Il perimetro del semicerchio è:", perimetro)
    return perimetro
#Settore circolare
def settore_circolare():
    L = float(input("Inserisci la lunghezza dell'arco del settore circolare: "))
    r = float(input("Inserisci il raggio del settore circolare: "))
    perimetro = 2 * L + r
    perimetro = converti_int(perimetro)
    print("Il settore circolare è:", perimetro)
    return perimetro
#Segmento circolare
def segmento_circolare():
    c = float(input("Inserisci la lunghezza della corda del segmento circolare: "))
    L = float(input("Inserisci la lunghezza dell'arco del segmento circolare: "))
    perimetro = 2 * c + L
    perimetro = converti_int(perimetro)
    print("Il segmento circolare è:", perimetro)
    return perimetro
#Segmento circolare a due basi
def circolare_2basi():
    c1 = float(input("Inserisci la lunghezza della prima corda del segmento circolare: "))
    c2 = float(input("Inserisci la lunghezza della seconda corda del segmento circolare: "))
    L1 = float(input("Inserisci la lunghezza del primo arco del segmento circolare: "))
    L2 = float(input("Inserisci la lunghezza del secondo arco del segmento circolare: "))
    perimetro = c1 + c2 + L1 + L2
    perimetro = converti_int(perimetro)
    print("La circolare a due basi è:", perimetro)
    return perimetro
#Corona circolare
def corona_circolare():
    r = float(input("Inserisci il raggio interno della corona circolare: "))
    R = float(input("Inserisci il raggio esterno della corona circolare: "))
    perimetro = 2 * math.pi * (r + R)
    perimetro = converti_int(perimetro)
    print("La corona circolare è:", perimetro)
    return perimetro
#Perimetro triangolo qualsiasi
def per_triangolo():
    L1 = float(input("Inserisci la lunghezza del primo lato del triangolo: "))
    L2 = float(input("Inserisci la lunghezza del secondo lato del triangolo: "))
    L3 = float(input("Inserisci la lunghezza del terzo lato del triangolo: "))
    perimetro = L1 + L2 + L3
    perimetro = converti_int(perimetro)
    print("Il perimetro del triangolo è:", perimetro)
    return perimetro
#Perimetro triangolo rettangolo
def per_triangolo_rettangolo():
    i = float(input("Inserisci la lunghezza dell'ipotenusa del triangolo rettangolo: "))
    c1 = float(input("Inserisci la lunghezza del primo cateto del triangolo rettangolo: "))
    c2 = float(input("Inserisci la lunghezza del secondo cateto del triangolo rettangolo: "))
    perimetro = i + c1 + c2
    perimetro = converti_int(perimetro)
    print("Il perimetro del triangolo rettangolo è:", perimetro)
    return perimetro
#Perimetro triangolo isoscele
def per_triangolo_isoscele():
    b = float(input("Inserisci la base del triangolo isoscele: "))
    L = float(input("Inserisci la lunghezza dei lati obliqui del triangolo isoscele: "))
    perimetro = b + 2 * L
    perimetro = converti_int(perimetro)
    print("Il perimetro del triangolo isoscele è:", perimetro)
    return perimetro
#PErimetro triangolo equilatero
def per_triangolo_equilatero():
    L = float(input("Inserisci la lunghezza dei lati del triangolo equilatero: "))
    perimetro = 3 * L
    perimetro = converti_int(perimetro)
    print("Il perimetro del triangolo equilatero è:", perimetro)
    return perimetro
#Perimetro trapezio qualsiasi
def per_trapezio():
    B = float(input("Inserisci la lunghezza della base maggiore del trapezio: "))
    b = float(input("Inserisci la lunghezza della base minore del trapezio: "))
    L1 = float(input("Inserisci la lunghezza del primo lato obliquo del trapezio: "))
    L2 = float(input("Inserisci la lunghezza del secondo lato obliquo del trapezio: "))
    perimetro = B + b + L1 + L2
    perimetro = converti_int(perimetro)
    print("Il perimetro del trapezio è:", perimetro)
    return perimetro
#Perimetro trapezio rettangolo
def per_trapezio_rettangolo():
    B = float(input("Inserisci la lunghezza della base maggiore del trapezio rettangolo: "))
    b = float(input("Inserisci la lunghezza della base minore del trapezio rettangolo: "))
    L = float(input("Inserisci la lunghezza di uno dei lati obliqui del trapezio rettangolo: "))
    h = float(input("Inserisci l'altezza del trapezio rettangolo: "))
    perimetro = B + b + L + h
    perimetro = converti_int(perimetro)
    print("Il perimetro del trapezio rettangolo è:", perimetro)
    return perimetro
#Perimetro trapezio isoscele
def per_trapezio_isoscele():
    B = float(input("Inserisci la lunghezza della base maggiore del trapezio isoscele: "))
    b = float(input("Inserisci la lunghezza della base minore del trapezio isoscele: "))
    L = float(input("Inserisci la lunghezza dei lati obliqui del trapezio isoscele: "))
    perimetro = B + b + 2 * L
    perimetro = converti_int(perimetro)
    print("Il perimetro del trapezio isoscele è:", perimetro)
    return perimetro
#Perimetro parallelogramma
def per_parallelogramma():
    b = float(input("Inserisci la lunghezza della base del parallelogramma: "))
    L = float(input("Inserisci la lunghezza di uno dei lati obliqui del parallelogramma: "))
    perimetro = 2 * (b + L)
    perimetro = converti_int(perimetro)
    print("Il perimetro del parallelogramma è:", perimetro)
    return perimetro
#Perimetro rombo
def per_rombo():
    L = float(input("Inserisci la lunghezza dei lati del rombo: "))
    perimetro = 4 * L
    perimetro = converti_int(perimetro)
    print("Il perimetro del rombo è:", perimetro)
    return perimetro
#Perimetro pentagono regolare
def per_pentagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati del pentagono: "))
    perimetro = 5 * L
    perimetro = converti_int(perimetro)
    print("Il perimetro del pentagono è:", perimetro)
    return perimetro
#Perimetro esagono regolare
def per_esagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati dell'esagono: "))
    perimetro = 6 * L
    perimetro = converti_int(perimetro)
    print("Il perimetro dell'esagono è:", perimetro)
    return perimetro
#Perimetro ettagono regolare
def per_ettagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati dell'ettagono: "))
    perimetro = 7 * L
    perimetro = converti_int(perimetro)
    print("Il perimetro dell'ettagono è:", perimetro)
    return perimetro
#Perimetro ottagono regolare
def per_ottagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati dell'ottagono: "))
    perimetro = 8 * L
    perimetro = converti_int(perimetro)
    print("Il perimetro dell'ottagono è:", perimetro)
    return perimetro
#Perimetro ennagono regolare
def per_ennagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati dell'ennagono: "))
    perimetro = 9 * L
    perimetro = converti_int(perimetro)
    print("Il perimetro dell'ennagono è:", perimetro)
    return perimetro
#Perimetro decagono regolare
def per_decagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati del decagono: "))
    perimetro = 10 * L
    perimetro = converti_int(perimetro)
    print("Il perimetro del decagono è:", perimetro)
    return perimetro
#Perimetro dodecagono regolare
def per_dodecagono_regolare():
    L = float(input("Inserisci la lunghezza dei lati del dodecagono: "))
    perimetro = 12 * L
    perimetro = converti_int(perimetro)
    print("Il perimetro del dodecagono è:", perimetro)
    return perimetro
