# 💣 CampoMinato
Il progetto consiste nello sviluppo del classico gioco **Campo Minato (Minesweeper)** utilizzando il linguaggio **C++**. L'applicazione è sviluppata tramite la libreria Qt per poter integrare un sistema a finestre multipiattaforma. 

## 🎮 Funzionamento
Campo Minato è un gioco di logica per giocatore singolo. L’obiettivo è scoprire tutte le celle libere (senza mine) di una griglia, senza mai cliccare su una mina.

### 📋 Regole di base:
Il campo di gioco è una griglia di celle coperte, alcune delle quali nascondono mine. Il giocatore può:
- Scoprire una cella: se contiene una mina, la partita è persa.
- Contrassegnare una cella con una bandiera se si sospetta la presenza di una mina.
- Se si scopre una cella senza mina, viene mostrato un numero (da 1 a 8) che indica quante mine ci sono nelle celle adiacenti.
- Se la cella scoperta non ha mine adiacenti, vengono rivelate automaticamente tutte le celle libere intorno, a cascata.

La partita si vince quando tutte le celle senza mina sono scoperte.

### 🧠 Strategia
Usando i numeri come indizi, il giocatore deve dedurre dove si trovano le mine, piazzare bandiere per tenerne traccia, ed evitare di fare clic su di esse.

## Licenza
Il gioco non è stato ideato da me. Tutti i crediti vanno ai creatori originali. La mia è una versione realizzata a fini educativi.
