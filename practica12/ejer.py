class Nodo:
    def__ini__(self):
        self.nombre=None
        self.apellidos=None
        self.next=None
    def eliminar(self):
        self=None
class Lista:
    def __init__(self):
        self.head=None
        self.tail=None
    def agregar(self, nombre, apellidos):
        if self.head==None:
            self.head=Nodo()
            self.head.nombre=nombre
            self.head.apellidos=apellidos
            return
        temporal=Nodo()
        temporal.nombre=nombre
        temporal.apellidos=apellidos
        temporal.next=self.head
        self.head=temporal
    
    def eliminar(self):
        temporal=self.head
        while self.head!=None:
            while tempo.next!=None:
                temp=temp.next
        temp.eliminar()

