# Crear una lista vacía
lista = []

# Agregar elementos a la lista
lista.append(5)
lista.append(10)
lista.append(15)

# Acceder a los elementos de la lista
print(lista[0])  # Imprime: 5
print(lista[1])  # Imprime: 10
print(lista[2])  # Imprime: 15

# Modificar un elemento de la lista
lista[1] = 20
print(lista)  # Imprime: [5, 20, 15]

# Obtener la longitud de la lista
longitud = len(lista)
print(longitud)  # Imprime: 3

# Recorrer la lista utilizando un bucle for
for elemento in lista:
    print(elemento)  # Imprime: 5, 20, 15

# Verificar si un elemento está en la lista
if 10 in lista:
    print("El número 10 está en la lista")
else:
    print("El número 10 no está en la lista")

# Eliminar un elemento de la lista
lista.remove(20)
print(lista)  # Imprime: [5, 15]

# Vaciar la lista
lista.clear()
print(lista)  # Imprime: []
