# Experiment 11: Simulation of ARP Working using Cisco Packet Tracer

## Status
The Cisco Packet Tracer simulation file for this experiment (`Exp-11_Simulation_ARP_Working.pkt`) needs to be added manually.

### Instructions to complete this experiment:
1. Open **Cisco Packet Tracer**.
2. Construct a local network topology (e.g., 2 or more PCs connected to a switch).
3. Assign IP addresses and subnet masks to each PC on the same subnet.
4. Switch to **Simulation Mode** in Packet Tracer and set filters to capture **ARP** and **ICMP** packets.
5. Send a `ping` request from PC0 to PC1 via the Command Prompt (`ping <destination-ip>`).
6. Observe how the source PC broadcasts an ARP Request (`Who has <IP>? Tell <MAC>`) and how the target PC unicasts an ARP Reply.
7. Inspect the ARP table on the PC using `arp -a`.
8. Save the completed Packet Tracer simulation file as `Exp-11_Simulation_ARP_Working.pkt` in this directory.
