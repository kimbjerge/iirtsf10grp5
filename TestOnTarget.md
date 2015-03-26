First test on target

# Introduction #

Det er lykkedes mig at compilere Qt til target, dog ved manuelt at ændre makefile.

Der findes et nyt projekt under Sandbox med navnet **QtSimDemoTarget**, som er compileret til ARM target.

Herudover har jeg også skrevet et simpelt program, som kan læse en simuleret "record" optagelse fra et signal fra  PhysioNet databasen. Programmet er compileret og testet på Linux. Der ligger også en version, som er compileret til Target. Projektet er skrevet i Eclipse og bruger pt. ikke Qt.

WFDB programmet køres som:
./readRec <record navn>
Eg: ./readRec 100a

Qt programmet køres som:
./simulator

Jeg kunne godt tænke mig at prøve begge programmer på target.

Den binære version til ARM target  ligger under downloads (Og i SubVersion - Sandbox):

https://code.google.com/p/iirtsf10grp5/downloads/list

**wfdbtst.zip**
**QtSimDemoTarget.zip**

Filerne skal udpakkes og kopieres til ARM target - det er spændende om de virker på target.

For at Qt kan virke på target, skal der kopiers følgende libs:


Libraries: (At least) the below libraries must be copied from $HOME/qt-everywhere-opensourcesrc-

4.6.1/lib/ on host to /usr/lib on target



· libQtCore.so.4

· libQtGui.so.4

· libQtNetwork.so.4



Hvis du får tid Peter må du gerne prøve dem.