EII-FCR

Descripción
-----------
Este repositorio contiene las prácticas de laboratorio y el proyecto final de la asignatura.  
Las prácticas están organizadas en módulos que cubren desde introducción a C++ hasta diseño y simulación de un procesador teórico, comunicaciones y redes.  
El proyecto "Save the world" aplica conceptos de protocolos y seguridad en un entorno de red simulado.


Esquema
-----------
```plaintext
EII-FCR/
├── Laboratorios/
│   ├── 0 Introduccion a C++
│   │   ├── 0-1EJEMPLO
│   │   └── 0-1EjemploVector
│   ├── 1 La informacion Digital
│   │   ├── 1-Enteros
│   │   └── 2-Reales
│   ├── 2 Sistemas Digitales
│   │   ├── ALU
│   │   ├── datapath
│   │   └── Digital
│   ├── 3 Lenguaje de la maquina
│   │   ├── Sentencias de asignacion (1)
│   │   ├── Condicionales y bucles (2)
│   │   └── Procedimientos y funciones (3)
│   ├── 4 El procesador
│   │   ├── 4.1.2.3 Simulador de Computador Teorico (CT)
│   │   └── 4.4 Ensamblador del TC
│   ├── 5 Entrada-Salida
│   │   ├── Entrada por muestreo (El teclado)
│   │   ├── Interfaz de vídeo del computador teórico
│   │   ├── Interrupciones (funcionamiento)
│   │   ├── Interrupciones (rutinas)
│   │   └── Ensambla.exe
│   ├── Campo de entrenamiento
│   └── Redes/
└── Save the world/
    ├── secondPhase/
    └── secondPhase.zip
```

  
Detalle de Prácticas
--------------------
### 0 Introduccion a C++
- **0-1EJEMPLO**  
  Ejemplo básico de programa en C++: sintaxis, entrada/salida por consola y estructura de un proyecto.
- **0-1EjemploVector**  
  Demostración del uso de la clase `std::vector`: inicialización, operaciones de inserción y recorrido.

### 1 La informacion Digital
- **1-Enteros**  
  Representación de números enteros en C++: complemento a 2, límites de tipo, conversiones.
- **2-Reales**  
  Representación de números en coma flotante: precisión, errores de redondeo y operaciones básicas.

### 2 Sistemas Digitales
- **ALU**  
  Implementación de una Unidad Aritmético-Lógica: operaciones (AND, OR, ADD, SUB).  
- **datapath**  
  Diseño de la ruta de datos: registros, multiplexores y señales de control.  
- **Digital**  
  Construcción de circuitos digitales simples usando puertas lógicas y simulaciones en C++.

### 3 Lenguaje de la máquina
- **Sentencias de asignacion (1)**  
  Codificación de instrucciones de asignación en el lenguaje de máquina simulado.  
- **Condicionales y bucles (2)**  
  Implementación de saltos condicionales, bucles `while` y `for` en ensamblador del computador teórico.  
- **Procedimientos y funciones (3)**  
  Llamadas a subrutinas, paso de parámetros y retorno de valores.

### 4 El procesador
- **4.1.2.3 Simulador de Computador Teorico (CT)**  
  Simulador paso a paso de un procesador teórico: fetch-decode-execute, registros y memoria.  
- **4.4 Ensamblador del TC**  
  Traductor de código ensamblador a binario para el computador teórico, incluyendo directivas y etiquetas.

### 5 Entrada-Salida
- **Entrada por muestreo (El teclado)**  
  Lectura de pulsaciones de teclado en modo crudo y bufferizado.  
- **Interfaz de vídeo del computador teórico**  
  Simulación de una pantalla de caracteres y memoria de vídeo.  
- **Interrupciones (funcionamiento)**  
  Mecanismo de detección y manejo de interrupciones a nivel de hardware.  
- **Interrupciones (rutinas)**  
  Desarrollo de rutinas de servicio de interrupciones (ISR) y vectores de interrupción.  
- **Ensambla.exe**  
  Versión compilada del ensamblador del computador teórico para Windows.

### Campo de entrenamiento
Área de prácticas adicionales para afianzar conceptos, ejercicios libres y retos propuestos.

### Redes
Ejercicios de sockets en C y C++:  
- Comunicación TCP y UDP  
- Modelos cliente-servidor  
- Protocolos básicos de aplicación

Save the world
--------------
Proyecto final dividido en fases.  
- **secondPhase/**  
  Implementación de la segunda fase: simulación de nodos de red, protocolos de enrutamiento y mecanismos de seguridad.  
- **secondPhase.zip**  
  Paquete con datos de configuración y ficheros auxiliares para el proyecto.


## Autor
[Diego García González](https://github.com/DiegoLangreo7)
