[README (1).md](https://github.com/user-attachments/files/17081497/README.1.md)

[Uploading R# Informatica-2
# Proyecto control de llenado de tanque de agua
## Memoria descriptiva
El sistema simula el funcionamiento del llenado de un tanque de agua ON-OFF en donde activa o desactiva la 
bomba de agua según el estado que tenga dicho tanque. Se activará la bomba si el tanque se encuentra a un 
valor menor al referenciado. O se desactivará si la bomba el tanque posee el volumen necesario
### Estados:
     S0= Bomba cerrada
     S1= Bomba abierta

### Transiciones:
    S0 (Tanque Vacío) → S1 (Llenando):
    S1 (Llenando) → S2 (Tanque Lleno):
    S2 (Tanque Lleno) → S0 (Tanque Vacío):
    
## Diagrama de Máquina de Estado

SET: Bandera de inicialización
lt: nivel leído
LT_set: nivel referencia 
DeltaLT: diferencia de nivel 

![App Screenshot](https://github.com/lujustiniano/Informatica-2/blob/main/Mquina%20de%20estado.pngraw=true)
