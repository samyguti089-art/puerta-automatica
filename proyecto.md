 nombre del proyecto 
# puerta automática de contraseña numeral 


Integrantes 
1. Samuel Gutierrez 
2 Hernández sharyd 
3
4
5
6


Descripción del proyecto
 
Este proyecto consiste en un sistema automático de seguridad que permite ingresar personas si tienen la validación 
mediante el ingreso de dígitos, procesa la información con un microcontrolador Arduino uno y activa un servomotor que abre la puerta si el número es correcto. El sistema no permite robos y aumenta la seguridad de las instalaciones.


Problema identificado 
Queremos resolverlo la inseguridad de diferentes instalaciones tales como casas, almacenes, empresas, etc; ya que muchas instalaciones sufren de diferentes problemas con el robo de objetos por ende deseamos arreglar eso haciéndolo al menos un poco seguro para que ya no se sufra el tener miedo ante estas situaciones que no deberían de pasar ya que puede pasar a mayores al querer recuperar tus cosas de tales sucesos.


Objetivo general 
Deseamos menos situaciones riesgosas para la vida y los objetos de valor por eso decidimos mejorar la seguridad donde se tendrá el control de quienes pasan y quienes no con solo colocar el código de seguridad.


Objetivo específico 
- mejorar la seguridad de diferentes instalaciones 
- tener un control de quienes entran 
- automatizar más 
- menos robos 

Componentes 

**Tabla de excel**

Arquitectura del sistema 
* Tabla de excel *


Funcionamiento 
Funcionamiento del Sistema (Lógica)

El sistema funciona como una cerradura electrónica de seguridad. El usuario debe introducir una contraseña numérica de 4 dígitos a través del teclado para accionar el servomotor que abre la puerta.

🔄 Flujo de trabajo paso a paso:

1. Estado Inicial (Reposo):
   · Al encenderse, el sistema se inicializa y el servomotor se coloca en la posición de puerta cerrada (0° - 9°).
   · El LED Rojo se mantiene encendido, indicando visualmente que la puerta está bloqueada.
   · El sistema queda a la espera de que el usuario introduzca la clave.
2. Ingreso de la Clave:
   · El usuario presiona los dígitos de la contraseña (ej. 1, 2, 3, 4).
   · Mientras escribe, el sistema oculta los caracteres en el monitor serial (mostrando *) para simular seguridad.
   · Si el usuario se equivoca, puede presionar la tecla * para borrar todo lo que ha escrito y empezar de nuevo.
3. Verificación (Al presionar #):
   · Al terminar de escribir los 4 dígitos, el usuario presiona la tecla # (almohadilla) para enviar la clave al sistema.
   · El Arduino compara la clave ingresada con la clave almacenada en el código (ej. "1234").
4. Si la Clave es CORRECTA:
   · El sistema activa el LED Verde y apaga el LED Rojo.
   · El servomotor gira suavemente (en pasos de 10 grados con retardos de 500ms) desde la posición de cerrado (9°) hasta la posición de abierto (130°).
   · La puerta permanece abierta durante 5 segundos.
   · Pasados los 5 segundos, el servomotor regresa a la posición de cerrado (9°).
   · El LED Rojo se enciende nuevamente y el LED Verde se apaga, indicando que la puerta está nuevamente bloqueada.
   · El sistema se reinicia y vuelve a pedir una nueva clave.
5. Si la Clave es INCORRECTA:
   · El sistema no activa el servomotor.
   · Se reinicia el campo de ingreso, borrando los caracteres introducidos, y pide al usuario que intente nuevamente con una nueva clave.

---

4. 🧠 Lógica del Software (Código)

El código está estructurado en las siguientes secciones principales:

· Librerías: Servo.h (control del motor) y Keypad.h (lectura del teclado matricial).
· Mapeo del Teclado: A través de un proceso de diagnóstico con el Monitor Serial, se ajustó la matriz de caracteres (char keys[4][4]) para que coincidiera exactamente con el orden físico de los cables del teclado, garantizando que al presionar el 1 el sistema lea 1.
· Control de LEDs: La lógica de los pines 4 (Rojo) y 5 (Verde) está invertida en el código para compensar la instalación física del servo. Es decir, el código enciende el Verde cuando la puerta se abre y el