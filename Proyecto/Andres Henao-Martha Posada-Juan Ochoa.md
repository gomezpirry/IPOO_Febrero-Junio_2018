# Proyecto IPOO

## Diagrama de Clases

* Es recomendable manejar herencia de las clases Docente y Estudiante con la clase Persona (clase padre), de está forma se pueden reutilizar atributos y métodos (i.e. en Estudiante y Persona se estan repitiendo atributos (nombre, apellido, cédula, código)). Se intenta realizar manejando la clase Usuario como Persona, pero no es clara la relación de herencia.

* Es recomendable manejar herencia en los articulos. Crear una clase padre Artículos y crear clases Equipo, Mueble y Aticulo de Préstamo que hereden de Articulos para reutilizar atributos y métodos.

* Faltan los atributos del laboratorio (i.e. nombre, dirección, facultad)

* El método agregar Prestamo solo recibe el articulo pero no indica a quien lo va a prestar

* Falta indicar cardinalidad en algunas clases

## Archivos de cabecera

* La clase Usuario incluye a la clase Estudiante y Profesor y no se realiza nada con estas clases

* Como reglas de estilo de programación, los nombres de las clases deben empezar en mayúscula y en los identificadores de los atributos y métodos los espacios se representan con letras mayúsculas, i.e. dar identificación -> darIdentificacion

### Nota Primera Entrega: 4.0

## Implementación

* __Código Base:__ Agrego las clases correspondientes al diseño del digrama de clases (5 pts)

* __Ejecutable:__ No Cumple (0 pts)

* __Registrar y modificar la información del laboratorio:__ No cumple (0 pts). 
  
* __Registrar nuevos artículos, profesores y estudiantes:__ Cumple (1 pts). 
    * Cuando se agrega alguna información con espacios en blanco el sistema se rompe.
    * Al registrar un artículo, si no existe el profesor al que se le asigna el sistema se rompe
    
* __Modificar la información de artículos, profesores y estudiantes:__ No cumple (0 pts). 
    * Solicita la información pero no almacena las modificaciones. Las modificaciones se hacen sobre una copia, por ejemplo en `Estudiante estudiante = inventarioo.obtenerEstudiante(identificador);`, el objeto estudiante y el objeto estudiante que retorna la función son independientes, por lo tanto los cambios que se hagan en estudiante no se verán reflejados en el estudiante que está en el sistema; lo mismo pasa en Profesor. Para eso sirven los punteros, para modificar los valores y que los cambios se vean reflejados en la otra instancia

* __Eliminar registro de artículos, profesores y estudiantes. (Tenga en cuenta eliminar asignaciones y préstamos):__ No cumple (0 pts).

* __Cargar la información del laboratorio, artículos, profesores y estudiantes:__ Cumple (1 pts)
    * Debe manejar excepciones en caso de que no pueda leer el archivo
    * La separación de cada campo mediante espacios no es lo mas conveniente porque puede que algunos campos requieran espacios, por ejemplo si el estudiante tiene dirección. Lean sobre valores separados por coma ([CSV](http://github.com)).
    
* __Cada  vez  que  se  realice  cualquier  operación  se  debe  guardar  en  archivos  para  que persista:__ Cumple (1 pts)
    * La separación de cada campo mediante espacios no es lo mas conveniente porque puede que algunos campos requieran espacios, por ejemplo si el estudiante tiene dirección. Lean sobre valores separados por coma ([CSV](http://github.com)).
    
* __Asignar un artículo a un profesor o modificar la asignación si ya se encuentra asignado:__ Cumple parcialmente (0,5 pts)
    * No modifica la asignación de un profesor a un artículo
    
* __Consultar los artículos asignados que tiene un profesor mediante su identificación:__ No Cumple (0 pts)

* __Consultar a quien se encuentra asignado un artículo mediante el identificador del artículo:__ No cumple (0 pts)
    * Aunque hay un método que obtiene el profesor al que está asignado el artículo, no hay una forma para que el usuario del sistema lo visualize
    
* __Registrar el préstamo de un artículo a un estudiante:__ Cumple (1 pts)
    * No maneja el caso de que el estudiante no exista
    
* __Registrar la devolución de un artículo por parte de un estudiante:__ Cumple (1 pts)

* __Generar multa en caso de que el estudiante se demore en la devolución del artículo:__ No cumple (0 pts)
    * El sistema no genera automaticamente la multa en caso de que se exceda en la fecha
    
* __Consultar el historial de préstamo de un artículo mediante el identificador del artículo:__ No cumple (0 pts)

* __Consultar el historial de préstamo de un estudiante mediante el código de identificación:__ No cumple (0 pts)

* __Consultar si un estudiante tiene multa y si esta habilitado para préstamo:__ Cumple (1 pts)

* __Consultar todos los préstamos realizados durante unas fechas establecidas:__ No cumple (0 pts)
    * No manejaron fechas en el sistema. Revisar la libreria [ctime](http://www.cplusplus.com/reference/ctime/)

* __Consultar el valor de todos los artículos, su depreciación y si se encuentran activos:__ Cumple parcialmente (0,5 pts)
    * Para la depreciación realiza una resta directa entre el valor y el tiempo que se ingresa. El sistema debe calcular la depreciación automáticamente en base al tiempo en el cual inicio su uso

* __Consultar que artículos se encuentran activos y cuales inactivos:__ Cumple (1 pts)

Puntos: 13/20

### Nota Segunda Entrega: 3,25

### Recomendaciones Generales 

* No se agrego el archivo ejecutable de la aplicación
* En el menú no hay forma de volver atrás
* Los identificadores de la clase deben empezar con mayúscula
* La clase Articulo incluye un archivo `multa.h` que no existe
* Cuando se crean objetos, procure definir identificadores con nombre significantes (i.e. laboratorio en lugar de labo, inventarioo)
* En el archivo de github hay commits de personas que no pertenecen al curso
* Recuerden seguir practicando los temas vistos en el curso para mejorar sus habilidades de programación
    * Variables
    * Estructuras de datos
    * Funciones
    * Conceptos de Programación orientada a objetos

## Sustentación

* __Andres Henao:__ Mostró que conocia el código del proyecto que implementó, sabia que lineas de código realizaban las funcionalidades solicitadas y cuales funcionalidades no estaban implementadas
    * __Multiplicador: 1.0__

* __Martha Posada:__ Falló al contestar preguntas sobre el código. No conocia todas las funcionalidades que habian implementado en la aplicación
    * __Multiplicador: 0.8__

* __Juan Ochoa:__ Mostró que conocia el código del proyecto que implementó, sabia que lineas de código realizaban las funcionalidades solicitadas y cuales funcionalidades no estaban implementadas
    * __Multiplicador: 1.0__

## Nota Final

### Andres Henao:  3.55

### Martha Posada: 2.84

### Juan Ochoa:    3.55 