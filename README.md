# Electrónica de Potencia
## Programa de Ingeniería Electrónica
## Universidad Pontificia Bolivariana - Seccional Montería
## 2025-20

Docente: MSc Eng. Miguel Ortiz (miguel.ortizp@upb.edu.co)

Estudiantes:
- Sebastian Andres Zabala Saenz 
(sebastian.zabala@upb.edu.co)

- Juan Andres Gonzalez Dean
(deanjuanandres@gmail.com)

## Contenido

| Módulo | Tema                                      | Enlace                                     |
| ------ | ----------------------------------------- | ------------------------------------------ |
| 0      | Tutoriales                                | [Ver Guía](./guia_0_Tutoriales)    |
| 1      | Fundamentos y Diodos de Potencia          | [Ver Guía](./guia_1_fundamentos_diodos)    |
| 2      | Rectificadores No Controlados             | [Ver Guía](./guia_2_rectificadores)        |
| 3      | Transistores de Potencia                  | [Ver Guía](./guia_3_transistores_potencia) |
| 4      | Convertidores DC-DC                       | [Ver Guía](./guia_4_convertidores_dc_dc)   |
| 5      | Tiristores y Control de Potencia          | [Ver Guía](./guia_5_tiristores)            |
| 6      | Proyecto Final – Inversor para Sistema PV | [Ver Guía](./guia_6_proyecto_final)        |

## Herramientas utilizadas

- LTSpice
- Github desktop
- VS Code
- Markdown
- Python 
   $$
    \int_0^\infty \frac{x^3}{e^x-1}\,dx = \frac{\pi^4}{15}
    $$

$$
\int_0^\infty \frac{x^3}{e^x - 1} \, dx = \frac{\pi^4}{15}
$$
# Características de los Diodos de Potencia

*(Basado en el libro "Electrónica de Potencia" de Daniel W. Hart)*

## Introducción

Los diodos de potencia son dispositivos semiconductores utilizados como interruptores electrónicos en circuitos de electrónica de potencia. Su función principal es permitir el paso de corriente en un sentido y bloquearla en sentido contrario. No son dispositivos controlables directamente, por lo que su estado (conducción o bloqueo) depende de las condiciones del circuito.

## Características principales

### 1. Funcionamiento Básico

- **Estado de conducción (directa):** El diodo conduce corriente cuando está polarizado en directa, es decir, cuando la corriente a través de él es positiva.
- **Estado de bloqueo (inversa):** El diodo bloquea la corriente cuando está polarizado en inversa, con tensión negativa a través de sus terminales.
- **Comportamiento ideal:** En estado de conducción, se comporta como un cortocircuito; en estado de bloqueo, como un circuito abierto.


### 2. Curvas Características

- Las curvas corriente-tensión reales muestran una caída de tensión en estado de conducción y una recuperación inversa cuando el diodo cambia de conducción a bloqueo.
- La corriente de recuperación inversa ocurre cuando, al cambiar a bloqueo, la corriente se vuelve momentáneamente negativa antes de llegar a cero.


### 3. Tiempo de Recuperación Inversa ( $t_{rr}$ )

- Es el tiempo que tarda el diodo en dejar de conducir corriente cuando pasa de estado de conducción a bloqueo.
- En diodos de potencia típicos para aplicaciones industriales, este tiempo suele ser menor a 1 microsegundo.
- Es un parámetro importante en aplicaciones de conmutación rápida, ya que afecta la eficiencia y las pérdidas de potencia.


## Tipos de Diodos de Potencia

| Tipo de Diodo | Características Principales | Aplicaciones Típicas |
| :-- | :-- | :-- |
| **Diodos de propósito general** | Tiempo de recuperación estándar, adecuado para frecuencia de 50 Hz | Retificadores industriales, cargas generales |
| **Diodos de recuperación rápida** | Menor tiempo $t_{rr}$, diseñados para conmutación rápida | Fuentes conmutadas, convertidores de frecuencia alta |
| **Diodos Schottky** | Contacto metal-silicio, baja caída de tensión directa (~0.3 V), $t_{rr}$ prácticamente nulo | Aplicaciones de baja tensión, alta eficiencia en conmutación rápida |

## Parámetros Eléctricos de Relevancia

- **Caída de tensión directa ($V_{F}$)**: La tensión que se presenta en el diodo cuando está en conducción.
- **Corriente máxima continua:** Capacidad máxima de corriente que el diodo puede manejar en estado de conducción.
- **Tensión máxima inversa:** Máxima tensión que puede soportar el diodo en estado de bloqueo sin daños.
- **Pérdidas por conmutación:** Energía disipada durante los cambios de estado conducción-bloqueo, influenciada directamente por el tiempo de recuperación inversa.
- **Velocidad de conmutación:** La rapidez con la que el diodo puede alternar entre conducción y bloqueo, crítica en circuitos conmutados de alta frecuencia.


## Ventajas y Limitaciones

| Ventajas | Limitaciones |
| :-- | :-- |
| Simpleza en uso, sin necesidad de control externo | No permite control directo sobre su estado |
| Alta capacidad para soportar corrientes elevadas | Tiempo de recuperación puede generar pérdidas |
| Amplio rango de voltaje y corriente disponibles | Caída de tensión directa genera pérdidas de potencia |
| Esencial para protección y funcionamiento de cargas inductivas a través de freewheeling | Sensible a transitorios de tensión y corriente |

## Notas Adicionales

- Los diodos Schottky son especialmente eficientes en aplicaciones para reducir pérdidas debido a su baja caída de tensión y ausencia de recuperación inversa significativa.
- La elección del tipo de diodo de potencia depende de la frecuencia de operación del circuito y los requerimientos específicos de tensión, corriente y velocidad de conmutación.

Este resumen recoge los aspectos fundamentales sobre las características de los diodos de potencia según el texto de Daniel W. Hart, ofreciendo una base clara para su estudio, diseño y aplicación en electrónica de potencia.

<div style="text-align: center">⁂</div>

[^1]: https://lc.fie.umich.mx/~jorgeahb/Pagina/materias/PIES/kupdf.com_electronica-de-potencia-1ra-edicion-daniel-w-hart.pdf

[^2]: https://www.academia.edu/40495050/Daniel_W_Hart_Electr%C3%B3nica_de_Potencia

[^3]: https://www.scribd.com/document/480644118/Daniel-W-Hart-Electronica-de-Potencia-Prentice-Hall-2001-pdf

[^4]: http://sb.uta.cl/libros/Electronica de Potencia (Dossier-Final- 02-05-2016) R. Sanhueza.pdf

[^5]: https://archive.org/stream/ElectronicaDePotenciaDanielWHart/Electronica de Potencia - Daniel W Hart_djvu.txt

[^6]: https://dokumen.pub/electronica-de-potencia-9788420531793.html

[^7]: https://translate.google.com/translate?u=https%3A%2F%2Fwww.slideshare.net%2Fslideshow%2Fpower-electronics-by-daniel-w-hart-zliborgpdf%2F261187084\&sl=en\&tl=es\&client=srp

[^8]: https://es.scribd.com/document/360889614/Cap-3-Electronica-de-Potencia-Daniel-W-Hart

[^9]: https://www.academia.edu/11237823/ELECTRÓNICA_DE_POTENCIA_ELECTR%C3%93NICA_DE_POTENCIA

[^10]: https://www.casadellibro.com.co/libro-electronica-de-potencia/9788420531793/792670