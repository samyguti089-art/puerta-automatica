Guía para la documentación de proyectos de Mecatrónica en GitHub
1. Propósito de la documentación
Cada grupo deberá documentar su proyecto de Mecatrónica usando un repositorio en GitHub. La documentación debe permitir que cualquier docente, compañero o evaluador pueda entender:
Qué problema resuelve el proyecto.
Cómo funciona el sistema.
Qué componentes se usaron.
Cómo se conectaron sensores, actuadores y controlador.
Qué avances se realizaron durante el proceso.
Qué evidencias muestran que el prototipo funciona.
Cómo podría replicarse o mejorarse el proyecto.
La documentación no debe hacerse únicamente al final. Debe construirse durante el desarrollo del proyecto.
2. Plataforma de trabajo
Cada grupo deberá crear un repositorio en GitHub para su proyecto.
El repositorio debe contener como mínimo:
nombre-del-proyecto/
│
├── README.md
├── docs/
│   ├── imagenes/
│   └── videos/
│
├── codigo/
│   └── programa_principal/
│
├── esquemas/
│   └── diagrama_conexion.png
│
└── evidencias/
    ├── pruebas/
    └── avances/

La estructura puede adaptarse según el proyecto, pero debe mantenerse ordenada y comprensible.
3. Nombre del repositorio
El nombre del repositorio debe ser claro y relacionado con el proyecto.
Ejemplos adecuados:
sistema-riego-automatico
clasificador-basura-mecatronico
robot-seguidor-linea
control-temperatura-invernadero
dispensador-automatico-medicamentos

Evitar nombres como:
proyecto-final
trabajo-mecatronica
proyecto-arduino
codigo-final

4. Archivo principal: README.md
El archivo README.md será la presentación principal del proyecto. Debe estar escrito en Markdown y debe incluir las siguientes secciones.
Plantilla obligatoria para el README.md
Nombre del proyecto
Escribir el nombre completo del proyecto.
Ejemplo:
# Sistema automático de riego con monitoreo de humedad del suelo

Integrantes
Incluir nombres completos de los integrantes del grupo.
## Integrantes

- Nombre Apellido
- Nombre Apellido
- Nombre Apellido

Descripción del proyecto
Explicar brevemente en qué consiste el proyecto, qué problema atiende y cuál es su función principal.
Ejemplo:
## Descripción del proyecto

Este proyecto consiste en un sistema automático de riego que mide la humedad del suelo mediante un sensor, procesa la información con un microcontrolador ESP32 y activa una bomba de agua cuando la humedad está por debajo de un valor establecido. El sistema permite reducir el desperdicio de agua y mantener condiciones adecuadas para el crecimiento de una planta.

Problema identificado
Describir la necesidad o situación que motivó el proyecto.
Preguntas guía:
¿Qué problema se quiere resolver?
¿A quién afecta?
¿Por qué es importante automatizar o mejorar este proceso?
¿Qué ocurre si el problema no se resuelve?
## Problema identificado

En pequeños cultivos o plantas domésticas, el riego suele hacerse manualmente y sin conocer el nivel real de humedad del suelo. Esto puede generar exceso o falta de agua, afectando el crecimiento de la planta y desperdiciando recursos.

Objetivo general
Debe expresar claramente qué se va a construir, automatizar, controlar o monitorear.
## Objetivo general

Diseñar e implementar un sistema automático de riego que mida la humedad del suelo y active una bomba de agua según un umbral definido.

Objetivos específicos
Se recomienda incluir entre 3 y 5 objetivos específicos. Deben estar relacionados con funciones técnicas del proyecto.
Ejemplo:
## Objetivos específicos

- Medir la humedad del suelo mediante un sensor conectado al microcontrolador.
- Programar una lógica de control que determine cuándo activar o desactivar la bomba de agua.
- Implementar un circuito de potencia para controlar la bomba de forma segura.
- Visualizar el estado del sistema mediante indicadores o una interfaz básica.
- Validar el funcionamiento del prototipo mediante pruebas experimentales.

Componentes utilizados
Incluir los componentes principales del proyecto.
## Componentes utilizados

