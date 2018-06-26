# Proyecto IPOO

## Diagrama de Clases

* No representaron adecuadamente las relaciones en el diagrama
* Intentaron mostrar herencia sin usar las convenciones definidas para los diagramas de clase (la herencia se representa como un triangulo blanco)
* Falto definir la cardinalidad de las relaciones

## Archivo de Cabecera

* La clase Laboratorio tiene un atributo valorArticulo que no peretence a la clase
* Esta bien implementada la herencia

### Nota Primera Entrega: 4.0

## Implementación

* __Código Base:__ Agrego las clases correspondientes al diseño del digrama de clases presentado en la sustentación (5 pts)

* __Ejecutable:__ Cumple (1 pts)

* __Registrar y modificar la información del laboratorio:__ No cumple (0 pts). 
  
* __Registrar nuevos artículos, profesores y estudiantes:__ Cumple parcialmente(0.5 pts). 
    * Solo se permiten agregar articulo
    * La aplicación no permite agregar estudiantes, ni profesores
    
* __Modificar la información de artículos, profesores y estudiantes:__ No cumple (0 pts). 

* __Eliminar registro de artículos, profesores y estudiantes. (Tenga en cuenta eliminar asignaciones y préstamos):__ No cumple (0 pts).

* __Cargar la información del laboratorio, artículos, profesores y estudiantes:__ Cumple (1 pts)
    * Debe manejar excepciones en caso de que no pueda leer el archivo
    * La separación de cada campo mediante espacios no es lo mas conveniente porque puede que algunos campos requieran espacios, por ejemplo si el estudiante tiene dirección. Lean sobre valores separados por coma ([CSV](http://github.com)).
    * Falta cargar la información de docentes y estudiantes
    
* __Cada  vez  que  se  realice  cualquier  operación  se  debe  guardar  en  archivos  para  que persista:__ Cumple (1 pts)
    * Solo esta guardando los articulos. Cuando se usa un ofstream se debe invocar la función `open` para enlazar el ofstream con el archivo que se desea leer o escribir. No estan llamando la función `open`para guardar los profesores, ni los estudiantes
    * La separación de cada campo mediante espacios no es lo mas conveniente porque puede que algunos campos requieran espacios, por ejemplo si el estudiante tiene dirección. Lean sobre valores separados por coma ([CSV](http://github.com)).
    
* __Asignar un artículo a un profesor o modificar la asignación si ya se encuentra asignado:__ Cumple parcialmente (0,5 pts)
    * No modifica la asignación de un profesor a un artículo
    
* __Consultar los artículos asignados que tiene un profesor mediante su identificación:__ No Cumple (0 pts)

* __Consultar a quien se encuentra asignado un artículo mediante el identificador del artículo:__ No cumple (0 pts)
    * Aunque hay un método que obtiene el profesor al que está asignado el artículo, no hay una forma para que el usuario del sistema lo visualize
    
* __Registrar el préstamo de un artículo a un estudiante:__ Cumple (1 pts)
    * Realiza la operación pero no la almacena
    
* __Registrar la devolución de un artículo por parte de un estudiante:__ No Cumple (0 pts)

* __Generar multa en caso de que el estudiante se demore en la devolución del artículo:__ No cumple (0 pts)
    * El sistema no genera automaticamente la multa en caso de que se exceda en la fecha
    
* __Consultar el historial de préstamo de un artículo mediante el identificador del artículo:__ No cumple (0 pts)

* __Consultar el historial de préstamo de un estudiante mediante el código de identificación:__ No cumple (0 pts)

* __Consultar si un estudiante tiene multa y si esta habilitado para préstamo:__ No Cumple (0 pts)
    * Tiene el método para obtener la multa del estudiante pero no es accesible para el usuario de la aplicación

* __Consultar todos los préstamos realizados durante unas fechas establecidas:__ No cumple (0 pts)
    * No manejaron fechas en el sistema. Revisar la libreria [ctime](http://www.cplusplus.com/reference/ctime/)

* __Consultar el valor de todos los artículos, su depreciación y si se encuentran activos:__ Cumple (1 pts)
    * Al momento de consultar los articulos falta definir a que corresponde cada campo para que se claro para el usuario (muestra activo como si fuera 1 o 0, pero el ususario no lo sabe)
    
* __Consultar que artículos se encuentran activos y cuales inactivos:__ Cumple parcialmente (0.5 pts)
    * Muestra si esta activo en la consulta de articulos pero no es claro para el usuario

Puntos: 11.5/20

### Nota Segunda Entrega: 2.88

### Recomendaciones Generales 

* En el menú no hay forma de volver atrás
* Cuando se crean objetos, procure definir identificadores con nombre significantes (i.e. laboratorio en lugar de labo, articulo en lugar de art, etc)
* Recuerden seguir practicando los temas vistos en el curso para mejorar sus habilidades de programación
    * Variables
    * Estructuras de datos
    * Funciones
    * Conceptos de Programación orientada a objetos

## Sustentación

* __Jose Ayala:__ En las preguntas realizadas no supo responder como se ejecutan las funcionalidades de la aplicación. No sabia que funcionalidades no se encontraban implementadas. Cuando se hicieron preguntas a todo el grupo no se involucraba en la respuesta
    * __Multiplicador: 0.8__

* __Manuel Rodriguez:__ Mostró que conocia el código del proyecto que implementó, sabia que lineas de código realizaban las funcionalidades solicitadas y cuales funcionalidades no estaban implementadas
    * __Multiplicador: 1.0__

* __Jhon Valencia:__ Mostró que conocia el código del proyecto que implementó, aunque en algunas ocasiones mostró dudas sobre el código
    * __Multiplicador: 0.9__

## Nota Final

### Jose Ayala:  2.66

### Manuel Rodriguez: 3.33

### Jhon Valencia:  3.00