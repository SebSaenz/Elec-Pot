# Controlled Rectifiers

## 1️. Concept
**Controlled rectifiers** are AC-DC converters that use controllable semiconductor devices (mainly thyristors or SCRs) to convert alternating voltage into direct voltage, with the ability to regulate the output voltage through the control of the firing angle (α).

## Main Characteristics
- Output voltage control through firing angle α
- Operation in rectifier mode (0° < α < 90°)
- Operation in inverter mode (90° < α < 180°)
- Natural (line) commutation
---

## Single-Phase Fully Controlled Rectifier
### Basic Configuration

The single-phase full-wave controlled rectifier uses four thyristors (T₁, T₂, T₃, T₄) connected in a bridge configuration:

---

## 3️. Documentation Start: SCR, DIAC, and Trigger Circuits
### SCR (Silicon Controlled Rectifier)
- Allows current conduction in only one direction.  
- Once triggered by the gate, it remains on until the current falls below the holding value.

### DIAC
- A bidirectional trigger device.  
- Stays non-conductive until its breakover voltage is reached, at which point it conducts in either direction.  
- Used with SCRs or TRIACs to achieve stable and symmetrical triggering.

### Trigger Circuits
- **RC Network + DIAC:** a capacitor charges through a resistor in each half-cycle; once the voltage reaches the DIAC breakover voltage, it conducts and sends a pulse to the gate of the SCR or TRIAC. Adjusting the resistor (potentiometer) sets the firing angle.  
- **Optocoupler (e.g., MOC3021):** isolates the control circuit from the power stage, reducing interference.  
- **Microcontroller-based triggering:** detects the zero-crossing of the AC waveform and sends a pulse at the desired moment, providing flexible control.

---

## 4️. Commercial Components for Circuit Implementation
| Component  | Type      | Max Voltage | Max Current | Notes |
|------------|-----------|-------------|-------------|-------|
| BT151-800R | SCR       | 800 V       | 12 A        | General-purpose, requires a heatsink at higher power. |
| TIC106D    | SCR       | 400 V       | 5 A         | Suitable for medium loads. |
| MCR100-8   | SCR       | 400 V       | 0.8 A       | TO-92 package, good for low-power applications. |
| DB3        | DIAC      | 32 V (typ.) | 2 A peak    | Common trigger device for dimmers and phase control. |
| BTA16-600B | TRIAC     | 600 V       | 16 A        | Controls loads in both half-cycles. |
| MOC3021    | Optotriac | 400 V       | 100 mA      | Provides isolation between control electronics and the power stage. |

> **Note:** Always ensure the rated voltage and current exceed the maximum circuit conditions, and use heatsinks when necessary.

---


## 5. Simulation
The behavior of the tristors was analyzed in two different simulations.

### LTSPICE

A circuit was developed here consisting of an AC power supply stage (120V60Hz) and transformation (120/12V transformer) and phase control (thyristor firing - firing angle adjustment with zero-crossing circuit).

![](Image/2.jpg)

The purpose of this circuit is to observe the natural conduction of the thyristor when the gate receives a pulse.

![](Image/3.jpg)

### PROTEUS

For microcontroller development ARDUINO we will use PROTEUS in the development of the control system.

![](Image/1.jpg)

By using a potentiometer on the Arduino's analog inputs, we can generate a gate signal and thus adjust the firing angle of the thyristor. 
The system controls the output power to an AC load using an Arduino that reads the voltage from a potentiometer and converts it into a delay time for triggering an SCR. To ensure safety, two PC817 optocouplers electrically isolate the Arduino's low-voltage control circuit from the high-voltage section of the thyristor. By varying the firing point within the AC cycle according to the analog input, the average voltage applied to the load is precisely regulated.

---

### References
- Hart, D. W. (2001). *Power Electronics*. Pearson Education.  
- Rashid, M. H. (2014). *Power Electronics: Devices, Circuits, and Applications* (4th ed.). Pearson.  
- Mohan, N., Undeland, T. M., & Robbins, W. P. (2003). *Power Electronics: Converters, Applications, and Design* (3rd ed.). Wiley.