| Componente | Cantidad | Función |
|---|---:|---|
| ESP32 | 1 | Controlador principal |
| Sensor de humedad de suelo | 1 | Medición de humedad |
| Bomba de agua | 1 | Actuador de riego |
| Módulo relé | 1 | Control de encendido de la bomba |
| Fuente de alimentación | 1 | Alimentación del sistema |
| Cables y protoboard | Varios | Conexión del circuito |

Arquitectura del sistema
Incluir un diagrama de bloques textual o una imagen del diagrama.
Ejemplo textual:
## Arquitectura del sistema

Sensor de humedad → ESP32 → Módulo relé → Bomba de agua  
Fuente de alimentación → ESP32 y bomba  
ESP32 → Indicador LED / pantalla / interfaz

También se puede incluir una imagen:
![Diagrama de bloques](docs/imagenes/diagrama_bloques.png)

Funcionamiento
Explicar paso a paso cómo opera el sistema.
## Funcionamiento

1. El sensor mide la humedad del suelo.
2. El microcontrolador recibe la señal del sensor.
3. El programa compara el valor medido con un umbral definido.
4. Si la humedad es baja, se activa la bomba de agua.
5. Si la humedad es suficiente, la bomba permanece apagada.
6. El sistema muestra el estado mediante indicadores o una interfaz.

Evidencias del proyecto
Esta sección debe mostrar el avance real del prototipo mediante fotos, videos y capturas.
Fotos
Las fotos deben estar guardadas preferiblemente en la carpeta:
docs/imagenes/

Para insertar una imagen en el README:
![Montaje inicial del circuito](docs/imagenes/montaje_inicial.jpg)

Cada imagen debe tener un nombre claro.
Ejemplos:
montaje_inicial.jpg
conexion_sensor.jpg
prototipo_final.jpg
prueba_funcionamiento.jpg

Evitar nombres como:
IMG_20240601.jpg
foto1.jpg
imagen.png

Videos
Los videos pueden documentarse de dos formas:
Opción 1: subir el video al repositorio
Guardar el video en:
docs/videos/

Y enlazarlo en el README:
[Ver video de funcionamiento](docs/videos/prueba_funcionamiento.mp4)

