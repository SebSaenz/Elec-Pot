# Transistores de Potencia

Los transistores de potencia permiten el conmutado controlado de señales eléctricas en aplicaciones de alta corriente y voltaje.  
Se utilizan ampliamente en convertidores **DC-DC**, **DC-AC** e inversores, y siempre acompañados de diodos en antiparalelo para permitir flujo bidireccional de corriente.

Existen tres familias principales:
- **MOSFETs (Metal-Oxide-Semiconductor Field-Effect Transistors)**
- **JFETs (Junction Field-Effect Transistors)**
- **BJTs (Bipolar Junction Transistors)**

---

## 1. MOSFET de Potencia

Los **MOSFETs** son dispositivos controlados por tensión en la compuerta.  
Se caracterizan por su **alta velocidad de conmutación** y **baja resistencia en conducción (R_DS(on))**, lo que los hace muy eficientes en aplicaciones de alta frecuencia como fuentes conmutadas y convertidores DC-DC.

### 1.1 MOSFET tipo Depleción
![MOSFET Depleción](1.jpeg)  
**Figura 1.** Estructura y símbolo de MOSFET tipo depleción.  
📖 *Rashid, M. H. (2014). Power Electronics: Devices, Circuits, and Applications (4th ed.), Fig. 4.1, Pearson.*

### 1.2 MOSFET tipo Enriquecimiento
![MOSFET Enriquecimiento](2.jpeg)  
**Figura 2.** Estructura y símbolo de MOSFET tipo enriquecimiento.  
📖 *Rashid, M. H. (2014). Power Electronics: Devices, Circuits, and Applications (4th ed.), Fig. 4.2, Pearson.*

La ecuación de conducción en la región de saturación es:

\[
I_D = k \cdot (V_{GS} - V_{th})^2
\]

---

## 2. JFET (Junction Field-Effect Transistors)

El **JFET** es un transistor de efecto de campo en el que el canal se controla mediante una unión pn.  
Su principal ventaja es la **alta impedancia de entrada** y bajo ruido, aunque en aplicaciones de potencia es menos común que el MOSFET.

![JFET](4.png)  
**Figura 3.** Estructura y símbolo de un JFET.  
📖 *Hart, D. W. (2011). Power Electronics. Prentice Hall. Cap. 2, sección de dispositivos de control.*

---

## 3. BJT (Bipolar Junction Transistors)

El **BJT de potencia** es un dispositivo controlado por corriente en la base.  
Permite manejar corrientes elevadas, pero su tiempo de conmutación es mayor que el de los MOSFET.  

Relación básica de operación:

\[
I_C = \beta I_B
\]

y la potencia disipada:

\[
P = V_{CE} \cdot I_C
\]

![BJT](3.jpeg)  
**Figura 4.** Estructura y símbolo de BJT tipo NPN y PNP.  
📖 *Mohan, N., Undeland, T. M., & Robbins, W. P. (2003). Power Electronics: Converters, Applications, and Design (3rd ed.), Cap. 5, McGraw-Hill.*

---

## 4. Comparación de Transistores de Potencia

| Tipo     | Ventajas                           | Desventajas                        | Aplicaciones |
|----------|-----------------------------------|------------------------------------|--------------|
| MOSFET   | Alta velocidad, baja R_DS(on)     | Limitado en muy altas potencias     | Convertidores DC-DC, fuentes conmutadas |
| BJT      | Manejo de corrientes altas        | Conmutación lenta, control por IB   | Amplificadores, inversores de baja frecuencia |
| IGBT     | Combina ventajas de MOSFET y BJT  | Más lentos que MOSFET, más costosos | Variadores de motores, energías renovables |

📖 *Erickson, R. W., & Maksimovic, D. (2001). Fundamentals of Power Electronics. Springer.*

---

## 5. Parámetros de Desempeño

- **Tensión máxima soportada** (\(V_{DSmax}, V_{CEmax}\))  
- **Corriente máxima** (\(I_D, I_C\))  
- **Pérdidas de potencia**:  
  \[
  P_{total} = P_{cond} + P_{sw}
  \]  
- **Tiempo de conmutación** (turn-on, turn-off)  
- **SOA (Safe Operating Area)**: región de operación segura  
- **Resistencia térmica** y disipación de calor  

---

## 6. Conclusiones

- Los transistores de potencia son la **base de la conversión moderna de energía**.  
- La elección depende de la aplicación:  
  - Alta frecuencia → **MOSFET**  
  - Alta corriente → **BJT**  
  - Media/alta potencia → **IGBT**  

---

# Preguntas adicionales

### ¿Cuál transistor se usa más y por qué?
El **MOSFET de potencia** es el más utilizado actualmente en fuentes conmutadas, convertidores DC-DC y aplicaciones de alta frecuencia, debido a:  
- Alta velocidad de conmutación.  
- Bajo consumo en la compuerta (control por voltaje, no por corriente).  
- Menor disipación de potencia en conducción.  

El **IGBT** también es muy usado, pero en aplicaciones industriales de potencia más alta (motores, tracción eléctrica).  

---

### ¿Qué configuración se usa más, emisor común o base común?
La **configuración de emisor común** es la más utilizada porque:  
- Proporciona **alta ganancia de corriente y voltaje**.  
- Se adapta mejor como **amplificador** y como **interruptor de potencia**.  
- Tiene una respuesta más versátil que la base común, que se usa en casos muy específicos (como etapas de adaptación de impedancia).  

---
