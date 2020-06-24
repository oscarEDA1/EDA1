#Esto es un comentario de una sola línea
'''
Esto es un comentario de varias lineas
'''

"""
Para ejecutar python HolaMundo.py
"""

print("Hola Mundo")
x = 10
print(type(x))
print(10)
x = y = z = 2.3
print(type(x))
print(x,y,z)
x = "cadena"
print(type(x))

c1 = "Hola"
c2 = "Diego"
saludo = c1+" "+c2
print(saludo)
saludo2 = "{} {} {}".format(c1,c2, 3)
print(saludo2)

saludo3 = "Cambio de orden {1} {2} {0}".format(c1,c2,3)
print(saludo3)
