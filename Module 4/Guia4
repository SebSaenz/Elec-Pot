# DC–DC Converters: Buck and Boost

## 1. Introduction

**DC–DC converters** are electronic circuits that transform one level of DC voltage into another while maintaining high efficiency.  
The most common types are:

- **Buck** → reduces the input voltage.  
- **Boost** → increases the input voltage.  
- Buck–Boost, Cuk, SEPIC, among others.

They are widely used in switched-mode power supplies, chargers, embedded systems, and any application that requires efficient voltage regulation.

---

## 2. Buck Converter (Step-Down)

### 2.1 General Description
The Buck converter delivers to the load a voltage **lower** than the input voltage by controlling the duty cycle of a switch (MOSFET or IGBT).

### 2.2 Topology

![alt text](image.png)

---

**Components:**

- `Vin` (**Vs**): input voltage source  
- `SW` (**S1**): controlled switch (MOSFET, IGBT, or transistor)  
- `D` (**FD**): freewheeling diode (or synchronous MOSFET in some designs)  
- `L`: inductor (stores and transfers energy)  
- `C`: output capacitor (filters voltage ripple)  
- `R`: load resistance (represents the load connected to the converter)  
- `Vout`: output voltage across the load  
- `Io`: output current flowing through the load

---

### 2.3 Operating Principle

The Buck converter operates in two main intervals (Continuous Conduction Mode, CCM):

1. **Switch ON**: the source transfers energy to the inductor and the load.  
2. **Switch OFF**: the inductor supplies current to the load through the diode.

In steady state (CCM):

\[
V_o = D \cdot V_{in}
\]

where:

- \(V_o\): output voltage  
- \(V_{in}\): input voltage  
- \(D\): duty cycle (\(D = t_{on}/T\))

---

### 2.4 Key Equations

- **Average inductor current**:
\[
I_L = I_o = \frac{V_o}{R}
\]

- **Inductor current ripple**:
\[
\Delta I_L = \frac{(V_{in}-V_o) \cdot D}{L \cdot f_s}
\]

- **Output voltage ripple**:
\[
\Delta V_o = \frac{\Delta I_L}{8 f_s C}
\]

> \(f_s\): switching frequency

---

### 2.5 Basic Design Guidelines

1. Choose the switching frequency according to efficiency and size requirements.  
2. Select the inductor to limit current ripple (\(\Delta I_L\) ≤ 20–40% of \(I_L\)).  
3. Size the output capacitor to keep the voltage ripple within the desired limits.  
4. Consider conduction, switching, and series resistance losses.

---

### 2.6 Simulation Example

- Configure the circuit in **LTspice** or **Simulink**.  
- Use: \(V_{in} = 12\;V\), \(V_o = 5\;V\), \(L = 100\;\mu H\), \(C = 100\;\mu F\), \(R = 10\;\Omega\), \(f_s = 50\;kHz\).  
- Adjust the duty cycle:
\[
D = \frac{V_o}{V_{in}} = \frac{5}{12} \approx 0.42
\]

---

## 3. Boost Converter (Step-Up)

The Boost converter increases the output voltage above the input voltage.

### 3.1 Basic Equation (CCM)

\[
V_o = \frac{V_{in}}{1 - D}
\]

### 3.2 Notes

- Efficiency decreases at high duty cycles due to increased losses.  
- The inductor must support the input current.  
- The diode and switch must withstand the higher voltage.

---

## 4. Conclusions

- The Buck converter is ideal for applications where the voltage needs to be reduced with high efficiency.  
- The Boost converter allows voltage increase, though with higher complexity in control and losses.

---

## 5. References

- Hart, D. W. (2001). *Power Electronics*. Pearson Education.  
- Rashid, M. H. (2014). *Power Electronics: Devices, Circuits, and Applications*. Pearson.  
- Mohan, N., Undeland, T., Robbins, W. (2003). *Power Electronics: Converters, Applications, and Design*. Wiley.  
- Erickson, R. W. (2000). *Fundamentals of Power Electronics*. Kluwer Academic Publishers.
