# Proyecto IPOO

## Diagrama de Clases

* En el diagrama está representando, como si todas las clases manejaran herencia (La herencia se representa como un triángulo blanco) 

* Es recomendable manejar herencia de las clases Docente y Estudiante con la clase Persona (clase padre), de está forma se pueden reutilizar atributos y métodos (i.e. en Estudiante y Persona se estan repitiendo atributos (nombre, apellido, cédula, código))

* Es recomendable manejar herencia en los articulos. Crear una clase padre Artículos y crear clases Equipo, Mueble y Aticulo de Préstamo que hereden de Articulos para reutilizar atributos y métodos.

* No se muestra en el diagrama la cardinalidad de las relaciones entre clases (Cuantas instancias de la clase (objetos) va a tener)

* Faltan los atributos del laboratorio (i.e. nombre, dirección, facultad)

* No indica en que método se va a realizar el préstamo

## Archivos de Cabecera

* Como reglas de estilo de programación, los identificadores de los atributos y métodos los espacios se representan con letras mayúsculas, i.e. dar identificación -> darIdentificacion

* En la clase Artículos no se ven claramente los atributos de la clase, estas agrupando varios atributos con el mismo tipo

### Nota Primera Entrega: 4.0

## Implementación

* __Código Base:__ Agrego las clases correspondientes al diseño del digrama de clases (5 pts)

* __Ejecutable:__ Cumple (1 pts)

* __Registrar y modificar la información del laboratorio:__ No cumple (0 pts)
  
* __Registrar nuevos artículos, profesores y estudiantes:__ No cumple (0 pts)
    * Agregaron la opción al menu, pero no realiza nada
    
* __Modificar la información de artículos, profesores y estudiantes:__ No cumple (0 pts)

* __Eliminar registro de artículos, profesores y estudiantes. (Tenga en cuenta eliminar asignaciones y préstamos):__ No cumple

* __Cargar la información del laboratorio, artículos, profesores y estudiantes:__ Cumple parcialmente (1 pts)
    * La ruta que recibe ifstream debe ser válida
    * Debe manejar excepciones en caso de que no pueda leer el archivo
    * La separación de cada campo mediante espacios no es lo mas conveniente porque puede que algunos campos requieran espacios, por ejemplo si el estudiante tiene dirección. Lean sobre valores separados por coma ([CSV](http://github.com)).
    

* __Cada  vez  que  se  realice  cualquier  operación  se  debe  guardar  en  archivos  para  que persista:__ No cumple
    
* __Asignar un artículo a un profesor o modificar la asignación si ya se encuentra asignado:__ No cumple
    
* __Consultar los artículos asignados que tiene un profesor mediante su identificación:__ No cumple

* __Consultar a quien se encuentra asignado un artículo mediante el identificador del artículo:__ No cumple
    
* __Registrar el préstamo de un artículo a un estudiante:__ No cumple
    
* __Registrar la devolución de un artículo por parte de un estudiante:__ No cumple

* __Generar multa en caso de que el estudiante se demore en la devolución del artículo:__ No cumple
    
* __Consultar el historial de préstamo de un artículo mediante el identificador del artículo:__ No cumple

* __Consultar el historial de préstamo de un estudiante mediante el código de identificación:__ No cumple

* __Consultar si un estudiante tiene multa y si esta habilitado para préstamo:__ No cumple

* __Consultar todos los préstamos realizados durante unas fechas establecidas:__ No cumple

* __Consultar el valor de todos los artículos, su depreciación y si se encuentran activos:__ No cumple

* __Consultar que artículos se encuentran activos y cuales inactivos:__ No cumple

Puntos: 7/20

### Nota Segunda Entrega: 1.75

### Recomendaciones Generales 

* La aplicación solo tiene el menú. Se agregan clases pero no realizan ninguna funcionalidad
* En el menú no hay forma de volver atrás
* En la clase Alumnos intentaron poner la implementación en los archivos de cabecera (.h) y los archivos de implementación (.cpp)
* En el menú, cada opción esta marcada con mayúscula, pero solo recibe minisculas; esto puede confundir al usuario de la aplicación
* Crearon la clase persona para manejar herencia, pero no implementaron la herencia
* Recuerden seguir practicando los temas vistos en el curso para mejorar sus habilidades de programación
    * Variables
    * Estructuras de datos
    * Funciones
    * Conceptos de Programación orientada a objetos

## Sustentación

* __Daniel Rodriguez:__ Mostró que conocia el código del proyecto implementado, aunque dudó en explicar algunas cosas.
    * __Multiplicador: 1.0__

* __Daniel Roman:__ Mostró que conocia el código del proyecto implementado.
    * __Multiplicador: 1.0__

## Nota Final

### Daniel Rodriguez:  2.65

### Daniel Roman: 2.65

