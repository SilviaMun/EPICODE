import random
#Ordinare gruppi
def ordine_gruppi(studenti):
    nomi =  [studente["nome"] for studente in studenti]
    random.shuffle(nomi) #https://youtu.be/Bu8bH2P37kY

    gruppi = [[] for n in range(4)] #4 liste vuote distinte
    
    for indice, nome in enumerate(nomi): #itera lista nomi indice e valore
        gruppo = indice % 4 #assegna il gruppo dall'indice
        gruppi[gruppo].append(nome) #aggiunge il nome alla lista gruppi

    return gruppi

def main():
    #Lista dizionario studenti (nome+media voto)
    studenti = [
        {"nome": "Antonio De Cesare", "voto": 72},
        {"nome": "Davide Bassolino", "voto": 70},
        {"nome": "Gaspare Rizzo", "voto": 68},
        {"nome": "Riccardo Troncacci", "voto": 72},
        {"nome": "Giovanni Pisapia", "voto": 77},
        {"nome": "Riccardo Brunotti", "voto": 86},
        {"nome": "Riccardo Nardecchia", "voto": 74},
        #{"nome": "Pietro Zanon", "voto": 65},
        {"nome": "Leonardo Ciandri", "voto": 70},
        {"nome": "Giuseppe Di Pace", "voto": 38},
        {"nome": "Federico Cattani", "voto": 77},
        {"nome": "Michele Macri", "voto": 67},
        {"nome": "Monia Iannone", "voto": 75},
        #{"nome": "Carmine Caputo", "voto": 81},
        {"nome": "Pietro Minniti", "voto": 78},
        #{"nome": "Edoardo Castelli", "voto": 77},
        {"nome": "Alessandro Bossi", "voto": 78},
        {"nome": "Riccardo Lupieri", "voto": 72},
        {"nome": "Anatoliy Prysyazhnyuk", "voto": 78},
        {"nome": "Raven Angela Roxas", "voto": 64},
        {"nome": "Angela Di Emidio", "voto": 77},
        {"nome": "Dorian Bala", "voto": 75},
        {"nome": "Pietro Laera", "voto": 83},
        {"nome": "Francesco Spedicato", "voto": 67},
        {"nome": "Rossella Amore", "voto": 79},
        {"nome": "Pierluigi Amorese", "voto": 75},
        {"nome": "Edoardo Ceriani", "voto": 87},
        {"nome": "Claudio La Torre", "voto": 69},
        {"nome": "Alessio Gorgoglione", "voto": 83},
        #{"nome": "Silvia Munafo", "voto": 81},
        {"nome": "Pasquale Morgillo", "voto": 82},
        {"nome": "Bartolomeo Lapiello", "voto": 67},
        {"nome": "Valerio Mendolia", "voto": 79},
        {"nome": "Christian Gallori", "voto": 71},
        {"nome": "Matteo Addei", "voto": 87},
        {"nome": "Riccardo Di Pasquale", "voto": 80}
    ]

    gruppi_divisi = ordine_gruppi(studenti) #lista della funzione dentro variabile

    for indice, gruppo in enumerate(gruppi_divisi): #iter lista indice e valore
        print(f"Gruppo {indice + 1}: {gruppo}") #stampa risultato

main()


#https://stackoverflow.com/questions/16228248/how-can-i-get-list-of-values-from-dict
#https://www.programiz.com/python-programming/methods/list/index
#https://docs.python.org/3.7/tutorial/datastructures.html
#https://www.w3schools.com/python/gloss_python_function_passing_list.asp
