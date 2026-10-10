"""
### UDT - USER DEFINED DATA TYPE (UDT) 
### UN UDT ES UNA ESTRUCTURA DE DATOS PERSONALIZADA QUE AGRUPA VARIOS ELEMENTOS O VARIABLES BAJO UN MISMO NOMBRE, PERMIRE COMBINAR
### DIFERENTES TIPOS DE DATOS BASICOS (COMO BOOLEANOS, ENTEROS, REALES O STRNGS) EN UN SOLO PAQUETE LOGIO
### REUTILIZABLE: SE CREA UNA SOLA VEZ Y SE PUEDE USAR COMO PLANTILLA PARA DECLARAR MULTIPLES VARIABLES IDENTICAS EN TODO EL PROGRAMA
### ACTUALIZACIÓN CENTRALIZADA: SI SE MODIFICA LA ESTRUCTURA DEL UDT ORGINAL, LOS CAMBIOS SE PROPAGAN O ACTUALIZAN EN LOS LUGARES DONDE SE USE
### ACCESO POR PUNTOS: SE ACCEDE A CADA MIEMBRO INDIVIDUAL USANDO NOTACIÓN DE PUNTO
"""

# Inicializa el objeto cuando lo creamos, Producto es nuestro UDT personalizado
class Producto:
    def __init__(self, nombre, precio, cantidad):
        self.nombre = nombre
        self.precio = precio
        self.cantidad = cantidad
    
    # Agregar comportamiento a nuestro tipo de dato
    def calcular_valor_total(self):
        return self.precio * self.cantidad
    
producto = Producto("Portatil HP", 2000000, 5)
valor = producto.calcular_valor_total()
print(valor)



        