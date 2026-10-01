# Computer Networks Lab

This repository contains practical implementations, network simulation files, and study material for the **Computer Networks Laboratory** course. It covers network topologies, framing methods, error detection and correction codes, transport layer protocols, IP address calculations, and Cisco Packet Tracer network service simulations.

---

## 🧪 Experiments Overview

| # | Experiment Name | Type | Main Files |
| :---: | :--- | :---: | :--- |
| **01** | Design and Configure a Simple Network Topology using Cisco Packet Tracer | Simulation | `Exp-01_Basic_Local_Network.pkt` |
| **02** | Configure Different Network Topologies using Cisco Packet Tracer | Simulation | `Exp-02_Network_Topologies.pkt` |
| **03** | Case Study of Networking Devices | Documentation | `case_study_networking_devices.md` |
| **04** | Implementation of Framing Methods – Bit Stuffing | C++ Program | `sender_bit_stuffing.cpp`<br>`receiver_bit_destuffing.cpp` |
| **05** | Implementation of Error Correction Code – Hamming Code | C++ Program | `sender_hamming_code.cpp`<br>`receiver_hamming_code.cpp` |
| **06** | Implementation of Stop-and-Wait Protocol | C++ Program | `stop_and_wait.cpp` |
| **07** | Implementation of Error Detection Code – CRC | C++ Program | `sender_crc.cpp`<br>`receiver_crc.cpp` |
| **08** | Implementation of IP Address Calculation | C++ Program | `ip_address_calculation.cpp` |
| **09** | Configuration of DHCP Server using Cisco Packet Tracer | Simulation | `Exp-09_CONFIG_DHCP_SERVER.pkt` |
| **10** | Simulation of FTP Working using Cisco Packet Tracer | Simulation | `Exp-10_FTP_CONFIG.pkt` |
| **11** | Simulation of ARP Working using Cisco Packet Tracer | Simulation | `README.md` *(Simulation file to be added manually)* |

---

## 🛠️ Technologies Used

- **C++ (GCC/g++)**: For framing, error control, protocol simulation, and IP calculations.
- **Cisco Packet Tracer (v8.0+)**: For network topology design and network service simulations (`.pkt` files).
- **Markdown**: For lab documentation and case study material.

---

## 🚀 How to Run C++ Programs

1. Open a terminal / command prompt.
2. Navigate to the desired experiment folder:
   ```bash
   cd Exp-04_Framing_Bit_Stuffing
   ```
3. Compile using `g++`:
   ```bash
   g++ sender_bit_stuffing.cpp -o sender
   ```
4. Run the executable:
   - On Windows:
     ```bash
     .\sender.exe
     ```
   - On Linux/macOS:
     ```bash
     ./sender
     ```

> **Note**: Cisco Packet Tracer simulation files (`.pkt`) require **Cisco Packet Tracer** (version 8.0 or newer) to open and simulate.