Opción 2: subir el video a una plataforma externa
También se puede subir el video a YouTube, Google Drive, OneDrive u otra plataforma, y enlazarlo así:
[Ver video de prueba del prototipo](https://enlace-del-video.com)

El video debe mostrar claramente el funcionamiento del sistema, no solo el prototipo apagado.
Código fuente
El código debe estar en una carpeta llamada codigo/.
Ejemplo:
codigo/
└── sistema_riego/
    └── sistema_riego.ino

En el README se debe explicar brevemente qué hace el código.
## Código fuente

El código principal se encuentra en la carpeta `codigo/sistema_riego/`.  
Este programa permite leer el sensor de humedad, comparar el valor con un umbral y activar la bomba mediante un módulo relé.

También se puede enlazar directamente:
[Ver código principal](codigo/sistema_riego/sistema_riego.ino)

Esquema de conexiones
El grupo debe incluir un diagrama de conexión del circuito. Puede ser realizado en Fritzing, Tinkercad, Proteus, KiCad, EasyEDA, Wokwi o dibujado de forma clara.
## Esquema de conexiones

![Esquema de conexión](esquemas/diagrama_conexion.png)

El esquema debe permitir identificar:
Microcontrolador utilizado.
Sensores.
Actuadores.
Alimentación.
Pines de conexión.
Módulos intermedios, como relés, drivers o fuentes
Pruebas realizadas
Documentar las pruebas hechas al prototipo.
## Pruebas realizadas

| Prueba | Descripción | Resultado |
|---|---|---|
| Lectura del sensor | Se midió la humedad en suelo seco y húmedo | El sensor respondió correctamente |
| Activación de bomba | Se probó el encendido mediante relé | La bomba se activó al superar el umbral |
| Prueba completa | Se integró sensor, controlador y bomba | El sistema funcionó según lo esperado |

También se deben incluir fotos o videos de las pruebas cuando sea posible.
Estado actual del proyecto
Indicar si el proyecto está en diseño, montaje, pruebas o finalizado.
## Estado actual del proyecto

El proyecto se encuentra en fase de pruebas. El sistema ya mide la humedad del suelo y activa la bomba, pero aún se están ajustando los valores de calibración del sensor.

Dificultades encontradas
Explicar los principales problemas técnicos y cómo se resolvieron o cómo se planea resolverlos.
## Dificultades encontradas

Durante las pruebas se observó que el sensor de humedad presentaba variaciones en las lecturas. Para mejorar la estabilidad, se realizaron varias mediciones y se calculó un promedio antes de activar la bomba.

Mejoras futuras
Incluir posibles mejoras sin que hagan parte obligatoria del prototipo actual.
## Mejoras futuras

- Agregar monitoreo remoto mediante una aplicación o dashboard web.
- Implementar alimentación con panel solar.
- Registrar datos históricos de humedad.
- Enviar alertas cuando el tanque de agua esté vacío.

Conclusiones
Describir qué se logró aprender o validar con el proyecto.
## Conclusiones

El proyecto permitió integrar sensores, actuadores y programación de microcontroladores para resolver una necesidad real. Se comprobó que es posible automatizar el riego mediante una lógica de control sencilla basada en la humedad del suelo.

5. Reglas para subir evidencias
Cada grupo debe cumplir las siguientes reglas:
Las fotos deben ser claras y mostrar el proceso real.
Los videos deben mostrar el funcionamiento del prototipo.
Las imágenes deben tener nombres descriptivos.
No se deben subir archivos innecesarios o repetidos.
El README debe tener enlaces funcionales.
El código debe estar organizado y comentado.
El repositorio debe actualizarse durante el desarrollo, no solo al final.
Cada avance importante debe quedar registrado.
6. Uso básico de GitHub
Crear el repositorio
Ingresar a GitHub.
Seleccionar la opción “New repository”.
Escribir el nombre del proyecto.
Agregar una descripción corta.
Marcar la opción para crear el archivo README.md.
Crear el repositorio.
Subir archivos desde la página web
Entrar al repositorio.
Seleccionar “Add file”.
Elegir “Upload files”.
Arrastrar los archivos o seleccionarlos desde el computador.
Escribir un mensaje breve del cambio realizado.
Presionar “Commit changes”.
Ejemplos de mensajes de commit:
Agrega montaje inicial del circuito
Actualiza código de lectura del sensor
Sube video de prueba del prototipo
Corrige diagrama de conexiones
Documenta pruebas de funcionamiento

7. Entregables mínimos del repositorio
Al finalizar el proyecto, el repositorio debe contener como mínimo:
README completo.
Código fuente del proyecto.
Diagrama de bloques o arquitectura.
Esquema de conexiones.
Lista de componentes.
Fotos del proceso.
Video del funcionamiento.
Pruebas realizadas.
Conclusiones.
Mejoras futuras.
8. Criterios de evaluación de la documentación
Criterio
Descripción
Claridad del README
El proyecto se entiende fácilmente
Organización del repositorio
Las carpetas y archivos están ordenados
Evidencias visuales
Incluye fotos y videos relevantes
Explicación técnica
Describe sensores, actuadores, controlador y lógica
Código fuente
Está disponible, ordenado y comentado
Pruebas
Presenta resultados de funcionamiento
Actualización del proceso
Muestra avances, no solo resultado final
Presentación general
Usa buen formato, imágenes y enlaces funcionales


9. Recomendaciones finales
Documentar desde el primer día.
Tomar fotos en cada etapa del montaje.
Grabar videos cortos de las pruebas importantes.
No esperar al final para organizar el repositorio.
Usar nombres claros en carpetas y archivos.
Revisar que todos los enlaces del README funcionen.
Explicar los errores encontrados y las soluciones aplicadas.
Mantener una redacción técnica, clara y ordenada.
La documentación debe demostrar tanto el resultado final como el proceso de ingeniería seguido por el grupo.
/