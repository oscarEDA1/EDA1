def sumar(a,b):
    c = a+b
    return  c

def restar(a,b):
    return a-b

def multiplicar(a,b):
    return a*b

def div_entera(a,b):
    if b == 0:
        print("ERROR")
        return
    return a//b

def division(a,b):
    if b == 0:
        print("ERROR")
        return
    return  a/b

def modulo(a,b):
    if b == 0:
        print("ERROR")
        return
    return a%b

def potencia(a,b):
    return a**b

def main():

    print("Ingresa dos valores: ")
    x = int(input())
    y = int(input())
    op=0
    while op!=8:
        print(" 1. Sumar\n 2. Restar\n 3. División entera\n 4. División\n 5. Modulo\n 6. Potencia\n 7. Multiplicar\n 8. Salir\n")
        op = int(input())

        if op == 1:
            print("\nResultado: ")
            print(sumar(x,y))
        elif op == 2:
            print("\nResultado: ")
            print(restar(x,y))
        elif op == 3:
            print("\nResultado: ")
            print(div_entera(x,y))
        elif op == 4:
            print("\nResultado: ")
            print(division(x,y))
        elif op == 5:
            print("\nResultado: ")
            print(modulo(x,y))
        elif op == 6:
            print("\nResultado: ")
            print(potencia(x,y))
        elif op == 7:
            print("\nResultado: ")
            print(multiplicar(x,y))
        elif op == 8:
            print("Hasta luego")
        else:
            print("Opcion no válida")

if __name__ == '__main__':
    main()