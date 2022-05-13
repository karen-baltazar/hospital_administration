# Proyecto-Karen-Baltazar
Este programa fue desarrollado con la intención de llevar un registro
de los individuos que ingresan a un hospital, administrando
y capturando los datos de éstos, dividiéndoles en tres categorías:
Pacientes, Visitantes y Médicos.

Éntiendase por paciente al individuo hospitalizado, 
por visitante al individuo que visita al hospital por un motivo 'm' 
y por médico al individuo que ejerce dicha profesión en el hospital.

# Contexto
En un hospital, ingresan todo tipo de individuos por diversas razones. 
Dada la cantidad y diversidad de estos individuos se necesita de una estructura 
que facilite la administración de la información de estas personas que ingresan 
al hospital sobre una base diaria. De ahí que, se ha desarrollado este proyecto
para ayudar en dicha tarea.

# Funcionalidad
El programa permite dar de alta nuevos individuos da cualquier clase, sea visistante,
paciente o médico. Asimismo, permite ver una lista de todos los individuos por clase junto
con su información respectiva. De la misma forma, permite actualizar esta
información ingresando el nombre del individuo a modificar/actualizar [En construcción].

Finalmente, consta de un menú con las opciones iniciales y corre sobre consola.

# Consideraciones
Para compilar el programa es necesario acceder a la consola e ingresar: "g++ main.cpp"

Para ejecutar, se debe ingresar en la consola: "a.exe" o "./a.exe"

# Correciones
Para este programa se realizaron las siguientes correciones:
1. Se arreglaron los Constructores por default y parametrizados de las clases Visitante, Paciente y Medico.

2. Se agregó la clase Hospital, compuesta de arreglos de visistantes, pacientes y médicos con atributos y métodos
propios.

3. Se redefinieron los atributos de las clases Visitante, Paciente y Medico.

3. Se hicieron correciones al Diagrama de Clases del proyecto para integrar dichas correciones.

4. En main.cpp se agregó el menú y el bucle correspondiente para que el usuario pueda acceder a las opciones de dicho menú.

5. Asimismo, se agregó estilo en comentarios que cumpla con normas y estándares.

No obstante, al programa todavía se le debe implementar validación de datos de entrada y construir las opciones faltantes del main.cpp 
para la actualización de datos de los individuos.
